/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBGraphObjectCxx.hpp"
#include <FacebookSDK/FBGraphObject.h>
#include <FacebookSDK/FBOpenGraphAction.h>
#include <FacebookSDK/FBOpenGraphObject.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBGraphObjectCxx::FBGraphObjectCxx(const FBGraphObjectCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBGraphObjectCxx::FBGraphObjectCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBGraphObjectCxx::~FBGraphObjectCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBGraphObjectCxx::getProxy() const{
	return _proxy;
}

FacebookCXX::FBGraphObjectProtocolCxx * FacebookCXX::FBGraphObjectCxx::graphObject(){
	void *objc_result = (__bridge void *)[FBGraphObject graphObject];
	FacebookCXX::FBGraphObjectProtocolCxx * result = NULL;
	convert_FBGraphObjectProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBGraphObjectProtocolCxx * FacebookCXX::FBGraphObjectCxx::graphObjectWrappingDictionary(std::map<void *, void *>& arg0){
	void *objc_arg0 = NULL;
	convert_dictionary(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBGraphObject graphObjectWrappingDictionary:(__bridge id)objc_arg0 ];
	FacebookCXX::FBGraphObjectProtocolCxx * result = NULL;
	convert_FBGraphObjectProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBOpenGraphActionProtocolCxx * FacebookCXX::FBGraphObjectCxx::openGraphActionForPost(){
	void *objc_result = (__bridge void *)[FBGraphObject openGraphActionForPost];
	FacebookCXX::FBOpenGraphActionProtocolCxx * result = NULL;
	convert_FBOpenGraphActionProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBOpenGraphObjectProtocolCxx * FacebookCXX::FBGraphObjectCxx::openGraphObjectForPost(){
	void *objc_result = (__bridge void *)[FBGraphObject openGraphObjectForPost];
	FacebookCXX::FBOpenGraphObjectProtocolCxx * result = NULL;
	convert_FBOpenGraphObjectProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBOpenGraphObjectProtocolCxx * FacebookCXX::FBGraphObjectCxx::openGraphObjectForPostWithType_title_image_url_description(std::string& arg0,std::string& arg1,void *& arg2,void *& arg3,std::string& arg4){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_object(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_object(objc_arg3, arg3, CONVERT_TO_OBJC);

	void *objc_arg4 = NULL;
	convert_string(objc_arg4, arg4, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBGraphObject openGraphObjectForPostWithType:(__bridge id)objc_arg0 title:(__bridge id)objc_arg1 image:(__bridge id)objc_arg2 url:(__bridge id)objc_arg3 description:(__bridge id)objc_arg4 ];
	FacebookCXX::FBOpenGraphObjectProtocolCxx * result = NULL;
	convert_FBOpenGraphObjectProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

signed char FacebookCXX::FBGraphObjectCxx::isGraphObjectID_sameAs(FacebookCXX::FBGraphObjectConformerCxx * arg0,FacebookCXX::FBGraphObjectConformerCxx * arg1){
	void *objc_arg0 = NULL;
	convert_FBGraphObjectConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_FBGraphObjectConformerCxx(objc_arg1, arg1, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[FBGraphObject isGraphObjectID:(__bridge id)objc_arg0 sameAs:(__bridge id)objc_arg1 ];
	return objc_result;
}

unsigned int FacebookCXX::FBGraphObjectCxx::count(){
	unsigned int objc_result = (unsigned int)[(__bridge FBGraphObject *)_proxy count];
	return objc_result;
}

void * FacebookCXX::FBGraphObjectCxx::objectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge FBGraphObject *)_proxy objectForKey:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBGraphObjectCxx::keyEnumerator(){
	void *objc_result = (__bridge void *)[(__bridge FBGraphObject *)_proxy keyEnumerator];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphObjectCxx::removeObjectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBGraphObject *)_proxy removeObjectForKey:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBGraphObjectCxx::setObject_forKey(void *& arg0,void *& arg1){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	[(__bridge FBGraphObject *)_proxy setObject:(__bridge id)objc_arg0 forKey:(__bridge id)objc_arg1 ];
}

signed char FacebookCXX::FBGraphObjectCxx::provisionedForPost(){
	signed char objc_result = (signed char)[(__bridge FBGraphObject *)_proxy provisionedForPost];
	return objc_result;
}

void FacebookCXX::FBGraphObjectCxx::setProvisionedForPost(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[(__bridge FBGraphObject *)_proxy setProvisionedForPost:objc_arg0 ];
}


