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
		self._setup_working_dir()
		self._setup_output_dir()
		self._setup_default_runtime()
		self._setup_default_converters()
		self._setup_included_packages()
		self._setup_included_wrapper_packages()
		self._setup_included_config_file_path()
		self._setup_included_converters()

	def generate(self):
		if self.config['generate_reports']:
			self.generate_reports()
		if self.config['generate_config']:
			self.generate_config()
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
		self._generate_external_project()

	def generate_wrapper_code(self):
		self._generate_wrapper_cxx_code()

	def generate_wrapper_projects(self):
		self._generate_wrapper_internal_project()
		self._generate_wrapper_external_project()

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

	def _setup_default_runtime(self):
		logging.debug("_setup_default_runtime enter")
		self.include_default_runtime = True
		logging.debug("_setup_default_runtime exit")

	def _setup_default_converters(self):
		logging.debug("_setup_default_converters enter")
		self.include_default_converters = True
		self.default_converters_file_name = os.path.join(self.target, "converters", "jconverter.py")
		logging.debug("self.default_converters_file_name " + str(self.default_converters_file_name))
		config = ConfigModuleLoader.load_config(self.default_converters_file_name)
		assert "converters" in config
		self.default_converters = config["converters"]
		logging.debug("_setup_default_converters exit")

	def _setup_included_packages(self):
		logging.debug("_setup_included_packages enter")
		self.include_packages = self.config['include_packages']
		self.include_package_path = self.config['include_package_path']
		logging.debug("_setup_included_packages exit")

	def _setup_included_wrapper_packages(self):
		logging.debug("_setup_included_wrapper_packages enter")
		self.include_wrapper_packages = self.config['include_wrapper_packages']
		self.include_wrapper_package_path = self.config['include_wrapper_package_path']
		logging.debug("_setup_included_wrapper_packages exit")

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
		self.converters_report_file_name = "converters_report.md"
		logging.debug("self.converters_report_file_name " + str(self.converters_report_file_name))
		converters_report_file_path = os.path.join(self.report_outdir_name, self.converters_report_file_name)
		logging.debug("converters_report_file_path " + str(converters_report_file_path))
		self.converters_report_file = open(converters_report_file_path, "w+")
		converters_report_md = Template(file=os.path.join(self.target, "templates", "converters_report.md"), searchList=[self])
		logging.debug("converters_report_md " + str(converters_report_md))
		self.converters_report_file.write(str(converters_report_md))
		self.converters_report_file.close()
		logging.debug("Generator _generate_converters_report exit")

	def _generate_config(self):
		logging.debug("_generate_config enter")
		self.config_file_name = self.config['config_file_name']
		self.config_py_outdir_name = os.path.join(self.output_dir_name, "config", self.package_name)
		if not os.path.exists(self.config_py_outdir_name):
			os.makedirs(self.config_py_outdir_name)
		logging.debug("self.config_py_outdir_name " + str(self.config_py_outdir_name))
		self.config_data = ConfigModuleLoader.load_config(self.config_file_name)
		self.include_config_data_list = ConfigModuleLoader.load_included_configs(self.config_data, self.include_config_file_path)
		self.index.build_config_closure(self.config_data)
		self._update_config_data(self.config_data)
		self.config_py_file_name = "config.py"
		logging.debug("self.config_py_file_name " + str(self.config_py_file_name))
		config_py_file_path = os.path.join(self.config_py_outdir_name, self.config_py_file_name)
		logging.debug("config_py_file_path " + str(config_py_file_path))
		self.config_py_file = open(config_py_file_path, "w+")
		config_py = Template(file=os.path.join(self.target, "templates", "config.py"), searchList=[self])
		logging.debug("config.py " + str(config_py))
		self.config_py_file.write(str(config_py))
		self.config_py_file.close()
		logging.debug("_generate_config exit")

	def _generate_cxx_code(self):
		logging.debug("_generate_cxx_code enter")
		self.header_outdir_name = os.path.join(self.output_dir_name, "includes", self.package_name)
		if not os.path.exists(self.header_outdir_name):
			os.makedirs(self.header_outdir_name)		
		logging.debug("self.header_outdir_name " + str(self.header_outdir_name))
		self.head_file_name = self.file_name + ".hpp"
		logging.debug("self.head_file_name " + str(self.head_file_name))		
		head_file_path = os.path.join(self.header_outdir_name, self.head_file_name)
		logging.debug("head_file_path " + str(head_file_path))	
		self.head_file = open(head_file_path, "w+")
		# TODO: generate
		self.head_file.close()
		self.impl_outdir_name = os.path.join(self.output_dir_name, "src", "cxx", self.package_name)
		if not os.path.exists(self.impl_outdir_name):
			os.makedirs(self.impl_outdir_name)		
		logging.debug("self.impl_outdir_name " + str(self.impl_outdir_name))
		self.impl_file_name = self.file_name + ".cpp"
		logging.debug("self.impl_file_name " + str(self.impl_file_name))
		impl_file_path = os.path.join(self.impl_outdir_name, self.impl_file_name)
		logging.debug("impl_file_path " + str(impl_file_path))		
		self.impl_file = open(impl_file_path, "w+")
		# TODO: generate
		self.impl_file.close()
		logging.debug("_generate_cxx_code exit")

	def _generate_java_code(self):
		logging.debug("_generate_java_code enter")
		self.java_outdir_name = os.path.join(self.output_dir_name, "src", "java", self.package_name)
		if not os.path.exists(self.java_outdir_name):
			os.makedirs(self.java_outdir_name)
		logging.debug("self.java_outdir_name " + str(self.java_outdir_name))
		self.java_file_name = self.file_name + ".java"
		logging.debug("self.java_file_name " + str(self.java_file_name))		
		java_file_path = os.path.join(self.java_outdir_name, self.package_name, self.java_file_name)
		logging.debug("java_file_path " + str(java_file_path))	
		self.java_file = open(java_file_path, "w+")
		# TODO: generate
		self.java_file.close()
		logging.debug("_generate_java_code exit")

	def _generate_internal_project(self):
		logging.debug("_generate_internal_project enter")
		self.internal_makefile_outdir_name = os.path.join(self.makefile_outdir_name, 'internal', self.package_name, 'jni')
		if not os.path.exists(self.internal_makefile_outdir_name):
			os.makedirs(self.internal_makefile_outdir_name)					
		logging.debug("self.internal_makefile_outdir_name " + str(self.internal_makefile_outdir_name))
		self.internal_androidmk_file_name = "Android.mk"
		logging.debug("self.internal_androidmk_file_name " + str(self.internal_androidmk_file_name))
		internal_androidmk_file_path = os.path.join(self.internal_makefile_outdir_name, self.internal_androidmk_file_name)
		logging.debug("internal_androidmk_file_path " + str(internal_androidmk_file_path))
		self.internal_androidmk_file = open(internal_androidmk_file_path, "w+")
		# TODO
		# internal_android_mk = Template(file=os.path.join(self.target, "templates", "Android.mk.internal"), searchList=[self])
		# logging.debug("internal_android_mk " + str(internal_android_mk))	
		# self.internal_androidmk_file.write(str(internal_android_mk))
		self.internal_androidmk_file.close()		
		self.internal_applicationmk_file_name = "Application.mk"
		logging.debug("self.internal_applicationmk_file_name " + str(self.internal_applicationmk_file_name))
		internal_applicationmk_file_path = os.path.join(self.internal_makefile_outdir_name, self.internal_applicationmk_file_name)
		logging.debug("internal_applicationmk_file_path " + str(internal_applicationmk_file_path))
		self.internal_applicationmk_file = open(internal_applicationmk_file_path, "w+")
		# TODO
		# internal_application_mk = Template(file=os.path.join(self.target, "templates", "Application.mk.internal"), searchList=[self])
		# logging.debug("internal_application_mk " + str(internal_application_mk))	
		# self.internal_applicationmk_file.write(str(internal_application_mk))
		self.internal_applicationmk_file.close()
		logging.debug("_generate_internal_project exit")

	def _generate_external_project(self):
		logging.debug("_generate_external_project enter")				
		self.exported_makefile_outdir_name = os.path.join(self.makefile_outdir_name, 'exported', self.package_name)
		if not os.path.exists(self.exported_makefile_outdir_name):
			os.makedirs(self.exported_makefile_outdir_name)								
		logging.debug("self.exported_makefile_outdir_name " + str(self.exported_makefile_outdir_name))
		self.exported_androidmk_file_name = "Android.mk"
		logging.debug("self.exported_androidmk_file_name " + str(self.exported_androidmk_file_name))
		exported_androidmk_file_path = os.path.join(self.exported_makefile_outdir_name, self.exported_androidmk_file_name)
		logging.debug("exported_androidmk_file_path " + str(exported_androidmk_file_path))
		self.external_androidmk_file = open(exported_androidmk_file_path, "w+")
		# TODO
		# external_android_mk = Template(file=os.path.join(self.target, "templates", "Android.mk.exported"), searchList=[self])
		# logging.debug("external_android_mk " + str(external_android_mk))	
		# self.external_androidmk_file.write(str(external_android_mk))
		self.external_androidmk_file.close()		
		logging.debug("_generate_external_project exit")				

	def _generate_wrapper_cxx_code(self):
		logging.debug("_generate_wrapper_cxx_code enter")
		self.wrapper_header_outdir_name = os.path.join(self.output_dir_name, "wrapper-includes", self.package_name)
		if not os.path.exists(self.wrapper_header_outdir_name):
			os.makedirs(self.wrapper_header_outdir_name)		
		logging.debug("self.wrapper_header_outdir_name " + str(self.wrapper_header_outdir_name))
		self.wrapper_head_file_name = self.wrapper_file_name + ".hpp"
		logging.debug("self.wrapper_head_file_name " + str(self.wrapper_head_file_name))		
		wrapper_head_file_path = os.path.join(self.wrapper_header_outdir_name, self.wrapper_head_file_name)
		logging.debug("wrapper_head_file_path " + str(wrapper_head_file_path))	
		self.wrapper_head_file = open(wrapper_head_file_path, "w+")
		# TODO: generate
		self.wrapper_head_file.close()
		self.wrapper_impl_outdir_name = os.path.join(self.output_dir_name, "wrapper-src", "cxx", self.package_name)
		if not os.path.exists(self.wrapper_impl_outdir_name):
			os.makedirs(self.wrapper_impl_outdir_name)		
		logging.debug("self.wrapper_impl_outdir_name " + str(self.wrapper_impl_outdir_name))
		self.wrapper_impl_file_name = self.wrapper_file_name + ".cpp"
		logging.debug("self.wrapper_impl_file_name " + str(self.wrapper_impl_file_name))
		wrapper_impl_file_path = os.path.join(self.wrapper_impl_outdir_name, self.wrapper_impl_file_name)
		logging.debug("wrapper_impl_file_path " + str(wrapper_impl_file_path))		
		self.wrapper_impl_file = open(wrapper_impl_file_path, "w+")
		# TODO: generate
		self.wrapper_impl_file.close()
		logging.debug("_generate_wrapper_cxx_code exit")

	def _generate_wrapper_internal_project(self):
		logging.debug("_generate_wrapper_internal_project enter")
		self.wrapper_internal_makefile_outdir_name = os.path.join(self.wrapper_makefile_outdir_name, 'internal', self.package_name, 'jni')
		if not os.path.exists(self.wrapper_internal_makefile_outdir_name):
			os.makedirs(self.wrapper_internal_makefile_outdir_name)					
		logging.debug("self.wrapper_internal_makefile_outdir_name " + str(self.wrapper_internal_makefile_outdir_name))
		self.wrapper_internal_androidmk_file_name = "Android.mk"
		logging.debug("self.wrapper_internal_androidmk_file_name " + str(self.wrapper_internal_androidmk_file_name))
		wrapper_internal_androidmk_file_path = os.path.join(self.wrapper_internal_makefile_outdir_name, self.wrapper_internal_androidmk_file_name)
		logging.debug("wrapper_internal_androidmk_file_path " + str(wrapper_internal_androidmk_file_path))
		self.wrapper_internal_androidmk_file = open(wrapper_internal_androidmk_file_path, "w+")
		# TODO
		# wrapper_internal_android_mk = Template(file=os.path.join(self.target, "templates", "Android.mk.wrapper.internal"), searchList=[self])
		# logging.debug("wrapper_internal_android_mk " + str(wrapper_internal_android_mk))	
		# self.wrapper_internal_androidmk_file.write(str(wrapper_internal_android_mk))
		self.wrapper_internal_androidmk_file.close()		
		self.wrapper_internal_applicationmk_file_name = "Application.mk"
		logging.debug("self.wrapper_internal_applicationmk_file_name " + str(self.wrapper_internal_applicationmk_file_name))
		wrapper_internal_applicationmk_file_path = os.path.join(self.wrapper_internal_makefile_outdir_name, self.wrapper_internal_applicationmk_file_name)
		logging.debug("wrapper_internal_applicationmk_file_path " + str(wrapper_internal_applicationmk_file_path))
		self.wrapper_internal_applicationmk_file = open(wrapper_internal_applicationmk_file_path, "w+")
		# TODO
		# wrapper_internal_application_mk = Template(file=os.path.join(self.target, "templates", "Application.mk.wrapper.internal"), searchList=[self])
		# logging.debug("wrapper_internal_application_mk " + str(wrapper_internal_application_mk))	
		# self.wrapper_internal_applicationmk_file.write(str(wrapper_internal_application_mk))
		self.wrapper_internal_applicationmk_file.close()
		logging.debug("_generate_wrapper_internal_project exit")

	def _generate_wrapper_external_project(self):
		logging.debug("_generate_wrapper_external_project enter")
		self.wrapper_exported_makefile_outdir_name = os.path.join(self.wrapper_makefile_outdir_name, 'exported', self.package_name)
		if not os.path.exists(self.wrapper_exported_makefile_outdir_name):
			os.makedirs(self.wrapper_exported_makefile_outdir_name)								
		logging.debug("self.wrapper_exported_makefile_outdir_name " + str(self.wrapper_exported_makefile_outdir_name))
		self.wrapper_exported_androidmk_file_name = "Android.mk"
		logging.debug("self.wrapper_exported_androidmk_file_name " + str(self.wrapper_exported_androidmk_file_name))
		wrapper_exported_androidmk_file_path = os.path.join(self.wrapper_makefile_outdir_name, self.wrapper_exported_androidmk_file_path)
		logging.debug("wrapper_exported_androidmk_file_path " + str(wrapper_exported_androidmk_file_path))
		self.wrapper_external_androidmk_file = open(wrapper_exported_androidmk_file_path, "w+")
		# TODO
		# wrapper_external_android_mk = Template(file=os.path.join(self.target, "templates", "Android.mk.wrapper.exported"), searchList=[self])
		# logging.debug("wrapper_external_android_mk " + str(wrapper_external_android_mk))	
		# self.wrapper_external_androidmk_file.write(str(wrapper_external_android_mk))
		self.wrapper_external_androidmk_file.close()		
		logging.debug("_generate_wrapper_external_project exit")

	def _update_config_data(self, data):
		logging.debug("Generator _update_config_data enter")
		self._tag_config_data(data)
		self._attach_default_converters(data)
		self._attach_config_converters(data)
		logging.debug("Generator _update_config_data exit")

	def _tag_config_data(self, data):
		logging.debug("Generator _tag_config_data enter")
		if "params" in data or "returns" in data:
			if "params" in data:
				for param in data["params"]:
					self._tag_param(param)
			if "returns" in data:
				for retrn in data["returns"]:
					self._tag_return(retrn)
		else:
			if "classes" in data:
				for clazz in data["classes"]:
					self._tag_class(clazz)
					self._tag_config_data(clazz)
			if "functions" in data:
				for function in data["functions"]:
					self._tag_function(function)
					self._tag_config_data(function)
			if "constructors" in data:
				for constructor in data["constructors"]:
					self._tag_constructor(constructor)
					self._tag_config_data(constructor)
		logging.debug("Generator _tag_config_data exit")

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

	def _attach_default_converters(self, data):
		logging.debug("Generator _attach_default_converters enter")
		if "converters" not in data:
			data["converters"] = []
		for default_converter in self.default_converters:
			found = False
			for converter in data["converters"]:
				if converter["name"] == default_converter["name"]:
					found = True
					break
			if found == False:
				data["converters"].append(default_converter)
		logging.debug("Generator _attach_default_converters exit")

	def _attach_config_converters(self, data):
		logging.debug("Generator _attach_config_converters enter")
		if "params" in data or "returns" in data:
			if "params" in data:
				for param in data["params"]:
					self._attach_config_converter(param)
			if "returns" in data:
				for retrn in data["returns"]:
					self._attach_config_converter(retrn)
		else:
			if "classes" in data:
				for clazz in data["classes"]:
					self._attach_config_converters(clazz)
			if "functions" in data:
				for function in data["functions"]:
					self._attach_config_converters(function)
			if "constructors" in data:
				for constructor in data["constructors"]:
					self._attach_config_converters(constructor)
			if "fields" in data:
				for field in data["fields"]:
					self._attach_config_converter(field["type"])
		logging.debug("Generator _attach_config_converters enter")

	def _attach_config_converter(self, convertible):
		logging.debug("Generator _attach_config_converter enter")
		if "converter" not in convertible:
			converters = self.config_data["converters"]
			for converter in converters:
				if "java" in converter:
						if converter["java"]["type"] == convertible["type"]:
							convertible["converter"] = converter["name"]
		if "converter" not in convertible:
			for clazz in self.config_data["classes"]:
				if clazz["name"] == convertible["type"]:
					no_proxy = False
					if "tags" in clazz:
						if "no_proxy" in clazz["tags"]:
							no_proxy = True
					if not no_proxy:
						convertible["converter"] = 'convert_proxy'
		if "converter" not in convertible:
			for include_config_data in self.include_config_data_list:
				for clazz in include_config_data["classes"]:
					if clazz["name"] == convertible["type"]:
						no_proxy = False
						if "tags" in clazz:
							if "no_proxy" in clazz["tags"]:
								no_proxy = True
						if not no_proxy:
							convertible["converter"] = 'convert_proxy'					
		if "converter" not in convertible:
			convertible["converter"] = "_TODO_"
		if "children" in convertible:
			for child_convertible in convertible["children"]:
				self._attach_config_converter(child_convertible)
		logging.debug("Generator _attach_config_converter exit")


	def _teardown_index(self):
		if jindex.Index.destroy() != jindex.INDEX_OK:
			print("*** Found errors - could not shutdown generator")
			raise Exception("Fatal error in shutdown generator")


class ConfigModuleLoader(object):

	@classmethod
	def load_config(cls, config_file_name):
		import imp
		config_module_path = os.path.dirname(config_file_name)
		config_module_name, config_file_extension = os.path.splitext(os.path.basename(config_file_name))
		filepath, pathname, description = imp.find_module(config_module_name, [config_module_path])
		config_module = imp.load_module(config_module_name, filepath, pathname, description)
		config_data = getattr(config_module, "config")
		return config_data

	@classmethod
	def load_included_configs(cls, config_data, include_config_file_path):
		include_config_data_list = list()
		if "includes" in config_data:
			includes = config_data["includes"]
			for include in includes:
				include_rel_config_file_name = include["name"]
				include_config_file_name = os.path.join(include_config_file_path, include_rel_config_file_name)
				include_config_data = ConfigModuleLoader.load_config(include_config_file_name)
				include_config_data_list.append(include_config_data)
		return include_config_data_list

class Utils(object):

	@classmethod
	def to_resource_name(cls, class_name):
		return class_name.replace('.', '/')
