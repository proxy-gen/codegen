/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBInsightsCxx.hpp>
#include <FacebookSDK/FBInsights.h>
#include <FacebookSDK/FBSession.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

FacebookCXX::FBInsightsCxx::FBInsightsCxx(const FBInsightsCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBInsightsCxx::FBInsightsCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBInsightsCxx::~FBInsightsCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBInsightsCxx::getProxy() const{
	return _proxy;
}

std::string FacebookCXX::FBInsightsCxx::appVersion(){
	void *objc_result = (__bridge void *)[FBInsights appVersion];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBInsightsCxx::setAppVersion(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBInsights setAppVersion:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBInsightsCxx::logPurchase_currency(double& arg0,std::string& arg1){
	double objc_arg0 = arg0;

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	[FBInsights logPurchase:objc_arg0 currency:(__bridge id)objc_arg1 ];
}

void FacebookCXX::FBInsightsCxx::logPurchase_currency_parameters(double& arg0,std::string& arg1,std::map<void *, void *>& arg2){
	double objc_arg0 = arg0;

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_dictionary(objc_arg2, arg2, CONVERT_TO_OBJC);

	[FBInsights logPurchase:objc_arg0 currency:(__bridge id)objc_arg1 parameters:(__bridge id)objc_arg2 ];
}

void FacebookCXX::FBInsightsCxx::logPurchase_currency_parameters_session(double& arg0,std::string& arg1,std::map<void *, void *>& arg2,FacebookCXX::FBSessionCxx * arg3){
	double objc_arg0 = arg0;

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_dictionary(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_FBSessionCxx(objc_arg3, arg3, CONVERT_TO_OBJC);

	[FBInsights logPurchase:objc_arg0 currency:(__bridge id)objc_arg1 parameters:(__bridge id)objc_arg2 session:(__bridge id)objc_arg3 ];
}

void FacebookCXX::FBInsightsCxx::logConversionPixel_valueOfPixel(std::string& arg0,double& arg1){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	double objc_arg1 = arg1;

	[FBInsights logConversionPixel:(__bridge id)objc_arg0 valueOfPixel:objc_arg1 ];
}

void FacebookCXX::FBInsightsCxx::logConversionPixel_valueOfPixel_session(std::string& arg0,double& arg1,FacebookCXX::FBSessionCxx * arg2){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	double objc_arg1 = arg1;

	void *objc_arg2 = NULL;
	convert_FBSessionCxx(objc_arg2, arg2, CONVERT_TO_OBJC);

	[FBInsights logConversionPixel:(__bridge id)objc_arg0 valueOfPixel:objc_arg1 session:(__bridge id)objc_arg2 ];
}

FacebookCXX::FBInsightsFlushBehaviorCxx FacebookCXX::FBInsightsCxx::flushBehavior(){
	FacebookCXX::FBInsightsFlushBehaviorCxx objc_result = (FacebookCXX::FBInsightsFlushBehaviorCxx)[FBInsights flushBehavior];
	return objc_result;
}

void FacebookCXX::FBInsightsCxx::setFlushBehavior(FacebookCXX::FBInsightsFlushBehaviorCxx& arg0){
	FBInsightsFlushBehavior objc_arg0 = (FBInsightsFlushBehavior)arg0;

	[FBInsights setFlushBehavior:objc_arg0 ];
}

void FacebookCXX::FBInsightsCxx::flush(){
	[FBInsights flush];
}


