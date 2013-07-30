/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBDialogsParamsCxx.hpp"
#include <FacebookSDK/FBDialogsParams.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBDialogsParamsCxx::FBDialogsParamsCxx(const FBDialogsParamsCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBDialogsParamsCxx::FBDialogsParamsCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBDialogsParamsCxx::~FBDialogsParamsCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBDialogsParamsCxx::getProxy() const{
	return _proxy;
}


