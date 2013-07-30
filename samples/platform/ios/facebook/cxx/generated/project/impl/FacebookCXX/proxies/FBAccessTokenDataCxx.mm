/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBAccessTokenDataCxx.hpp"
#include <FacebookSDK/FBAccessTokenData.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBAccessTokenDataCxx::FBAccessTokenDataCxx(const FBAccessTokenDataCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBAccessTokenDataCxx::FBAccessTokenDataCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBAccessTokenDataCxx::~FBAccessTokenDataCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBAccessTokenDataCxx::getProxy() const{
	return _proxy;
}

FacebookCXX::FBAccessTokenDataCxx * FacebookCXX::FBAccessTokenDataCxx::createTokenFromFacebookURL_appID_urlSchemeSuffix(void *& arg0,std::string& arg1,std::string& arg2){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBAccessTokenData createTokenFromFacebookURL:(__bridge id)objc_arg0 appID:(__bridge id)objc_arg1 urlSchemeSuffix:(__bridge id)objc_arg2 ];
	FacebookCXX::FBAccessTokenDataCxx * result = NULL;
	convert_FBAccessTokenDataCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBAccessTokenDataCxx * FacebookCXX::FBAccessTokenDataCxx::createTokenFromDictionary(std::map<void *, void *>& arg0){
	void *objc_arg0 = NULL;
	convert_dictionary(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBAccessTokenData createTokenFromDictionary:(__bridge id)objc_arg0 ];
	FacebookCXX::FBAccessTokenDataCxx * result = NULL;
	convert_FBAccessTokenDataCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBAccessTokenDataCxx * FacebookCXX::FBAccessTokenDataCxx::createTokenFromString_permissions_expirationDate_loginType_refreshDate(std::string& arg0,std::vector<void *>& arg1,double& arg2,FacebookCXX::FBSessionLoginTypeCxx& arg3,double& arg4){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_array(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_date(objc_arg2, arg2, CONVERT_TO_OBJC);

	FBSessionLoginType objc_arg3 = (FBSessionLoginType)arg3;

	void *objc_arg4 = NULL;
	convert_date(objc_arg4, arg4, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBAccessTokenData createTokenFromString:(__bridge id)objc_arg0 permissions:(__bridge id)objc_arg1 expirationDate:(__bridge id)objc_arg2 loginType:objc_arg3 refreshDate:(__bridge id)objc_arg4 ];
	FacebookCXX::FBAccessTokenDataCxx * result = NULL;
	convert_FBAccessTokenDataCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBAccessTokenDataCxx::dictionary(){
	void *objc_result = (__bridge void *)[(__bridge FBAccessTokenData *)_proxy dictionary];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

signed char FacebookCXX::FBAccessTokenDataCxx::isEqualToAccessTokenData(FacebookCXX::FBAccessTokenDataCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBAccessTokenDataCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[(__bridge FBAccessTokenData *)_proxy isEqualToAccessTokenData:(__bridge id)objc_arg0 ];
	return objc_result;
}

std::string FacebookCXX::FBAccessTokenDataCxx::accessToken(){
	void *objc_result = (__bridge void *)[(__bridge FBAccessTokenData *)_proxy accessToken];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::vector<void *> FacebookCXX::FBAccessTokenDataCxx::permissions(){
	void *objc_result = (__bridge void *)[(__bridge FBAccessTokenData *)_proxy permissions];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

double FacebookCXX::FBAccessTokenDataCxx::expirationDate(){
	void *objc_result = (__bridge void *)[(__bridge FBAccessTokenData *)_proxy expirationDate];
	double result;
	convert_date(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBSessionLoginTypeCxx FacebookCXX::FBAccessTokenDataCxx::loginType(){
	FacebookCXX::FBSessionLoginTypeCxx objc_result = (FacebookCXX::FBSessionLoginTypeCxx)[(__bridge FBAccessTokenData *)_proxy loginType];
	return objc_result;
}

double FacebookCXX::FBAccessTokenDataCxx::refreshDate(){
	void *objc_result = (__bridge void *)[(__bridge FBAccessTokenData *)_proxy refreshDate];
	double result;
	convert_date(objc_result, result, CONVERT_TO_CXX);
	return result;
}


