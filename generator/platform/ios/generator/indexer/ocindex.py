#!/usr/bin/env python
#
# A python frontend interface to clocxml which provides the necessary utilities to generate
# config files for the ios platform of cxx-binding-generator.
#
# Copyright (c) 2013 - Zynga Inc.

# Define XML Elements
_ELEMENT_INTERFACE_ = "ObjCInterface"
_ELEMENT_PROTOCOL_ = "ObjCProtocol"
_ELEMENT_CONFORMS_ = "ConformsToProtocol"
_ELEMENT_METHOD_ = "ObjCMethod"
_ELEMENT_ENUM_ = "Enum"
_ELEMENT_ENUM_CONSTANT_ = "EnumConstant"
_ELEMENT_PARAMETER_ = "Parameter"
_ELEMENT_RETURN_VALUE_ = "ReturnValue"

# Define type kinds
_KIND_OBJECT_ = "ObjCObjectPointer"
_KIND_BLOCK_ = "BlockPointer"
_KIND_ENUM_ = "Enum"

# Define assertion strings
_ASSERT_FRAMEWORKS_CRITERIA_ = "When generating a config file, \"frameworks\" must be specified in the input file as a list."
_ASSERT_INTERFACES_CRITERIA_ = "When generating a config file, \"interfaces\" must be specified in the input file as a list." 
_ASSERT_INTERFACES_NAME_CRITERIA_ = "When generating a config file, each object in \"interfaces\" must have a \"name\" key."
_ASSERT_METADATA_CRITERIA_ = "Unable to generate the Objective C metadata."

