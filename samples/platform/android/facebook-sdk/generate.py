#!/usr/bin/env python
# generate.py
# generate c++ 
#
# Copyright (c) 2011 - Zynga Inc.

import sys
import os
import platform
import commands
import inspect

def run_generator():
	from optparse import OptionParser
	from string import Template

	parser = OptionParser("usage: %prog [options]")
	parser.add_option("-s", "--sdk-dir", action="store", type="string", dest="sdk_dir",
							help="Path to Android SDK")
	parser.add_option("-n", "--ndk-dir", action="store", type="string", dest="ndk_dir",
							help="Path to Android NDK")
	(opts, args) = parser.parse_args()
	if not opts.sdk_dir or not opts.ndk_dir:
		parser.print_help()
		sys.exit(1)

	sdk_dir = opts.sdk_dir
	ndk_dir = opts.ndk_dir
	my_dir = os.path.dirname(inspect.getfile(inspect.currentframe()))
	base_dir = os.path.join(my_dir, "..", "..", "..", "..")		
	generator_dir = os.path.join(my_dir, "generator", "platform", "")

	run_generator_command_template = Template("export CXX_JVM_CLASSPATH=$sdk_dir/platforms/android-8/android.jar:$sdk_dir/extras/android/support/v4/android-support-v4.jar:$my_dir/facebook.jar;LD_LIBRARY_PATH=${generator_dir} python ${generator_dir}/generator.py $my_dir/config/generator.ini --src-output-dir $my_dir/generated/src --header-output-dir $my_dir/generated/includes --makefiles-output-dir $my_dir/generated/output --log info")
	run_generator_command = run_generator_command_template.substitute(sdk_dir=sdk_dir,ndk_dir=ndk_dir,generator_dir=generator_dir,my_dir=my_dir)
	command_output = commands.getstatusoutput(run_generator_command)
	check_if_exit(run_generator_command, command_output)

def check_if_exit(command, command_output):
	if command_output[0] != 0:
		print "unable to execute command using\n" + command
		print "\n\nDid you run setup.py?\n"
		sys.exit(1)

def main():
	run_generator()
	print "Generated CXX bindings for Android"

if __name__ == '__main__':
	try:
		main()
	except Exception as e:
		print e
		sys.exit(1)







