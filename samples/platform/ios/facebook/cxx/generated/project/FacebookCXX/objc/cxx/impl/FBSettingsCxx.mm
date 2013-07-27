/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBSettingsCxx.hpp"
#include <FacebookSDK/FBSettings.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBSettingsCxx::FBSettingsCxx(const FBSettingsCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBSettingsCxx::FBSettingsCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBSettingsCxx::~FBSettingsCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBSettingsCxx::getProxy() const{
	return _proxy;
}

void * FacebookCXX::FBSettingsCxx::loggingBehavior(){
	void *objc_result = (__bridge void *)[FBSettings loggingBehavior];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSettingsCxx::setLoggingBehavior(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBSettings setLoggingBehavior:(__bridge id)objc_arg0 ];
}

signed char FacebookCXX::FBSettingsCxx::shouldAutoPublishInstall(){
	signed char objc_result = (signed char)[FBSettings shouldAutoPublishInstall];
	return objc_result;
}

void FacebookCXX::FBSettingsCxx::setShouldAutoPublishInstall(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[FBSettings setShouldAutoPublishInstall:objc_arg0 ];
}

void FacebookCXX::FBSettingsCxx::publishInstall(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBSettings publishInstall:(__bridge id)objc_arg0 ];
}


