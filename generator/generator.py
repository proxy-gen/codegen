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
		self.config['config_file_name'] = None
		self.config['output_dir_name'] = None
		self.config['package_name'] = None
		self.config['file_name'] = None
		self.config['wrapper_file_name'] = None
		self.config['include_packages'] = list()
		self.config['include_package_path'] = None
		self.config['include_wrapper_packages'] = list()
		self.config['include_wrapper_package_path'] = None
		self.config['include_config_file_names'] = list()
		self.config['include_converters'] = list()
		self.config['namespace_name'] = "CXX"
	
	def setup(self):
		raise NotImplementedError("subclasses should implement setup()")

	def generate_code(self):
		raise NotImplementedError("subclasses should implement generate_code()")

	def generate_impl(self):
		raise NotImplementedError("subclasses should implement generate_impl()")

	def generate_wrapper(self):
		raise NotImplementedError("subclasses should implement generate_wrapper()")

	def generate_reports(self):
		raise NotImplementedError("subclasses should implement generate_reports()")

	def teardown(self):
		raise NotImplementedError("subclasses should implement teardown()")

def list_supported_platforms():
	return [name for name in os.listdir(os.path.join(my_dir(), "platform")) if os.path.isdir(os.path.join(my_dir(), "platform", name))]

def create_platform_generator(platform_name):
	import imp
	generator_module_name = platform_name + "generator"
	sys.path.append(os.path.join(my_dir(), "platform", platform_name, "generator"))
	filepath, pathname, description = imp.find_module(generator_module_name)
	platform_module = imp.load_module(generator_module_name, filepath, pathname, description)
	platform_class = getattr(platform_module, "Generator")
	platform_generator = platform_class()
	return platform_generator

def my_dir():
	import inspect
	return os.path.dirname(inspect.getfile(inspect.currentframe()))

def main():
	import optparse
	from optparse import OptionParser

	supported_platforms = list_supported_platforms()

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
	parser.add_option("--generate-code", action="store_true", dest="generate_code", default=False,
							help="Flag to indicate if the code file(s) needs to be generated (default is False)")
	parser.add_option("--generate-wrapper-code", action="store_true", dest="generate_wrapper", default=False,
							help="Flag to indicate if the wrapper code file(s) needs to be generated (default is False)")
	parser.add_option("--generate-config", action="store_true", dest="generate_config", default=False,
							help="Flag to indicate if the config file needs to be generated (default is False)")
	parser.add_option("--generate-reports", action="store_true", dest="generate_reports", default=False,
							help="Flag to indicate if the reports file needs to be generated (default is False)")
	parser.add_option("--namespace", action="store", dest="namespace_name",
							help="Namespace of generated CXX (default value is CXX)")
	parser.add_option("--include-wrapper-package", action="append", dest="include_wrapper_packages",
							help="List of packages to include in the generated wrapper code.")
	parser.add_option("--include-wrapper-package-path", action="store", dest="include_wrapper_package_path",
							help="Base path to the included package. Package path is relative to --output-dir.")
	parser.add_option("--include-package", action="append", dest="include_packages",
							help="List of packages to include in the generated code.")
	parser.add_option("--include-package-path", action="store", dest="include_package_path",
							help="Base path to the included package. Package path is relative to --output-dir.")
	parser.add_option("--include-config", action="append", dest="include_config_file_names",
							help="Specifies the additional configuration file(s) to be used as reference for generating code")
	parser.add_option("--include-converter", action="append", dest="include_converters",
							help="Specifies the additional converter file(s) to be used for generating code")
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

	platform_generator = create_platform_generator(opts.platform)
	platform_generator.config['config_file_name'] = opts.config_file_name
	platform_generator.config['output_dir_name'] = opts.output_dir_name
	if opts.package_name:
		platform_generator.config['package_name'] = opts.package_name
	if opts.wrapper_file_name:
		platform_generator.config['wrapper_file_name'] = opts.wrapper_file_name
	if opts.file_name:
		platform_generator.config['file_name'] = opts.file_name
	if opts.namespace_name:
		platform_generator.config['namespace_name'] = opts.namespace_name
	if opts.include_packages:
		platform_generator.config['include_packages'] = opts.include_packages
	if opts.include_package_path:
		platform_generator.config['include_package_path'] = opts.include_package_path
	if opts.include_wrapper_packages:
		platform_generator.config['include_wrapper_packages'] = opts.include_wrapper_packages
	if opts.include_wrapper_package_path:
		platform_generator.config['include_wrapper_package_path'] = opts.include_wrapper_package_path
	if opts.include_config_file_names:
		platform_generator.config['include_config_file_names'] = opts.include_config_file_names
	if opts.include_converters:
		platform_generator.config['include_converters'] = opts.include_converters

	platform_generator.setup()
	if opts.generate_config:
		platform_generator.generate_config()
	if opts.generate_reports:
		platform_generator.generate_reports()
	if opts.generate_code:
		platform_generator.generate_code()
	if opts.generate_wrapper:
		platform_generator.generate_wrapper()
	platform_generator.teardown()

if __name__ == '__main__':
	try:
		main()
	except Exception as e:
		print e
		sys.exit(1)