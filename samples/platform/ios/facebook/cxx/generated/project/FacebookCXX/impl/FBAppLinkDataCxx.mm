/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBAppLinkDataCxx.hpp"
#include <FacebookSDK/FBAppLinkData.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBAppLinkDataCxx::FBAppLinkDataCxx(const FBAppLinkDataCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBAppLinkDataCxx::FBAppLinkDataCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBAppLinkDataCxx::~FBAppLinkDataCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBAppLinkDataCxx::getProxy() const{
	return _proxy;
}

void * FacebookCXX::FBAppLinkDataCxx::targetURL(){
	void *objc_result = (__bridge void *)[(__bridge FBAppLinkData *)_proxy targetURL];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::vector<void *> FacebookCXX::FBAppLinkDataCxx::actionTypes(){
	void *objc_result = (__bridge void *)[(__bridge FBAppLinkData *)_proxy actionTypes];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::vector<void *> FacebookCXX::FBAppLinkDataCxx::actionIDs(){
	void *objc_result = (__bridge void *)[(__bridge FBAppLinkData *)_proxy actionIDs];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::vector<void *> FacebookCXX::FBAppLinkDataCxx::ref(){
	void *objc_result = (__bridge void *)[(__bridge FBAppLinkData *)_proxy ref];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::map<void *, void *> FacebookCXX::FBAppLinkDataCxx::originalQueryParameters(){
	void *objc_result = (__bridge void *)[(__bridge FBAppLinkData *)_proxy originalQueryParameters];
	std::map<void *, void *> result;
	convert_dictionary(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBAppLinkDataCxx::originalURL(){
	void *objc_result = (__bridge void *)[(__bridge FBAppLinkData *)_proxy originalURL];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::map<void *, void *> FacebookCXX::FBAppLinkDataCxx::arguments(){
	void *objc_result = (__bridge void *)[(__bridge FBAppLinkData *)_proxy arguments];
	std::map<void *, void *> result;
	convert_dictionary(objc_result, result, CONVERT_TO_CXX);
	return result;
}


