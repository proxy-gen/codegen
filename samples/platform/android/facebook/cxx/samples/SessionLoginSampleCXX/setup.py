#!/usr/bin/env python
# setup.py
# setup c++ generator
#
# Copyright (c) 2011 - Zynga Inc.

import sys
import os
import platform
import commands
import inspect

def copy_dependent_libs():
	copy_runtime_lib()
	copy_facebook_cxx_lib()

def copy_runtime_lib():
	from string import Template
	my_dir = os.path.dirname(inspect.getfile(inspect.currentframe()))
	my_libs_dir = os.path.join(my_dir, "libs")
	codegen_root_dir = os.path.join(my_dir, "..", "..", "..", "..", "..", "..", "..")
	runtime_dir = os.path.join(codegen_root_dir, "generator", "platform", "android", "runtime")
	command_template = Template("cp ${runtime_dir}/ZyngaCXX/bin/classes.jar ${my_libs_dir}/zyngacxx.jar")
	command = command_template.substitute(runtime_dir=runtime_dir,my_libs_dir=my_libs_dir)
	command_output = commands.getstatusoutput(command)
	if command_output[0] != 0:
			print "unable to run " + command
			return False
	return True

def copy_facebook_cxx_lib():
	from string import Template
	my_dir = os.path.dirname(inspect.getfile(inspect.currentframe()))
	my_libs_dir = os.path.join(my_dir, "libs")
	codegen_project_dir = os.path.join(my_dir, "..", "..", "..")
	facebook_cxx_dir = os.path.join(codegen_project_dir, "cxx", "generated", "project", "FacebookCXX")
	command_template = Template("cp ${facebook_cxx_dir}/bin/classes.jar ${my_libs_dir}/facebookcxx.jar")
	command = command_template.substitute(facebook_cxx_dir=facebook_cxx_dir,my_libs_dir=my_libs_dir)
	command_output = commands.getstatusoutput(command)
	if command_output[0] != 0:
			print "unable to run " + command
			return False
	return True	

def main():
	copy_dependent_libs()
	print "setup complete"

if __name__ == '__main__':
	try:
		main()
	except Exception as e:
		print e
		sys.exit(1)




