/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBCacheDescriptorCxx.hpp>
#include <FacebookSDK/FBCacheDescriptor.h>
#include <FacebookSDK/FBSession.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

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
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBCacheDescriptor *)_proxy prefetchAndCacheForSession:(__bridge id)objc_arg0 ];
}


