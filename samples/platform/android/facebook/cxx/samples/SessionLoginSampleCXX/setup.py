#!/usr/bin/env python
# setup.py
# setup c++ generator
#
# Copyright (c) 2011 - Zynga Inc.
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

import sys
import os
import platform
import commands
import inspect

def copy_dependent_libs():
	make_libs()
	setup_runtime()
	copy_runtime_lib()
	setup_facebook_cxx()
	copy_facebook_cxx_lib()

def make_libs():
	from string import Template
	my_dir = os.path.dirname(inspect.getfile(inspect.currentframe()))
	my_libs_dir = os.path.join(my_dir, "libs")
	command_template = Template("mkdir -p ${my_libs_dir}")
	command = command_template.substitute(my_libs_dir=my_libs_dir)
	command_output = commands.getstatusoutput(command)
	if command_output[0] != 0:
			print "unable to run " + command
			return False
	return True

def setup_runtime():
	from string import Template
	my_dir = os.path.dirname(inspect.getfile(inspect.currentframe()))
	my_libs_dir = os.path.join(my_dir, "libs")
	codegen_root_dir = os.path.join(my_dir, "..", "..", "..", "..", "..", "..", "..")
	runtime_dir = os.path.join(codegen_root_dir, "generator", "platform", "android", "runtime")
	command_template = Template("cd ${runtime_dir}/ZyngaCXX;ant $ant_target")
	ant_target = "debug"
	command = command_template.substitute(runtime_dir=runtime_dir,ant_target=ant_target)
	command_output = commands.getstatusoutput(command)
	if command_output[0] != 0:
			print "unable to run " + command
			return False
	return True

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

def setup_facebook_cxx():
	from string import Template
	my_dir = os.path.dirname(inspect.getfile(inspect.currentframe()))
	my_libs_dir = os.path.join(my_dir, "libs")
	codegen_project_dir = os.path.join(my_dir, "..", "..", "..")
	facebook_cxx_dir = os.path.join(codegen_project_dir, "cxx", "generated", "project", "FacebookCXX")
	command_template = Template("cd ${facebook_cxx_dir};ant $ant_target")
	ant_target = "debug"
	command = command_template.substitute(facebook_cxx_dir=facebook_cxx_dir,my_libs_dir=my_libs_dir,ant_target=ant_target)
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




