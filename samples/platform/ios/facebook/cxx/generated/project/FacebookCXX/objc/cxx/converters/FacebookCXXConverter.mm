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

