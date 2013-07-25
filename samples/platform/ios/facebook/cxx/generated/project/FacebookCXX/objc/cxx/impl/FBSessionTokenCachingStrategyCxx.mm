/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBSessionTokenCachingStrategyCxx.hpp"
#include <FacebookSDK/FBSessionTokenCachingStrategy.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBSessionTokenCachingStrategyCxx::FBSessionTokenCachingStrategyCxx(const FBSessionTokenCachingStrategyCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBSessionTokenCachingStrategyCxx::FBSessionTokenCachingStrategyCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBSessionTokenCachingStrategyCxx::~FBSessionTokenCachingStrategyCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBSessionTokenCachingStrategyCxx::getProxy() const{
	return _proxy;
}

void * FacebookCXX::FBSessionTokenCachingStrategyCxx::init(){
	id objc_result = [(__bridge FBSessionTokenCachingStrategy *)_proxy init];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBSessionTokenCachingStrategyCxx::initWithUserDefaultTokenInformationKeyName(std::string& arg0){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_result = [(__bridge FBSessionTokenCachingStrategy *)_proxy initWithUserDefaultTokenInformationKeyName:objc_arg0 ];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSessionTokenCachingStrategyCxx::cacheTokenInformation(std::map<void *, void *>& arg0){
	id objc_arg0 = nil;
	convert_dictionary((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBSessionTokenCachingStrategy *)_proxy cacheTokenInformation:objc_arg0 ];
}

std::map<void *, void *> FacebookCXX::FBSessionTokenCachingStrategyCxx::fetchTokenInformation(){
	id objc_result = [(__bridge FBSessionTokenCachingStrategy *)_proxy fetchTokenInformation];
	std::map<void *, void *> result;
	convert_dictionary((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSessionTokenCachingStrategyCxx::clearToken(){
	[(__bridge FBSessionTokenCachingStrategy *)_proxy clearToken];
}

FacebookCXX::FBSessionTokenCachingStrategyCxx * FacebookCXX::FBSessionTokenCachingStrategyCxx::defaultInstance(){
	id objc_result = [FBSessionTokenCachingStrategy defaultInstance];
	FacebookCXX::FBSessionTokenCachingStrategyCxx * result = NULL;
	convert_FBSessionTokenCachingStrategyCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

signed char FacebookCXX::FBSessionTokenCachingStrategyCxx::isValidTokenInformation(std::map<void *, void *>& arg0){
	id objc_arg0 = nil;
	convert_dictionary((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[FBSessionTokenCachingStrategy isValidTokenInformation:objc_arg0 ];
	return objc_result;
}


