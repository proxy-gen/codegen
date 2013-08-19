#!/usr/bin/env python
# androidgenerator.py
# c++ generator, targeted for android platform
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

from indexer import jindex
import sys
import pdb
import os
import inspect
import logging

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
	def to_safe_jni_name(cls, java_name):
		# Still seeing bug http://bugs.sun.com/bugdatabase/view_bug.do?bug_id=4339315
		# Workaround: Replace every _ with _1
		# Replace even if its followed by 1 since 1 could be part of file name
		jni_name = java_name.replace('_', '_1')
		return jni_name

	@classmethod
	def to_callback_name(cls,cxx_name,package_name):
		return package_name + '.' + cxx_name

	@classmethod
	def to_java_name(cls,type_config):
		type_name = type_config['type']
		if jindex.ArrayType.is_array_id(type_name):
			array_type_name = 'java.lang.Object'
			if type_config['children']:
				array_type_name = type_config['children'][0]['type']
			return array_type_name + '[]'
		return type_name

	@classmethod
	def to_jni_class_name(cls, class_name):
		return Utils.to_resource_name(class_name)

	@classmethod
	def to_file_name(cls, base_name, extension):
		file_name = ".".join([base_name, extension])
		return file_name

	@classmethod
	def to_namespace_name(cls, namespace_name, class_name):
		namespaced_name = namespace_name + "::" + class_name
		return namespaced_name

	@classmethod
	def to_jni_type_signature(cls, type_config, config_data):
		type_ = type_config['type']
		deriveddata = type_config['deriveddata']
		typeinfo = deriveddata['targetdata']['typeinfo']
		# if 'iscallback' in typeinfo:
		# 	if typeinfo['iscallback']:
		# 		type_ = Utils.to_callback_name(typeinfo['typename'],config_data['package'])
		if type_ in Utils.jni_type_signature_map:
			return Utils.jni_type_signature_map[type_]
		if jindex.ArrayType.is_array_id(type_):
			# assumes array marker structure 
			array_type = type_.split('_')[1]
			if array_type in Utils.jni_type_signature_map:
				array_type = Utils.jni_type_signature_map[array_type]
			else:
				array_type = 'java.lang.Object'
				if 'children' in type_config:
					array_type = Utils.to_jni_type_signature(type_config['children'][0], config_data)
			return '[' + array_type
		return 'L' + Utils.to_resource_name(type_) + ';'




