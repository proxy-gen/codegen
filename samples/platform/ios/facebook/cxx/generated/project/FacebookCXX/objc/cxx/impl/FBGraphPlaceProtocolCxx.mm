/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBGraphPlaceProtocolCxx.hpp"
#include <FacebookSDK/FBGraphPlace.h>
#include <FacebookSDK/FBGraphLocation.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBGraphPlaceProtocolCxx::FBGraphPlaceProtocolCxx(const FBGraphPlaceProtocolCxx* cc){
	id<FBGraphPlace> proxy_id = (__bridge id<FBGraphPlace>)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBGraphPlaceProtocolCxx::FBGraphPlaceProtocolCxx(const void * proxy){
	id<FBGraphPlace> proxy_id = (__bridge id<FBGraphPlace>)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBGraphPlaceProtocolCxx::~FBGraphPlaceProtocolCxx(){
	id<FBGraphPlace> _no_op = (__bridge_transfer id<FBGraphPlace>)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBGraphPlaceProtocolCxx::getProxy() const{
	return _proxy;
}

std::string FacebookCXX::FBGraphPlaceProtocolCxx::_id(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphPlace>)_proxy id];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphPlaceProtocolCxx::setId(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphPlace>)_proxy setId:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBGraphPlaceProtocolCxx::name(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphPlace>)_proxy name];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphPlaceProtocolCxx::setName(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphPlace>)_proxy setName:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBGraphPlaceProtocolCxx::category(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphPlace>)_proxy category];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphPlaceProtocolCxx::setCategory(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphPlace>)_proxy setCategory:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBGraphLocationProtocolCxx * FacebookCXX::FBGraphPlaceProtocolCxx::location(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphPlace>)_proxy location];
	FacebookCXX::FBGraphLocationProtocolCxx * result = NULL;
	convert_FBGraphLocationProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphPlaceProtocolCxx::setLocation(FacebookCXX::FBGraphLocationConformerCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBGraphLocationConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphPlace>)_proxy setLocation:(__bridge id)objc_arg0 ];
}

unsigned int FacebookCXX::FBGraphPlaceProtocolCxx::count(){
	unsigned int objc_result = (unsigned int)[(__bridge id<FBGraphPlace>)_proxy count];
	return objc_result;
}

void * FacebookCXX::FBGraphPlaceProtocolCxx::objectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge id<FBGraphPlace>)_proxy objectForKey:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBGraphPlaceProtocolCxx::keyEnumerator(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphPlace>)_proxy keyEnumerator];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphPlaceProtocolCxx::removeObjectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphPlace>)_proxy removeObjectForKey:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBGraphPlaceProtocolCxx::setObject_forKey(void *& arg0,void *& arg1){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphPlace>)_proxy setObject:(__bridge id)objc_arg0 forKey:(__bridge id)objc_arg1 ];
}


