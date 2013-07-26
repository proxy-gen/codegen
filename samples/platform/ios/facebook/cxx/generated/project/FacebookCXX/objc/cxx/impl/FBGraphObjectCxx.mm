/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBGraphObjectCxx.hpp"
#include <FacebookSDK/FBGraphObject.h>
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

FacebookCXX::FBGraphObjectConformerCxx * FacebookCXX::FBGraphObjectCxx::graphObject(){
	id objc_result = [FBGraphObject graphObject];
	FacebookCXX::FBGraphObjectConformerCxx * result = NULL;
	convert_FBGraphObjectConformerCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBGraphObjectConformerCxx * FacebookCXX::FBGraphObjectCxx::graphObjectWrappingDictionary(std::map<void *, void *>& arg0){
	id objc_arg0 = nil;
	convert_dictionary((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_result = [FBGraphObject graphObjectWrappingDictionary:objc_arg0 ];
	FacebookCXX::FBGraphObjectConformerCxx * result = NULL;
	convert_FBGraphObjectConformerCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

signed char FacebookCXX::FBGraphObjectCxx::isGraphObjectID_sameAs(FacebookCXX::FBGraphObjectConformerCxx * arg0,FacebookCXX::FBGraphObjectConformerCxx * arg1){
	id objc_arg0 = nil;
	convert_FBGraphObjectConformerCxx((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_FBGraphObjectConformerCxx((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[FBGraphObject isGraphObjectID:objc_arg0 sameAs:objc_arg1 ];
	return objc_result;
}


