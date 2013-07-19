#!/usr/bin/env python
#
# A python frontend interface to clocxml which provides the necessary utilities to generate
# config files for the ios platform of cxx-binding-generator.
#
# Copyright (c) 2013 - Zynga Inc.

# Define XML Elements
_ELEMENT_INTERFACE_ = "ObjCInterface"
_ELEMENT_METHOD_ = "ObjCMethod"
_ELEMENT_ENUM_ = "Enum"
_ELEMENT_ENUM_CONSTANT_ = "EnumConstant"
_ELEMENT_PARAMETER_ = "Parameter"
_ELEMENT_RETURNVALUE_ = "ReturnValue"

# Define type kinds
_KIND_OBJECT_ = "ObjCObjectPointer"
_KIND_BLOCK_ = "BlockPointer"
_KIND_ENUM_ = "Enum"

# Define assertion strings
_ASSERT_FRAMEWORKS_CRITERIA_ = "When generating a config file, \"frameworks\" must be specified in the input file as a list."
_ASSERT_INTERFACES_CRITERIA_ = "When generating a config file, \"interfaces\" must be specified in the input file as a list." 
_ASSERT_FRAMEWORKS_NAME_CRITERIA_ = "When generating a config file, each object in \"frameworks\" must have a \"name\" key."
_ASSERT_INTERFACES_NAME_CRITERIA_ = "When generating a config file, each object in \"interfaces\" must have a \"name\" key."
_ASSERT_METADATA_CRITERIA_ = "Unable to generate the Objective C metadata."

class Inspect(object):

	# Initialize the inspector with options for clocxml
	def __init__(self, clocxml_opts):
		import os.path as osp

		self.config["bin"] = os.path.dirname(os.path.abspath(__file__)) + "/clocxml/proj/bin/clocxml" # This may be configurable in the future
		self.config["clocxml_opts"] = clocxml_opts if clocxml_opts else _default_clocxml_opts() # User needs to specify all clocxml options if they specify any


	def build_config_closure(self, config_data):
		assert "frameworks" in config_data and isinstance(config_data["frameworks"], list), _ASSERT_FRAMEWORKS_CRITERIA_
		assert "interfaces" in config_data and isinstance(config_data["interfaces"], list), _ASSERT_INTERFACES_CRITERIA_
		frameworks = config_data["frameworks"]
		interfaces = config_data["interfaces"]
		for index in range(len(frameworks)):
			assert "name" in frameworks[index], _ASSERT_FRAMEWORKS_NAME_CRITERIA_
		for index in range(len(interfaces)):
			assert "name" in interfaces[index], _ASSERT_INTERFACES_NAME_CRITERIA_

		_traverse_xml(_generate_metadata(frameworks), interfaces, config_data)

	def _generate_metadata(self, frameworks):
		import subprocess.Popen

		shell_command = [self.config["bin"], self.config["clocxml_opts"]]
		shell_command.extend(frameworks)
		pipe = Popen(" ".join(shell_command), stdout=subprocess.PIPE)
		result = pipe.communicate()[0]
		assert result, _ASSERT_METADATA_CRITERIA_
		return result

	def _traverse_xml(self, xml, interfaces, config_data):
		import xml.etree.ElementTree

		root = ElementTree.fromstring(xml)
		data_stack = [config_data]

		# Create these dictionaries for faster access to interface information
		self.interface_configs = dict()
		for interface_config in interfaces:
			interface_configs[interface_config["name"]] = interface_config

		self.interface_elements = dict()
		for interface_element in root.findall(_ELEMENT_INTERFACE_):
			interface_elements[interface_element.get("name")] = interface_element

		for name, interface in self.interface_configs.iteritems():
			_process_interface(interface_elements[name], data_stack) if name in interface_xmls


	def _process_interface(self, interface, data_stack):
		config_data = data_stack[0]
		config_data = _find_or_create_interface_config_data(config_data["interfaces"], interface)
		data_stack.append(config_data)
		
		for method in interface.findall(_ELEMENT_METHOD_):
			_process_method(method, data_stack)

	def _process_method(self, method, data_stack):
		config_data = data_stack[-1]
		config_data = _find_or_create_method_config_data(config_data["methods"], method)
		data_stack.append(config_data)

		for parameter in method.findall(_ELEMENT_PARAMETER_):
			_process_parameter(parameter, data_stack)

		for returnvalue in method.findall(_ELEMENT_RETURNVALUE_):
			_process_returnvalue(returnvalue, data_stack)

	def _process_parameter(self, parameter, data_stack):
		config_data = data_stack[-1]
		config_data = _find_or_create_parameter_config_data(config_data["parameters"], parameter)

		if parameter["kind"] == _KIND_OBJECT_:
			interface_element = self.interface_elements


	def _process_returnvalue(self, returnvalue, data_stack):
		pass

	def _process_enum(self, enum, data_stack):
		pass

	def _find_or_create_interface_config_data(self, config_data):
		pass

	def _find_or_create_method_config_data(self, config_data):
		pass

	def _find_or_create_parameter_config_data(self, config_data):
		pass

	# In order to build the AST of the Objective C headers, clang needs to know how to compile them.
	# These are some defaults that worked when building FacebookSDK as well as a few test files.
	def _default_clang_opts():
		default_opts = list()
		default_opts.append("-f") # Interpret the argument as a framework
		default_opts.append("-c") # Add clang compiler options

		# Clang compiler options to specify that the target architecture is armv7 and to include a few standard search paths
		default_opts.append("\"-ObjC -arch armv7 -I/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS6.1.sdk/usr/include/ -F/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS6.1.sdk/System/Library/Framework\"")
		return " ".join(default_opts)
