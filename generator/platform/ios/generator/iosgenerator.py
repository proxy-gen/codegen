#!/usr/bin/env python
# iosgenerator.py
# c++ generator, targeted for ios platform
#
# Copyright (c) 2011 - Zynga Inc.

from indexer.ocindex import Index
import sys
import pdb
import ConfigParser
import yaml
import re
import os
import inspect
import logging
from collections import defaultdict
from multiprocessing import Process
from Cheetah.Template import Template
from generator import BaseGenerator

class Generator(BaseGenerator):
	def __init__(self):
		super(Generator, self).__init__()

	def setup(self):
		self._setup_index()
		self._setup_namespace()
		self._setup_dirs()
		self._setup_defaults()
		self._setup_includes()
		self._setup_config()

	def generate(self):
		if self.config['generate_config']:
			self._generate_config()
		if self.config['generate_code']:
			self._generate_cxx_code()

	def teardown(self):
		pass

	def _setup_index(self):
		logging.debug("_setup_index enter")
		self.indexer = Index()
		logging.debug("_setup_index exit")

	def _setup_namespace(self):
		logging.debug("_setup_namespace enter")
		self.namespace_name = self.config['namespace_name']
		logging.debug("_setup_namespace exit")

	def _setup_dirs(self):
		self._setup_working_dir()
		self._setup_output_dir()

	def _setup_working_dir(self):
		logging.debug("_setup_working_dir enter")
		self.target = os.path.dirname(inspect.getfile(inspect.currentframe()))
		logging.debug("self.target " + str(self.target))
		self.working_dir = os.path.join(self.target, "..")
		logging.debug("self.working_dir " + str(self.working_dir))
		logging.debug("_setup_working_dir exit")

	def _setup_output_dir(self):
		logging.debug("_setup_output_dir enter")
		self.package_name = self.config['package_name']
		self.wrapper_file_name = self.config['wrapper_file_name']
		self.file_name = self.config['file_name']
		self.output_dir_name = self.config['output_dir_name']
		if not os.path.exists(self.output_dir_name):
			os.makedirs(self.output_dir_name)
		logging.debug("self.output_dir_name " + str(self.output_dir_name))				
		logging.debug("_setup_output_dir exit")

	def _setup_defaults(self):
		self._setup_default_converters()

	def _setup_default_converters(self):
		logging.debug("_setup_default_converters enter")
		self.default_converters_file_name = os.path.join(self.target, "converters", "occonverter.py")
		logging.debug("self.default_converters_file_name " + str(self.default_converters_file_name))
		self.config_module = ConfigModule(self.default_converters_file_name,None)
		assert self.config_module.is_valid, "config_module is not valid"
		config_data = self.config_module.config_data
		assert config_data is not None, "config does not exist"
		assert "converters" in config_data, "converters not in config"
		self.default_converters = config_data["converters"]
		self.config_module = None
		logging.debug("_setup_default_converters exit")

	def _setup_includes(self):
		self._setup_included_packages()
		self._setup_included_wrapper_packages()
		self._setup_included_config_file_path()
		self._setup_included_converters()

	def _setup_included_packages(self):
		logging.debug("_setup_included_packages enter")
		self.include_packages = self.config['include_packages']
		self.include_package_rel_paths = self.config['include_package_rel_paths']
		logging.debug("_setup_included_packages exit")

	def _setup_included_wrapper_packages(self):
		logging.debug("_setup_included_wrapper_packages enter")
		self.include_wrapper_packages = self.config['include_wrapper_packages']
		self.include_wrapper_package_rel_paths = self.config['include_wrapper_package_rel_paths']
		logging.debug("_setup_included_wrapper_packages exit")

	def _setup_included_config_file_path(self):
		logging.debug("_setup_included_config_file_path enter")
		self.include_config_file_path = self.config['include_config_file_path']
		logging.debug("_setup_included_config_file_path exit")

	def _setup_included_converters(self):
		logging.debug("_setup_included_converters enter")
		self.include_converters = self.config['include_converters']
		logging.debug("_setup_included_converters exit")

	def _setup_config(self):
		logging.debug("_setup_config enter")
		self.config_file_name = self.config['config_file_name']
		logging.debug("_setup_config exit")

	def _generate_config(self):
		logging.debug("_generate_config enter")
		self.config_module = ConfigModule(self.config_file_name, self.include_config_file_path)
		assert self.config_module.is_valid, "config_module is not valid"
		logging.debug("build_config_closure enter")
		self.indexer.build_config_closure(self.config_module.config_data)
		logging.debug("build_config_closure exit")
		self._update_config(self.config_module)
		self.config_py_outdir_name = os.path.join(self.output_dir_name, "config", self.package_name)
		if not os.path.exists(self.config_py_outdir_name):
			os.makedirs(self.config_py_outdir_name)
		logging.debug("self.config_py_outdir_name " + str(self.config_py_outdir_name))
		self.config_py_file_name = "config.py"
		logging.debug("self.config_py_file_name " + str(self.config_py_file_name))
		config_py_file_path = os.path.join(self.config_py_outdir_name, self.config_py_file_name)
		logging.debug("config_py_file_path " + str(config_py_file_path))
		self.config_py_file = open(config_py_file_path, "w+")
		logging.debug("config_template")
		config_py = Template(file=os.path.join(self.target, "templates", "config.py"), searchList=[{'CONFIG': self}])
		logging.debug("config.py " + str(config_py))
		self.config_py_file.write(str(config_py))
		self.config_py_file.close()
		self.config_module = None
		logging.debug("_generate_config exit")

	def _generate_cxx_code(self):
		logging.debug("_generate_cxx_code enter")
		self.config_module = ConfigModule(self.config_file_name, self.include_config_file_path)
		assert self.config_module.is_valid, "config_module is not valid"
		self._update_config(self.config_module)
		self.config_module.attach_derived_data()
		self.includes_outdir_name = os.path.join(self.output_dir_name, "project", self.package_name, "includes")
		if not os.path.exists(self.includes_outdir_name):
			os.makedirs(self.includes_outdir_name)		
		logging.debug("self.includes_outdir_name " + str(self.includes_outdir_name))
		self.impl_outdir_name = os.path.join(self.output_dir_name, "project", self.package_name, "impl")
		if not os.path.exists(self.impl_outdir_name):
			os.makedirs(self.impl_outdir_name)		
		logging.debug("self.impl_outdir_name " + str(self.impl_outdir_name))
		self._generate_proxy_converter_code()
		self._generate_cxx_class_code()
		self._generate_cxx_enum_code()
		self._generate_protocol_code()
		self.config_module.detach_derived_data()			
		self.config_module = None
		logging.debug("_generate_cxx_code exit")

	def _generate_proxy_converter_code(self):
		logging.debug("_generate_proxy_converter_code enter")
		self.proxy_converter_head_file_name = self.package_name + "Converter.hpp"
		proxy_converter_head_file_path = os.path.join(self.includes_outdir_name, "converters", self.proxy_converter_head_file_name)
		if not os.path.exists(os.path.dirname(proxy_converter_head_file_path)):
			os.makedirs(os.path.dirname(proxy_converter_head_file_path))
		self.proxy_converter_head_file = open(proxy_converter_head_file_path, "w+")
		proxy_converter_head_cxx = Template(file=os.path.join(self.target, "templates", "converter.hpp"), searchList=[{'CONFIG': self}])			
		logging.debug("proxy_converter_head_cxx " + str(proxy_converter_head_cxx))
		self.proxy_converter_head_file.write(str(proxy_converter_head_cxx))
		self.proxy_converter_head_file.close()
		self.proxy_converter_head_file = None
		self.proxy_converter_head_file_name = None
		self.proxy_converter_impl_file_name = self.package_name + "Converter.mm"
		proxy_converter_impl_file_path = os.path.join(self.impl_outdir_name, "converters", self.proxy_converter_impl_file_name)
		logging.debug("proxy_converter_impl_file_path " + str(proxy_converter_impl_file_path))	
		if not os.path.exists(os.path.dirname(proxy_converter_impl_file_path)):
			os.makedirs(os.path.dirname(proxy_converter_impl_file_path))
		self.proxy_converter_impl_file = open(proxy_converter_impl_file_path, "w+")
		proxy_converter_impl_cxx = Template(file=os.path.join(self.target, "templates", "converter.cpp"), searchList=[{'CONFIG': self}])			
		logging.debug("proxy_converter_impl_cxx " + str(proxy_converter_impl_cxx))
		self.proxy_converter_impl_file.write(str(proxy_converter_impl_cxx))
		self.proxy_converter_impl_file.close()
		self.proxy_converter_impl_file = None
		self.proxy_converter_impl_file_name = None
		logging.debug("_generate_proxy_converter_code exit")

	def _generate_cxx_class_code(self):
		logging.debug("_generate_cxx_class_code enter")
		entity_classes = self.config_module.list_interfaces(tags=['_proxy'],xtags=None,name=None)
		for entity_class in entity_classes:
			self.entity_class = entity_class
			self.interface_name = entity_class['name']
			cxx_class_name = Utils.to_class_name(self.interface_name)
			self.entity_class_name = cxx_class_name + "Cxx"
			self.entity_head_file_name = self.entity_class_name + ".hpp"
			logging.debug("entity_head_file_name " + str(self.entity_head_file_name))	
			entity_file_path = os.path.join(self.includes_outdir_name, "proxies", self.entity_head_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			entity_head_cxx = Template(file=os.path.join(self.target, "templates", "class.hpp"), searchList=[{'CONFIG': self}])			
			logging.debug("entity_head_cxx " + str(entity_head_cxx))
			self.entity_file.write(str(entity_head_cxx))
			self.entity_file.close()
			self.entity_file = None
			self.entity_head_file_name = None
			self.entity_class_name = None
			self.class_name = None
			self.entity_class = None
		for entity_class in entity_classes:
			self.entity_class = entity_class
			self.interface_name = entity_class['name']
			cxx_class_name = Utils.to_class_name(self.interface_name)
			self.entity_class_name = cxx_class_name + "Cxx"
			self.entity_head_file_name = self.entity_class_name + ".hpp"
			self.entity_impl_file_name = self.entity_class_name + ".mm"
			logging.debug("entity_impl_file_name " + str(self.entity_impl_file_name))		
			self.entity_callback_file_name = self.entity_class_name + "_JNI" + ".hpp"
			logging.debug("entity_callback_file_name " + str(self.entity_callback_file_name))	
			entity_file_path = os.path.join(self.impl_outdir_name, "proxies", self.entity_impl_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			entity_impl_cxx = Template(file=os.path.join(self.target, "templates", "class.cpp"), searchList=[{'CONFIG': self}])			
			logging.debug("entity_impl_cxx " + str(entity_impl_cxx))
			self.entity_file.write(str(entity_impl_cxx))
			self.entity_file.close()
			self.entity_file = None
			self.entity_callback_file_name = None
			self.entity_head_file_name = None
			self.entity_impl_file_name = None
			self.entity_class_name = None
			self.class_name = None
			self.entity_class = None	
		logging.debug("_generate_cxx_class_code exit")

	def _generate_protocol_code(self):
		self.conformer_include_path = os.path.join(self.includes_outdir_name, "conformers")
		self.conformer_impl_path = os.path.join(self.impl_outdir_name, "conformers")
		self.conformer_proxy_includes_path = os.path.join(self.includes_outdir_name, "conformers", "private")
		self.conformer_proxy_impl_path = os.path.join(self.impl_outdir_name, "conformers", "private")
		self._generate_protocol_class_header()
		self._generate_protocol_class_implementation()
		self._generate_protocol_abstract_class_header()
		self._generate_protocol_abstract_class_implementation()
		self._generate_protocol_interface()
		self._generate_protocol_implemenetation()
		self.conformer_include_path = None
		self.conformer_impl_path = None
		self.conformer_proxy__includes_path = None
		self.conformer_proxy_impl_path = None

	def _generate_protocol_class_header(self):
		logging.debug("_generate_protocol_class_header enter")
		entity_protocols = self.config_module.list_protocols(tags=['_proxy'],xtags=None,name=None)
		for entity_protocol in entity_protocols:
			self.entity_protocol = entity_protocol
			self.protocol_name = entity_protocol['name']
			self.protocol_class_file_name = self.protocol_name + "ProtocolCxx" + ".hpp"
			self.protocol_class_impl_file_name = self.protocol_name + "ProtocolCxx" + ".mm"
			self.protocol_interface_file_name = self.protocol_name + "Conformer" + ".h"
			self.protocol_implementation_file_name = self.protocol_name + "Conformer" + ".mm"
			logging.debug("entity_head_file_name " + str(self.protocol_class_file_name))	
			entity_file_path = os.path.join(self.includes_outdir_name, self.protocol_class_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			entity_head_cxx = Template(file=os.path.join(self.target, "templates", "protocol_class.hpp"), searchList=[{'CONFIG': self}])			
			logging.debug("entity_head_cxx " + str(entity_head_cxx))
			self.entity_file.write(str(entity_head_cxx))
			self.entity_file.close()
			self.entity_file = None
			self.protocol_abstract_class_file_name = None
			self.protocol_abstract_class_impl_file_name = None
			self.protocol_interface_file_name = None
			self.protocol_implementation_file_name = None
			self.protocol_name = None
			self.entity_protocol = None
		logging.debug("_generate_protocol_class_header exit")

	def _generate_protocol_class_implementation(self):
		logging.debug("_generate_protocol_class_implementation enter")
		entity_protocols = self.config_module.list_protocols(tags=['_proxy'],xtags=None,name=None)
		for entity_protocol in entity_protocols:
			self.entity_protocol = entity_protocol
			self.protocol_name = entity_protocol['name']
			self.protocol_class_file_name = self.protocol_name + "ProtocolCxx" + ".hpp"
			self.protocol_class_impl_file_name = self.protocol_name + "ProtocolCxx" + ".mm"
			self.protocol_interface_file_name = self.protocol_name + "Conformer" + ".h"
			self.protocol_implementation_file_name = self.protocol_name + "Conformer" + ".mm"
			logging.debug("entity_head_file_name " + str(self.protocol_class_impl_file_name))	
			entity_file_path = os.path.join(self.impl_outdir_name, self.protocol_class_impl_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			entity_head_cxx = Template(file=os.path.join(self.target, "templates", "protocol_class.cpp"), searchList=[{'CONFIG': self}])			
			logging.debug("entity_head_cxx " + str(entity_head_cxx))
			self.entity_file.write(str(entity_head_cxx))
			self.entity_file.close()
			self.entity_file = None
			self.protocol_abstract_class_file_name = None
			self.protocol_abstract_class_impl_file_name = None
			self.protocol_interface_file_name = None
			self.protocol_implementation_file_name = None
			self.protocol_name = None
			self.entity_protocol = None
		logging.debug("_generate_protocol_class_implementation exit")

	def _generate_protocol_abstract_class_header(self):
		logging.debug("_generate_protocol_abstract_class_header enter")
		entity_protocols = self.config_module.list_protocols(tags=['_proxy'],xtags=None,name=None)
		for entity_protocol in entity_protocols:
			self.entity_protocol = entity_protocol
			self.protocol_name = entity_protocol['name']
			self.protocol_abstract_class_file_name = self.protocol_name + "ConformerCxx" + ".hpp"
			self.protocol_abstract_class_impl_file_name = self.protocol_name + "ConformerCxx" + ".mm"
			self.protocol_interface_file_name = self.protocol_name + "Conformer" + ".h"
			self.protocol_implementation_file_name = self.protocol_name + "Conformer" + ".mm"
			logging.debug("entity_head_file_name " + str(self.protocol_abstract_class_file_name))	
			entity_file_path = os.path.join(self.conformer_include_path, self.protocol_abstract_class_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			entity_head_cxx = Template(file=os.path.join(self.target, "templates", "protocol_abstract_class.hpp"), searchList=[{'CONFIG': self}])			
			logging.debug("entity_head_cxx " + str(entity_head_cxx))
			self.entity_file.write(str(entity_head_cxx))
			self.entity_file.close()
			self.entity_file = None
			self.protocol_abstract_class_file_name = None
			self.protocol_abstract_class_impl_file_name = None
			self.protocol_interface_file_name = None
			self.protocol_implementation_file_name = None
			self.protocol_name = None
			self.entity_protocol = None
		logging.debug("_generate_protocol_abstract_class_header exit")

	def _generate_protocol_abstract_class_implementation(self):
		logging.debug("_generate_protocol_abstract_class_implementation enter")
		entity_protocols = self.config_module.list_protocols(tags=['_proxy'],xtags=None,name=None)
		for entity_protocol in entity_protocols:
			self.entity_protocol = entity_protocol
			self.protocol_name = entity_protocol['name']
			self.protocol_abstract_class_file_name = self.protocol_name + "ConformerCxx" + ".hpp"
			self.protocol_abstract_class_impl_file_name = self.protocol_name + "ConformerCxx" + ".mm"
			self.protocol_interface_file_name = self.protocol_name + "Conformer" + ".h"
			self.protocol_implementation_file_name = self.protocol_name + "Conformer" + ".mm"
			logging.debug("entity_head_file_name " + str(self.protocol_abstract_class_impl_file_name))	
			entity_file_path = os.path.join(self.conformer_impl_path, self.protocol_abstract_class_impl_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			entity_head_cxx = Template(file=os.path.join(self.target, "templates", "protocol_abstract_class.cpp"), searchList=[{'CONFIG': self}])			
			logging.debug("entity_head_cxx " + str(entity_head_cxx))
			self.entity_file.write(str(entity_head_cxx))
			self.entity_file.close()
			self.entity_file = None
			self.protocol_abstract_class_file_name = None
			self.protocol_abstract_class_impl_file_name = None
			self.protocol_interface_file_name = None
			self.protocol_implementation_file_name = None
			self.protocol_name = None
			self.entity_protocol = None
		logging.debug("_generate_protocol_abstract_class_implementation exit")

	def _generate_protocol_interface(self):
		logging.debug("_generate_protocol_interface enter")
		entity_protocols = self.config_module.list_protocols(tags=['_proxy'],xtags=None,name=None)
		for entity_protocol in entity_protocols:
			self.entity_protocol = entity_protocol
			self.protocol_name = entity_protocol['name']
			self.protocol_abstract_class_file_name = self.protocol_name + "ConformerCxx" + ".hpp"
			self.protocol_abstract_class_impl_file_name = self.protocol_name + "ConformerCxx" + ".mm"
			self.protocol_interface_file_name = self.protocol_name + "Conformer" + ".h"
			self.protocol_implementation_file_name = self.protocol_name + "Conformer" + ".mm"
			logging.debug("entity_head_file_name " + str(self.protocol_interface_file_name))	
			entity_file_path = os.path.join(self.conformer_proxy_includes_path, self.protocol_interface_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			entity_head_cxx = Template(file=os.path.join(self.target, "templates", "protocol.h"), searchList=[{'CONFIG': self}])			
			logging.debug("entity_head_cxx " + str(entity_head_cxx))
			self.entity_file.write(str(entity_head_cxx))
			self.entity_file.close()
			self.entity_file = None
			self.protocol_abstract_class_file_name = None
			self.protocol_abstract_class_impl_file_name = None
			self.protocol_interface_file_name = None
			self.protocol_implementation_file_name = None
			self.protocol_name = None
			self.entity_protocol = None
		logging.debug("_generate_protocol_interface exit")

	def _generate_protocol_implemenetation(self):
		logging.debug("_generate_protocol_implemenetation enter")
		entity_protocols = self.config_module.list_protocols(tags=['_proxy'],xtags=None,name=None)
		for entity_protocol in entity_protocols:
			self.entity_protocol = entity_protocol
			self.protocol_name = entity_protocol['name']
			self.protocol_abstract_class_file_name = self.protocol_name + "ConformerCxx" + ".hpp"
			self.protocol_abstract_class_impl_file_name = self.protocol_name + "ConformerCxx" + ".mm"
			self.protocol_interface_file_name = self.protocol_name + "Conformer" + ".h"
			self.protocol_implementation_file_name = self.protocol_name + "Conformer" + ".mm"
			logging.debug("entity_head_file_name " + str(self.protocol_implementation_file_name))	
			entity_file_path = os.path.join(self.conformer_proxy_impl_path, self.protocol_implementation_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			entity_head_cxx = Template(file=os.path.join(self.target, "templates", "protocol.mm"), searchList=[{'CONFIG': self}])			
			logging.debug("entity_head_cxx " + str(entity_head_cxx))
			self.entity_file.write(str(entity_head_cxx))
			self.entity_file.close()
			self.entity_file = None
			self.protocol_abstract_class_file_name = None
			self.protocol_abstract_class_impl_file_name = None
			self.protocol_interface_file_name = None
			self.protocol_implementation_file_name = None
			self.protocol_name = None
			self.entity_protocol = None
		logging.debug("_generate_protocol_implemenetation exit")

	def _generate_cxx_enum_code(self):
		logging.debug("_generate_cxx_enum_code enter")
		enums = self.config_module.config_data['enums']
		for enum in enums:
			self.enum = enum
			self.enum_namespace = self.config_module.config_data['namespace']
			self.enum_name = Utils.to_enum_name(enum)
			self.enum_head_file_name = self.enum_name + ".hpp"
			logging.debug("enum_head_file_name " + str(self.enum_head_file_name))	
			enum_file_path = os.path.join(self.includes_outdir_name, self.enum_head_file_name)
			if not os.path.exists(os.path.dirname(enum_file_path)):
				os.makedirs(os.path.dirname(enum_file_path))
			logging.debug("enum_file_path " + str(enum_file_path))	
			self.enum_file = open(enum_file_path, "w+")
			enum_head_cxx = Template(file=os.path.join(self.target, "templates", "enum.hpp"), searchList=[{'CONFIG': self}])			
			logging.debug("enum_head_cxx " + str(enum_head_cxx))
			self.enum_file.write(str(enum_head_cxx))
			self.enum_file.close()
			self.enum_file = None
			self.enum_name = None
			self.enum_head_file_name = None
			self.enum_namespace = None
			self.enum = None	
		logging.debug("_generate_cxx_enum_code exit")

	def _update_config(self, config_module):
		logging.debug("Generator _update_config_data enter")
		config_module.add_namespace_to_config_data(self.namespace_name)
		config_module.add_package_to_config_data(self.package_name)
		config_module.attach_include_converters(self.include_converters)
		config_module.attach_default_converters(self.default_converters)
		config_module.attach_config_converters()
		logging.debug("Generator _update_config_data exit")	

class ConfigModule(object):
	def __init__(self, config_file_name, include_config_file_path):
		self.config_data = ConfigModule.load_config(config_file_name)
		self.include_config_data_list = list()
		if include_config_file_path is not None:
			self.include_config_data_list = ConfigModule.load_included_configs(self.config_data, include_config_file_path)
		self.is_valid = self.config_data is not None

	def add_namespace_to_config_data(self, namespace_name):
		logging.debug("_add_namespace_to_config_data enter")
		self.config_data['namespace'] = namespace_name
		logging.debug("_add_namespace_to_config_data enter")

	def add_package_to_config_data(self, package_name):
		logging.debug("_add_package_to_config_data enter")
		self.config_data['package'] = package_name
		logging.debug("_add_package_to_config_data enter")

	def attach_include_converters(self, include_converters):
		logging.debug("_attach_include_converters enter")
		if "converters" not in self.config_data:
			self.config_data["converters"] = []
		for include_converter in include_converters:
			found = False
			for converter in self.config_data["converters"]:
				if converter["name"] == include_converter["name"]:
					found = True
					break
			if found == False:
				self.config_data["converters"].append(include_converter)
		logging.debug("_attach_include_converters exit")

	def attach_default_converters(self, default_converters):
		logging.debug("_attach_default_converters enter")
		if "converters" not in self.config_data:
			self.config_data["converters"] = []
		for default_converter in default_converters:
			found = False
			for converter in self.config_data["converters"]:
				if converter["name"] == default_converter["name"]:
					found = True
					break
			if found == False:
				self.config_data["converters"].append(default_converter)
		logging.debug("_attach_default_converters exit")		

	def attach_config_converters(self):
		self._attach_config_converters(self.config_data, self.config_data);

	def attach_derived_data(self):
		self._attach_derived_data(self.config_data, self.config_data)
		for include_config_data in self.include_config_data_list:
			self._attach_derived_data(include_config_data, include_config_data)

	def detach_derived_data(self):
		self._detach_derived_data(self.config_data, self.config_data)
		for include_config_data in self.include_config_data_list:
			self._detach_derived_data(include_config_data, include_config_data)

	def analyze_config(self, config_module):
		config_report = dict()
		return config_report

	def list_converters(self, name, cxx_type, objc_type):
		converters = list()
		converters.extend(self._list_converters_in_config_data(name=name,cxx_type=cxx_type,objc_type=objc_type,config_data=self.config_data))
		return converters

	def list_all_converters(self, name, cxx_type, objc_type):
		converters = list()
		converters.extend(self._list_converters_in_config_data(name=name,cxx_type=cxx_type,objc_type=objc_type,config_data=self.config_data))
		for include_config_data in self.include_config_data_list:
			converters.extend(self._list_converters_in_config_data(name=name,cxx_type=cxx_type,objc_type=objc_type,config_data=include_config_data))
		return converters

	def list_interfaces(self, tags, xtags, name):
		interfaces = list()
		interfaces.extend(self._list_interfaces_in_config_data(tags,xtags,name,self.config_data))
		return interfaces

	def list_all_interfaces(self, tags, xtags, name):
		interfaces = list_interfaces(tags,xtags,name)
		for include_config_data in self.include_config_data_list:
			interfaces.extend(self._list_interfaces_in_config_data(tags,xtags,name,include_config_data))
		return interfaces

	def list_all_namespaced_interfaces(self, tags, xtags, name):
		namespaced_interfaces = list()
		interfaces = self._list_interfaces_in_config_data(tags,xtags,name,self.config_data)
		for interface in interfaces:
			namespaced_interfaces.append({"namespace" : self.config_data["namespace"], "interface" : interface})
		for include_config_data in self.include_config_data_list:
			included_interfaces = self._list_interfaces_in_config_data(tags,xtags,name,include_config_data)
			for included_interface in included_interfaces:
				namespaced_interfaces.append({"namespace" : include_config_data["namespace"], "interface" : included_interface})
		return namespaced_interfaces

	def list_protocols(self, tags, xtags, name):
		protocols = list()
		protocols.extend(self._list_protocols_in_config_data(tags,xtags,name,self.config_data))
		return protocols

	def list_all_protocols(self, tags, xtags, name):
		protocols = list_protocols(tags,xtags,name)
		for include_config_data in self.include_config_data_list:
			protocols.extend(self._list_protocols_in_config_data(tags,xtags,name,include_config_data))
		return protocols

	def list_all_namespaced_protocols(self, tags, xtags, name):
		namespaced_protocols = list()
		protocols = self._list_protocols_in_config_data(tags,xtags,name,self.config_data)
		for protocol in protocols:
			namespaced_protocols.append({"namespace" : self.config_data["namespace"], "protocol" : protocol})
		for include_config_data in self.include_config_data_list:
			included_protocols = self._list_protocols_in_config_data(tags,xtags,name,include_config_data)
			for included_protocol in included_protocols:
				namespaced_protocols.append({"namespace" : include_config_data["namespace"], "protocol" : included_protocol})
		return namespaced_protocols

	def list_methods(self,interface_tags,interface_xtags,interface_name,method_tags,method_xtags,method_name):
		methods = list()
		interfaces = self.list_interfaces(interface_tags,interface_xtags,interface_name)
		for interface in interfaces:
			methods.extend(self._list_methods_for_interface_in_config_data(interface,method_tags,method_xtags,method_name,self.config_data))
		return methods

	def list_protocol_methods(self, protocol_tags, protocol_xtags, protocol_name, method_tags, method_xtags, method_name):
		methods = list()
		protocols = self.list_protocols(protocol_tags, protocol_xtags, protocol_name)
		for protocol in protocols:
			methods.extend(self._list_methods_for_protocol_in_config_data(protocol, method_tags, method_xtags, method_name, self.config_data))
		return methods

	def _list_converters_in_config_data(self,name,cxx_type,objc_type,config_data):
		converters_list = list()
		if 'converters' in config_data:
			converters = config_data['converters']
			for converter in converters:
				append = True
				if name is not None:
					if converter['name'] != name:
						append = False
				if cxx_type is not None:
					if converter['cxx']['type'] != cxx_type:
						append = False
				if objc_type is not None:
					if converter['objc']['type'] != objc_type:
						append = False
				if append:
					converters_list.append(converter)
		return converters_list

	def _list_interfaces_in_config_data(self,tags,xtags,name,config_data):
		if tags:
			tags = set(tags)
		if xtags:
			xtags = set(xtags)
		interface_list = list()
		if 'interfaces' in config_data:
			interfaces = config_data['interfaces']
			for interface in interfaces:
				append = True
				if tags is not None:
					if 'tags' in interface:
						c_tags = interface['tags']
						if not tags.issubset(c_tags):
							append = False
				if xtags is not None:
					if 'tags' in interface:
						c_tags = interface['tags']
						for xtag in xtags:
							if xtag in c_tags:
								append = False
								break
				if name is not None:
					if interface['name'] != name:
						append = False
				if append:
					interface_list.append(interface)									
		return interface_list

	def _list_protocols_in_config_data(self,tags,xtags,name,config_data):
		if tags:
			tags = set(tags)
		if xtags:
			xtags = set(xtags)
		protocol_list = list()
		if 'protocols' in config_data:
			protocols = config_data['protocols']
			for protocol in protocols:
				append = True
				if tags is not None:
					if 'tags' in protocol:
						c_tags = protocol['tags']
						if not tags.issubset(c_tags):
							append = False
				if xtags is not None:
					if 'tags' in protocol:
						c_tags = protocol['tags']
						for xtag in xtags:
							if xtag in c_tags:
								append = False
								break
				if name is not None:
					if protocol['name'] != name:
						append = False
				if append:
					protocol_list.append(protocol)									
		return protocol_list

	def _list_methods_for_protocol_in_config_data(self,protocol,tags,xtags,selector,config_data):
		if tags:
			tags = set(tags)
		if xtags:
			xtags = set(xtags)
		method_list = list()
		if 'methods' in protocol:
			methods = protocol['methods']
			for method in methods:
				append = True
				if tags is not None:
					c_tags = method['tags']
					if not tags.issubset(c_tags):
						append = False
				if xtags is not None:
					c_tags = method['tags']
					for xtag in xtags:
						if xtag in c_tags:
							append = False
							break
				if selector is not None:
					if method['selector'] != selector:
						append = False
				if append:
					method_list.append(method)
		return method_list

	def _list_methods_for_interface_in_config_data(self,interface,tags,xtags,selector,config_data):
		if tags:
			tags = set(tags)
		if xtags:
			xtags = set(xtags)
		method_list = list()
		if 'methods' in interface:
			methods = interface['methods']
			for method in methods:
				append = True
				if tags is not None:
					c_tags = method['tags']
					if not tags.issubset(c_tags):
						append = False
				if xtags is not None:
					c_tags = method['tags']
					for xtag in xtags:
						if xtag in c_tags:
							append = False
							break
				if selector is not None:
					if method['selector'] != selector:
						append = False
				if append:
					method_list.append(method)
		return method_list

	def _attach_config_converters(self, config_item_data, config_data):
		logging.debug("_attach_config_converters enter")
		if "parameters" in config_item_data or "returns" in config_item_data:
			if "parameters" in config_item_data:
				for parameter in config_item_data["parameters"]:
					self._attach_config_converter(parameter, config_data)
			if "returns" in config_item_data:
				for retrn in config_item_data["returns"]:
					self._attach_config_converter(retrn, config_data)
		else:
			if "interfaces" in config_item_data:
				for interface in config_item_data["interfaces"]:
					self._attach_config_converters(interface, config_data)
			if "protocols" in config_item_data:
				for protocol in config_item_data["protocols"]:
					self._attach_config_converters(protocol, config_data)
			if "methods" in config_item_data:
				for method in config_item_data["methods"]:
					self._attach_config_converters(method, config_data)
		logging.debug("_attach_config_converters enter")

	def _attach_config_converter(self, convertible, config_data):
		logging.debug("_attach_config_converter enter")
		if Index.isBuiltinType(convertible):
			if "converter" not in convertible:
				convertible["converter"] = "convert_builtin"
		if Index.isObjectType(convertible):
			if "converter" not in convertible:
				for interface in config_data["interfaces"]:
					if (interface["name"] + " *") == convertible["type"]:
						no_proxy = False
						if "tags" in interface:
							if "_no_proxy" in interface["tags"]:
								no_proxy = True
						if not no_proxy:
							convertible["converter"] = 'convert_proxy'
			if "converter" not in convertible:
				for include_config_data in self.include_config_data_list:
					for interface in include_config_data["interfaces"]:
						if (interface["name"] + " *") == convertible["type"]:
							no_proxy = False
							if "tags" in interface:
								if "_no_proxy" in interface["tags"]:
									no_proxy = True
							if not no_proxy:
								convertible["converter"] = 'convert_proxy'
			if "converter" not in convertible:
				if 'conforms_to' in convertible:
					first_protocol = convertible['conforms_to'][0]
					for protocol in config_data["protocols"]:
						if protocol["name"] == first_protocol:
							no_proxy = False
							if "tags" in protocol:
								if "_no_proxy" in protocol["tags"]:
									no_proxy = True
							if not no_proxy:
								convertible["converter"] = 'convert_proxy'
			if "converter" not in convertible:
				if 'conforms_to' in convertible:
					first_protocol = convertible['conforms_to'][0]
					for include_config_data in self.include_config_data_list:
						for protocol in include_config_data["protocols"]:
							if protocol["name"] == first_protocol:
								no_proxy = False
								if "tags" in protocol:
									if "_no_proxy" in protocol["tags"]:
										no_proxy = True
								if not no_proxy:
									convertible["converter"] = 'convert_proxy'
		elif Index.isBlockType(convertible):
			self._attach_config_converters(convertible, config_data)
			if "converter" not in convertible:
				convertible["converter"] = 'convert_block'
		elif Index.isEnumType(convertible):
			if "converter" not in convertible:
				for enum in config_data["enums"]:
					if Index.matchesEnumType(convertible, enum):
						no_proxy = False
						if "tags" in enum:
							if "_no_proxy" in enum["tags"]:
								no_proxy = True
						if not no_proxy:
							convertible["converter"] = 'convert_enum'
		if "converter" not in convertible:
			converters = config_data["converters"]
			for converter in converters:
				if "objc" in converter:
						if "cxx" in converter:
							if convertible["type"] == converter["objc"]["type"]:
								convertible["converter"] = converter["name"]
		if "converter" not in convertible and Index.isObjectType(convertible):
			convertible["converter"] = "convert_object"
		if "converter" not in convertible:
			convertible["converter"] = "_TODO_"
		logging.debug("_attach_config_converter exit")

	def _attach_derived_data(self, config_item_data, config_data):
		logging.debug("_attach_derived_data enter")
		if "parameters" in config_item_data or "returns" in config_item_data:
			if "parameters" in config_item_data:
				for parameter in config_item_data["parameters"]:
					self._attach_derived_type_data(parameter, True, config_data)
			if "returns" in config_item_data:
				for retrn in config_item_data["returns"]:
					self._attach_derived_type_data(retrn, False, config_data)
		else:
			if "interfaces" in config_item_data:
				for interface in config_item_data["interfaces"]:
					if "_proxy" in interface['tags']:
						self._attach_derived_data(interface, config_data)
						self._attach_derived_interface_data(interface, config_data)
			if "methods" in config_item_data:
				for method in config_item_data["methods"]:
					if "_proxy" in method['tags']:
						self._attach_derived_data(method, config_data)
						self._attach_derived_method_data(method, config_data)
			if "protocols" in config_item_data:
				for protocol in config_item_data['protocols']:
					self._attach_derived_data(protocol, config_data)
					self._attach_derived_protocol_data(protocol, config_data)
		logging.debug("_attach_derived_data exit")

	def _attach_derived_interface_data(self, interface_config, config_data):
		logging.debug("_attach_derived_interface_data enter")
		if "deriveddata" not in interface_config:
			deriveddata = interface_config['deriveddata'] = dict()
			targetdata = deriveddata['targetdata'] = dict()
		self._attach_derived_target_class_info(interface_config, config_data)
		logging.debug("_attach_derived_interface_data exit")

	def _attach_derived_target_class_info(self, class_config, config_data):
		logging.debug("_attach_derived_target_class_name enter")
		deriveddata = class_config['deriveddata']
		targetdata = deriveddata['targetdata']
		if 'classinfo' not in targetdata:
			classinfo = targetdata['classinfo'] = dict()

			class_name = class_config['name'] + "Cxx"				
			classinfo['typename'] = class_name
			class_file_name = Utils.to_file_name(class_name,"hpp")
			classinfo['filename'] = class_file_name
			classinfo['namespace'] = config_data['namespace']
			classinfo['framework'] = os.path.basename(config_data['frameworks'][0]).split(".")[0]
			classinfo['nativefile'] = class_config['file']
		assert "classinfo" in targetdata, "classinfo not attached to " + str(class_config)
		logging.debug("_attach_derived_target_class_info exit")	

	def _attach_derived_protocol_data(self, protocol_config, config_data):
		logging.debug("_attach_derived_protocol_data enter")
		if "deriveddata" not in protocol_config:
			deriveddata = protocol_config['deriveddata'] = dict()
			targetdata = deriveddata['targetdata'] = dict()
			protocolinfo = targetdata['protocolinfo'] = dict()

			type_name = protocol_config['name'] + "ProtocolCxx"
			conformer_type_name = protocol_config['name'] + "ConformerCxx"
			protocolinfo['conformertypename'] = conformer_type_name
			protocolinfo['typename'] = type_name
			protocolinfo['conformerfilename'] =  Utils.to_file_name(conformer_type_name,"hpp")
			protocolinfo['filename'] =  Utils.to_file_name(type_name,"hpp")
			protocolinfo['proxyname'] = protocol_config['name'] + "Conformer"
			protocolinfo['namespace'] = config_data['namespace']	
			protocolinfo['framework'] = os.path.basename(config_data['frameworks'][0]).split(".")[0]
			protocolinfo['nativefile'] = protocol_config['file']
		logging.debug("_attach_derived_protocol_data exit")

	def _attach_derived_method_data(self, method_config, config_data):
		logging.debug("_attach_derived_method_data enter")
		if "deriveddata" not in method_config:
			method_config['deriveddata'] = dict()
		self._attach_derived_cxx_function_data(method_config, config_data)
		self._attach_derived_objc_method_data(method_config, config_data)
		logging.debug("_attach_derived_method_data exit")

	def _attach_derived_cxx_function_data(self, method_config, config_data):
		logging.debug("_attach_derived_cxx_function_data enter")
		deriveddata = method_config["deriveddata"]
		if "functiondata" not in deriveddata:
			deriveddata['functiondata'] = dict()
		self._attach_derived_cxx_function_info(method_config, config_data)
		logging.debug("_attach_derived_cxx_function_data exit")

	def _attach_derived_cxx_function_info(self, method_config, config_data):
		logging.debug("_attach_derived_cxx_function_info enter")
		functiondata = method_config['deriveddata']['functiondata']
		if "functionname" not in functiondata:
			functiondata['functionname'] = Utils.to_function_name(method_config['selector'])
		logging.debug("_attach_derived_cxx_function_info exit")

	def _attach_derived_objc_method_data(self, method_config, config_data):
		logging.debug("_attach_derived_objc_method_data enter")
		deriveddata = method_config['deriveddata']
		if "objcdata" not in deriveddata:
			deriveddata['objcdata'] = dict()
		self._attach_derived_objc_selector_list(method_config, config_data)
		logging.debug("_attach_derived_objc_method_data exit")

	def _attach_derived_objc_selector_list(self, method_config, config_data):
		logging.debug("_attach_derived_objc_selector_list enter")
		objcdata = method_config['deriveddata']['objcdata']
		if 'selectorlist' not in objcdata:
			objcdata['selectorlist'] = Utils.to_selector_list(method_config['selector'])
		logging.debug("_attach_derived_objc_selector_list exit")

	def _attach_derived_type_data(self, type_config, parameter, config_data):
		logging.debug("_attach_derived_type_data enter")
		if "deriveddata" not in type_config:
			type_config['deriveddata'] = dict()
		self._attach_derived_target_type_data(type_config, parameter, config_data)
		logging.debug("_attach_derived_type_data exit")

	def _attach_derived_target_type_data(self, type_config, parameter, config_data):
		logging.debug("_attach_derived_target_type_data enter")
		deriveddata = type_config['deriveddata']
		if "targetdata" not in deriveddata:
			deriveddata['targetdata'] = dict()
		self._attach_derived_target_type_info(type_config, parameter, config_data)
		logging.debug("_attach_derived_target_type_data exit")

	def _attach_derived_target_type_info(self, type_config, parameter, config_data):
		logging.debug("_attach_derived_target_type_info enter")
		deriveddata = type_config['deriveddata']
		targetdata = deriveddata['targetdata']
		if 'typeinfo' not in targetdata:
			typeinfo = targetdata['typeinfo'] = dict()
			typeinfo['namespace'] = config_data['namespace']
			if type_config['converter'] == 'convert_proxy':
				if 'conforms_to' in type_config:
					first_protocol = type_config['conforms_to'][0]
					namespaced_protocols = self.list_all_namespaced_protocols(tags=None,xtags=None,name=first_protocol)
					for namespaced_protocol in namespaced_protocols:
						protocol = namespaced_protocol['protocol']
						typeinfo['namespace'] = namespaced_protocol['namespace']
						type_name = protocol['name'] + "ConformerCxx" if parameter else protocol['name'] + "ProtocolCxx"
						typeinfo['typename'] = type_name
						typeinfo['typeconverter'] = "convert_" + type_name
						typeinfo['protocoltypename'] = protocol['name'] + "ProtocolCxx" if parameter else protocol['name'] + 'ConformerCxx'
						typeinfo['protocoltypeconverter'] = "convert_" + typeinfo['protocoltypename']
						typeinfo['filename'] =  Utils.to_file_name(type_name,"hpp")
						typeinfo['isproxied'] = True
						typeinfo['framework'] = os.path.basename(config_data['frameworks'][0]).split(".")[0]
						typeinfo['nativefile'] = protocol['file']
				namespaced_interfaces = self.list_all_namespaced_interfaces(tags=None,xtags=None,name=Utils.to_interface_name(type_config['type']))
				for namespaced_interface in namespaced_interfaces:
					interface = namespaced_interface["interface"]
					typeinfo['namespace'] = namespaced_interface['namespace']
					type_name = interface['name']
					type_name = Utils.to_class_name(type_name) + "Cxx"	
					typeinfo['typename'] = type_name		
					typeinfo['typeconverter'] = "convert_" + type_name
					typeinfo['filename'] =  Utils.to_file_name(type_name,"hpp")
					typeinfo['isproxied'] = True
					typeinfo['framework'] = os.path.basename(config_data['frameworks'][0]).split(".")[0]
					typeinfo['nativefile'] = interface['file']
					break
			elif type_config['converter'] == 'convert_block':
				typeinfo['typeconverter'] = 'convert_block'
				typeinfo['isblock'] = True
				self._attach_derived_data(type_config, config_data)
				parameters = type_config['parameters']
				parameter_string = ""
				idx = 0
				for parameter in parameters:
					parameter_typeinfo = parameter['deriveddata']['targetdata']['typeinfo']
					parameter_typename = ""
					if 'isproxied' in parameter_typeinfo:
						parameter_typename = parameter_typeinfo['namespace'] + '::' + parameter_typeinfo['typename'] + " *"
					else:
						parameter_typename = parameter_typeinfo['typename'] + " &"
					if idx == 0:
						parameter_string += parameter_typename
					else:
						parameter_string += ", " + parameter_typename
					idx += 1
				returns_typeinfo = type_config['returns'][0]['deriveddata']['targetdata']['typeinfo']
				returns_typename = ""
				if 'isproxied' in returns_typeinfo:
					returns_typename = returns_typeinfo['namespace'] + '::' + returns_typeinfo['typename'] + " *"
				else:
					returns_typename = returns_typeinfo['typename']
				typeinfo['typename'] = returns_typename + "(*TEMPORARY_BLOCK_NAME)(" + parameter_string + ")" #replaced in template
			elif type_config['converter'] == 'convert_enum':
				typeinfo['isenum'] = True
				name = type_config['type']
				typeinfo['typename'] = self.config_data['namespace'] + "::" + name + "Cxx"
				typeinfo['filename'] = name + "Cxx" + ".hpp"
				typeinfo['typeconverter'] = 'convert_enum'
			elif type_config['converter'] == 'convert_builtin':
				typeinfo['typename'] = type_config['type']
				typeinfo['typeconverter'] = 'convert_builtin'
			else:
				converters = self.list_all_converters(name=type_config['converter'],cxx_type=None,objc_type=None)
				for converter in converters:
					type_name = converter['cxx']['type']
					typeinfo['typename'] = type_name
					typeinfo['typeconverter'] = converter['name']
					break
			assert 'typename' in typeinfo, 'TODO: add valid converter to ' + str(type_config)
		assert "typeinfo" in targetdata, "typeinfo not attached to " + str(type_config)
		logging.debug("_attach_derived_target_type_info exit")

	def _detach_derived_data(self, config_item_data, config_data):
		logging.debug("_detach_derived_data enter")
		if "parameters" in config_item_data or "returns" in config_item_data:
			if "parameters" in config_item_data:
				for parameter in config_item_data["parameters"]:
					self._detach_derived_type_data(parameter, config_data)
			if "returns" in config_item_data:
				for retrn in config_item_data["returns"]:
					self._detach_derived_type_data(retrn, config_data)
		else:
			if "interfaces" in config_item_data:
				for interface in config_item_data["interfaces"]:
					self._detach_derived_data(interface, config_data)
			if "methods" in config_item_data:
				for method in config_item_data["methods"]:
					self._detach_derived_data(method, config_data)
					self._detach_derived_method_data(method, config_data)
			#if "protocols" in config_item_data:
			#	for protocol in config_item_data["protocols"]:
			#		self._detach_derived_data(protocol, config_data)
		logging.debug("_detach_derived_data enter")

	def _detach_derived_method_data(self, method_config, config_data):
		logging.debug("_detach_derived_method_data enter")
		if "deriveddata" in method_config:
			del method_config["deriveddata"]
		assert "deriveddata" not in method_config, "deriveddata not detached from " + str(method_config)
		logging.debug("_detach_derived_method_data exit")	

	def _detach_derived_type_data(self, type_config, config_data):
		logging.debug("_detach_derived_type_data enter")
		if "deriveddata" in type_config:
			del type_config["deriveddata"]
		assert "deriveddata" not in type_config, "deriveddata not detached from " + str(type_config)
		if "children" in type_config:
			for child_type_config in type_config["children"]:
				self._detach_derived_type_data(child_type_config, config_data)
		logging.debug("_detach_derived_type_data exit")	

	@classmethod
	def load_config(cls, config_file_name):
		try:
			import imp
			config_module_path = os.path.dirname(config_file_name)
			config_module_name, config_file_extension = os.path.splitext(os.path.basename(config_file_name))
			filepath, pathname, description = imp.find_module(config_module_name, [config_module_path])
			config_module = imp.load_module(config_module_name, filepath, pathname, description)
			config_data = getattr(config_module, "config")
			return config_data
		except RuntimeError as e:
			logging.error("error ",sys.exc_info()[0])
		return None

	@classmethod
	def load_included_configs(cls, config_data, include_config_file_path):
		include_config_data_list = list()
		if "includes" in config_data:
			includes = config_data["includes"]
			for include in includes:
				include_rel_config_file_name = include["name"]
				include_config_file_name = os.path.join(include_config_file_path, include_rel_config_file_name)
				include_config_data = ConfigModule.load_config(include_config_file_name)
				if include_config_data is not None:
					include_config_data_list.append(include_config_data)
		return include_config_data_list

class Utils(object):

	cxx_reserved_names = ( 	
							'alignas', 			# C++11
							'alignof',			# C++11
							'and', 		
							'and_eq',
							'asm',
							'auto',
							'bitand',
							'bitor',
							'bool',
							'break',
							'case',
							'catch',
							'char',
							'char16_t',			# C++11
							'char32_t',			# C++11
							'class',
							'compl',
							'const',
							'constexpr',		# C++11
							'const_cast',
							'continue',
							'decltype',			# C++11
							'default',			
							'delete',		
							'do',
							'double',
							'dynamic_cast',
							'else',
							'enum',
							'explicit',
							'export',
							'extern',
							'false',
							'float',
							'for',
							'friend',
							'goto',
							'id',
							'if',
							'inline',
							'int',
							'long',
							'mutable',
							'namespace',
							'new',
							'noexcept',			# C++11
							'not',
							'not_eq',
							'nullptr'			# C++11
							'operator',
							'or',
							'or_eq',
							'private',
							'protected',
							'public',
							'register',
							'reinterpret_cast',
							'return',
							'short',
							'signed',
							'sizeof',
							'static',
							'static_assert',	# C++11
							'static_cast',
							'struct',
							'switch',
							'template',
							'this',
							'thread_local',		# C++11
							'throw',
							'true',
							'try',
							'typedef',
							'typeid',
							'typename',
							'union',
							'unsigned',
							'using',
							'virtual',
							'void',
							'volatile',
							'wchar_t',
							'while',
							'xor',
							'xor_eq',
						)

	@classmethod
	def to_resource_name(cls, class_name):
		return class_name.replace('.', '/')

	@classmethod
	def to_enum_name(cls, enum):
		return enum['tag'] if 'tag' in enum else enum['typedef'] + "Cxx"

	@classmethod
	def to_class_name(cls, interface_name):
		return interface_name

	@classmethod
	def to_function_name(cls, selector):
		return Utils.to_safe_cxx_name(selector.strip(":").replace(":", "_"))

	@classmethod
	def to_selector_list(cls, selector):
		return selector.strip(":").split(":")

	@classmethod
	def to_interface_name(cls, type_name):
		return type_name.strip(" *")

	@classmethod
	def to_type_name(cls, class_name):
		return class_name + " *"
		
	@classmethod
	def to_safe_cxx_name(cls, cxx_name):
		if cxx_name in Utils.cxx_reserved_names:
			return '_' + cxx_name
		return cxx_name

	@classmethod
	def to_file_name(cls, base_name, extension):
		file_name = ".".join([base_name, extension])
		return file_name

	@classmethod
	def to_namespace_name(cls, namespace_name, class_name):
		namespaced_name = namespace_name + "::" + class_name
		return namespaced_name
