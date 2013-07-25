/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBSessionCxx.hpp"
#include <FacebookSDK/FBSession.h>
#include <FacebookSDK/FBSessionTokenCachingStrategy.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBSessionCxx::FBSessionCxx(const FBSessionCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBSessionCxx::FBSessionCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBSessionCxx::~FBSessionCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBSessionCxx::getProxy() const{
	return _proxy;
}

void * FacebookCXX::FBSessionCxx::init(){
	id objc_result = [(__bridge FBSession *)_proxy init];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBSessionCxx::initWithPermissions(std::vector<void *>& arg0){
	id objc_arg0 = nil;
	convert_array((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_result = [(__bridge FBSession *)_proxy initWithPermissions:objc_arg0 ];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBSessionCxx::initWithAppID_permissions_urlSchemeSuffix_tokenCacheStrategy(std::string& arg0,std::vector<void *>& arg1,std::string& arg2,FacebookCXX::FBSessionTokenCachingStrategyCxx * arg3){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_array((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	id objc_arg2 = nil;
	convert_string((__bridge void *)objc_arg2, arg2, CONVERT_TO_OBJC);

	id objc_arg3 = nil;
	convert_FBSessionTokenCachingStrategyCxx((__bridge void *)objc_arg3, arg3, CONVERT_TO_OBJC);

	id objc_result = [(__bridge FBSession *)_proxy initWithAppID:objc_arg0 permissions:objc_arg1 urlSchemeSuffix:objc_arg2 tokenCacheStrategy:objc_arg3 ];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBSessionCxx::initWithAppID_permissions_defaultAudience_urlSchemeSuffix_tokenCacheStrategy(std::string& arg0,std::vector<void *>& arg1,FacebookCXX::FBSessionDefaultAudienceCxx& arg2,std::string& arg3,FacebookCXX::FBSessionTokenCachingStrategyCxx * arg4){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_array((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	FBSessionDefaultAudience objc_arg2 = (FBSessionDefaultAudience)arg2;

	id objc_arg3 = nil;
	convert_string((__bridge void *)objc_arg3, arg3, CONVERT_TO_OBJC);

	id objc_arg4 = nil;
	convert_FBSessionTokenCachingStrategyCxx((__bridge void *)objc_arg4, arg4, CONVERT_TO_OBJC);

	id objc_result = [(__bridge FBSession *)_proxy initWithAppID:objc_arg0 permissions:objc_arg1 defaultAudience:objc_arg2 urlSchemeSuffix:objc_arg3 tokenCacheStrategy:objc_arg4 ];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSessionCxx::openWithCompletionHandler(void(*arg0)(FacebookCXX::FBSessionCxx *, FacebookCXX::FBSessionStateCxx &, std::string &)){
	void (^objc_arg0)(FBSession *, FBSessionState, NSError *);
	objc_arg0 = ^(FBSession * objc_barg0, FBSessionState objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBSessionCxx *barg0 = NULL;
		convert_FBSessionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		FacebookCXX::FBSessionStateCxx barg1 = (FacebookCXX::FBSessionStateCxx)objc_barg1;

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg0(barg0, barg1, barg2);
	};

	[(__bridge FBSession *)_proxy openWithCompletionHandler:objc_arg0 ];
}

void FacebookCXX::FBSessionCxx::openWithBehavior_completionHandler(FacebookCXX::FBSessionLoginBehaviorCxx& arg0,void(*arg1)(FacebookCXX::FBSessionCxx *, FacebookCXX::FBSessionStateCxx &, std::string &)){
	FBSessionLoginBehavior objc_arg0 = (FBSessionLoginBehavior)arg0;

	void (^objc_arg1)(FBSession *, FBSessionState, NSError *);
	objc_arg1 = ^(FBSession * objc_barg0, FBSessionState objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBSessionCxx *barg0 = NULL;
		convert_FBSessionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		FacebookCXX::FBSessionStateCxx barg1 = (FacebookCXX::FBSessionStateCxx)objc_barg1;

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg1(barg0, barg1, barg2);
	};

	[(__bridge FBSession *)_proxy openWithBehavior:objc_arg0 completionHandler:objc_arg1 ];
}

void FacebookCXX::FBSessionCxx::close(){
	[(__bridge FBSession *)_proxy close];
}

void FacebookCXX::FBSessionCxx::closeAndClearTokenInformation(){
	[(__bridge FBSession *)_proxy closeAndClearTokenInformation];
}

void FacebookCXX::FBSessionCxx::reauthorizeWithPermissions_behavior_completionHandler(std::vector<void *>& arg0,FacebookCXX::FBSessionLoginBehaviorCxx& arg1,void(*arg2)(FacebookCXX::FBSessionCxx *, std::string &)){
	id objc_arg0 = nil;
	convert_array((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	FBSessionLoginBehavior objc_arg1 = (FBSessionLoginBehavior)arg1;

	void (^objc_arg2)(FBSession *, NSError *);
	objc_arg2 = ^(FBSession * objc_barg0, NSError * objc_barg1){
		FacebookCXX::FBSessionCxx *barg0 = NULL;
		convert_FBSessionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		std::string barg1;
		convert_error((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		arg2(barg0, barg1);
	};

	[(__bridge FBSession *)_proxy reauthorizeWithPermissions:objc_arg0 behavior:objc_arg1 completionHandler:objc_arg2 ];
}

void FacebookCXX::FBSessionCxx::reauthorizeWithReadPermissions_completionHandler(std::vector<void *>& arg0,void(*arg1)(FacebookCXX::FBSessionCxx *, std::string &)){
	id objc_arg0 = nil;
	convert_array((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	void (^objc_arg1)(FBSession *, NSError *);
	objc_arg1 = ^(FBSession * objc_barg0, NSError * objc_barg1){
		FacebookCXX::FBSessionCxx *barg0 = NULL;
		convert_FBSessionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		std::string barg1;
		convert_error((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		arg1(barg0, barg1);
	};

	[(__bridge FBSession *)_proxy reauthorizeWithReadPermissions:objc_arg0 completionHandler:objc_arg1 ];
}

void FacebookCXX::FBSessionCxx::reauthorizeWithPublishPermissions_defaultAudience_completionHandler(std::vector<void *>& arg0,FacebookCXX::FBSessionDefaultAudienceCxx& arg1,void(*arg2)(FacebookCXX::FBSessionCxx *, std::string &)){
	id objc_arg0 = nil;
	convert_array((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	FBSessionDefaultAudience objc_arg1 = (FBSessionDefaultAudience)arg1;

	void (^objc_arg2)(FBSession *, NSError *);
	objc_arg2 = ^(FBSession * objc_barg0, NSError * objc_barg1){
		FacebookCXX::FBSessionCxx *barg0 = NULL;
		convert_FBSessionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		std::string barg1;
		convert_error((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		arg2(barg0, barg1);
	};

	[(__bridge FBSession *)_proxy reauthorizeWithPublishPermissions:objc_arg0 defaultAudience:objc_arg1 completionHandler:objc_arg2 ];
}

signed char FacebookCXX::FBSessionCxx::handleOpenURL(void *& arg0){
	id objc_arg0 = nil;
	convert_object((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[(__bridge FBSession *)_proxy handleOpenURL:objc_arg0 ];
	return objc_result;
}

void FacebookCXX::FBSessionCxx::handleDidBecomeActive(){
	[(__bridge FBSession *)_proxy handleDidBecomeActive];
}

signed char FacebookCXX::FBSessionCxx::openActiveSessionWithAllowLoginUI(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	signed char objc_result = (signed char)[FBSession openActiveSessionWithAllowLoginUI:objc_arg0 ];
	return objc_result;
}

signed char FacebookCXX::FBSessionCxx::openActiveSessionWithPermissions_allowLoginUI_completionHandler(std::vector<void *>& arg0,signed char& arg1,void(*arg2)(FacebookCXX::FBSessionCxx *, FacebookCXX::FBSessionStateCxx &, std::string &)){
	id objc_arg0 = nil;
	convert_array((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	BOOL objc_arg1 = (BOOL)arg1;

	void (^objc_arg2)(FBSession *, FBSessionState, NSError *);
	objc_arg2 = ^(FBSession * objc_barg0, FBSessionState objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBSessionCxx *barg0 = NULL;
		convert_FBSessionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		FacebookCXX::FBSessionStateCxx barg1 = (FacebookCXX::FBSessionStateCxx)objc_barg1;

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg2(barg0, barg1, barg2);
	};

	signed char objc_result = (signed char)[FBSession openActiveSessionWithPermissions:objc_arg0 allowLoginUI:objc_arg1 completionHandler:objc_arg2 ];
	return objc_result;
}

signed char FacebookCXX::FBSessionCxx::openActiveSessionWithReadPermissions_allowLoginUI_completionHandler(std::vector<void *>& arg0,signed char& arg1,void(*arg2)(FacebookCXX::FBSessionCxx *, FacebookCXX::FBSessionStateCxx &, std::string &)){
	id objc_arg0 = nil;
	convert_array((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	BOOL objc_arg1 = (BOOL)arg1;

	void (^objc_arg2)(FBSession *, FBSessionState, NSError *);
	objc_arg2 = ^(FBSession * objc_barg0, FBSessionState objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBSessionCxx *barg0 = NULL;
		convert_FBSessionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		FacebookCXX::FBSessionStateCxx barg1 = (FacebookCXX::FBSessionStateCxx)objc_barg1;

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg2(barg0, barg1, barg2);
	};

	signed char objc_result = (signed char)[FBSession openActiveSessionWithReadPermissions:objc_arg0 allowLoginUI:objc_arg1 completionHandler:objc_arg2 ];
	return objc_result;
}

signed char FacebookCXX::FBSessionCxx::openActiveSessionWithPublishPermissions_defaultAudience_allowLoginUI_completionHandler(std::vector<void *>& arg0,FacebookCXX::FBSessionDefaultAudienceCxx& arg1,signed char& arg2,void(*arg3)(FacebookCXX::FBSessionCxx *, FacebookCXX::FBSessionStateCxx &, std::string &)){
	id objc_arg0 = nil;
	convert_array((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	FBSessionDefaultAudience objc_arg1 = (FBSessionDefaultAudience)arg1;

	BOOL objc_arg2 = (BOOL)arg2;

	void (^objc_arg3)(FBSession *, FBSessionState, NSError *);
	objc_arg3 = ^(FBSession * objc_barg0, FBSessionState objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBSessionCxx *barg0 = NULL;
		convert_FBSessionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		FacebookCXX::FBSessionStateCxx barg1 = (FacebookCXX::FBSessionStateCxx)objc_barg1;

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg3(barg0, barg1, barg2);
	};

	signed char objc_result = (signed char)[FBSession openActiveSessionWithPublishPermissions:objc_arg0 defaultAudience:objc_arg1 allowLoginUI:objc_arg2 completionHandler:objc_arg3 ];
	return objc_result;
}

FacebookCXX::FBSessionCxx * FacebookCXX::FBSessionCxx::activeSession(){
	id objc_result = [FBSession activeSession];
	FacebookCXX::FBSessionCxx * result = NULL;
	convert_FBSessionCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBSessionCxx * FacebookCXX::FBSessionCxx::setActiveSession(FacebookCXX::FBSessionCxx * arg0){
	id objc_arg0 = nil;
	convert_FBSessionCxx((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_result = [FBSession setActiveSession:objc_arg0 ];
	FacebookCXX::FBSessionCxx * result = NULL;
	convert_FBSessionCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSessionCxx::setDefaultAppID(std::string& arg0){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBSession setDefaultAppID:objc_arg0 ];
}

std::string FacebookCXX::FBSessionCxx::defaultAppID(){
	id objc_result = [FBSession defaultAppID];
	std::string result;
	convert_string((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

signed char FacebookCXX::FBSessionCxx::isOpen(){
	signed char objc_result = (signed char)[(__bridge FBSession *)_proxy isOpen];
	return objc_result;
}

FacebookCXX::FBSessionStateCxx FacebookCXX::FBSessionCxx::state(){
	FacebookCXX::FBSessionStateCxx objc_result = (FacebookCXX::FBSessionStateCxx)[(__bridge FBSession *)_proxy state];
	return objc_result;
}

std::string FacebookCXX::FBSessionCxx::appID(){
	id objc_result = [(__bridge FBSession *)_proxy appID];
	std::string result;
	convert_string((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::string FacebookCXX::FBSessionCxx::urlSchemeSuffix(){
	id objc_result = [(__bridge FBSession *)_proxy urlSchemeSuffix];
	std::string result;
	convert_string((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::string FacebookCXX::FBSessionCxx::accessToken(){
	id objc_result = [(__bridge FBSession *)_proxy accessToken];
	std::string result;
	convert_string((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

double FacebookCXX::FBSessionCxx::expirationDate(){
	id objc_result = [(__bridge FBSession *)_proxy expirationDate];
	double result;
	convert_date((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::vector<void *> FacebookCXX::FBSessionCxx::permissions(){
	id objc_result = [(__bridge FBSession *)_proxy permissions];
	std::vector<void *> result;
	convert_array((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBSessionLoginTypeCxx FacebookCXX::FBSessionCxx::loginType(){
	FacebookCXX::FBSessionLoginTypeCxx objc_result = (FacebookCXX::FBSessionLoginTypeCxx)[(__bridge FBSession *)_proxy loginType];
	return objc_result;
}

void FacebookCXX::FBSessionCxx::setLoginType(FacebookCXX::FBSessionLoginTypeCxx& arg0){
	FBSessionLoginType objc_arg0 = (FBSessionLoginType)arg0;

	[(__bridge FBSession *)_proxy setLoginType:objc_arg0 ];
}

signed char FacebookCXX::FBSessionCxx::useSafariForLogin(){
	signed char objc_result = (signed char)[(__bridge FBSession *)_proxy useSafariForLogin];
	return objc_result;
}

void FacebookCXX::FBSessionCxx::setUseSafariForLogin(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[(__bridge FBSession *)_proxy setUseSafariForLogin:objc_arg0 ];
}


