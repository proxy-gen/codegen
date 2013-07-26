/*
 * Header (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */


#ifndef _FacebookCXXConverter
#define _FacebookCXXConverter

#include <CXXConverter/CXXConverter.hpp>
#include "FBSessionCxx.hpp"
#include "FBRequestCxx.hpp"
#include "FBSessionTokenCachingStrategyCxx.hpp"
#include "FBRequestConnectionCxx.hpp"
#include "FBGraphObjectConformerCxx.hpp"

using namespace FacebookCXX;

// Proxy Converter Types
void convert_FBSessionCxx(void* objc, FBSessionCxx *cxx, converter_t converter_type);
void convert_FBRequestCxx(void* objc, FBRequestCxx *cxx, converter_t converter_type);
void convert_FBSessionTokenCachingStrategyCxx(void* objc, FBSessionTokenCachingStrategyCxx *cxx, converter_t converter_type);
void convert_FBRequestConnectionCxx(void* objc, FBRequestConnectionCxx *cxx, converter_t converter_type);
void convert_FBGraphObjectConformerCxx(void* objc, FBGraphObjectConformerCxx *cxx, converter_t converter_type);

#endif // _FacebookCXXConverter
