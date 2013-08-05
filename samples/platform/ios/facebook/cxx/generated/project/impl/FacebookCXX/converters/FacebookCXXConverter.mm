/*
 * Implementation (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

#import <Foundation/NSString.h>
#import <Foundation/NSError.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSKeyValueCoding.h>
#import <Foundation/NSArray.h>
#import <Foundation/NSURL.h>
#import <Foundation/NSDate.h>
#import <Foundation/NSLocale.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

void convert_string(void* &objc, std::string &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        objc = (__bridge void*)[NSString stringWithUTF8String:cxx.c_str()];
    }
    else if(converter_type == CONVERT_TO_CXX){ 
        if (!objc) cxx = "";
        else cxx = [(__bridge NSString*)objc UTF8String];
    }
}

void convert_error(void* &objc, std::string &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        objc = (__bridge void*)[NSError errorWithDomain:nil code:0 userInfo:[NSDictionary dictionaryWithObject:[NSString stringWithUTF8String:cxx.c_str()] forKey:NSLocalizedDescriptionKey]];
    }
    else if(converter_type == CONVERT_TO_CXX){
        if (!objc) cxx = "";
        else cxx = [[(__bridge NSError*)objc localizedDescription] UTF8String];
    }
}

void convert_array(void* &objc, std::vector<void *> &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        NSMutableArray * array = [NSMutableArray array];
        for(std::vector<void *>::iterator iter = cxx.begin(); iter != cxx.end(); iter++) {
            [array addObject:(__bridge id)(*iter)];
        }
        objc = (__bridge void*)array;
    }
    else if(converter_type == CONVERT_TO_CXX){
        cxx.clear();
        [(__bridge NSArray *)objc enumerateObjectsUsingBlock:^(id object, NSUInteger idx, BOOL *stop) {
            cxx.push_back((__bridge void*)object);
        }];
    }
}

void convert_dictionary(void* &objc, std::map<void *, void *> &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        NSMutableDictionary *dictionary = [NSMutableDictionary dictionary];
        for(std::map<void *, void *>::const_iterator iter = cxx.begin(); iter != cxx.end(); ++iter) {
            id key = (__bridge id)iter->first;
            id value = (__bridge id)iter->second;
            [dictionary setValue:value forKey:key];
        }
        objc = (__bridge void*)dictionary;
    }
    else if(converter_type == CONVERT_TO_CXX){
        cxx.clear();
        for (id key in [(__bridge NSDictionary *)objc allKeys]){
            cxx[(__bridge void *)key] = (__bridge void *)[(__bridge NSDictionary *)objc objectForKey:key];
        }
    }
}

void convert_url(void* &objc, std::string &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        objc = (__bridge void*)[NSURL URLWithString:[NSString stringWithUTF8String:cxx.c_str()]];
    }
    else if(converter_type == CONVERT_TO_CXX){
        if (!objc) cxx = "";
        else cxx = [[(__bridge NSURL *)objc absoluteString] UTF8String];
    }
}

void convert_date(void* &objc, double &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        objc = (__bridge void*)[NSDate dateWithTimeIntervalSince1970:(NSTimeInterval)cxx];
    }
    else if(converter_type == CONVERT_TO_CXX){
        if (!objc) cxx = 0;
        else cxx =  (double)[(__bridge NSDate *)objc timeIntervalSince1970];
    }
}

void convert_locale(void* &objc, std::string &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        objc = (__bridge void*)[[NSLocale alloc] initWithLocaleIdentifier:[NSString stringWithUTF8String:cxx.c_str()]];
    }
    else if(converter_type == CONVERT_TO_CXX){
        if (!objc) cxx = "";
        else cxx = [[(__bridge NSLocale *)objc localeIdentifier] UTF8String];
    }
}

void convert_object(void* &objc, void* &cxx, converter_t converter_type){
    if (converter_type == CONVERT_TO_OBJC){
        objc = cxx;
    }
    else if(converter_type == CONVERT_TO_CXX){
        cxx = objc;
    }
}


// Proxy Converter Types
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
void convert_FBDialogsParamsCxx(void* &objc, FBDialogsParamsCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBDialogsParamsCxx(objc));
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
void convert_FBAccessTokenDataCxx(void* &objc, FBAccessTokenDataCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBAccessTokenDataCxx(objc));
	}
}
void convert_FBDialogsDataCxx(void* &objc, FBDialogsDataCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBDialogsDataCxx(objc));
	}
}
void convert_FBAppLinkDataCxx(void* &objc, FBAppLinkDataCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBAppLinkDataCxx(objc));
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
void convert_FBAppCallCxx(void* &objc, FBAppCallCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBAppCallCxx(objc));
	}
}
void convert_FBAppEventsCxx(void* &objc, FBAppEventsCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBAppEventsCxx(objc));
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
void convert_FBFrictionlessRecipientCacheCxx(void* &objc, FBFrictionlessRecipientCacheCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBFrictionlessRecipientCacheCxx(objc));
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
void convert_FBDialogsCxx(void* &objc, FBDialogsCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBDialogsCxx(objc));
	}
}
void convert_FBShareDialogParamsCxx(void* &objc, FBShareDialogParamsCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBShareDialogParamsCxx(objc));
	}
}
void convert_FBOpenGraphActionShareDialogParamsCxx(void* &objc, FBOpenGraphActionShareDialogParamsCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBOpenGraphActionShareDialogParamsCxx(objc));
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
void convert_FBWebDialogsCxx(void* &objc, FBWebDialogsCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBWebDialogsCxx(objc));
	}
}
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
void convert_FBInsightsCxx(void* &objc, FBInsightsCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBInsightsCxx(objc));
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
		//This won't happen
	}
}
void convert_FBOpenGraphActionConformerCxx(void* &objc, FBOpenGraphActionConformerCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		//This won't happen
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
		//This won't happen
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
		//This won't happen
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
		//This won't happen
	}
}
void convert_FBOpenGraphObjectConformerCxx(void* &objc, FBOpenGraphObjectConformerCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		//This won't happen
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
		//This won't happen
	}
}
void convert_FBWebDialogsDelegateConformerCxx(void* &objc, FBWebDialogsDelegateConformerCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		objc = cxx->getProxy();
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		//This won't happen
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
		//This won't happen
	}
}

void convert_FBGraphObjectProtocolCxx(void* &objc, FBGraphObjectProtocolCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		//This won't happen
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBGraphObjectProtocolCxx(objc));
	}
}
void convert_FBOpenGraphActionProtocolCxx(void* &objc, FBOpenGraphActionProtocolCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		//This won't happen
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBOpenGraphActionProtocolCxx(objc));
	}
}
void convert_FBGraphPlaceProtocolCxx(void* &objc, FBGraphPlaceProtocolCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		//This won't happen
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBGraphPlaceProtocolCxx(objc));
	}
}
void convert_FBGraphLocationProtocolCxx(void* &objc, FBGraphLocationProtocolCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		//This won't happen
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBGraphLocationProtocolCxx(objc));
	}
}
void convert_FBGraphUserProtocolCxx(void* &objc, FBGraphUserProtocolCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		//This won't happen
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBGraphUserProtocolCxx(objc));
	}
}
void convert_FBOpenGraphObjectProtocolCxx(void* &objc, FBOpenGraphObjectProtocolCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		//This won't happen
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBOpenGraphObjectProtocolCxx(objc));
	}
}
void convert_FBLoginViewDelegateProtocolCxx(void* &objc, FBLoginViewDelegateProtocolCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		//This won't happen
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBLoginViewDelegateProtocolCxx(objc));
	}
}
void convert_FBWebDialogsDelegateProtocolCxx(void* &objc, FBWebDialogsDelegateProtocolCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		//This won't happen
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBWebDialogsDelegateProtocolCxx(objc));
	}
}
void convert_FBViewControllerDelegateProtocolCxx(void* &objc, FBViewControllerDelegateProtocolCxx *&cxx, converter_t converter_type)
{
	if (converter_type == CONVERT_TO_OBJC)
	{
		//This won't happen
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx = (new FBViewControllerDelegateProtocolCxx(objc));
	}
}

