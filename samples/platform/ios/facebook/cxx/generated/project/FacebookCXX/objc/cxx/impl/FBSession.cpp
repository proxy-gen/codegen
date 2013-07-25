/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBSession.hpp"
#include <FacebookSDK/FBSession.h>
#include <FacebookSDK/FBSessionTokenCachingStrategy.h>
#include <FacebookSDK/FBSession.h>

using namespace FacebookCXX;

void * FBSession::init(){
	void * objc_result = (__bridge void *)[(__bridge FBSession *)proxy init];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void * FBSession::initWithPermissions(std::vector<void *>& arg0){
	void * objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[(__bridge FBSession *)proxy initWithPermissions:(__bridge NSArray *)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void * FBSession::initWithAppID_permissions_urlSchemeSuffix_tokenCacheStrategy(std::string& arg0,std::vector<void *>& arg1,std::string& arg2,FacebookCXX::FBSessionTokenCachingStrategy * arg3){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_array(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC)

	void * objc_arg3 = NULL;
	convert_FBSessionTokenCachingStrategy(objc_arg3, arg3, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[(__bridge FBSession *)proxy initWithAppID:(__bridge NSString *)objc_arg0 permissions:(__bridge NSArray *)objc_arg1 urlSchemeSuffix:(__bridge NSString *)objc_arg2 tokenCacheStrategy:(__bridge FBSessionTokenCachingStrategy *)objc_arg3 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void * FBSession::initWithAppID_permissions_defaultAudience_urlSchemeSuffix_tokenCacheStrategy(std::string& arg0,std::vector<void *>& arg1,FacebookCXX::FBSessionDefaultAudience& arg2,std::string& arg3,FacebookCXX::FBSessionTokenCachingStrategy * arg4){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_array(objc_arg1, arg1, CONVERT_TO_OBJC)

	FBSessionDefaultAudience objc_arg2 = (FBSessionDefaultAudience)arg2

	void * objc_arg3 = NULL;
	convert_string(objc_arg3, arg3, CONVERT_TO_OBJC)

	void * objc_arg4 = NULL;
	convert_FBSessionTokenCachingStrategy(objc_arg4, arg4, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[(__bridge FBSession *)proxy initWithAppID:(__bridge NSString *)objc_arg0 permissions:(__bridge NSArray *)objc_arg1 defaultAudience:objc_arg2 urlSchemeSuffix:(__bridge NSString *)objc_arg3 tokenCacheStrategy:(__bridge FBSessionTokenCachingStrategy *)objc_arg4 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void FBSession::openWithCompletionHandler(void(*arg0)(FacebookCXX::FBSession *barg0, FacebookCXX::FBSessionState &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_block(objc_arg0, arg0, CONVERT_TO_OBJC)

	[(__bridge FBSession *)proxy openWithCompletionHandler:objc_arg0 ];
}

void FBSession::openWithBehavior_completionHandler(FacebookCXX::FBSessionLoginBehavior& arg0,void(*arg1)(FacebookCXX::FBSession *barg0, FacebookCXX::FBSessionState &barg1, std::string &barg2)){
	FBSessionLoginBehavior objc_arg0 = (FBSessionLoginBehavior)arg0

	void * objc_arg1 = NULL;
	convert_block(objc_arg1, arg1, CONVERT_TO_OBJC)

	[(__bridge FBSession *)proxy openWithBehavior:objc_arg0 completionHandler:objc_arg1 ];
}

void FBSession::close(){
	[(__bridge FBSession *)proxy close];
}

void FBSession::closeAndClearTokenInformation(){
	[(__bridge FBSession *)proxy closeAndClearTokenInformation];
}

void FBSession::reauthorizeWithPermissions_behavior_completionHandler(std::vector<void *>& arg0,FacebookCXX::FBSessionLoginBehavior& arg1,void(*arg2)(FacebookCXX::FBSession *barg0, std::string &barg1)){
	void * objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC)

	FBSessionLoginBehavior objc_arg1 = (FBSessionLoginBehavior)arg1

	void * objc_arg2 = NULL;
	convert_block(objc_arg2, arg2, CONVERT_TO_OBJC)

	[(__bridge FBSession *)proxy reauthorizeWithPermissions:(__bridge NSArray *)objc_arg0 behavior:objc_arg1 completionHandler:objc_arg2 ];
}

void FBSession::reauthorizeWithReadPermissions_completionHandler(std::vector<void *>& arg0,void(*arg1)(FacebookCXX::FBSession *barg0, std::string &barg1)){
	void * objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_block(objc_arg1, arg1, CONVERT_TO_OBJC)

	[(__bridge FBSession *)proxy reauthorizeWithReadPermissions:(__bridge NSArray *)objc_arg0 completionHandler:objc_arg1 ];
}

void FBSession::reauthorizeWithPublishPermissions_defaultAudience_completionHandler(std::vector<void *>& arg0,FacebookCXX::FBSessionDefaultAudience& arg1,void(*arg2)(FacebookCXX::FBSession *barg0, std::string &barg1)){
	void * objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC)

	FBSessionDefaultAudience objc_arg1 = (FBSessionDefaultAudience)arg1

	void * objc_arg2 = NULL;
	convert_block(objc_arg2, arg2, CONVERT_TO_OBJC)

	[(__bridge FBSession *)proxy reauthorizeWithPublishPermissions:(__bridge NSArray *)objc_arg0 defaultAudience:objc_arg1 completionHandler:objc_arg2 ];
}

signed char FBSession::handleOpenURL(void *& arg0){
	void * objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC)

	signed char objc_result = [(__bridge FBSession *)proxy handleOpenURL:(__bridge NSURL *)objc_arg0 ];
	return objc_result;
}

void FBSession::handleDidBecomeActive(){
	[(__bridge FBSession *)proxy handleDidBecomeActive];
}

signed char FBSession::openActiveSessionWithAllowLoginUI(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0

	signed char objc_result = [FBSession openActiveSessionWithAllowLoginUI:objc_arg0 ];
	return objc_result;
}

signed char FBSession::openActiveSessionWithPermissions_allowLoginUI_completionHandler(std::vector<void *>& arg0,signed char& arg1,void(*arg2)(FacebookCXX::FBSession *barg0, FacebookCXX::FBSessionState &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC)

	BOOL objc_arg1 = (BOOL)arg1

	void * objc_arg2 = NULL;
	convert_block(objc_arg2, arg2, CONVERT_TO_OBJC)

	signed char objc_result = [FBSession openActiveSessionWithPermissions:(__bridge NSArray *)objc_arg0 allowLoginUI:objc_arg1 completionHandler:objc_arg2 ];
	return objc_result;
}

signed char FBSession::openActiveSessionWithReadPermissions_allowLoginUI_completionHandler(std::vector<void *>& arg0,signed char& arg1,void(*arg2)(FacebookCXX::FBSession *barg0, FacebookCXX::FBSessionState &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC)

	BOOL objc_arg1 = (BOOL)arg1

	void * objc_arg2 = NULL;
	convert_block(objc_arg2, arg2, CONVERT_TO_OBJC)

	signed char objc_result = [FBSession openActiveSessionWithReadPermissions:(__bridge NSArray *)objc_arg0 allowLoginUI:objc_arg1 completionHandler:objc_arg2 ];
	return objc_result;
}

signed char FBSession::openActiveSessionWithPublishPermissions_defaultAudience_allowLoginUI_completionHandler(std::vector<void *>& arg0,FacebookCXX::FBSessionDefaultAudience& arg1,signed char& arg2,void(*arg3)(FacebookCXX::FBSession *barg0, FacebookCXX::FBSessionState &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC)

	FBSessionDefaultAudience objc_arg1 = (FBSessionDefaultAudience)arg1

	BOOL objc_arg2 = (BOOL)arg2

	void * objc_arg3 = NULL;
	convert_block(objc_arg3, arg3, CONVERT_TO_OBJC)

	signed char objc_result = [FBSession openActiveSessionWithPublishPermissions:(__bridge NSArray *)objc_arg0 defaultAudience:objc_arg1 allowLoginUI:objc_arg2 completionHandler:objc_arg3 ];
	return objc_result;
}

FacebookCXX::FBSession * FBSession::activeSession(){
	void * objc_result = (__bridge void *)[FBSession activeSession];
	FacebookCXX::FBSession * *result = NULL;
	convert_FBSession(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBSession * FBSession::setActiveSession(FacebookCXX::FBSession * arg0){
	void * objc_arg0 = NULL;
	convert_FBSession(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBSession setActiveSession:(__bridge FBSession *)objc_arg0 ];
	FacebookCXX::FBSession * *result = NULL;
	convert_FBSession(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void FBSession::setDefaultAppID(std::string& arg0){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	[FBSession setDefaultAppID:(__bridge NSString *)objc_arg0 ];
}

std::string FBSession::defaultAppID(){
	void * objc_result = (__bridge void *)[FBSession defaultAppID];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX)
	return result;
}

signed char FBSession::isOpen(){
	signed char objc_result = [(__bridge FBSession *)proxy isOpen];
	return objc_result;
}

FacebookCXX::FBSessionState FBSession::state(){
	void * objc_result = (__bridge void *)[(__bridge FBSession *)proxy state];
	FacebookCXX::FBSessionState result;
	convert_enum(objc_result, result, CONVERT_TO_CXX)
	return result;
}

std::string FBSession::appID(){
	void * objc_result = (__bridge void *)[(__bridge FBSession *)proxy appID];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX)
	return result;
}

std::string FBSession::urlSchemeSuffix(){
	void * objc_result = (__bridge void *)[(__bridge FBSession *)proxy urlSchemeSuffix];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX)
	return result;
}

std::string FBSession::accessToken(){
	void * objc_result = (__bridge void *)[(__bridge FBSession *)proxy accessToken];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX)
	return result;
}

double FBSession::expirationDate(){
	void * objc_result = (__bridge void *)[(__bridge FBSession *)proxy expirationDate];
	double result;
	convert_date(objc_result, result, CONVERT_TO_CXX)
	return result;
}

std::vector<void *> FBSession::permissions(){
	void * objc_result = (__bridge void *)[(__bridge FBSession *)proxy permissions];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBSessionLoginType FBSession::loginType(){
	void * objc_result = (__bridge void *)[(__bridge FBSession *)proxy loginType];
	FacebookCXX::FBSessionLoginType result;
	convert_enum(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void FBSession::setLoginType(FacebookCXX::FBSessionLoginType& arg0){
	FBSessionLoginType objc_arg0 = (FBSessionLoginType)arg0

	[(__bridge FBSession *)proxy setLoginType:objc_arg0 ];
}

signed char FBSession::useSafariForLogin(){
	signed char objc_result = [(__bridge FBSession *)proxy useSafariForLogin];
	return objc_result;
}

void FBSession::setUseSafariForLogin(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0

	[(__bridge FBSession *)proxy setUseSafariForLogin:objc_arg0 ];
}


