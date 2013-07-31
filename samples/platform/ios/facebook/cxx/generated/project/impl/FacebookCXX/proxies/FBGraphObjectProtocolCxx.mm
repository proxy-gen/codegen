/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBGraphObjectProtocolCxx.hpp>
#include <FacebookSDK/FBGraphObject.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

FacebookCXX::FBGraphObjectProtocolCxx::FBGraphObjectProtocolCxx(const FBGraphObjectProtocolCxx* cc){
	id<FBGraphObject> proxy_id = (__bridge id<FBGraphObject>)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBGraphObjectProtocolCxx::FBGraphObjectProtocolCxx(const void * proxy){
	id<FBGraphObject> proxy_id = (__bridge id<FBGraphObject>)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBGraphObjectProtocolCxx::~FBGraphObjectProtocolCxx(){
	id<FBGraphObject> _no_op = (__bridge_transfer id<FBGraphObject>)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBGraphObjectProtocolCxx::getProxy() const{
	return _proxy;
}

unsigned int FacebookCXX::FBGraphObjectProtocolCxx::count(){
	unsigned int objc_result = (unsigned int)[(__bridge id<FBGraphObject>)_proxy count];
	return objc_result;
}

void * FacebookCXX::FBGraphObjectProtocolCxx::objectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge id<FBGraphObject>)_proxy objectForKey:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBGraphObjectProtocolCxx::keyEnumerator(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphObject>)_proxy keyEnumerator];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphObjectProtocolCxx::removeObjectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphObject>)_proxy removeObjectForKey:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBGraphObjectProtocolCxx::setObject_forKey(void *& arg0,void *& arg1){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphObject>)_proxy setObject:(__bridge id)objc_arg0 forKey:(__bridge id)objc_arg1 ];
}

signed char FacebookCXX::FBGraphObjectProtocolCxx::provisionedForPost(){
	signed char objc_result = (signed char)[(__bridge id<FBGraphObject>)_proxy provisionedForPost];
	return objc_result;
}

void FacebookCXX::FBGraphObjectProtocolCxx::setProvisionedForPost(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[(__bridge id<FBGraphObject>)_proxy setProvisionedForPost:objc_arg0 ];
}


