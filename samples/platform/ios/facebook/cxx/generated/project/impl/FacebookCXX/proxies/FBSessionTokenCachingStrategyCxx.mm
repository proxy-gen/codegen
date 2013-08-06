/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBSessionTokenCachingStrategyCxx.hpp>
#include <FacebookSDK/FBSessionTokenCachingStrategy.h>
#include <FacebookSDK/FBAccessTokenData.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

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
	void *objc_result = (__bridge void *)[(__bridge FBSessionTokenCachingStrategy *)_proxy init];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBSessionTokenCachingStrategyCxx::initWithUserDefaultTokenInformationKeyName(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge FBSessionTokenCachingStrategy *)_proxy initWithUserDefaultTokenInformationKeyName:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSessionTokenCachingStrategyCxx::cacheTokenInformation(std::map<void *, void *>& arg0){
	void *objc_arg0 = NULL;
	convert_dictionary(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBSessionTokenCachingStrategy *)_proxy cacheTokenInformation:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBSessionTokenCachingStrategyCxx::cacheFBAccessTokenData(FacebookCXX::FBAccessTokenDataCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBAccessTokenDataCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBSessionTokenCachingStrategy *)_proxy cacheFBAccessTokenData:(__bridge id)objc_arg0 ];
}

std::map<void *, void *> FacebookCXX::FBSessionTokenCachingStrategyCxx::fetchTokenInformation(){
	void *objc_result = (__bridge void *)[(__bridge FBSessionTokenCachingStrategy *)_proxy fetchTokenInformation];
	std::map<void *, void *> result;
	convert_dictionary(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBAccessTokenDataCxx * FacebookCXX::FBSessionTokenCachingStrategyCxx::fetchFBAccessTokenData(){
	void *objc_result = (__bridge void *)[(__bridge FBSessionTokenCachingStrategy *)_proxy fetchFBAccessTokenData];
	FacebookCXX::FBAccessTokenDataCxx * result = NULL;
	convert_FBAccessTokenDataCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSessionTokenCachingStrategyCxx::clearToken(){
	[(__bridge FBSessionTokenCachingStrategy *)_proxy clearToken];
}

FacebookCXX::FBSessionTokenCachingStrategyCxx * FacebookCXX::FBSessionTokenCachingStrategyCxx::defaultInstance(){
	void *objc_result = (__bridge void *)[FBSessionTokenCachingStrategy defaultInstance];
	FacebookCXX::FBSessionTokenCachingStrategyCxx * result = NULL;
	convert_FBSessionTokenCachingStrategyCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBSessionTokenCachingStrategyCxx * FacebookCXX::FBSessionTokenCachingStrategyCxx::nullCacheInstance(){
	void *objc_result = (__bridge void *)[FBSessionTokenCachingStrategy nullCacheInstance];
	FacebookCXX::FBSessionTokenCachingStrategyCxx * result = NULL;
	convert_FBSessionTokenCachingStrategyCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

signed char FacebookCXX::FBSessionTokenCachingStrategyCxx::isValidTokenInformation(std::map<void *, void *>& arg0){
	void *objc_arg0 = NULL;
	convert_dictionary(objc_arg0, arg0, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[FBSessionTokenCachingStrategy isValidTokenInformation:(__bridge id)objc_arg0 ];
	return objc_result;
}


