#!/usr/bin/env python
# androidgenerator.py
# c++ generator, targeted for android platform
#
# Copyright (c) 2011 - Zynga Inc.

from indexer import jindex
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
			self.generate_config()
		if self.config['generate_reports']:
			self.generate_reports()
		if self.config['generate_code']:
			self.generate_code()
		if self.config['generate_projects']:
			self.generate_projects()
		if self.config['generate_wrapper_code']:
			self.generate_wrapper_code()
		if self.config['generate_wrapper_projects']:
			self.generate_wrapper_projects()

	def teardown(self):
		self._teardown_index()

	def generate_reports(self):
		self._generate_converters_report()

	def generate_config(self):
		self._generate_config()

	def generate_code(self):
		self._generate_cxx_code()
		self._generate_java_code()

	def generate_projects(self):
		self._generate_internal_project()
		# TODO: add export support
		# self._generate_exported_project()

	def generate_wrapper_code(self):
		self._generate_wrapper_cxx_code()

	def generate_wrapper_projects(self):
		self._generate_wrapper_internal_project()
		# TODO: add wrapper export support
		# self._generate_wrapper_exported_project()

	def _setup_index(self):
		logging.debug("_setup_index enter")
		classpath=os.environ.get("CXX_JVM_CLASSPATH", "")
		self.jvm_options = "-Djava.class.path=" + str(classpath)
		logging.debug("self.jvm_options " + str(self.jvm_options))
		self.index = jindex.Index.create(self.jvm_options)
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
		self.makefile_outdir_name =  os.path.join(self.output_dir_name, "project")
		if not os.path.exists(self.makefile_outdir_name):
			os.makedirs(self.makefile_outdir_name)				
		logging.debug("self.makefile_outdir_name " + str(self.makefile_outdir_name))		
		self.wrapper_makefile_outdir_name =  os.path.join(self.output_dir_name, "wrapper-project")
		if not os.path.exists(self.wrapper_makefile_outdir_name):
			os.makedirs(self.wrapper_makefile_outdir_name)				
		logging.debug("self.wrapper_makefile_outdir_name " + str(self.wrapper_makefile_outdir_name))		
		logging.debug("_setup_output_dir exit")

	def _setup_defaults(self):
		self._setup_default_runtime()
		self._setup_default_converters()

	def _setup_default_runtime(self):
		logging.debug("_setup_default_runtime enter")
		self.include_default_runtime = True
		logging.debug("_setup_default_runtime exit")

	def _setup_default_converters(self):
		logging.debug("_setup_default_converters enter")
		self.include_default_converters = True
		self.default_converters_file_name = os.path.join(self.target, "converters", "jconverter.py")
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

	def _setup_config(self):
		logging.debug("_setup_config enter")
		self.config_file_name = self.config['config_file_name']
		logging.debug("_setup_config exit")

	def _setup_included_config_file_path(self):
		logging.debug("_setup_included_config_file_path enter")
		self.include_config_file_path = self.config['include_config_file_path']
		logging.debug("_setup_included_config_file_path exit")

	def _setup_included_converters(self):
		logging.debug("_setup_included_converters enter")
		self.include_converters = self.config['include_converters']
		logging.debug("_setup_included_converters exit")

	def _generate_converters_report(self):
		logging.debug("_generate_converters_report enter")
		self.report_outdir_name = os.path.join(self.output_dir_name, "report", self.package_name)
		if not os.path.exists(self.report_outdir_name):
			os.makedirs(self.report_outdir_name)
		logging.debug("self.report_outdir_name " + str(self.report_outdir_name))
		self.config_report_file_name = "config_report.md"
		logging.debug("self.config_report_file_name " + str(self.config_report_file_name))
		config_report_file_path = os.path.join(self.report_outdir_name, self.config_report_file_name)
		logging.debug("config_report_file_path " + str(config_report_file_path))
		self.config_module = ConfigModule(self.config_file_name, self.include_config_file_path)
		assert self.config_module.is_valid, "config_module is not valid"
		self._update_config(self.config_module)
		config_report = self.config_module.analyze_config()
		config_report_file = open(config_report_file_path, "w+")
		config_report_md = Template(file=os.path.join(self.target, "templates", "config_report.md"), searchList=[{'CONFIG': self}])
		logging.debug("config_report_md " + str(config_report_md))
		self.config_report_file.write(str(config_report_md))
		self.config_report_file.close()
		self.config_module = None
		logging.debug("Generator _generate_converters_report exit")

	def _generate_config(self):
		logging.debug("_generate_config enter")
		self.config_module = ConfigModule(self.config_file_name, self.include_config_file_path)
		assert self.config_module.is_valid, "config_module is not valid"
		self.index.build_config_closure(self.config_module.config_data)
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
		# derived data attached temporary 
		self._attach_derived_data(self.config_module.config_data, self.config_module)
		self.header_outdir_name = os.path.join(self.output_dir_name, "project", self.package_name, "jni", "cxx", "includes")
		if not os.path.exists(self.header_outdir_name):
			os.makedirs(self.header_outdir_name)		
		logging.debug("self.header_outdir_name " + str(self.header_outdir_name))
		self.impl_outdir_name = os.path.join(self.output_dir_name, "project", self.package_name, "jni", "cxx", "impl")
		if not os.path.exists(self.impl_outdir_name):
			os.makedirs(self.impl_outdir_name)		
		logging.debug("self.impl_outdir_name " + str(self.impl_outdir_name))
		self._generate_cxx_instance_code()
		self._generate_cxx_abstract_code()
		self._generate_cxx_static_code()
		self._generate_cxx_singleton_code()
		self._generate_cxx_callbacks_code()
		self._generate_cxx_enum_code()
		# self._detach_derived_data(self.config_module.config_data, self.config_module)			
		self.config_module = None
		logging.debug("_generate_cxx_code exit")

	def _generate_cxx_instance_code(self):
		logging.debug("_generate_cxx_instance_code enter")
		entity_classes = self.config_module.list_classes(tags=['_instance','_proxy'],xtags=['_singleton'],name=None)
		for entity_class in entity_classes:
			self.entity_class = entity_class
			self.class_name = entity_class['name']
			cxx_class_name = Utils.to_class_name(self.class_name)
			self.entity_class_name = cxx_class_name
			self.entity_head_file_name = self.entity_class_name + ".hpp"
			logging.debug("entity_head_file_name " + str(self.entity_head_file_name))	
			entity_file_path = os.path.join(self.header_outdir_name, self.entity_head_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			entity_head_cxx = Template(file=os.path.join(self.target, "templates", "instance.hpp"), searchList=[{'CONFIG': self}])			
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
			self.class_name = entity_class['name']
			cxx_class_name = Utils.to_class_name(self.class_name)
			self.entity_class_name = cxx_class_name
			self.entity_head_file_name = self.entity_class_name + ".hpp"
			self.entity_impl_file_name = self.entity_class_name + ".cpp"
			logging.debug("entity_impl_file_name " + str(self.entity_impl_file_name))		
			entity_file_path = os.path.join(self.impl_outdir_name, self.entity_impl_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			entity_impl_cxx = Template(file=os.path.join(self.target, "templates", "instance.cpp"), searchList=[{'CONFIG': self}])			
			logging.debug("entity_impl_cxx " + str(entity_impl_cxx))
			self.entity_file.write(str(entity_impl_cxx))
			self.entity_file.close()
			self.entity_file = None
			self.entity_head_file_name = None
			self.entity_impl_file_name = None
			self.entity_class_name = None
			self.class_name = None
			self.entity_class = None					
		logging.debug("_generate_cxx_instance_code exit")

	def _generate_cxx_abstract_code(self):
		logging.debug("_generate_cxx_abstract_code enter")
		entity_classes = self.config_module.list_classes(tags=['_abstract','_proxy'],xtags=None,name=None)
		for entity_class in entity_classes:
			self.entity_class = entity_class
			self.class_name = entity_class['name']
			cxx_class_name = Utils.to_class_name(self.class_name)
			self.entity_class_name = cxx_class_name
			self.entity_head_file_name = self.entity_class_name + ".hpp"
			logging.debug("entity_head_file_name " + str(self.entity_head_file_name))	
			entity_file_path = os.path.join(self.header_outdir_name, self.entity_head_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			# TODO: replace template name
			entity_head_cxx = Template(file=os.path.join(self.target, "templates", "instance.hpp"), searchList=[{'CONFIG': self}])			
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
			self.class_name = entity_class['name']
			cxx_class_name = Utils.to_class_name(self.class_name)
			self.entity_class_name = cxx_class_name
			self.entity_head_file_name = self.entity_class_name + ".hpp"
			self.entity_impl_file_name = self.entity_class_name + ".cpp"
			logging.debug("entity_impl_file_name " + str(self.entity_impl_file_name))		
			entity_file_path = os.path.join(self.impl_outdir_name, self.entity_impl_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			#TODO: replace template name
			entity_impl_cxx = Template(file=os.path.join(self.target, "templates", "instance.cpp"), searchList=[{'CONFIG': self}])			
			logging.debug("entity_impl_cxx " + str(entity_impl_cxx))
			self.entity_file.write(str(entity_impl_cxx))
			self.entity_file.close()
			self.entity_file = None
			self.entity_head_file_name = None
			self.entity_impl_file_name = None
			self.entity_class_name = None
			self.class_name = None
			self.entity_class = None					
		logging.debug("_generate_cxx_abstract_code exit")

	def _generate_cxx_static_code(self):
		logging.debug("_generate_cxx_static_code enter")
		entity_classes = self.config_module.list_classes(tags=['_static','_proxy'],xtags=None,name=None)
		for entity_class in entity_classes:
			self.entity_class = entity_class
			self.class_name = entity_class['name']
			cxx_class_name = Utils.to_class_name(self.class_name)
			self.entity_class_name = cxx_class_name
			self.entity_head_file_name = self.entity_class_name + ".hpp"
			logging.debug("entity_head_file_name " + str(self.entity_head_file_name))	
			entity_file_path = os.path.join(self.header_outdir_name, self.entity_head_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			#TODO: replace template name
			entity_head_cxx = Template(file=os.path.join(self.target, "templates", "instance.hpp"), searchList=[{'CONFIG': self}])			
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
			self.class_name = entity_class['name']
			cxx_class_name = Utils.to_class_name(self.class_name)
			self.entity_class_name = cxx_class_name
			self.entity_head_file_name = self.entity_class_name + ".hpp"
			self.entity_impl_file_name = self.entity_class_name + ".cpp"
			logging.debug("entity_impl_file_name " + str(self.entity_impl_file_name))		
			entity_file_path = os.path.join(self.impl_outdir_name, self.entity_impl_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			#TODO: replace template name
			entity_impl_cxx = Template(file=os.path.join(self.target, "templates", "instance.cpp"), searchList=[{'CONFIG': self}])			
			logging.debug("entity_impl_cxx " + str(entity_impl_cxx))
			self.entity_file.write(str(entity_impl_cxx))
			self.entity_file.close()
			self.entity_file = None
			self.entity_head_file_name = None
			self.entity_impl_file_name = None
			self.entity_class_name = None
			self.class_name = None
			self.entity_class = None					
		logging.debug("_generate_cxx_static_code exit")				

	def _generate_cxx_singleton_code(self):
		logging.debug("_generate_cxx_singleton_code enter")
		entity_classes = self.config_module.list_classes(tags=['_singleton','_proxy'],xtags=None,name=None)
		for entity_class in entity_classes:
			self.entity_class = entity_class
			self.class_name = entity_class['name']
			cxx_class_name = Utils.to_class_name(self.class_name)
			self.entity_class_name = cxx_class_name
			self.entity_head_file_name = self.entity_class_name + ".hpp"
			logging.debug("entity_head_file_name " + str(self.entity_head_file_name))	
			entity_file_path = os.path.join(self.header_outdir_name, self.entity_head_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			#TODO: replace template name
			entity_head_cxx = Template(file=os.path.join(self.target, "templates", "instance.hpp"), searchList=[{'CONFIG': self}])			
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
			self.class_name = entity_class['name']
			cxx_class_name = Utils.to_class_name(self.class_name)
			self.entity_class_name = cxx_class_name
			self.entity_head_file_name = self.entity_class_name + ".hpp"
			self.entity_impl_file_name = self.entity_class_name + ".cpp"
			logging.debug("entity_impl_file_name " + str(self.entity_impl_file_name))		
			entity_file_path = os.path.join(self.impl_outdir_name, self.entity_impl_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			#TODO: replace template name
			entity_impl_cxx = Template(file=os.path.join(self.target, "templates", "instance.cpp"), searchList=[{'CONFIG': self}])			
			logging.debug("entity_impl_cxx " + str(entity_impl_cxx))
			self.entity_file.write(str(entity_impl_cxx))
			self.entity_file.close()
			self.entity_file = None
			self.entity_head_file_name = None
			self.entity_impl_file_name = None
			self.entity_class_name = None
			self.class_name = None
			self.entity_class = None					
		logging.debug("_generate_cxx_singleton_code exit")		

	def _generate_cxx_enum_code(self):
		logging.debug("_generate_cxx_enum_code enter")
		enum_classes = self.config_module.list_classes(tags=['_enum','_proxy'],xtags=['_singleton'],name=None)
		for enum_class in enum_classes:
			self.enum_class = enum_class
			self.class_name = enum_class['name']
			cxx_class_name = Utils.to_class_name(self.class_name)
			self.enum_class_name = cxx_class_name
			self.enum_head_file_name = self.enum_class_name + ".hpp"
			logging.debug("enum_head_file_name " + str(self.enum_head_file_name))	
			enum_file_path = os.path.join(self.header_outdir_name, self.enum_head_file_name)
			if not os.path.exists(os.path.dirname(enum_file_path)):
				os.makedirs(os.path.dirname(enum_file_path))
			logging.debug("enum_file_path " + str(enum_file_path))	
			self.enum_file = open(enum_file_path, "w+")
			enum_head_cxx = Template(file=os.path.join(self.target, "templates", "enum.hpp"), searchList=[{'CONFIG': self}])			
			logging.debug("enum_head_cxx " + str(enum_head_cxx))
			self.enum_file.write(str(enum_head_cxx))
			self.enum_file.close()
			self.enum_file = None
			self.enum_head_file_name = None
			self.enum_class_name = None
			self.class_name = None
			self.enum_class = None	
		logging.debug("_generate_cxx_enum_code exit")

	def _generate_cxx_callbacks_code(self):
		logging.debug("_generate_cxx_callbacks_code enter")
		entity_classes = self.config_module.list_classes(tags=['_callback','_proxy'],xtags=None,name=None)
		for entity_class in entity_classes:
			self.entity_class = entity_class
			self.class_name = entity_class['name']
			cxx_class_name = Utils.to_class_name(self.class_name)
			self.entity_class_name = cxx_class_name
			self.entity_head_file_name = self.entity_class_name + ".hpp"
			logging.debug("entity_head_file_name " + str(self.entity_head_file_name))		
			entity_file_path = os.path.join(self.header_outdir_name, self.entity_head_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			#TODO: replace template name
			entity_head_cxx = Template(file=os.path.join(self.target, "templates", "instance.hpp"), searchList=[{'CONFIG': self}])			
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
			self.class_name = entity_class['name']
			cxx_class_name = Utils.to_class_name(self.class_name)
			self.entity_class_name = cxx_class_name
			self.entity_head_file_name = self.entity_class_name + ".hpp"
			self.entity_impl_file_name = self.entity_class_name + ".cpp"
			logging.debug("entity_impl_file_name " + str(self.entity_impl_file_name))		
			entity_file_path = os.path.join(self.impl_outdir_name, self.entity_impl_file_name)
			if not os.path.exists(os.path.dirname(entity_file_path)):
				os.makedirs(os.path.dirname(entity_file_path))
			logging.debug("entity_file_path " + str(entity_file_path))	
			self.entity_file = open(entity_file_path, "w+")
			#TODO: replace template name
			entity_impl_cxx = Template(file=os.path.join(self.target, "templates", "instance.cpp"), searchList=[{'CONFIG': self}])			
			logging.debug("entity_impl_cxx " + str(entity_impl_cxx))
			self.entity_file.write(str(entity_impl_cxx))
			self.entity_file.close()
			self.entity_file = None
			self.entity_head_file_name = None
			self.entity_impl_file_name = None
			self.entity_class_name = None
			self.class_name = None
			self.entity_class = None
		logging.debug("_generate_cxx_callbacks_code exit")
 
	def _generate_java_code(self):
		logging.debug("_generate_java_code enter")
		self.java_outdir_name = os.path.join(self.output_dir_name, "project", self.package_name, "src", self.package_name)
		if not os.path.exists(self.java_outdir_name):
			os.makedirs(self.java_outdir_name)
		logging.debug("self.java_outdir_name " + str(self.java_outdir_name))
		self.config_module = ConfigModule(self.config_file_name, self.include_config_file_path)
		assert self.config_module.is_valid, "config_module is not valid"
		self._update_config(self.config_module)
		callback_classes = self.config_module.list_classes(tags=['_callback'],xtags=None,name=None)
		for callback_class in callback_classes:
			self.callback_class = callback_class
			class_name = callback_class['name']
			cxx_class_name = Utils.to_class_name(class_name)
			self.callback_class_name = cxx_class_name
			callback_file_name = self.callback_class_name + ".java"
			logging.debug("callback_file_name " + str(callback_file_name))		
			callback_file_path = os.path.join(self.java_outdir_name, callback_file_name)
			if not os.path.exists(os.path.dirname(callback_file_path)):
				os.makedirs(os.path.dirname(callback_file_path))
			logging.debug("callback_file_path " + str(callback_file_path))	
			self.callback_file = open(callback_file_path, "w+")
			callback_impl_java = Template(file=os.path.join(self.target, "templates", "callback.java"), searchList=[{'CONFIG': self}])			
			logging.debug("callback_impl_java " + str(callback_impl_java))
			self.callback_file.write(str(callback_impl_java))
			self.callback_file.close()
		self.config_module = None
		logging.debug("_generate_java_code exit")

	def _generate_internal_project(self):
		logging.debug("_generate_internal_project enter")
		self.config_module = ConfigModule(self.config_file_name, self.include_config_file_path)
		assert self.config_module.is_valid, "config_module is not valid"
		self._update_config(self.config_module)
		self.internal_build_outdir_name = os.path.join(self.makefile_outdir_name, self.package_name)
		if not os.path.exists(self.internal_build_outdir_name):
			os.makedirs(self.internal_build_outdir_name)					
		logging.debug("self.internal_build_outdir_name " + str(self.internal_build_outdir_name))
		self.internal_build_file_name = "build.xml"
		logging.debug("self.internal_build_file_name " + str(self.internal_build_file_name))
		internal_build_file_path = os.path.join(self.internal_build_outdir_name, self.internal_build_file_name)
		logging.debug("internal_build_file_path " + str(internal_build_file_path))
		self.internal_build_file = open(internal_build_file_path, "w+")
		internal_build_xml = Template(file=os.path.join(self.target, "templates", "android.build.xml"), searchList=[{'CONFIG': self}])
		logging.debug("internal_build_xml " + str(internal_build_xml))	
		self.internal_build_file.write(str(internal_build_xml))
		self.internal_build_file.close()		
		self.internal_makefile_outdir_name = os.path.join(self.makefile_outdir_name, self.package_name, 'jni')
		if not os.path.exists(self.internal_makefile_outdir_name):
			os.makedirs(self.internal_makefile_outdir_name)					
		logging.debug("self.internal_makefile_outdir_name " + str(self.internal_makefile_outdir_name))
		self.internal_androidmk_file_name = "Android.mk"
		logging.debug("self.internal_androidmk_file_name " + str(self.internal_androidmk_file_name))
		internal_androidmk_file_path = os.path.join(self.internal_makefile_outdir_name, self.internal_androidmk_file_name)
		logging.debug("internal_androidmk_file_path " + str(internal_androidmk_file_path))
		self.internal_androidmk_file = open(internal_androidmk_file_path, "w+")
		internal_android_mk = Template(file=os.path.join(self.target, "templates", "Android.mk.internal"), searchList=[{'CONFIG': self}])
		logging.debug("internal_android_mk " + str(internal_android_mk))	
		self.internal_androidmk_file.write(str(internal_android_mk))
		self.internal_androidmk_file.close()		
		self.internal_applicationmk_file_name = "Application.mk"
		logging.debug("self.internal_applicationmk_file_name " + str(self.internal_applicationmk_file_name))
		internal_applicationmk_file_path = os.path.join(self.internal_makefile_outdir_name, self.internal_applicationmk_file_name)
		logging.debug("internal_applicationmk_file_path " + str(internal_applicationmk_file_path))
		self.internal_applicationmk_file = open(internal_applicationmk_file_path, "w+")
		internal_application_mk = Template(file=os.path.join(self.target, "templates", "Application.mk.internal"), searchList=[{'CONFIG': self}])
		logging.debug("internal_application_mk " + str(internal_application_mk))	
		self.internal_applicationmk_file.write(str(internal_application_mk))
		self.internal_applicationmk_file.close()
		self.config_module = None
		logging.debug("_generate_internal_project exit")

	def _generate_exported_project(self):
		logging.debug("_generate_exported_project enter")				
		self.exported_java_outdir_name = os.path.join(self.makefile_outdir_name, 'exported', 'java', self.package_name)
		if not os.path.exists(self.exported_java_outdir_name):
			os.makedirs(self.exported_java_outdir_name)								
		self.exported_makefile_outdir_name = os.path.join(self.makefile_outdir_name, 'exported', 'cxx', self.package_name)
		if not os.path.exists(self.exported_makefile_outdir_name):
			os.makedirs(self.exported_makefile_outdir_name)								
		logging.debug("self.exported_makefile_outdir_name " + str(self.exported_makefile_outdir_name))
		self.exported_androidmk_file_name = "Android.mk"
		logging.debug("self.exported_androidmk_file_name " + str(self.exported_androidmk_file_name))
		exported_androidmk_file_path = os.path.join(self.exported_makefile_outdir_name, self.exported_androidmk_file_name)
		logging.debug("exported_androidmk_file_path " + str(exported_androidmk_file_path))
		self.config_module = ConfigModule(self.config_file_name, self.include_config_file_path)
		assert self.config_module.is_valid, "config_module is not valid"
		self._update_config(self.config_module)		
		self.external_androidmk_file = open(exported_androidmk_file_path, "w+")
		external_android_mk = Template(file=os.path.join(self.target, "templates", "Android.mk.exported"), searchList=[{'CONFIG': self}])
		logging.debug("external_android_mk " + str(external_android_mk))	
		self.external_androidmk_file.write(str(external_android_mk))
		self.external_androidmk_file.close()	
		self.config_module = None	
		logging.debug("_generate_exported_project exit")				

	def _generate_wrapper_cxx_code(self):
		logging.debug("_generate_wrapper_cxx_code enter")
		self.wrapper_header_outdir_name = os.path.join(self.output_dir_name, "wrapper-project", self.package_name, "jni", "cxx", "includes")
		if not os.path.exists(self.wrapper_header_outdir_name):
			os.makedirs(self.wrapper_header_outdir_name)		
		logging.debug("self.wrapper_header_outdir_name " + str(self.wrapper_header_outdir_name))
		self.wrapper_head_file_name = self.wrapper_file_name + ".hpp"
		logging.debug("self.wrapper_head_file_name " + str(self.wrapper_head_file_name))		
		wrapper_head_file_path = os.path.join(self.wrapper_header_outdir_name, self.wrapper_head_file_name)
		logging.debug("wrapper_head_file_path " + str(wrapper_head_file_path))	
		self.config_module = ConfigModule(self.config_file_name, self.include_config_file_path)
		assert self.config_module.is_valid, "config_module is not valid"
		self._update_config(self.config_module)		
		self.wrapper_head_file = open(wrapper_head_file_path, "w+")
		wrapper_head_hpp = Template(file=os.path.join(self.target, "templates", "wrapper-head.hpp"), searchList=[{'CONFIG': self}])
		logging.debug("wrapper_head_hpp " + str(wrapper_head_hpp))
		self.wrapper_head_file.write(str(wrapper_head_hpp))
		self.wrapper_head_file.close()
		self.wrapper_impl_outdir_name = os.path.join(self.output_dir_name, "wrapper-project", self.package_name, "jni", "cxx", "impl")
		if not os.path.exists(self.wrapper_impl_outdir_name):
			os.makedirs(self.wrapper_impl_outdir_name)		
		logging.debug("self.wrapper_impl_outdir_name " + str(self.wrapper_impl_outdir_name))
		self.wrapper_impl_file_name = self.wrapper_file_name + ".cpp"
		logging.debug("self.wrapper_impl_file_name " + str(self.wrapper_impl_file_name))
		wrapper_impl_file_path = os.path.join(self.wrapper_impl_outdir_name, self.wrapper_impl_file_name)
		logging.debug("wrapper_impl_file_path " + str(wrapper_impl_file_path))		
		self.wrapper_impl_file = open(wrapper_impl_file_path, "w+")
		wrapper_impl_cpp = Template(file=os.path.join(self.target, "templates", "wrapper-impl.cpp"), searchList=[{'CONFIG': self}])
		logging.debug("wrapper_impl_cpp " + str(wrapper_impl_cpp))
		self.wrapper_impl_file.write(str(wrapper_impl_cpp))
		self.wrapper_impl_file.close()
		self.config_module = None
		logging.debug("_generate_wrapper_cxx_code exit")

	def _generate_wrapper_internal_project(self):
		logging.debug("_generate_wrapper_internal_project enter")
		self.wrapper_internal_makefile_outdir_name = os.path.join(self.wrapper_makefile_outdir_name, self.package_name, 'jni')
		if not os.path.exists(self.wrapper_internal_makefile_outdir_name):
			os.makedirs(self.wrapper_internal_makefile_outdir_name)					
		logging.debug("self.wrapper_internal_makefile_outdir_name " + str(self.wrapper_internal_makefile_outdir_name))
		self.wrapper_internal_androidmk_file_name = "Android.mk"
		logging.debug("self.wrapper_internal_androidmk_file_name " + str(self.wrapper_internal_androidmk_file_name))
		wrapper_internal_androidmk_file_path = os.path.join(self.wrapper_internal_makefile_outdir_name, self.wrapper_internal_androidmk_file_name)
		logging.debug("wrapper_internal_androidmk_file_path " + str(wrapper_internal_androidmk_file_path))
		self.config_module = ConfigModule(self.config_file_name, self.include_config_file_path)
		assert self.config_module.is_valid, "config_module is not valid"
		self._update_config(self.config_module)		
		self.wrapper_internal_androidmk_file = open(wrapper_internal_androidmk_file_path, "w+")
		wrapper_internal_android_mk = Template(file=os.path.join(self.target, "templates", "Android.mk.wrapper.internal"), searchList=[{'CONFIG': self}])
		logging.debug("wrapper_internal_android_mk " + str(wrapper_internal_android_mk))	
		self.wrapper_internal_androidmk_file.write(str(wrapper_internal_android_mk))
		self.wrapper_internal_androidmk_file.close()		
		self.wrapper_internal_applicationmk_file_name = "Application.mk"
		logging.debug("self.wrapper_internal_applicationmk_file_name " + str(self.wrapper_internal_applicationmk_file_name))
		wrapper_internal_applicationmk_file_path = os.path.join(self.wrapper_internal_makefile_outdir_name, self.wrapper_internal_applicationmk_file_name)
		logging.debug("wrapper_internal_applicationmk_file_path " + str(wrapper_internal_applicationmk_file_path))
		self.wrapper_internal_applicationmk_file = open(wrapper_internal_applicationmk_file_path, "w+")
		wrapper_internal_application_mk = Template(file=os.path.join(self.target, "templates", "Application.mk.wrapper.internal"), searchList=[{'CONFIG': self}])
		logging.debug("wrapper_internal_application_mk " + str(wrapper_internal_application_mk))	
		self.wrapper_internal_applicationmk_file.write(str(wrapper_internal_application_mk))
		self.wrapper_internal_applicationmk_file.close()
		self.config_module = None
		logging.debug("_generate_wrapper_internal_project exit")

	def _generate_wrapper_exported_project(self):
		logging.debug("_generate_wrapper_exported_project enter")
		self.wrapper_exported_java_outdir_name = os.path.join(self.wrapper_makefile_outdir_name, 'exported', 'java', self.package_name)
		if not os.path.exists(self.wrapper_exported_java_outdir_name):
			os.makedirs(self.wrapper_exported_java_outdir_name)								
		self.wrapper_exported_makefile_outdir_name = os.path.join(self.wrapper_makefile_outdir_name, 'exported', 'cxx', self.package_name)
		if not os.path.exists(self.wrapper_exported_makefile_outdir_name):
			os.makedirs(self.wrapper_exported_makefile_outdir_name)								
		logging.debug("self.wrapper_exported_makefile_outdir_name " + str(self.wrapper_exported_makefile_outdir_name))
		self.wrapper_exported_androidmk_file_name = "Android.mk"
		logging.debug("self.wrapper_exported_androidmk_file_name " + str(self.wrapper_exported_androidmk_file_name))
		wrapper_exported_androidmk_file_path = os.path.join(self.wrapper_makefile_outdir_name, self.wrapper_exported_androidmk_file_name)
		logging.debug("wrapper_exported_androidmk_file_path " + str(wrapper_exported_androidmk_file_path))
		self.config_module = ConfigModule(self.config_file_name, self.include_config_file_path)
		assert self.config_module.is_valid, "config_module is not valid"
		self._update_config(self.config_module)		
		self.wrapper_external_androidmk_file = open(wrapper_exported_androidmk_file_path, "w+")
		wrapper_external_android_mk = Template(file=os.path.join(self.target, "templates", "Android.mk.wrapper.exported"), searchList=[{'CONFIG': self}])
		logging.debug("wrapper_external_android_mk " + str(wrapper_external_android_mk))	
		self.wrapper_external_androidmk_file.write(str(wrapper_external_android_mk))
		self.wrapper_external_androidmk_file.close()	
		self.config_module = None	
		logging.debug("_generate_wrapper_exported_project exit")

	def _update_config(self, config_module):
		logging.debug("Generator _update_config_data enter")
		self._add_namespace_to_config_data(config_module.config_data)
		self._add_package_to_config_data(config_module.config_data)
		self._tag_config_data(config_module.config_data)
		self._attach_include_converters(config_module.config_data)
		self._attach_default_converters(config_module.config_data)
		self._attach_config_converters(config_module.config_data, config_module)
		logging.debug("Generator _update_config_data exit")

	def _add_namespace_to_config_data(self, config_data):
		logging.debug("_add_namespace_to_config_data enter")
		config_data['namespace'] = self.namespace_name
		logging.debug("_add_namespace_to_config_data enter")

	def _add_package_to_config_data(self, config_data):
		logging.debug("_add_package_to_config_data enter")
		config_data['package'] = self.package_name
		logging.debug("_add_package_to_config_data enter")

	def _tag_config_data(self, config_data):
		logging.debug("_tag_config_data enter")
		if "params" in config_data or "returns" in config_data:
			if "params" in config_data:
				for param in config_data["params"]:
					self._tag_param(param)
			if "returns" in config_data:
				for retrn in config_data["returns"]:
					self._tag_return(retrn)
		else:
			if "classes" in config_data:
				for clazz in config_data["classes"]:
					self._tag_class(clazz)
					self._tag_config_data(clazz)
			if "functions" in config_data:
				for function in config_data["functions"]:
					self._tag_function(function)
					self._tag_config_data(function)
			if "constructors" in config_data:
				for constructor in config_data["constructors"]:
					self._tag_constructor(constructor)
					self._tag_config_data(constructor)
		logging.debug("_tag_config_data exit")

	def _tag_param(self, param):
		if 'children' in param:
			for child_param in param['children']:
				self._tag_param(child_param)

	def _tag_return(self, retrn):
		self._tag_param(retrn)

	def _tag_class(self, clazz):
		pass

	def _tag_function(self, function):
		pass

	def _tag_constructor(self, constructor):
		pass

	def _attach_include_converters(self, config_data):
		logging.debug("_attach_include_converters enter")
		if "converters" not in config_data:
			config_data["converters"] = []
		for include_converter in self.include_converters:
			found = False
			for converter in config_data["converters"]:
				if converter["name"] == include_converter["name"]:
					found = True
					break
			if found == False:
				config_data["converters"].append(include_converter)
		logging.debug("_attach_include_converters exit")

	def _attach_default_converters(self, config_data):
		logging.debug("_attach_default_converters enter")
		if "converters" not in config_data:
			config_data["converters"] = []
		for default_converter in self.default_converters:
			found = False
			for converter in config_data["converters"]:
				if converter["name"] == default_converter["name"]:
					found = True
					break
			if found == False:
				config_data["converters"].append(default_converter)
		logging.debug("_attach_default_converters exit")

	def _attach_config_converters(self, config_data, config_module):
		logging.debug("_attach_config_converters enter")
		if "params" in config_data or "returns" in config_data:
			if "params" in config_data:
				for param in config_data["params"]:
					self._attach_config_converter(param, config_module)
			if "returns" in config_data:
				for retrn in config_data["returns"]:
					self._attach_config_converter(retrn, config_module)
		else:
			if "classes" in config_data:
				for clazz in config_data["classes"]:
					self._attach_config_converters(clazz, config_module)
			if "functions" in config_data:
				for function in config_data["functions"]:
					self._attach_config_converters(function, config_module)
			if "constructors" in config_data:
				for constructor in config_data["constructors"]:
					self._attach_config_converters(constructor, config_module)
			if "fields" in config_data:
				for field in config_data["fields"]:
					self._attach_config_converter(field["type"], config_module)
		logging.debug("_attach_config_converters enter")

	def _attach_config_converter(self, convertible, config_module):
		logging.debug("_attach_config_converter enter")
		if "converter" not in convertible:
			for clazz in config_module.config_data["classes"]:
				if clazz["name"] == convertible["type"]:
					no_proxy = False
					if "tags" in clazz:
						if "no_proxy" in clazz["tags"]:
							no_proxy = True
					if not no_proxy:
						convertible["converter"] = 'convert_proxy'
		if "converter" not in convertible:
			for include_config_data in config_module.include_config_data_list:
				for clazz in include_config_data["classes"]:
					if clazz["name"] == convertible["type"]:
						no_proxy = False
						if "tags" in clazz:
							if "no_proxy" in clazz["tags"]:
								no_proxy = True
						if not no_proxy:
							convertible["converter"] = 'convert_proxy'					
		if "converter" not in convertible:
			converters = config_module.config_data["converters"]
			for converter in converters:
				if "java" in converter:
						if "cxx" in converter:
							if 	jindex.PrimitiveType.is_primitive_id(convertible["type"]) or\
								jindex.VoidType.is_void_id(convertible["type"]) or\
								jindex.ArrayType.is_array_id(convertible["type"]) or\
							   	jindex.PrimitiveType.is_primitive_id(converter["java"]["type"]) or\
							   	jindex.VoidType.is_void_id(converter["java"]["type"]) or\
							   	jindex.ArrayType.is_array_id(converter["java"]["type"]):
								if convertible["type"] == converter["java"]["type"]:
									convertible["converter"] = converter["name"]
							else:
								if jindex.TypeHierarchy.canCastClass1ToClass2(convertible["type"],converter["java"]["type"]):
									convertible["converter"] = converter["name"]
		if "converter" not in convertible:
			convertible["converter"] = "_TODO_"
		if "children" in convertible:
			for child_convertible in convertible["children"]:
				self._attach_config_converter(child_convertible, config_module)
		logging.debug("_attach_config_converter exit")

	def _attach_derived_data(self, config_data, config_module):
		logging.debug("_attach_derived_data enter")
		if "params" in config_data or "returns" in config_data:
			if "params" in config_data:
				for param in config_data["params"]:
					self._attach_derived_type_data(param, config_module)
			if "returns" in config_data:
				for retrn in config_data["returns"]:
					self._attach_derived_type_data(retrn, config_module)
		else:
			if "classes" in config_data:
				for clazz in config_data["classes"]:
					self._attach_derived_data(clazz, config_module)
			if "functions" in config_data:
				for function in config_data["functions"]:
					self._attach_derived_data(function, config_module)
					self._attach_derived_function_data(function, config_module)
			if "constructors" in config_data:
				for constructor in config_data["constructors"]:
					self._attach_derived_data(constructor, config_module)
			if "fields" in config_data:
				for field in config_data["fields"]:
					self._attach_derived_type_data(field["type"], config_module)
		logging.debug("_attach_derived_data enter")

	def _attach_derived_function_data(self, function_config, config_module):
		logging.debug("_attach_derived_function_data enter")
		if "deriveddata" not in function_config:
			function_config['deriveddata'] = dict()
		self._attach_derived_jni_function_data(function_config, config_module)
		logging.debug("_attach_derived_function_data enter")

	def _attach_derived_jni_function_data(self, function_config, config_module):
		logging.debug("_attach_derived_function_data enter")
		deriveddata = function_config['deriveddata']
		if "jnidata" not in deriveddata:
			deriveddata['jnidata'] = dict()
		self._attach_derived_jni_function_signature(function_config, config_module)
		self._attach_derived_jni_function_invoke_id(function_config, config_module)
		logging.debug("_attach_derived_function_data enter")	

	def _attach_derived_jni_function_signature(self, function_config, config_module):
		logging.debug("_attach_derived_jni_function_signature enter")
		deriveddata = function_config['deriveddata']
		jnidata = deriveddata['jnidata']
		if 'jnisignature' not in jnidata:
			function_sig = "("
			for param in function_config['params']:
				function_sig += param['deriveddata']['jnidata']['jnisignature']
			function_sig += ")"
			returns = function_config['returns']
			function_sig += returns[0]['deriveddata']['jnidata']['jnisignature']
			jnidata['jnisignature'] = function_sig
		assert 'jnisignature' in jnidata
		logging.debug("_attach_derived_jni_function_signature exit")

	def _attach_derived_jni_function_invoke_id(self, function_config, config_module):
		logging.debug("_attach_derived_jni_function_invoke_id enter")
		deriveddata = function_config['deriveddata']
		jnidata = deriveddata['jnidata']
		if 'jniinvokeid' not in jnidata:
			returns = function_config['returns']
			if jindex.PrimitiveType.is_primitive_id(returns[0]['type']):
				jniinvokeid = returns[0]['type'].capitalize()
			elif jindex.VoidType.is_void_id(returns[0]['type']):
				jniinvokeid = 'Void'
			else:
				jniinvokeid = 'Object'
			jnidata['jniinvokeid'] = jniinvokeid
		assert 'jniinvokeid' in jnidata
		logging.debug("_attach_derived_jni_function_invoke_id exit")

	def _attach_derived_type_data(self, type_config, config_module):
		logging.debug("_attach_derived_type_data enter")
		if "deriveddata" not in type_config:
			type_config['deriveddata'] = dict()
		self._attach_derived_target_type_data(type_config, config_module)
		self._attach_derived_jni_type_data(type_config, config_module)
		logging.debug("_attach_derived_type_data exit")

	def _attach_derived_target_type_data(self, type_config, config_module):
		logging.debug("_attach_derived_target_type_data enter")
		deriveddata = type_config['deriveddata']
		if "targetdata" not in deriveddata:
			deriveddata['targetdata'] = dict()
		self._attach_derived_target_namespace(type_config, config_module)
		self._attach_derived_target_type_info(type_config, config_module)
		logging.debug("_attach_derived_target_type_data exit")

	def _attach_derived_target_namespace(self, type_config, config_module):
		logging.debug("_attach_derived_target_namespace enter")
		deriveddata = type_config['deriveddata']
		targetdata = deriveddata['targetdata']
		if 'namespace' not in targetdata:
			targetdata['namespace'] = config_module.config_data['namespace']
		assert "namespace" in targetdata, "namespace not attached to " + str(type_config)
		logging.debug("_attach_derived_target_namespace exit")

	def _attach_derived_target_type_info(self, type_config, config_module):
		logging.debug("_attach_derived_target_type_name enter")
		deriveddata = type_config['deriveddata']
		targetdata = deriveddata['targetdata']
		if 'typeinfo' not in targetdata:
			typeinfo = targetdata['typeinfo'] = dict()
			if type_config['converter'] == 'convert_proxy':
				classes = config_module.list_all_classes(tags=None,xtags=None,name=type_config['type'])
				for clazz in classes:
					type_name = clazz['name']
					type_name = Utils.to_class_name(type_name)					
					typeinfo['typename'] = type_name
					file_name = Utils.to_file_name(type_name,"hpp")
					typeinfo['filename'] = file_name
					is_enum = True if '_enum' in clazz['tags'] else False
					typeinfo['isenum'] = is_enum
					typeinfo['isproxied'] = True
					break
			else:
				converters = config_module.list_all_converters(name=type_config['converter'],cxx_type=None,java_type=None)
				for converter in converters:
					type_name = converter['cxx']['type']
					typeinfo['typename'] = type_name
					break
			assert 'typename' in typeinfo, 'TODO: add valid converter to ' + str(type_config)
		assert "typeinfo" in targetdata, "typeinfo not attached to " + str(type_config)
		logging.debug("_attach_derived_target_type_info exit")

	def _attach_derived_jni_type_data(self, type_config, config_module):
		logging.debug("_attach_derived_jni_type_data enter")
		deriveddata = type_config['deriveddata']
		if "jnidata" not in deriveddata:
			deriveddata['jnidata'] = dict()
		self._attach_derived_jni_type_converter(type_config, config_module)
		self._attach_derived_jni_type_signature(type_config, config_module)
		if "children" in type_config:
			for child_type_config in type_config["children"]:
				self._attach_derived_type_data(child_type_config, config_module)
		logging.debug("_attach_derived_jni_type_data exit")

	def _attach_derived_jni_type_converter(self, type_config, config_module):
		logging.debug("_attach_derived_jni_type_converter enter")
		deriveddata = type_config['deriveddata']
		jnidata = deriveddata['jnidata']
		if 'jniconverter' not in jnidata:
			converters = config_module.config_data["converters"]
			for converter in converters:
				if "java" in converter:
						if "jni" in converter:
							if 	jindex.PrimitiveType.is_primitive_id(type_config["type"]) or\
								jindex.VoidType.is_void_id(type_config["type"]) or\
								jindex.ArrayType.is_array_id(type_config["type"]) or\
							   	jindex.PrimitiveType.is_primitive_id(converter["java"]["type"]) or\
							   	jindex.VoidType.is_void_id(converter["java"]["type"]) or\
							   	jindex.ArrayType.is_array_id(converter["java"]["type"]):
								if type_config["type"] == converter["java"]["type"]:
									jnidata["jniconverter"] = converter["name"]
									jnidata["jnitype"] = converter["jni"]["type"]
							else:
								if jindex.TypeHierarchy.canCastClass1ToClass2(type_config["type"],converter["java"]["type"]):
									jnidata["jniconverter"] = converter["name"]
									jnidata["jnitype"] = converter["jni"]["type"]
		assert "jniconverter" in jnidata, "derived jniconverter not attached to " + str(type_config)
		assert "jnitype" in jnidata, "derived jnitype not attached to " + str(type_config)
		logging.debug("_attach_derived_jni_type_converter exit")

	def _attach_derived_jni_type_signature(self, type_config, config_module):
		logging.debug("_attach_derived_jni_type_signature enter")
		deriveddata = type_config['deriveddata']
		jnidata = deriveddata['jnidata']
		if 'jnisignature' not in jnidata:
			jnidata['jnisignature'] = Utils.to_jni_type_signature(type_config)
		logging.debug("_attach_derived_jni_type_signature exit")

	def _detach_derived_data(self, config_data, config_module):
		logging.debug("_detach_derived_data enter")
		if "params" in config_data or "returns" in config_data:
			if "params" in config_data:
				for param in config_data["params"]:
					self._detach_derived_type_data(param, config_module)
			if "returns" in config_data:
				for retrn in config_data["returns"]:
					self._detach_derived_type_data(retrn, config_module)
		else:
			if "classes" in config_data:
				for clazz in config_data["classes"]:
					self._detach_derived_data(clazz, config_module)
			if "functions" in config_data:
				for function in config_data["functions"]:
					self._detach_derived_data(function, config_module)
					self._detach_derived_function_data(function, config_module)
			if "constructors" in config_data:
				for constructor in config_data["constructors"]:
					self._detach_derived_data(constructor, config_module)
			if "fields" in config_data:
				for field in config_data["fields"]:
					self._detach_derived_type_data(field["type"], config_module)
		logging.debug("_detach_derived_data enter")

	def _detach_derived_function_data(self, function_config, config_module):
		logging.debug("_detach_derived_function_data enter")
		if "deriveddata" in function_config:
			del function_config["deriveddata"]
		assert "deriveddata" not in function_config, "deriveddata not detached from " + str(function_config)
		logging.debug("_detach_derived_function_data exit")	

	def _detach_derived_type_data(self, type_config, config_module):
		logging.debug("_detach_derived_type_data enter")
		if "deriveddata" in type_config:
			del type_config["deriveddata"]
		assert "deriveddata" not in type_config, "deriveddata not detached from " + str(type_config)
		if "children" in type_config:
			for child_type_config in type_config["children"]:
				self._detach_derived_type_data(child_type_config, config_module)
		logging.debug("_detach_derived_type_data exit")	

	def _teardown_index(self):
		if jindex.Index.destroy() != jindex.INDEX_OK:
			print("*** Found errors - could not shutdown generator")
			raise Exception("Fatal error in shutdown generator")

class ConfigModule(object):
	def __init__(self, config_file_name, include_config_file_path):
		self.config_data = ConfigModule.load_config(config_file_name)
		self.include_config_data_list = list()
		if include_config_file_path is not None:
			self.include_config_data_list = ConfigModule.load_included_configs(self.config_data, include_config_file_path)
		self.is_valid = self.config_data is not None

	# TODO: remove me
	def to_class_name(self, class_name):
		class_name = class_name.replace('.','_')
		class_name = class_name.replace('$','_')
		return class_name

	# TODO: remove me
	def to_safe_cxx_name(self, cxx_name):
		if cxx_name in Utils.cxx_reserved_names:
			return '_' + cxx_name
		return cxx_name

	# TODO: remove me
	def to_file_name(self, base_name, extension):
		file_name = ".".join([base_name, extension])
		return file_name

	def analyze_config(self, config_module):
		config_report = dict()
		return config_report

	def list_converters(self, name, cxx_type, java_type):
		self._init_info()
		converters = list()
		converters.extend(self._list_converters_in_config_data(name=name,cxx_type=cxx_type,java_type=java_type,config_data=self.config_data))
		return converters

	def list_all_converters(self, name, cxx_type, java_type):
		self._init_info()
		converters = list()
		converters.extend(self._list_converters_in_config_data(name=name,cxx_type=cxx_type,java_type=java_type,config_data=self.config_data))
		for include_config_data in self.include_config_data_list:
			converters.extend(self._list_converters_in_config_data(name=name,cxx_type=cxx_type,java_type=java_type,config_data=include_config_data))
		return converters

	def list_classes(self, tags, xtags, name):
		self._init_info()
		classes = list()
		classes.extend(self._list_classes_in_config_data(tags,xtags,name,self.config_data))
		return classes

	def list_all_classes(self, tags, xtags, name):
		self._init_info()
		classes = list()
		classes.extend(self._list_classes_in_config_data(tags,xtags,name,self.config_data))
		for include_config_data in self.include_config_data_list:
			classes.extend(self._list_classes_in_config_data(tags,xtags,name,include_config_data))
		return classes

	def list_functions(self,class_tags,class_xtags,class_name,function_tags,function_xtags,function_name):
		functions = list()
		classes = self.list_classes(class_tags,class_xtags,class_name)
		for clazz in classes:
			functions.extend(self._list_functions_for_class_in_config_data(clazz,function_tags,function_xtags,function_name,self.config_data))
		return functions

	def _list_converters_in_config_data(self,name,cxx_type,java_type,config_data):
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
				if java_type is not None:
					if converter['java']['type'] != java_type:
						append = False
				if append:
					converters_list.append(converter)
		return converters_list

	def _list_classes_in_config_data(self,tags,xtags,name,config_data):
		if tags:
			tags = set(tags)
		if xtags:
			xtags = set(xtags)
		class_list = list()
		if 'classes' in config_data:
			classes = config_data['classes']
			for clazz in classes:
				append = True
				if tags is not None:
					if 'tags' in clazz:
						c_tags = clazz['tags']
						if not tags.issubset(c_tags):
							append = False
				if xtags is not None:
					if 'tags' in clazz:
						c_tags = clazz['tags']
						if xtags.issubset(c_tags):
							append = False
				if name is not None:
					if clazz['name'] != name:
						append = False
				if append:
					class_list.append(clazz)									
		return class_list

	def _list_functions_for_class_in_config_data(self,clazz,tags,xtags,name,config_data):
		if tags:
			tags = set(tags)
		if xtags:
			xtags = set(xtags)
		function_list = list()
		if 'functions' in clazz:
			functions = clazz['functions']
			for function in functions:
				append = True
				if tags is not None:
					c_tags = function['tags']
					if not tags.issubset(c_tags):
						append = False
				if xtags is not None:
					c_tags = function['tags']
					if xtags.issubset(c_tags):
						append = False
				if name is not None:
					if function['name'] != name:
						append = False
				if append:
					function_list.append(function)
		return function_list

	def _init_info(self):
		if not hasattr(self, 'class_info'):
			self.class_info = dict()
			config_data = self.config_data
			classes = self._list_classes_in_config_data(tags=None,xtags=None,name=None,config_data=config_data)
			for clazz in classes:
				self.class_info[clazz['name']] = { 'class' : clazz, 'namespace' : config_data['namespace'], 'package' : config_data['package']}
			for config_data in self.include_config_data_list:
				classes = self._list_classes_in_config_data(tags=None,xtags=None,name=None,config_data=config_data)
				for clazz in classes:
					self.class_info[clazz['name']] = { 'class' : clazz, 'namespace' : config_data['namespace'], 'package' : config_data['package']}
		if not hasattr(self, 'converter_info'):
			self.converter_info = dict()
			config_data = self.config_data
			converters = self._list_converters_in_config_data(name=None,cxx_type=None,java_type=None,config_data=config_data)
			for converter in converters:
				self.converter_info[converter['name']] = { 'converter' : converter, 'namespace' : config_data['namespace'], 'package' : config_data['package']}
			for config_data in self.include_config_data_list:
				converters = self._list_converters_in_config_data(name=None,cxx_type=None,java_type=None,config_data=config_data)
				for converter in converters:
					self.converter_info[converter['name']] = { 'converter' : converter, 'namespace' : config_data['namespace'], 'package' : config_data['package']}

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

	jni_type_signature_map = 	{
									'boolean'	:	'Z',
									'byte'		:	'B',
									'char'		:	'C',
									'short'		:	'S',
									'int'		:	'I',
									'long'		:	'J',
									'float'		:	'F',
									'double'	:	'D',
									'void'		:	'V',
								}

	@classmethod
	def to_resource_name(cls, class_name):
		return class_name.replace('.', '/')

	@classmethod
	def to_class_name(cls, class_name):
		class_name = class_name.replace('.','_')
		class_name = class_name.replace('$','_')
		return class_name

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
	def to_jni_type_signature(cls, type_config):
		type_ = type_config['type']
		if type_ in Utils.jni_type_signature_map:
			return Utils.jni_type_signature_map[type_]
		if jindex.ArrayType.is_array_id(type_):
			array_type = type_.split('_')[1]
			if array_type in Utils.jni_type_signature_map:
				array_type = '[' + Utils.jni_type_signature_map[array_type]
			else:
				array_type = 'java.lang.Object'
				if 'children' in type_config:
					array_type = type_config['children'][0]['type']
			return '[' + Utils.to_resource_name(array_type)
		return 'L' + Utils.to_resource_name(type_) + ';'




