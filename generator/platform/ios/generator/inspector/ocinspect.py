#!/usr/bin/env python
#
# A python frontend interface to clocxml which provides the necessary utilities to generate
# config files for the ios platform of cxx-binding-generator.
#
# Copyright (c) 2013 - Zynga Inc.

class Inspect(object):
	def __init__:(self, clang_opts):

		#This may be configurable in the future
		self.config["bin"] = "clocxml"
		self.config["path"] = "./clocxml/proj/bin"
		self.config["clang_opts"] = clang_opts if clang_opts else self._default_clang_opts()

	def _default_clang_opts():
		default_opts = dict()
		default_opts["framework_flag"] = "-f"
		default_opts["compiler_flag"] = "-c"
		default_opts["compiler_arg"] = "\"-c -arch armv7 -I/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS6.1.sdk/usr/include/ -F/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS6.1.sdk/System/Library/Framework\""
		
