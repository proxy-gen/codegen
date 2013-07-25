/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBSessionTokenCachingStrategy.hpp"
#include <FacebookSDK/FBSessionTokenCachingStrategy.h>
#include <FacebookSDK/FBSessionTokenCachingStrategy.h>

using namespace FacebookCXX;

void * FBSessionTokenCachingStrategy::init(){
	void * objc_result = (__bridge void *)[(__bridge FBSessionTokenCachingStrategy *)proxy init];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void * FBSessionTokenCachingStrategy::initWithUserDefaultTokenInformationKeyName(std::string& arg0){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[(__bridge FBSessionTokenCachingStrategy *)proxy initWithUserDefaultTokenInformationKeyName:(__bridge NSString *)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void FBSessionTokenCachingStrategy::cacheTokenInformation(std::map<void *, void *>& arg0){
	void * objc_arg0 = NULL;
	convert_dictionary(objc_arg0, arg0, CONVERT_TO_OBJC)

	[(__bridge FBSessionTokenCachingStrategy *)proxy cacheTokenInformation:(__bridge NSDictionary *)objc_arg0 ];
}

std::map<void *, void *> FBSessionTokenCachingStrategy::fetchTokenInformation(){
	void * objc_result = (__bridge void *)[(__bridge FBSessionTokenCachingStrategy *)proxy fetchTokenInformation];
	std::map<void *, void *> result;
	convert_dictionary(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void FBSessionTokenCachingStrategy::clearToken(){
	[(__bridge FBSessionTokenCachingStrategy *)proxy clearToken];
}

FacebookCXX::FBSessionTokenCachingStrategy * FBSessionTokenCachingStrategy::defaultInstance(){
	void * objc_result = (__bridge void *)[FBSessionTokenCachingStrategy defaultInstance];
	FacebookCXX::FBSessionTokenCachingStrategy * *result = NULL;
	convert_FBSessionTokenCachingStrategy(objc_result, result, CONVERT_TO_CXX)
	return result;
}

signed char FBSessionTokenCachingStrategy::isValidTokenInformation(std::map<void *, void *>& arg0){
	void * objc_arg0 = NULL;
	convert_dictionary(objc_arg0, arg0, CONVERT_TO_OBJC)

	signed char objc_result = [FBSessionTokenCachingStrategy isValidTokenInformation:(__bridge NSDictionary *)objc_arg0 ];
	return objc_result;
}


