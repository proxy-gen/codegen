#!/usr/bin/env python
# generator.py
# c++ generator
#
# Copyright (c) 2011 - Zynga Inc.


# Base Generator class
# New platforms need to extend this class and implement the functions indicated

import exceptions
import sys
import os
import logging

class BaseGenerator(object):

	def __init__(self):
		self.config = dict()

	def run(self):
		self.setup()
		self.generate()
		self.teardown()
	
	def setup(self):
		raise NotImplementedError("subclasses should implement setup()")

	def generate(self):
		raise NotImplementedError("subclasses should implement generate()")

	def teardown(self):
		raise NotImplementedError("subclasses should implement teardown()")

class Configurator(object):

	@classmethod
	def configure_options(cls, generator, opts):
		generator.config['config_file_name'] = opts.config_file_name if opts.config_file_name else None
		generator.config['output_dir_name'] = opts.output_dir_name if opts.output_dir_name else None
		generator.config['package_name'] = opts.package_name if opts.package_name else None
		generator.config['file_name'] = opts.file_name if opts.file_name else None
		generator.config['wrapper_file_name'] = opts.wrapper_file_name if opts.wrapper_file_name else None
		generator.config['namespace_name'] = opts.namespace_name if opts.namespace_name else "CXX" #default namespace
		generator.config['generate_reports'] = opts.generate_reports if opts.generate_reports else False
		generator.config['generate_config'] = opts.generate_config if opts.generate_config else False
		generator.config['generate_code'] = opts.generate_code if opts.generate_code else False
		generator.config['generate_projects'] = opts.generate_projects if opts.generate_projects else False
		generator.config['generate_wrapper_code'] = opts.generate_wrapper_code if opts.generate_wrapper_code else False
		generator.config['generate_wrapper_projects'] = opts.generate_wrapper_projects if opts.generate_wrapper_projects else False
		generator.config['include_packages'] = opts.include_packages if opts.include_packages else list()
		generator.config['include_package_rel_paths'] = opts.include_package_rel_paths if opts.include_package_rel_paths else list()
		generator.config['include_wrapper_packages'] = opts.include_wrapper_packages if opts.include_wrapper_packages else list()
		generator.config['include_wrapper_package_rel_paths'] = opts.include_wrapper_package_rel_paths if opts.include_wrapper_package_rel_paths else list()
		generator.config['include_config_file_path'] = opts.include_config_file_path if opts.include_config_file_path else None
		generator.config['include_converter_files'] = opts.include_converter_files if opts.include_converter_files else list()
		generator.config['include_header_files'] = opts.include_header_files if opts.include_header_files else list()

	@classmethod
	def list_supported_platforms(cls):
		return [name for name in os.listdir(os.path.join(Configurator.my_dir(), "platform")) if os.path.isdir(os.path.join(Configurator.my_dir(), "platform", name))]

	@classmethod
	def create_platform_generator(cls,platform_name):
		import imp
		generator_module_name = platform_name + "generator"
		sys.path.append(os.path.join(Configurator.my_dir(), "platform", platform_name, "generator"))
		filepath, pathname, description = imp.find_module(generator_module_name)
		platform_module = imp.load_module(generator_module_name, filepath, pathname, description)
		platform_class = getattr(platform_module, "Generator")
		platform_generator = platform_class()
		return platform_generator

	@classmethod
	def my_dir(cls):
		import inspect
		return os.path.dirname(inspect.getfile(inspect.currentframe()))

def main():
	import optparse
	from optparse import OptionParser

	supported_platforms = Configurator.list_supported_platforms()
	parser = OptionParser("usage: %prog [options] {configfile}")
	parser.add_option("--platform", action="store", type="string", dest="platform",
							help="Indicates the platform for which code will be generated. Supported platforms are " + str(supported_platforms))
	parser.add_option("--config", action="store", type="string", dest="config_file_name",
							help="Specifies the configuration file to be used for generating code.")
	parser.add_option("--output-dir", action="store", type="string", dest="output_dir_name",
							help="Specifies the output directory where the code will be generated")
	parser.add_option("--package", action="store", type="string", dest="package_name",
							help="Specifies the package in which the code will be generated")
	parser.add_option("--file", action="store", type="string", dest="file_name",
							help="Specifies the name used for the generated file(s)")
	parser.add_option("--wrapper-file", action="store", type="string", dest="wrapper_file_name",
							help="Specifies the name used for the generated wrapper file(s)")
	parser.add_option("--namespace", action="store", dest="namespace_name",
							help="Namespace of generated CXX (default value is 'CXX')")
	parser.add_option("--generate-reports", action="store_true", dest="generate_reports", default=False,
							help="Flag to indicate if the report(s) file needs to be generated (default is False)")
	parser.add_option("--generate-code", action="store_true", dest="generate_code", default=False,
							help="Flag to indicate if the code file(s) needs to be generated (default is False)")
	parser.add_option("--generate-config", action="store_true", dest="generate_config", default=False,
							help="Flag to indicate if the config file needs to be generated (default is False)")
	parser.add_option("--generate-projects", action="store_true", dest="generate_projects", default=False,
							help="Flag to indicate if the platform project(s) need to be generated (default is False")
	parser.add_option("--generate-wrapper-code", action="store_true", dest="generate_wrapper_code", default=False,
							help="Flag to indicate if the wrapper code file(s) needs to be generated (default is False)")
	parser.add_option("--generate-wrapper-projects", action="store_true", dest="generate_wrapper_projects", default=False,
							help="Flag to indicate if the platform wrapper project(s) need to be generated (default is False")
	parser.add_option("--include-wrapper-package", action="append", dest="include_wrapper_packages",
							help="List of packages to include in the generated wrapper code.")
	parser.add_option("--include-wrapper-package-rel-path", action="append", dest="include_wrapper_package_rel_paths",
							help="Relative path to the included packages (relative to --output-dir)")
	parser.add_option("--include-package", action="append", dest="include_packages",
							help="List of packages to include in the generated code.")
	parser.add_option("--include-package-rel-path", action="append", dest="include_package_rel_paths",
							help="Relative path to the included packages (relative to --output-dir)")
	parser.add_option("--include-config-path", action="store", dest="include_config_file_path",
							help="Base path to the included configs. Config path is absolute.")
	parser.add_option("--include-converter-file", action="append", dest="include_converter_files",
							help="Specifies the path to additional converter file(s) to be used for generating code")
	parser.add_option("--include-header-file", action="append", dest="include_header_files",
							help="Specifies the header file(s) to be included in the generated code")
	parser.add_option("--log",  action="store", type="string", dest="loglevel",
							help="Specifies the generator log level. Valid values are info (for INFO level logging) and debug (for DEBUG level logging)")

	(opts, args) = parser.parse_args()
	loglevel = "INFO"
	if opts.loglevel:
		loglevel = str(opts.loglevel).upper()
	logging.basicConfig(level=getattr(logging, loglevel))
	if not opts.platform:
		parser.print_help()
		sys.exit(1)
	if not opts.platform in supported_platforms:
		parser.print_help()
		sys.exit(1)
	if not opts.config_file_name:
		parser.print_help()
		sys.exit(1)	
	if not opts.output_dir_name:
		parser.print_help()
		sys.exit(1)
	platform_generator = Configurator.create_platform_generator(opts.platform)
	Configurator.configure_options(platform_generator,opts)
	platform_generator.run()

if __name__ == '__main__':
	try:
		main()
	except Exception as e:
		print e
		sys.exit(1)