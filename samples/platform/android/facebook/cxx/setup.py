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

def main():
	setup_local_properties()
	print "android cxx bindings generator setup complete"

if __name__ == '__main__':
	try:
		main()
	except Exception as e:
		print e
		sys.exit(1)




