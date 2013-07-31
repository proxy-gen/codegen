/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBSettingsCxx.hpp>
#include <FacebookSDK/FBSettings.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

FacebookCXX::FBSettingsCxx::FBSettingsCxx(const FBSettingsCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBSettingsCxx::FBSettingsCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBSettingsCxx::~FBSettingsCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBSettingsCxx::getProxy() const{
	return _proxy;
}

std::string FacebookCXX::FBSettingsCxx::sdkVersion(){
	void *objc_result = (__bridge void *)[FBSettings sdkVersion];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBSettingsCxx::loggingBehavior(){
	void *objc_result = (__bridge void *)[FBSettings loggingBehavior];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSettingsCxx::setLoggingBehavior(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBSettings setLoggingBehavior:(__bridge id)objc_arg0 ];
}

signed char FacebookCXX::FBSettingsCxx::shouldAutoPublishInstall(){
	signed char objc_result = (signed char)[FBSettings shouldAutoPublishInstall];
	return objc_result;
}

void FacebookCXX::FBSettingsCxx::setShouldAutoPublishInstall(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[FBSettings setShouldAutoPublishInstall:objc_arg0 ];
}

void FacebookCXX::FBSettingsCxx::publishInstall(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBSettings publishInstall:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBSettingsCxx::publishInstall_withHandler(std::string& arg0,void(*arg1)(FacebookCXX::FBGraphObjectCxx *, std::string &)){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void (^objc_arg1)(FBGraphObject *, NSError *);
	objc_arg1 = ^(FBGraphObject * objc_barg0, NSError * objc_barg1){
		FacebookCXX::FBGraphObjectCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBGraphObjectCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		std::string barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_error(objc_bcast1, barg1, CONVERT_TO_CXX);

		arg1(barg0, barg1);
	};

	[FBSettings publishInstall:(__bridge id)objc_arg0 withHandler:objc_arg1 ];
}

std::string FacebookCXX::FBSettingsCxx::appVersion(){
	void *objc_result = (__bridge void *)[FBSettings appVersion];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSettingsCxx::setAppVersion(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBSettings setAppVersion:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBSettingsCxx::clientToken(){
	void *objc_result = (__bridge void *)[FBSettings clientToken];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSettingsCxx::setClientToken(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBSettings setClientToken:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBSettingsCxx::setDefaultDisplayName(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBSettings setDefaultDisplayName:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBSettingsCxx::defaultDisplayName(){
	void *objc_result = (__bridge void *)[FBSettings defaultDisplayName];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSettingsCxx::setDefaultAppID(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBSettings setDefaultAppID:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBSettingsCxx::defaultAppID(){
	void *objc_result = (__bridge void *)[FBSettings defaultAppID];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSettingsCxx::setDefaultUrlSchemeSuffix(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBSettings setDefaultUrlSchemeSuffix:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBSettingsCxx::defaultUrlSchemeSuffix(){
	void *objc_result = (__bridge void *)[FBSettings defaultUrlSchemeSuffix];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSettingsCxx::setResourceBundleName(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBSettings setResourceBundleName:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBSettingsCxx::resourceBundleName(){
	void *objc_result = (__bridge void *)[FBSettings resourceBundleName];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSettingsCxx::setFacebookDomainPart(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBSettings setFacebookDomainPart:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBSettingsCxx::facebookDomainPart(){
	void *objc_result = (__bridge void *)[FBSettings facebookDomainPart];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBSettingsCxx::enableBetaFeatures(unsigned int& arg0){
	NSUInteger objc_arg0 = (NSUInteger)arg0;

	[FBSettings enableBetaFeatures:objc_arg0 ];
}

void FacebookCXX::FBSettingsCxx::enableBetaFeature(FacebookCXX::FBBetaFeaturesCxx& arg0){
	FBBetaFeatures objc_arg0 = (FBBetaFeatures)arg0;

	[FBSettings enableBetaFeature:objc_arg0 ];
}

void FacebookCXX::FBSettingsCxx::disableBetaFeature(FacebookCXX::FBBetaFeaturesCxx& arg0){
	FBBetaFeatures objc_arg0 = (FBBetaFeatures)arg0;

	[FBSettings disableBetaFeature:objc_arg0 ];
}

signed char FacebookCXX::FBSettingsCxx::isBetaFeatureEnabled(FacebookCXX::FBBetaFeaturesCxx& arg0){
	FBBetaFeatures objc_arg0 = (FBBetaFeatures)arg0;

	signed char objc_result = (signed char)[FBSettings isBetaFeatureEnabled:objc_arg0 ];
	return objc_result;
}


