#!/usr/bin/env python
#
# A python frontend interface to clocxml which provides the necessary utilities to generate
# config files for the ios platform of cxx-binding-generator.
#
#  Copyright 2013 Zynga Inc.
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#

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
_KIND_BUILTIN_ = "Builtin"

# Define assertion strings
_ASSERT_FRAMEWORKS_CRITERIA_ = "When generating a config file, \"frameworks\" must be specified in the input file as a list."
_ASSERT_ONE_FRAMEWORK_		 = "When generating a config file, exactly one framework must be specified."
_ASSERT_INTERFACES_CRITERIA_ = "When generating a config file, \"interfaces\" must be specified in the input file as a list."
_ASSERT_INTERFACES_DEFINED   = "When generating a config file, could not find every element of \"interfaces\" in metadata."
_ASSERT_INTERFACES_NAME_CRITERIA_ = "When generating a config file, each object in \"interfaces\" must have a \"name\" key."
_ASSERT_METADATA_CRITERIA_ = "Unable to generate the Objective C metadata."

import os.path as osp

class Index(object):

	@classmethod
	def isBuiltinType(cls, config):
		if "kind" in config:
			if config["kind"] == _KIND_BUILTIN_:
				return True
		return False

	@classmethod
	def isObjectType(cls, config):
		if "kind" in config:
			if config["kind"] == _KIND_OBJECT_:
				return True
		return False

	@classmethod
	def isBlockType(cls, config):
		if "kind" in config:
			if config["kind"] == _KIND_BLOCK_:
				return True
		return False

	@classmethod
	def isEnumType(cls, config):
		if "kind" in config:
			if config["kind"] == _KIND_ENUM_:
				return True
		return False

	@classmethod
	def matchesEnumType(cls, config, enum_config):
		if "type" in config:
			if "tag" in enum_config:
				if config["type"] == "enum " + enum_config["tag"]:
					return True
			if "typedef" in enum_config:
				if config["type"] == enum_config["typedef"]:
					return True
		return False

	# Initialize the indexer with options for clocxml
	def __init__(self, clang_opts):

		self.clang_opts = clang_opts
		self.config = dict()
		self.config["bin"] = osp.dirname(osp.abspath(__file__)) + "/clocxml/proj/bin/clocxml" # This may be configurable in the future
		self.config["clocxml_opts"] = self._default_clocxml_opts()

	def build_config_closure(self, config_data):
		assert "frameworks" in config_data and isinstance(config_data["frameworks"], list), _ASSERT_FRAMEWORKS_CRITERIA_
		assert "interfaces" in config_data and isinstance(config_data["interfaces"], list), _ASSERT_INTERFACES_CRITERIA_
		frameworks = config_data["frameworks"]
		interfaces = config_data["interfaces"]
		assert len(frameworks) == 1, _ASSERT_ONE_FRAMEWORK_
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

		# If no interfaces specified, process them all
		if len(interfaces) == 0:
			for name, interface in self.interface_elements.iteritems():
				self._process_interface(interface, data_stack)
		else:	
			for interface_config in interfaces:
				name = interface_config["name"]
				if name in self.interface_elements:
					self._process_interface(self.interface_elements[name], data_stack) 
				else:
					assert False, ("Interface not found: %s\n" % name) + _ASSERT_INTERFACES_DEFINED

	def _process_interface(self, interface, data_stack):
		if interface.get("processed"):
			return
		interface.set("processed" , "true")

		config_data = data_stack[0]
		config_data = self._find_or_create_interface_config_data(config_data["interfaces"], interface)
		data_stack.append(config_data)

		for method in interface.findall(_ELEMENT_METHOD_):
			self._process_method(method, data_stack)

		for conforms in interface.findall(_ELEMENT_CONFORMS_):
			protocol_name = conforms.get("name")
			if protocol_name in self.protocol_elements:
				protocol_element = self.protocol_elements[protocol_name]
				for method in protocol_element.findall(_ELEMENT_METHOD_):
					self._process_method(method, data_stack)

		self._update_interface_tags(config_data, interface)
		data_stack.pop()

	def _process_protocol(self, protocol, data_stack):
		if protocol.get("processed"):
			return
		protocol.set("processed" , "true")

		config_data = data_stack[0]
		config_data = self._find_or_create_protocol_config_data(config_data, protocol)
		data_stack.append(config_data)

		for method in protocol.findall(_ELEMENT_METHOD_):
			self._process_method(method, data_stack)

		for conforms in protocol.findall(_ELEMENT_CONFORMS_):
			protocol_name = conforms.get("name")
			if protocol_name in self.protocol_elements:
				protocol_element = self.protocol_elements[protocol_name]
				for method in protocol_element.findall(_ELEMENT_METHOD_):
					self._process_method(method, data_stack)

		self._update_protocol_tags(config_data, protocol)
		data_stack.pop()

	def _process_method(self, method, data_stack):

		config_data = data_stack[-1]
		config_data = self._find_or_create_method_config_data(config_data["methods"], method)
		data_stack.append(config_data)

		for parameter in method.findall(_ELEMENT_PARAMETER_):
			self._process_parameter(parameter, data_stack)

		for return_value in method.findall(_ELEMENT_RETURN_VALUE_):
			self._process_return_value(return_value, data_stack)

		self._update_method_tags(config_data, method)
		data_stack.pop()

	def _process_block(self, block, data_stack):
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

	def _process_parameter(self, parameter, data_stack):

		config_data = data_stack[-1]
		config_data = self._find_or_create_parameter_config_data(config_data["parameters"], parameter)
		data_stack.append(config_data)

		self._process_type_kind(parameter, data_stack)

		data_stack.pop()

	def _process_return_value(self, return_value, data_stack):

		config_data = data_stack[-1]
		config_data = self._find_or_create_return_value_config_data(config_data["returns"], return_value)
		data_stack.append(config_data)

		self._process_type_kind(return_value, data_stack)

		data_stack.pop()		

	def _process_enum(self, enum, data_stack):
		if enum.get("processed"):
			return
		enum.set("processed" , "true")

		config_data = data_stack[0]
		config_data = self._find_or_create_enum_config_data(config_data, enum)
		data_stack.append(config_data)

		for constant in enum.findall(_ELEMENT_ENUM_CONSTANT_):
			self._process_enum_constant(constant, data_stack)

		self._update_enum_tags(config_data, enum)
		data_stack.pop()

	def _process_enum_constant(self, enum_constant, data_stack):
		if enum_constant.get("processed"):
			return
		enum_constant.set("processed" , "true")

		config_data = data_stack[-1]
		self._find_or_create_enum_constant_config_data(config_data["constants"], enum_constant)

	def _process_type_kind(self, element, data_stack):
		kind = element.get("kind")
		if kind == _KIND_OBJECT_:

			typename = element.get("type").strip(" *")
			canonicaltypename = element.get("canonical_type").strip(" *")
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
		result["file"] = osp.basename(interface_xml.get("file"))
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
		result["file"] = osp.basename(protocol_xml.get("file"))
		result["methods"] = result.get("methods", list())
		return result

	def _find_or_create_method_config_data(self, methods, method_xml):
		result = None
		for method in methods:
			if method["selector"] == method_xml.get("selector"):
				result = method
				break
		if not result:
			result = dict()
			methods.append(result)

		result["selector"] = method_xml.get("selector")
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

		xml_type = parameter_xml.get("canonical_type")
		xml_declared_type = parameter_xml.get("type")
		result["type"] = xml_type
		if xml_declared_type != xml_type:
			result["declared_type"] = xml_declared_type
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

		xml_type = return_value_xml.get("canonical_type")
		xml_declared_type = return_value_xml.get("type")
		result["type"] = xml_type
		if xml_declared_type != xml_type:
			result["declared_type"] = xml_declared_type
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
			tags.append("_proxy")

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
		else:
			tags.append("_proxy")

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
			else:
				tags.append("_instance")
			if method_xml.get("variadic"):
				tags.append("_variadic")
			tags.append("_proxy")

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
		else:
			tags.append("_proxy")

		if len(tags) > 0:
			enum["tags"] = tags
		else:
			if "tags" in enum:
				del enum["tags"]

	def _default_clocxml_opts(self):
		default_opts = list()
		default_opts.append("-f") # Interpret the argument as a framework
		default_opts.append("-c") # Add clang compiler options

		default_opts.append(self.clang_opts['metadata'])
		return default_opts
