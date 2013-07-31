/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBLoginViewDelegateProtocolCxx.hpp>
#include <FacebookSDK/FBLoginView.h>
#include <FacebookSDK/FBGraphUser.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

FacebookCXX::FBLoginViewDelegateProtocolCxx::FBLoginViewDelegateProtocolCxx(const FBLoginViewDelegateProtocolCxx* cc){
	id<FBLoginViewDelegate> proxy_id = (__bridge id<FBLoginViewDelegate>)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBLoginViewDelegateProtocolCxx::FBLoginViewDelegateProtocolCxx(const void * proxy){
	id<FBLoginViewDelegate> proxy_id = (__bridge id<FBLoginViewDelegate>)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBLoginViewDelegateProtocolCxx::~FBLoginViewDelegateProtocolCxx(){
	id<FBLoginViewDelegate> _no_op = (__bridge_transfer id<FBLoginViewDelegate>)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBLoginViewDelegateProtocolCxx::getProxy() const{
	return _proxy;
}

void FacebookCXX::FBLoginViewDelegateProtocolCxx::loginViewShowingLoggedInUser(FacebookCXX::FBLoginViewCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBLoginViewCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBLoginViewDelegate>)_proxy loginViewShowingLoggedInUser:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBLoginViewDelegateProtocolCxx::loginViewFetchedUserInfo_user(FacebookCXX::FBLoginViewCxx * arg0,FacebookCXX::FBGraphUserConformerCxx * arg1){
	void *objc_arg0 = NULL;
	convert_FBLoginViewCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_FBGraphUserConformerCxx(objc_arg1, arg1, CONVERT_TO_OBJC);

	[(__bridge id<FBLoginViewDelegate>)_proxy loginViewFetchedUserInfo:(__bridge id)objc_arg0 user:(__bridge id)objc_arg1 ];
}

void FacebookCXX::FBLoginViewDelegateProtocolCxx::loginViewShowingLoggedOutUser(FacebookCXX::FBLoginViewCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBLoginViewCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBLoginViewDelegate>)_proxy loginViewShowingLoggedOutUser:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBLoginViewDelegateProtocolCxx::loginView_handleError(FacebookCXX::FBLoginViewCxx * arg0,std::string& arg1){
	void *objc_arg0 = NULL;
	convert_FBLoginViewCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_error(objc_arg1, arg1, CONVERT_TO_OBJC);

	[(__bridge id<FBLoginViewDelegate>)_proxy loginView:(__bridge id)objc_arg0 handleError:(__bridge id)objc_arg1 ];
}


