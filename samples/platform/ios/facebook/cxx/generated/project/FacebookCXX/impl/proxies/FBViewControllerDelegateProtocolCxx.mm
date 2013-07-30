/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBViewControllerDelegateProtocolCxx.hpp"
#include <FacebookSDK/FBViewController.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBViewControllerDelegateProtocolCxx::FBViewControllerDelegateProtocolCxx(const FBViewControllerDelegateProtocolCxx* cc){
	id<FBViewControllerDelegate> proxy_id = (__bridge id<FBViewControllerDelegate>)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBViewControllerDelegateProtocolCxx::FBViewControllerDelegateProtocolCxx(const void * proxy){
	id<FBViewControllerDelegate> proxy_id = (__bridge id<FBViewControllerDelegate>)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBViewControllerDelegateProtocolCxx::~FBViewControllerDelegateProtocolCxx(){
	id<FBViewControllerDelegate> _no_op = (__bridge_transfer id<FBViewControllerDelegate>)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBViewControllerDelegateProtocolCxx::getProxy() const{
	return _proxy;
}

void FacebookCXX::FBViewControllerDelegateProtocolCxx::facebookViewControllerCancelWasPressed(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBViewControllerDelegate>)_proxy facebookViewControllerCancelWasPressed:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBViewControllerDelegateProtocolCxx::facebookViewControllerDoneWasPressed(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBViewControllerDelegate>)_proxy facebookViewControllerDoneWasPressed:(__bridge id)objc_arg0 ];
}


