/*
 * CXXConverter.h
 *
 * Created on: June 29, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
 */

#ifndef CXXCONVERTER_H_
#define CXXCONVERTER_H_

#include <jni.h>
#include <vector>
#include <map>
#include <string>

void convert_java_util_Date_to_cxx(jobject& java_value, long& cxx_value);

void convert_java_util_Date_to_java(jobject& java_value, long& cxx_value);

void convert_java_util_List_to_cxx(jobject& java_value, std::vector<C>& cxx_value);

void convert_java_util_List_to_java(jobject& java_value, C& cxx_value);

void convert_java_util_Map_to_cxx(jobject& java_value, std::map<std::string, C>& cxx_value);

void convert_java_util_Map_to_java(jobject& java_value, std::map<std::string, C>& cxx_value);

#endif /* CXXCONVERTER_H_ */

