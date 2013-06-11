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

def setup_local_properties():
	from optparse import OptionParser

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
	buildfiles = commands.getoutput('find .. -type f -name "build.xml"')  
	for buildfile in buildfiles:	
		builddir = os.path.dirname(buildfile)
		localpropertiesfile=os.path.join(builddir, "local.properties")
		with open(localpropertiesfile, "w") as openedfile:
			openedfile.writelines(["sdk.dir=", sdk_dir, '\n'])
			openedfile.writelines(["ndk.dir=", ndk_dir, '\n'])

def setup_runtime():
	from string import Template
	
	lib_name = "libCXXGenerator"
	cxx_generator_root = os.path.join(os.path.dirname(inspect.getfile(inspect.currentframe())), "generator") 
	base_cxx_dir = os.path.join(os.path.join(os.path.dirname(inspect.getfile(inspect.currentframe())), "runtime"), "ZyngaCXX", "jni", "cxx")

	name = platform.system()
	if name == 'Darwin':
		java_framework_headers1 = "/System/Library/Frameworks/JavaVM.framework/Headers"
		java_framework_headers2 = "/System/Library/Frameworks/JavaVM.framework/Headers"
	elif name == 'Windows':
		java_framework_headers1 = os.path.join("$$JAVA_HOME", "include")
		java_framework_headers2 = os.path.join("$$JAVA_HOME", "include" , "linux")
	else:
		java_framework_headers1 = os.path.join("$$JAVA_HOME", "include")
		java_framework_headers2 = os.path.join("$$JAVA_HOME", "include" , "linux")

	command_output = (-1, None)
	command_templates = []
	command_templates.append(Template("g++ -c -I${java_framework_headers1} -I${java_framework_headers2} -I${base_cxx_dir} -I${base_cxx_dir}/internal -I${base_cxx_dir}/exported ${base_cxx_dir}/JNIContext.cpp -o ${cxx_generator_root}/JNIContext.o"))
	command_templates.append(Template("g++ -c -I${java_framework_headers1} -I${java_framework_headers2} -I${base_cxx_dir} -I${base_cxx_dir}/internal -I${base_cxx_dir}/exported -I${cxx_generator_root}/indexer ${cxx_generator_root}/indexer/CXXGenerator.cpp  -o ${cxx_generator_root}/CXXGenerator.o"))
	command_templates.append(Template("g++ -dynamiclib -framework JavaVM -o ${cxx_generator_root}/libCXXGenerator.dylib ${cxx_generator_root}/JNIContext.o  ${cxx_generator_root}/CXXGenerator.o "))

	for i in range(0, len(command_templates)):
		command_template = command_templates[i]
		command = command_template.substitute(java_framework_headers1=java_framework_headers1,java_framework_headers2=java_framework_headers2,base_cxx_dir=base_cxx_dir,cxx_generator_root=cxx_generator_root)
		command_output = commands.getstatusoutput(command)
		if command_output[0] != 0:
			libName = None
			print "unable to compile jindex library required by generator command used is:\n" + command
			return None
					
	return lib_name

def main():
	setup_local_properties()
	setup_runtime()
	print "android cxx bindings generator setup complete"

if __name__ == '__main__':
	try:
		main()
	except Exception as e:
		print e
		sys.exit(1)




