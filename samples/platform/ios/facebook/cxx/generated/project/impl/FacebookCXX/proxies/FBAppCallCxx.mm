/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBAppCallCxx.hpp>
#include <FacebookSDK/FBAppCall.h>
#include <FacebookSDK/FBSession.h>
#include <FacebookSDK/FBDialogsData.h>
#include <FacebookSDK/FBAppLinkData.h>
#include <FacebookSDK/FBAccessTokenData.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

FacebookCXX::FBAppCallCxx::FBAppCallCxx(const FBAppCallCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBAppCallCxx::FBAppCallCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBAppCallCxx::~FBAppCallCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBAppCallCxx::getProxy() const{
	return _proxy;
}

FacebookCXX::FBAppCallCxx * FacebookCXX::FBAppCallCxx::appCallFromURL(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_url(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBAppCall appCallFromURL:(__bridge id)objc_arg0 ];
	FacebookCXX::FBAppCallCxx * result = NULL;
	convert_FBAppCallCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

signed char FacebookCXX::FBAppCallCxx::isEqualToAppCall(FacebookCXX::FBAppCallCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBAppCallCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[(__bridge FBAppCall *)_proxy isEqualToAppCall:(__bridge id)objc_arg0 ];
	return objc_result;
}

signed char FacebookCXX::FBAppCallCxx::handleOpenURL_sourceApplication(std::string& arg0,std::string& arg1){
	void *objc_arg0 = NULL;
	convert_url(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[FBAppCall handleOpenURL:(__bridge id)objc_arg0 sourceApplication:(__bridge id)objc_arg1 ];
	return objc_result;
}

signed char FacebookCXX::FBAppCallCxx::handleOpenURL_sourceApplication_fallbackHandler(std::string& arg0,std::string& arg1,void(*arg2)(FacebookCXX::FBAppCallCxx *)){
	void *objc_arg0 = NULL;
	convert_url(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void (^objc_arg2)(FBAppCall *);
	objc_arg2 = ^(FBAppCall * objc_barg0){
		FacebookCXX::FBAppCallCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBAppCallCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		arg2(barg0);
	};

	signed char objc_result = (signed char)[FBAppCall handleOpenURL:(__bridge id)objc_arg0 sourceApplication:(__bridge id)objc_arg1 fallbackHandler:objc_arg2 ];
	return objc_result;
}

signed char FacebookCXX::FBAppCallCxx::handleOpenURL_sourceApplication_withSession(std::string& arg0,std::string& arg1,FacebookCXX::FBSessionCxx * arg2){
	void *objc_arg0 = NULL;
	convert_url(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_FBSessionCxx(objc_arg2, arg2, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[FBAppCall handleOpenURL:(__bridge id)objc_arg0 sourceApplication:(__bridge id)objc_arg1 withSession:(__bridge id)objc_arg2 ];
	return objc_result;
}

signed char FacebookCXX::FBAppCallCxx::handleOpenURL_sourceApplication_withSession_fallbackHandler(std::string& arg0,std::string& arg1,FacebookCXX::FBSessionCxx * arg2,void(*arg3)(FacebookCXX::FBAppCallCxx *)){
	void *objc_arg0 = NULL;
	convert_url(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_FBSessionCxx(objc_arg2, arg2, CONVERT_TO_OBJC);

	void (^objc_arg3)(FBAppCall *);
	objc_arg3 = ^(FBAppCall * objc_barg0){
		FacebookCXX::FBAppCallCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBAppCallCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		arg3(barg0);
	};

	signed char objc_result = (signed char)[FBAppCall handleOpenURL:(__bridge id)objc_arg0 sourceApplication:(__bridge id)objc_arg1 withSession:(__bridge id)objc_arg2 fallbackHandler:objc_arg3 ];
	return objc_result;
}

void FacebookCXX::FBAppCallCxx::handleDidBecomeActive(){
	[FBAppCall handleDidBecomeActive];
}

void FacebookCXX::FBAppCallCxx::handleDidBecomeActiveWithSession(FacebookCXX::FBSessionCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBAppCall handleDidBecomeActiveWithSession:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBAppCallCxx::openDeferredAppLink(void(*arg0)(std::string &)){
	void (^objc_arg0)(NSError *);
	objc_arg0 = ^(NSError * objc_barg0){
		std::string barg0;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_error(objc_bcast0, barg0, CONVERT_TO_CXX);

		arg0(barg0);
	};

	[FBAppCall openDeferredAppLink:objc_arg0 ];
}

std::string FacebookCXX::FBAppCallCxx::ID(){
	void *objc_result = (__bridge void *)[(__bridge FBAppCall *)_proxy ID];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::string FacebookCXX::FBAppCallCxx::error(){
	void *objc_result = (__bridge void *)[(__bridge FBAppCall *)_proxy error];
	std::string result;
	convert_error(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBDialogsDataCxx * FacebookCXX::FBAppCallCxx::dialogData(){
	void *objc_result = (__bridge void *)[(__bridge FBAppCall *)_proxy dialogData];
	FacebookCXX::FBDialogsDataCxx * result = NULL;
	convert_FBDialogsDataCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBAppLinkDataCxx * FacebookCXX::FBAppCallCxx::appLinkData(){
	void *objc_result = (__bridge void *)[(__bridge FBAppCall *)_proxy appLinkData];
	FacebookCXX::FBAppLinkDataCxx * result = NULL;
	convert_FBAppLinkDataCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBAccessTokenDataCxx * FacebookCXX::FBAppCallCxx::accessTokenData(){
	void *objc_result = (__bridge void *)[(__bridge FBAppCall *)_proxy accessTokenData];
	FacebookCXX::FBAccessTokenDataCxx * result = NULL;
	convert_FBAccessTokenDataCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}


