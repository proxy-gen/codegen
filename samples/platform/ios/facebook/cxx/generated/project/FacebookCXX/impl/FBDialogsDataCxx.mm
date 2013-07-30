/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBDialogsDataCxx.hpp"
#include <FacebookSDK/FBDialogsData.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBDialogsDataCxx::FBDialogsDataCxx(const FBDialogsDataCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBDialogsDataCxx::FBDialogsDataCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBDialogsDataCxx::~FBDialogsDataCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBDialogsDataCxx::getProxy() const{
	return _proxy;
}

std::string FacebookCXX::FBDialogsDataCxx::method(){
	void *objc_result = (__bridge void *)[(__bridge FBDialogsData *)_proxy method];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::map<void *, void *> FacebookCXX::FBDialogsDataCxx::arguments(){
	void *objc_result = (__bridge void *)[(__bridge FBDialogsData *)_proxy arguments];
	std::map<void *, void *> result;
	convert_dictionary(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::map<void *, void *> FacebookCXX::FBDialogsDataCxx::clientState(){
	void *objc_result = (__bridge void *)[(__bridge FBDialogsData *)_proxy clientState];
	std::map<void *, void *> result;
	convert_dictionary(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::map<void *, void *> FacebookCXX::FBDialogsDataCxx::results(){
	void *objc_result = (__bridge void *)[(__bridge FBDialogsData *)_proxy results];
	std::map<void *, void *> result;
	convert_dictionary(objc_result, result, CONVERT_TO_CXX);
	return result;
}


