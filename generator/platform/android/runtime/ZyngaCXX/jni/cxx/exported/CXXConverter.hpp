/*
 * CXXConverter.hpp
 * ZyngaCXX
 *
 * Created on: June 29, 2013
 * Author: rvergis
 *
 *  Copyright 2013 Zynga Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef CXXCONVERTER_H_
#define CXXCONVERTER_H_

#include <CXXTypeHierarchy.hpp>
#include <CXXTypes.hpp>
#include <jni.h>
#include <cstdarg>
#include <string>
#include <vector>
#include <stack>
#include <map>

#define CONVERT_TO_JAVA 1
#define CONVERT_TO_CXX 2
#define CONVERT_TO_JNI 4

#define convert_jni_boolean_to_jni(value) ((jboolean) (*((bool *)value))) 
#define convert_jni_boolean_to_java(value) ((long) &value) 

#define convert_jni_byte_to_jni(value) ((jbyte) (*((byte *)value))) 
#define convert_jni_byte_to_java(value) ((long) &value) 

#define convert_jni_char_to_jni(value) ((jchar) (*((char *)value))) 
#define convert_jni_char_to_java(value) ((long) &value) 

#define convert_jni_short_to_jni(value) ((jshort) (*((short *)value))) 
#define convert_jni_short_to_java(value) ((long) &value) 

#define convert_jni_int_to_jni(value) ((jint) (*((int *)value)))  
#define convert_jni_int_to_java(value) ((long) &value) 

#define convert_jni_long_to_jni(value) ((jlong) (*((long *)value)))  
#define convert_jni_long_to_java(value) ((long) &value) 

#define convert_jni_float_to_jni(value) ((jfloat) (*((float *)value)))   
#define convert_jni_float_to_java(value) ((long) &value) 

#define convert_jni_double_to_jni(value) ((jdouble) (*((double *) value)))
#define convert_jni_double_to_java(value) ((long) &value) 

#define convert_jni_java_lang_Object_to_jni(value) ((jobject) value)           
#define convert_jni_java_lang_Object_to_java(value) ((long) value) 

#define convert_jni_string_to_jni(value) ((jstring) value)           
#define convert_jni_string_to_java(value) ((long) value) 

#define convert_jni__array_array_to_jni(value) ((jobjectArray) value)
#define convert_jni__array_array_to_java(value) ((long) value)

#define convert_jni__object_array_to_jni(value) ((jobjectArray) value)           
#define convert_jni__object_array_to_java(value) ((long) value) 

#define convert_jni__byte_array_to_jni(value) ((jbyteArray) value)           
#define convert_jni__byte_array_to_java(value) ((long) value) 

#define convert_jni__short_array_to_jni(value) ((jshortArray) value)
#define convert_jni__short_array_to_java(value) ((long) value) 

#define convert_jni__int_array_to_jni(value) ((jintArray) value)
#define convert_jni__int_array_to_java(value) ((long) value) 

#define convert_jni__long_array_to_jni(value) ((jlongArray) value)
#define convert_jni__long_array_to_java(value) ((long) value) 

#define convert_jni__float_array_to_jni(value) ((jfloatArray) value)
#define convert_jni__float_array_to_java(value) ((long) value) 

#define convert_jni__double_array_to_jni(value) ((jdoubleArray) value)
#define convert_jni__double_array_to_java(value) ((long) value) 

#define convert_jni__boolean_array_to_jni(value) ((jbooleanArray) value)
#define convert_jni__boolean_array_to_java(value) ((long) value) 

#define convert_jni__char_array_to_jni(value) ((jcharArray) value)           
#define convert_jni__char_array_to_java(value) ((long) value) 

#define LOG_ENABLED 1
#define log(...) if (LOG_ENABLED) fprintf(stderr, __VA_ARGS__)

typedef unsigned int converter_t;

typedef void (*cxx_converter)(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

cxx_converter get_converter(std::stack<long>& converter_stack);

void convert_boolean(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert_byte(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert_char(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert_short(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert_int(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert_long(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert_float(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert_double(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__boolean_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__byte_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__char_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__short_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__int_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__long_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__float_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__double_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__boolean_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__byte_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__char_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__short_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__int_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__long_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__float_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

void convert__double_array_array(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

#endif /* CXXCONVERTER_H_ */

