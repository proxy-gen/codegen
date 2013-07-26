/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBCacheDescriptorCxx.hpp"
#include <FacebookSDK/FBCacheDescriptor.h>
#include <FacebookSDK/FBSession.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBCacheDescriptorCxx::FBCacheDescriptorCxx(const FBCacheDescriptorCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBCacheDescriptorCxx::FBCacheDescriptorCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBCacheDescriptorCxx::~FBCacheDescriptorCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBCacheDescriptorCxx::getProxy() const{
	return _proxy;
}

void FacebookCXX::FBCacheDescriptorCxx::prefetchAndCacheForSession(FacebookCXX::FBSessionCxx * arg0){
	id objc_arg0 = nil;
	convert_FBSessionCxx((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBCacheDescriptor *)_proxy prefetchAndCacheForSession:objc_arg0 ];
}


