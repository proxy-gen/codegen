/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBTestSessionCxx.hpp"
#include <FacebookSDK/FBTestSession.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBTestSessionCxx::FBTestSessionCxx(const FBTestSessionCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBTestSessionCxx::FBTestSessionCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBTestSessionCxx::~FBTestSessionCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBTestSessionCxx::getProxy() const{
	return _proxy;
}

void * FacebookCXX::FBTestSessionCxx::sessionWithSharedUserWithPermissions(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBTestSession sessionWithSharedUserWithPermissions:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBTestSessionCxx::sessionWithSharedUserWithPermissions_uniqueUserTag(std::vector<void *>& arg0,std::string& arg1){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBTestSession sessionWithSharedUserWithPermissions:(__bridge id)objc_arg0 uniqueUserTag:(__bridge id)objc_arg1 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBTestSessionCxx::sessionWithPrivateUserWithPermissions(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBTestSession sessionWithPrivateUserWithPermissions:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::string FacebookCXX::FBTestSessionCxx::appAccessToken(){
	void *objc_result = (__bridge void *)[(__bridge FBTestSession *)_proxy appAccessToken];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::string FacebookCXX::FBTestSessionCxx::testUserID(){
	void *objc_result = (__bridge void *)[(__bridge FBTestSession *)_proxy testUserID];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::string FacebookCXX::FBTestSessionCxx::testAppID(){
	void *objc_result = (__bridge void *)[(__bridge FBTestSession *)_proxy testAppID];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::string FacebookCXX::FBTestSessionCxx::testAppSecret(){
	void *objc_result = (__bridge void *)[(__bridge FBTestSession *)_proxy testAppSecret];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}


