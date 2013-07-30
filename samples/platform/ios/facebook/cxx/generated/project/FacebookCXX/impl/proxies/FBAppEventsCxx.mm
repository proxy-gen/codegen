/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBAppEventsCxx.hpp"
#include <FacebookSDK/FBAppEvents.h>
#include <FacebookSDK/FBSession.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBAppEventsCxx::FBAppEventsCxx(const FBAppEventsCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBAppEventsCxx::FBAppEventsCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBAppEventsCxx::~FBAppEventsCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBAppEventsCxx::getProxy() const{
	return _proxy;
}

void FacebookCXX::FBAppEventsCxx::logEvent(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[FBAppEvents logEvent:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBAppEventsCxx::logEvent_valueToSum(std::string& arg0,double& arg1){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	double objc_arg1 = arg1;

	[FBAppEvents logEvent:(__bridge id)objc_arg0 valueToSum:objc_arg1 ];
}

void FacebookCXX::FBAppEventsCxx::logEvent_parameters(std::string& arg0,std::map<void *, void *>& arg1){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_dictionary(objc_arg1, arg1, CONVERT_TO_OBJC);

	[FBAppEvents logEvent:(__bridge id)objc_arg0 parameters:(__bridge id)objc_arg1 ];
}

void FacebookCXX::FBAppEventsCxx::logEvent_valueToSum_parameters(std::string& arg0,double& arg1,std::map<void *, void *>& arg2){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	double objc_arg1 = arg1;

	void *objc_arg2 = NULL;
	convert_dictionary(objc_arg2, arg2, CONVERT_TO_OBJC);

	[FBAppEvents logEvent:(__bridge id)objc_arg0 valueToSum:objc_arg1 parameters:(__bridge id)objc_arg2 ];
}

void FacebookCXX::FBAppEventsCxx::logEvent_valueToSum_parameters_session(std::string& arg0,void *& arg1,std::map<void *, void *>& arg2,FacebookCXX::FBSessionCxx * arg3){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_dictionary(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_FBSessionCxx(objc_arg3, arg3, CONVERT_TO_OBJC);

	[FBAppEvents logEvent:(__bridge id)objc_arg0 valueToSum:(__bridge id)objc_arg1 parameters:(__bridge id)objc_arg2 session:(__bridge id)objc_arg3 ];
}

void FacebookCXX::FBAppEventsCxx::logPurchase_currency(double& arg0,std::string& arg1){
	double objc_arg0 = arg0;

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	[FBAppEvents logPurchase:objc_arg0 currency:(__bridge id)objc_arg1 ];
}

void FacebookCXX::FBAppEventsCxx::logPurchase_currency_parameters(double& arg0,std::string& arg1,std::map<void *, void *>& arg2){
	double objc_arg0 = arg0;

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_dictionary(objc_arg2, arg2, CONVERT_TO_OBJC);

	[FBAppEvents logPurchase:objc_arg0 currency:(__bridge id)objc_arg1 parameters:(__bridge id)objc_arg2 ];
}

void FacebookCXX::FBAppEventsCxx::logPurchase_currency_parameters_session(double& arg0,std::string& arg1,std::map<void *, void *>& arg2,FacebookCXX::FBSessionCxx * arg3){
	double objc_arg0 = arg0;

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_dictionary(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_FBSessionCxx(objc_arg3, arg3, CONVERT_TO_OBJC);

	[FBAppEvents logPurchase:objc_arg0 currency:(__bridge id)objc_arg1 parameters:(__bridge id)objc_arg2 session:(__bridge id)objc_arg3 ];
}

signed char FacebookCXX::FBAppEventsCxx::limitEventUsage(){
	signed char objc_result = (signed char)[FBAppEvents limitEventUsage];
	return objc_result;
}

void FacebookCXX::FBAppEventsCxx::setLimitEventUsage(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[FBAppEvents setLimitEventUsage:objc_arg0 ];
}

void FacebookCXX::FBAppEventsCxx::activateApp(){
	[FBAppEvents activateApp];
}

FacebookCXX::FBAppEventsFlushBehaviorCxx FacebookCXX::FBAppEventsCxx::flushBehavior(){
	FacebookCXX::FBAppEventsFlushBehaviorCxx objc_result = (FacebookCXX::FBAppEventsFlushBehaviorCxx)[FBAppEvents flushBehavior];
	return objc_result;
}

void FacebookCXX::FBAppEventsCxx::setFlushBehavior(FacebookCXX::FBAppEventsFlushBehaviorCxx& arg0){
	FBAppEventsFlushBehavior objc_arg0 = (FBAppEventsFlushBehavior)arg0;

	[FBAppEvents setFlushBehavior:objc_arg0 ];
}

void FacebookCXX::FBAppEventsCxx::flush(){
	[FBAppEvents flush];
}


