//
//  CXXConverter.h
//  CXXConverter
//
//  Created by Wesley Souza on 7/24/13.
//  Copyright (c) 2013 Zynga. All rights reserved.
//

#ifndef CXXConverter_CXXConverter_h
#define CXXConverter_CXXConverter_h

#include <string>
#include <map>
#include <vector>

#define CONVERT_TO_OBJC 1
#define CONVERT_TO_CXX  2

typedef unsigned int converter_t;

void convert_string(void* &objc, std::string &cxx, converter_t &converter_type);

void convert_error(void* &objc, std::string &cxx, converter_t &converter_type);

void convert_array(void* &objc, std::vector<void *> &cxx, converter_t &converter_type);

void convert_dictionary(void* &objc, std::map<void *, void *> &cxx, converter_t &converter_type);

void convert_url(void* &objc, std::string &cxx, converter_t &converter_type);

void convert_date(void* &objc, double &cxx, converter_t &converter_type);

void convert_locale(void* &objc, std::string &cxx, converter_t &converter_type);

void convert_object(void* &objc, void* &cxx, converter_t &converter_type);

#endif
