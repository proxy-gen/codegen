/*
 * Header (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */


#ifndef _FacebookCXXConverter
#define _FacebookCXXConverter

#include <CXXConverter/CXXConverter.hpp>
#include "FBSessionCxx.hpp"
#include "FBRequestCxx.hpp"
#include "FBCacheDescriptorCxx.hpp"
#include "FBFriendPickerViewControllerCxx.hpp"
#include "FBGraphObjectCxx.hpp"
#include "FBNativeDialogsCxx.hpp"
#include "FBPlacePickerViewControllerCxx.hpp"
#include "FBSessionTokenCachingStrategyCxx.hpp"
#include "FBRequestConnectionCxx.hpp"
#include "FBGraphObjectConformerCxx.hpp"

using namespace FacebookCXX;

// Proxy Converter Types
void convert_FBSessionCxx(void* objc, FBSessionCxx *cxx, converter_t converter_type);
void convert_FBRequestCxx(void* objc, FBRequestCxx *cxx, converter_t converter_type);
void convert_FBCacheDescriptorCxx(void* objc, FBCacheDescriptorCxx *cxx, converter_t converter_type);
void convert_FBFriendPickerViewControllerCxx(void* objc, FBFriendPickerViewControllerCxx *cxx, converter_t converter_type);
void convert_FBGraphObjectCxx(void* objc, FBGraphObjectCxx *cxx, converter_t converter_type);
void convert_FBNativeDialogsCxx(void* objc, FBNativeDialogsCxx *cxx, converter_t converter_type);
void convert_FBPlacePickerViewControllerCxx(void* objc, FBPlacePickerViewControllerCxx *cxx, converter_t converter_type);
void convert_FBSessionTokenCachingStrategyCxx(void* objc, FBSessionTokenCachingStrategyCxx *cxx, converter_t converter_type);
void convert_FBRequestConnectionCxx(void* objc, FBRequestConnectionCxx *cxx, converter_t converter_type);
void convert_FBGraphObjectConformerCxx(void* objc, FBGraphObjectConformerCxx *cxx, converter_t converter_type);

#endif // _FacebookCXXConverter
