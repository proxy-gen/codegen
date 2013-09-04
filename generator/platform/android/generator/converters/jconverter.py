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
#	Default converters 
# 	Special Type Markers
#		_array_array                					Array of array type
#		_object_array		 							Object array type
#		_byte_array									byte array type
#		_short_array									short array type
#		_int_array										int array type
#		_long_array									long array type
#		_float_array									float array type
#		_double_array									double array type
#		_boolean_array									boolean array type
#		_char_array									char array type

config = {
	"converters" : [
		{
			"name"		:	"convert_jni_void",
			"java"		:	{
								"type" : "void"
							},
			"jni"		:	{
								"type" : "void"
							},
		},	
		{
			"name"		:	"convert_jni_boolean",
			"java"		:	{
								"type" : "boolean"
							},
			"jni"		:	{
								"type" : "jboolean"
							},
		},
		{
			"name"		:	"convert_jni_byte",
			"java"		:	{
								"type" : "byte"
							},
			"jni"		:	{
								"type" : "jbyte"
							},
		},
		{
			"name"		:	"convert_jni_char",
			"java"		:	{
								"type" : "char"
							},
			"jni"		:	{
								"type" : "jchar"
							},
		},
		{
			"name"		:	"convert_jni_short",
			"java"		:	{
								"type" : "short"
							},
			"jni"		:	{
								"type" : "jshort"
							},
		},
		{
			"name"		:	"convert_jni_int",
			"java"		:	{
								"type" : "int"
							},
			"jni"		:	{
								"type" : "jint"
							},
		},
		{
			"name"		:	"convert_jni_long",
			"java"		:	{
								"type" : "long"
							},
			"jni"		:	{
								"type" : "jlong"
							},
		},
		{
			"name"		:	"convert_jni_float",
			"java"		:	{
								"type" : "float",
							},
			"jni"		:	{
								"type" : "jfloat",
							},
		},
		{
			"name"		:	"convert_jni_double",
			"java"		:	{
								"type" : "double",
							},
			"jni"		:	{
								"type" : "jdouble",
							},
		},
		{
			"name"		:	"convert_jni_java_lang_Object",
			"java"		:	{
								"type" : "java.lang.Object",
							},
			"jni"		:	{
								"type" : "jobject",
							},
		},
		{
			"name"		:	"convert_jni_string",
			"java"		:	{
								"type" : "java.lang.String",
							},
			"jni"		:	{
								"type" : "jstring",
							},
		},
		{
			"name"					: 	"convert_jni__array_array",
			"java"					:	{
											"type"	: 	"_array_array",
										},
			"jni"					:	{
											"type"	:	"jobjectArray",
										},
		},		
		{
			"name"					:	"convert_jni__object_array",
			"java"					:	{
											"type"	:	"_object_array",
										},
			"jni"					:	{
											"type"	: "jobjectArray",
										},
		},
		{
			"name"					:	"convert_jni__byte_array",
			"java"					:	{
											"type"	:	"_byte_array",
										},
			"jni"					:	{
											"type"	: "jbyteArray",
										},
		},
		{
			"name"					:	"convert_jni__short_array",
			"java"					:	{
											"type"	:	"_short_array",
										},
			"jni"					:	{
											"type"	: "jshortArray",
										},
		},
		{
			"name"					:	"convert_jni__int_array",
			"java"					:	{
											"type"	:	"_int_array",
										},
			"jni"					:	{
											"type"	: "jintArray",
										},
		},
		{
			"name"					:	"convert_jni__long_array",
			"java"					:	{
											"type"	:	"_long_array",
										},
			"jni"					:	{
											"type"	: "jlongArray",
										},
		},
		{
			"name"					:	"convert_jni__float_array",
			"java"					:	{
											"type"	:	"_float_array",
										},
			"jni"					:	{
											"type"	: "jfloatArray",
										},
		},
		{
			"name"					:	"convert_jni__double_array",
			"java"					:	{
											"type"	:	"_double_array",
										},
			"jni"					:	{
											"type"	: "jdoubleArray",
										},
		},
		{
			"name"					:	"convert_jni__boolean_array",
			"java"					:	{
											"type"	:	"_boolean_array",
										},
			"jni"					:	{
											"type"	: "jbooleanArray",
										},
		},
		{
			"name"					:	"convert_jni__char_array",
			"java"					:	{
											"type"	:	"_char_array",
										},
			"jni"					:	{
											"type"	: "jcharArray",
										},
		},
		{
			"name"		:	"convert_void",
			"java"		: 	{ 
								"type" : "void",
							},
			"cxx"		:	{
								"type" : "void",
							},
		},
		{
			"name"		:	"convert_boolean",
			"java"		: 	{ 
								"type" : "boolean",
							},
			"cxx"		:	{
								"type" : "bool",
							},
		},
		{
			"name"		: 	"convert_byte",
			"java"		:	{ 
								"type" : "byte",
							},
			"cxx"		:	{ 
								"type" : "byte",
							}
		},
		{
			"name"		:	"convert_char",
			"java"		:	{ 
								"type" : "char", 
							},
			"cxx"		:	{ 
								"type" : "char",
							},
		},
		{
			"name"		: 	"convert_short",
			"java"		:	{ 
								"type" : "short",
							},
			"cxx"		:	{ 
								"type" : "short",
							},
		},
		{
			"name"		: 	"convert_int",
			"java"		:	{ 
								"type" : "int", 
							},
			"cxx"		:	{
								"type" : "int",
							},
		},
		{
			"name"		:	"convert_long",
			"java"		:	{ 
								"type" : "long", 
							},
			"cxx"		:	{ 
								"type" : "long",
							}
		},
		{
			"name"		:	"convert_float",
			"java"		:	{ 
								"type" : "float", 
							},
			"cxx"		:	{
								"type" : "float",
							},
		},
		{
			"name"		:	"convert_double",
			"java"		:	{ 
								"type" : "double",
							},
			"cxx"		:	{
								"type" : "double",
							},
		},
		{
			"name"					:	"convert__char_array",
			"java"					:	{
											"type"	:	"_char_array",
										},
			"cxx"					:	{
											"type"	: "std::vector<char>",
										},
		},
		{
			"name"					:	"convert__boolean_array",
			"java"					:	{
											"type"	:	"_boolean_array",
										},
			"cxx"					:	{
											"type"	: "std::vector<bool>",
										},
		},
		{
			"name"					:	"convert__byte_array",
			"java"					:	{
											"type"	:	"_byte_array",
										},
			"cxx"					:	{
											"type"	: "std::vector<byte>",
										},
		},
		{
			"name"					:	"convert__short_array",
			"java"					:	{
											"type"	:	"_short_array",
										},
			"cxx"					:	{
											"type"	: "std::vector<short>",
										},
		},
		{
			"name"					:	"convert__int_array",
			"java"					:	{
											"type"	:	"_int_array",
										},
			"cxx"					:	{
											"type"	: "std::vector<int>",
										},
		},
		{
			"name"					:	"convert__long_array",
			"java"					:	{
											"type"	:	"_long_array",
										},
			"cxx"					:	{
											"type"	: "std::vector<long>",
										},
		},
		{
			"name"					:	"convert__float_array",
			"java"					:	{
											"type"	:	"_float_array",
										},
			"cxx"					:	{
											"type"	: "std::vector<float>",
										},
		},
		{
			"name"					:	"convert__double_array",
			"java"					:	{
											"type"	:	"_double_array",
										},
			"cxx"					:	{
											"type"	: "std::vector<double>",
										},
		},
	],
}