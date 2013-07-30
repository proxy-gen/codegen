/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBOpenGraphObjectProtocolCxx.hpp"
#include <FacebookSDK/FBOpenGraphObject.h>
#include <FacebookSDK/FBGraphObject.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBOpenGraphObjectProtocolCxx::FBOpenGraphObjectProtocolCxx(const FBOpenGraphObjectProtocolCxx* cc){
	id<FBOpenGraphObject> proxy_id = (__bridge id<FBOpenGraphObject>)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBOpenGraphObjectProtocolCxx::FBOpenGraphObjectProtocolCxx(const void * proxy){
	id<FBOpenGraphObject> proxy_id = (__bridge id<FBOpenGraphObject>)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBOpenGraphObjectProtocolCxx::~FBOpenGraphObjectProtocolCxx(){
	id<FBOpenGraphObject> _no_op = (__bridge_transfer id<FBOpenGraphObject>)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBOpenGraphObjectProtocolCxx::getProxy() const{
	return _proxy;
}

std::string FacebookCXX::FBOpenGraphObjectProtocolCxx::_id(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphObject>)_proxy id];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphObjectProtocolCxx::setId(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphObject>)_proxy setId:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBOpenGraphObjectProtocolCxx::type(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphObject>)_proxy type];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphObjectProtocolCxx::setType(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphObject>)_proxy setType:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBOpenGraphObjectProtocolCxx::title(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphObject>)_proxy title];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphObjectProtocolCxx::setTitle(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphObject>)_proxy setTitle:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBOpenGraphObjectProtocolCxx::image(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphObject>)_proxy image];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphObjectProtocolCxx::setImage(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphObject>)_proxy setImage:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBOpenGraphObjectProtocolCxx::url(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphObject>)_proxy url];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphObjectProtocolCxx::setUrl(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphObject>)_proxy setUrl:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBOpenGraphObjectProtocolCxx::description(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphObject>)_proxy description];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphObjectProtocolCxx::setDescription(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphObject>)_proxy setDescription:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBGraphObjectProtocolCxx * FacebookCXX::FBOpenGraphObjectProtocolCxx::data(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphObject>)_proxy data];
	FacebookCXX::FBGraphObjectProtocolCxx * result = NULL;
	convert_FBGraphObjectProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphObjectProtocolCxx::setData(FacebookCXX::FBGraphObjectConformerCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBGraphObjectConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphObject>)_proxy setData:(__bridge id)objc_arg0 ];
}

unsigned int FacebookCXX::FBOpenGraphObjectProtocolCxx::count(){
	unsigned int objc_result = (unsigned int)[(__bridge id<FBOpenGraphObject>)_proxy count];
	return objc_result;
}

void * FacebookCXX::FBOpenGraphObjectProtocolCxx::objectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphObject>)_proxy objectForKey:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBOpenGraphObjectProtocolCxx::keyEnumerator(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphObject>)_proxy keyEnumerator];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphObjectProtocolCxx::removeObjectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphObject>)_proxy removeObjectForKey:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBOpenGraphObjectProtocolCxx::setObject_forKey(void *& arg0,void *& arg1){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphObject>)_proxy setObject:(__bridge id)objc_arg0 forKey:(__bridge id)objc_arg1 ];
}

signed char FacebookCXX::FBOpenGraphObjectProtocolCxx::provisionedForPost(){
	signed char objc_result = (signed char)[(__bridge id<FBOpenGraphObject>)_proxy provisionedForPost];
	return objc_result;
}

void FacebookCXX::FBOpenGraphObjectProtocolCxx::setProvisionedForPost(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[(__bridge id<FBOpenGraphObject>)_proxy setProvisionedForPost:objc_arg0 ];
}


