/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBGraphLocationProtocolCxx.hpp"
#include <FacebookSDK/FBGraphLocation.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBGraphLocationProtocolCxx::FBGraphLocationProtocolCxx(const FBGraphLocationProtocolCxx* cc){
	id<FBGraphLocation> proxy_id = (__bridge id<FBGraphLocation>)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBGraphLocationProtocolCxx::FBGraphLocationProtocolCxx(const void * proxy){
	id<FBGraphLocation> proxy_id = (__bridge id<FBGraphLocation>)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBGraphLocationProtocolCxx::~FBGraphLocationProtocolCxx(){
	id<FBGraphLocation> _no_op = (__bridge_transfer id<FBGraphLocation>)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBGraphLocationProtocolCxx::getProxy() const{
	return _proxy;
}

std::string FacebookCXX::FBGraphLocationProtocolCxx::street(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphLocation>)_proxy street];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphLocationProtocolCxx::setStreet(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphLocation>)_proxy setStreet:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBGraphLocationProtocolCxx::city(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphLocation>)_proxy city];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphLocationProtocolCxx::setCity(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphLocation>)_proxy setCity:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBGraphLocationProtocolCxx::state(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphLocation>)_proxy state];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphLocationProtocolCxx::setState(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphLocation>)_proxy setState:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBGraphLocationProtocolCxx::country(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphLocation>)_proxy country];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphLocationProtocolCxx::setCountry(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphLocation>)_proxy setCountry:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBGraphLocationProtocolCxx::zip(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphLocation>)_proxy zip];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphLocationProtocolCxx::setZip(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphLocation>)_proxy setZip:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBGraphLocationProtocolCxx::latitude(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphLocation>)_proxy latitude];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphLocationProtocolCxx::setLatitude(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphLocation>)_proxy setLatitude:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBGraphLocationProtocolCxx::longitude(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphLocation>)_proxy longitude];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphLocationProtocolCxx::setLongitude(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphLocation>)_proxy setLongitude:(__bridge id)objc_arg0 ];
}

unsigned int FacebookCXX::FBGraphLocationProtocolCxx::count(){
	unsigned int objc_result = (unsigned int)[(__bridge id<FBGraphLocation>)_proxy count];
	return objc_result;
}

void * FacebookCXX::FBGraphLocationProtocolCxx::objectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge id<FBGraphLocation>)_proxy objectForKey:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBGraphLocationProtocolCxx::keyEnumerator(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphLocation>)_proxy keyEnumerator];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphLocationProtocolCxx::removeObjectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphLocation>)_proxy removeObjectForKey:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBGraphLocationProtocolCxx::setObject_forKey(void *& arg0,void *& arg1){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphLocation>)_proxy setObject:(__bridge id)objc_arg0 forKey:(__bridge id)objc_arg1 ];
}

signed char FacebookCXX::FBGraphLocationProtocolCxx::provisionedForPost(){
	signed char objc_result = (signed char)[(__bridge id<FBGraphLocation>)_proxy provisionedForPost];
	return objc_result;
}

void FacebookCXX::FBGraphLocationProtocolCxx::setProvisionedForPost(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[(__bridge id<FBGraphLocation>)_proxy setProvisionedForPost:objc_arg0 ];
}


