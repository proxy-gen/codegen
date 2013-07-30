/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBErrorUtilityCxx.hpp"
#include <FacebookSDK/FBErrorUtility.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBErrorUtilityCxx::FBErrorUtilityCxx(const FBErrorUtilityCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBErrorUtilityCxx::FBErrorUtilityCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBErrorUtilityCxx::~FBErrorUtilityCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBErrorUtilityCxx::getProxy() const{
	return _proxy;
}

void * FacebookCXX::FBErrorUtilityCxx::errorCategoryForError(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBErrorUtility errorCategoryForError:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBErrorUtilityCxx::shouldNotifyUserForError(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBErrorUtility shouldNotifyUserForError:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBErrorUtilityCxx::userMessageForError(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBErrorUtility userMessageForError:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}