class Inspect(object):

	# Initialize the inspector with options for clocxml
	def __init__(self, clocxml_opts=None):
		import os.path as osp

		self.config = dict()
		self.config["bin"] = osp.dirname(osp.abspath(__file__)) + "/clocxml/proj/bin/clocxml" # This may be configurable in the future
		self.config["clocxml_opts"] = clocxml_opts if clocxml_opts else self._default_clocxml_opts() # User needs to specify all clocxml options if they specify any

	# In order to build the AST of the Objective C headers, clang needs to know how to compile them.
	# These are some defaults that worked when building FacebookSDK as well as a few test files.
	def _default_clocxml_opts(self):
		default_opts = list()
		default_opts.append("-f") # Interpret the argument as a framework
		default_opts.append("-c") # Add clang compiler options

		# Clang compiler options to specify that the target architecture is armv7 and to include a few standard search paths
		default_opts.append("-arch armv7 -I/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS6.1.sdk/usr/include/ -F/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS6.1.sdk/System/Library/Frameworks")
		return default_opts

	def build_config_closure(self, config_data):
		assert "frameworks" in config_data and isinstance(config_data["frameworks"], list), _ASSERT_FRAMEWORKS_CRITERIA_
		assert "interfaces" in config_data and isinstance(config_data["interfaces"], list), _ASSERT_INTERFACES_CRITERIA_
		frameworks = config_data["frameworks"]
		interfaces = config_data["interfaces"]
		for index in range(len(interfaces)):
			assert "name" in interfaces[index], _ASSERT_INTERFACES_NAME_CRITERIA_

		self._traverse_xml(self._generate_metadata(frameworks), interfaces, config_data)

	def _generate_metadata(self, frameworks):
		import subprocess

		shell_command = [self.config["bin"]]
		shell_command.extend(self.config["clocxml_opts"])
		shell_command.extend(frameworks)
		pipe = subprocess.Popen(shell_command, stdout=subprocess.PIPE)
		result = pipe.communicate()[0]
		assert result, _ASSERT_METADATA_CRITERIA_
		return result

	def _traverse_xml(self, xml, interfaces, config_data):
		import xml.etree.ElementTree as ElementTree

		root = ElementTree.fromstring(xml)
		data_stack = [config_data]

		# Create these dictionaries for faster access to top-level XML information
		self.interface_elements = dict()
		for interface_element in root.findall(_ELEMENT_INTERFACE_):
			self.interface_elements[interface_element.get("name")] = interface_element

		self.protocol_elements = dict()
		for protocol_element in root.findall(_ELEMENT_PROTOCOL_):
			self.protocol_elements[protocol_element.get("name")] = protocol_element

		self.enum_elements = dict()
		for enum_element in root.findall(_ELEMENT_ENUM_):
			key = "enum " + enum_element.get("tag") if enum_element.get("tag") else enum_element.get("typedef")
			self.enum_elements[key] = enum_element

		for interface_config in interfaces:
			name = interface_config["name"]
			if name in self.interface_elements:
				self._process_interface(self.interface_elements[name], data_stack) 


	def _process_interface(self, interface, data_stack):
		if interface.get("processed"):
			return

		config_data = data_stack[0]
		config_data = self._find_or_create_interface_config_data(config_data["interfaces"], interface)
		data_stack.append(config_data)
		
		for method in interface.findall(_ELEMENT_METHOD_):
			self._process_method(method, data_stack)

		self._update_interface_tags(config_data, interface)
		data_stack.pop()

		interface.set("processed" , "true")

	def _process_protocol(self, protocol, data_stack):
		if protocol.get("processed"):
			return

		config_data = data_stack[0]
		config_data = self._find_or_create_protocol_config_data(config_data, protocol)
		data_stack.append(config_data)

		for method in protocol.findall(_ELEMENT_METHOD_):
			self._process_method(method, data_stack)

		self._update_protocol_tags(config_data, protocol)
		data_stack.pop()

		protocol.set("processed" , "true")

	def _process_method(self, method, data_stack):
		if method.get("processed"):
			return

		config_data = data_stack[-1]
		config_data = self._find_or_create_method_config_data(config_data["methods"], method)
		data_stack.append(config_data)

		for parameter in method.findall(_ELEMENT_PARAMETER_):
			self._process_parameter(parameter, data_stack)

		for return_value in method.findall(_ELEMENT_RETURN_VALUE_):
			self._process_return_value(return_value, data_stack)

		self._update_method_tags(config_data, method)
		data_stack.pop()

		method.set("processed" , "true")

	def _process_block(self, block, data_stack):
		if block.get("processed"):
			return

		config_data = data_stack[-1]
		config_data = self._find_or_create_block_config_data(config_data, block)
		data_stack.append(config_data)

		parameter_index = 0 
		for parameter in block.findall(_ELEMENT_PARAMETER_):
			parameter.set("index", str(parameter_index))
			self._process_parameter(parameter, data_stack)
			parameter_index += 1

		for return_value in block.findall(_ELEMENT_RETURN_VALUE_):
			self._process_return_value(return_value, data_stack)

		data_stack.pop()

		block.set("processed" , "true")

	def _process_parameter(self, parameter, data_stack):
		if parameter.get("processed"):
			return

		config_data = data_stack[-1]
		config_data = self._find_or_create_parameter_config_data(config_data["parameters"], parameter)
		data_stack.append(config_data)

		self._process_type_kind(parameter, data_stack)

		data_stack.pop()

		parameter.set("processed" , "true")

	def _process_return_value(self, return_value, data_stack):
		if return_value.get("processed"):
			return

		config_data = data_stack[-1]
		config_data = self._find_or_create_return_value_config_data(config_data["returns"], return_value)
		data_stack.append(config_data)

		self._process_type_kind(return_value, data_stack)

		data_stack.pop()

		return_value.set("processed" , "true")

	def _process_enum(self, enum, data_stack):
		if enum.get("processed"):
			return

		config_data = data_stack[0]
		config_data = self._find_or_create_enum_config_data(config_data, enum)
		data_stack.append(config_data)

		for constant in enum.findall(_ELEMENT_ENUM_CONSTANT_):
			self._process_enum_constant(constant, data_stack)

		self._update_enum_tags(config_data, enum)
		data_stack.pop()

		enum.set("processed" , "true")

	def _process_enum_constant(self, enum_constant, data_stack):
		if enum_constant.get("processed"):
			return

		config_data = data_stack[-1]
		self._find_or_create_enum_constant_config_data(config_data["constants"], enum_constant)

		enum_constant.set("processed" , "true")

	def _process_type_kind(self, element, data_stack):
		kind = element.get("kind")
		if kind == _KIND_OBJECT_:

			typename = element.get("type")
			canonicaltypename = element.get("canonical_type")
			if typename in self.interface_elements:
				interface_element = self.interface_elements[typename]
				self._process_interface(interface_element, data_stack)
			elif canonicaltypename in self.interface_elements:
				interface_element = self.interface_elements[canonicaltypename]
				self._process_interface(interface_element, data_stack)

			for implements in element.findall(_ELEMENT_CONFORMS_):
				name = implements.get("name")
				if name in self.protocol_elements:
					protocol_element = self.protocol_elements[name]
					self._process_protocol(protocol_element, data_stack)

		elif kind == _KIND_ENUM_:
			canonicaltypename = element.get("canonical_type")
			if canonicaltypename in self.enum_elements:
				enum_element = self.enum_elements[canonicaltypename]
				self._process_enum(enum_element, data_stack)

		elif kind == _KIND_BLOCK_:
			self._process_block(element, data_stack)

	def _find_or_create_interface_config_data(self, interfaces, interface_xml):
		result = None
		for interface in interfaces:
			if interface["name"] == interface_xml.get("name"):
				result = interface
				break
		if not result:
			result = dict()
			interfaces.append(result)

		result["name"] = interface_xml.get("name")
		result["methods"] = result.get("methods", list())
		return result


	def _find_or_create_protocol_config_data(self, root_data, protocol_xml):
		if not "protocols" in root_data:
			root_data["protocols"] = list() 
		protocols = root_data["protocols"]

		result = None
		for protocol in protocols:
			if protocol["name"] == protocol_xml.get("name"):
				result = protocol
				break
		if not result:
			result = dict()
			protocols.append(result)

		result["name"] = protocol_xml.get("name")
		result["methods"] = result.get("methods", list())
		return result

	def _find_or_create_method_config_data(self, methods, method_xml):
		result = None
		for method in methods:
			if method["name"] == method_xml.get("selector").strip(":").replace(":", "_"):
				result = method
				break
		if not result:
			result = dict()
			methods.append(result)

		result["name"] = method_xml.get("selector").strip(":").replace(":", "_")
		result["parameters"] = result.get("parameters", list())
		result["returns"] = result.get("returns", list())
		return result

	def _find_or_create_block_config_data(self, block, block_xml):
		result = block
		result["parameters"] = result.get("parameters", list())
		result["returns"] = result.get("returns", list())
		return result

	def _find_or_create_parameter_config_data(self, parameters, parameter_xml):
		result = None
		parameter_index = 0
		for parameter in parameters:
			if str(parameter_index) == parameter_xml.get("index"):
				result = parameter
				break
			parameter_index += 1

		if not result:
			result = dict()
			parameters.append(result)

		name = parameter_xml.get("name")
		if name:
			result["name"] = name
		result["type"] = parameter_xml.get("canonical_type")
		result["kind"] = parameter_xml.get("kind")

		conforms_to = parameter_xml.findall(_ELEMENT_CONFORMS_)
		if conforms_to:
			result["conforms_to"] = list()
			for protocol in conforms_to:
				result["conforms_to"].append(protocol.get("name"))

		return result

	def _find_or_create_return_value_config_data(self, return_values, return_value_xml):
		result = None
		if return_values:
			result = return_values[0]
		if not result:
			result = dict()
			return_values.append(result)

		result["type"] = return_value_xml.get("canonical_type")
		result["kind"] = return_value_xml.get("kind")

		conforms_to = return_value_xml.findall(_ELEMENT_CONFORMS_)
		if conforms_to:
			result["conforms_to"] = list()
			for protocol in conforms_to:
				result["conforms_to"].append(protocol.get("name"))

		return result

	def _find_or_create_enum_config_data(self, root_data, enum_xml):
		if not "enums" in root_data:
			root_data["enums"] = list() 
		enums = root_data["enums"]

		result = None
		for enum in enums:
			if "tag" in enum:
				if enum["tag"] == enum_xml.get("tag"):
					result = enum
					break
			if "typedef" in enum:
				if enum["typedef"] == enum_xml.get("typedef"):
					result = enum
					break
		if not result:
			result = dict()
			enums.append(result)

		tag =  enum_xml.get("tag")
		if tag:
			result["tag"] = "enum " + enum_xml.get("tag") 
		typedef = enum_xml.get("typedef")
		if typedef:
			result["typedef"] = enum_xml.get("typedef")
		result["constants"] = list()
		return result

	def _find_or_create_enum_constant_config_data(self, constants, constant_xml):
		result = dict()
		constants.append(result)
		result["name"] = constant_xml.get("name")
		result["value"] = constant_xml.get("value")
		return

	def _update_interface_tags(self, interface, interface_xml):
		if "tags" in interface:
			tags = interface["tags"]
		else:
			tags = list()

		if "_no_proxy" in tags:
			tags = list()
			tags.append("_no_proxy")
		else:
			pass # We can handle other tags in the future

		if len(tags) > 0:
			interface["tags"] = tags
		else:
			if "tags" in interface:
				del interface["tags"]


	def _update_protocol_tags(self, protocol, protocol_xml):
		tags = None
		if "tags" in protocol:
			tags = protocol["tags"]
		else:
			tags = list()

		if "_no_proxy" in tags:
			tags = list()
			tags.append("_no_proxy")

		if len(tags) > 0:
			protocol["tags"] = tags
		else:
			if "tags" in protocol:
				del protocol["tags"]

	def _update_method_tags(self, method, method_xml):
		if "tags" in method:
			tags = method["tags"]
		else:
			tags = list()

		if "_no_proxy" in tags:
			tags = list()
			tags.append("_no_proxy")
		else:
			if method_xml.get("static"):
				tags.append("_static")
			if method_xml.get("variadic"):
				tags.append("_variadic")

		if len(tags) > 0:
			method["tags"] = tags
		else:
			if "tags" in method:
				del method["tags"]

	def _update_enum_tags(self, enum, enum_xml):
		if "tags" in enum:
			tags = enum["tags"]
		else:
			tags = list()

		if "_no_proxy" in tags:
			tags = list()
			tags.append("_no_proxy")

		if len(tags) > 0:
			enum["tags"] = tags
		else:
			if "tags" in enum:
				del enum["tags"]
