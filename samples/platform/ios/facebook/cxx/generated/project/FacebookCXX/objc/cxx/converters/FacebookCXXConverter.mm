/*
 * Implementation (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

#include "FacebookCXXConverter.hpp"

// Proxy Converter Types
void convert_FBViewControllerCxx(void* &objc, FBViewControllerCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBViewControllerCxx(objc));
	}
}
void convert_FBProfilePictureViewCxx(void* &objc, FBProfilePictureViewCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBProfilePictureViewCxx(objc));
	}
}
void convert_FBSessionTokenCachingStrategyCxx(void* &objc, FBSessionTokenCachingStrategyCxx *&cxx, converter_t converter_type)
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
void convert_FBNativeDialogsCxx(void* &objc, FBNativeDialogsCxx *&cxx, converter_t converter_type)
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
void convert_FBSessionCxx(void* &objc, FBSessionCxx *&cxx, converter_t converter_type)
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
void convert_FBRequestConnectionCxx(void* &objc, FBRequestConnectionCxx *&cxx, converter_t converter_type)
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
void convert_FBRequestCxx(void* &objc, FBRequestCxx *&cxx, converter_t converter_type)
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
void convert_FBUserSettingsViewControllerCxx(void* &objc, FBUserSettingsViewControllerCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBUserSettingsViewControllerCxx(objc));
	}
}
void convert_FBCacheDescriptorCxx(void* &objc, FBCacheDescriptorCxx *&cxx, converter_t converter_type)
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
void convert_FBSettingsCxx(void* &objc, FBSettingsCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBSettingsCxx(objc));
	}
}
void convert_FBFriendPickerViewControllerCxx(void* &objc, FBFriendPickerViewControllerCxx *&cxx, converter_t converter_type)
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
void convert_FBLoginViewCxx(void* &objc, FBLoginViewCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBLoginViewCxx(objc));
	}
}
void convert_FBGraphObjectCxx(void* &objc, FBGraphObjectCxx *&cxx, converter_t converter_type)
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
void convert_FBTestSessionCxx(void* &objc, FBTestSessionCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBTestSessionCxx(objc));
	}
}
void convert_FBPlacePickerViewControllerCxx(void* &objc, FBPlacePickerViewControllerCxx *&cxx, converter_t converter_type)
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

void convert_FBViewControllerDelegateConformerCxx(void* &objc, FBViewControllerDelegateConformerCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (FBViewControllerDelegateConformerCxx *)objc; // TODO: figure out something better here
	}
}
void convert_FBGraphObjectConformerCxx(void* &objc, FBGraphObjectConformerCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (FBGraphObjectConformerCxx *)objc; // TODO: figure out something better here
	}
}
void convert_FBLoginViewDelegateConformerCxx(void* &objc, FBLoginViewDelegateConformerCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (FBLoginViewDelegateConformerCxx *)objc; // TODO: figure out something better here
	}
}
void convert_FBGraphUserConformerCxx(void* &objc, FBGraphUserConformerCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (FBGraphUserConformerCxx *)objc; // TODO: figure out something better here
	}
}
void convert_FBGraphPlaceConformerCxx(void* &objc, FBGraphPlaceConformerCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (FBGraphPlaceConformerCxx *)objc; // TODO: figure out something better here
	}
}
void convert_FBGraphLocationConformerCxx(void* &objc, FBGraphLocationConformerCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (FBGraphLocationConformerCxx *)objc; // TODO: figure out something better here
	}
}

