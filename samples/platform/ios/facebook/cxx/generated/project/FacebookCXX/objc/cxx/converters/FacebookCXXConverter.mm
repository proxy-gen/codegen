/*
 * Implementation (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

#include "FacebookCXXConverter.hpp"

// Proxy Converter Types
void convert_FBSessionCxx(void* objc, FBSessionCxx *cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBSessionCxx(objc));
	}
}
void convert_FBRequestCxx(void* objc, FBRequestCxx *cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBRequestCxx(objc));
	}
}
void convert_FBCacheDescriptorCxx(void* objc, FBCacheDescriptorCxx *cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBCacheDescriptorCxx(objc));
	}
}
void convert_FBFriendPickerViewControllerCxx(void* objc, FBFriendPickerViewControllerCxx *cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBFriendPickerViewControllerCxx(objc));
	}
}
void convert_FBGraphObjectCxx(void* objc, FBGraphObjectCxx *cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBGraphObjectCxx(objc));
	}
}
void convert_FBNativeDialogsCxx(void* objc, FBNativeDialogsCxx *cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBNativeDialogsCxx(objc));
	}
}
void convert_FBPlacePickerViewControllerCxx(void* objc, FBPlacePickerViewControllerCxx *cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBPlacePickerViewControllerCxx(objc));
	}
}
void convert_FBSessionTokenCachingStrategyCxx(void* objc, FBSessionTokenCachingStrategyCxx *cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBSessionTokenCachingStrategyCxx(objc));
	}
}
void convert_FBRequestConnectionCxx(void* objc, FBRequestConnectionCxx *cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBRequestConnectionCxx(objc));
	}
}

void convert_FBGraphObjectConformerCxx(void* objc, FBGraphObjectConformerCxx *cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		//This shouldn't happen
	}
}

