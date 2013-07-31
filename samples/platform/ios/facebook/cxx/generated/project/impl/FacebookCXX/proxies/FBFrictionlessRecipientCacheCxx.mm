/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBFrictionlessRecipientCacheCxx.hpp>
#include <FacebookSDK/FBFrictionlessRecipientCache.h>
#include <FacebookSDK/FBSession.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

FacebookCXX::FBFrictionlessRecipientCacheCxx::FBFrictionlessRecipientCacheCxx(const FBFrictionlessRecipientCacheCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBFrictionlessRecipientCacheCxx::FBFrictionlessRecipientCacheCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBFrictionlessRecipientCacheCxx::~FBFrictionlessRecipientCacheCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBFrictionlessRecipientCacheCxx::getProxy() const{
	return _proxy;
}

void * FacebookCXX::FBFrictionlessRecipientCacheCxx::init(){
	void *objc_result = (__bridge void *)[(__bridge FBFrictionlessRecipientCache *)_proxy init];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

signed char FacebookCXX::FBFrictionlessRecipientCacheCxx::isFrictionlessRecipient(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[(__bridge FBFrictionlessRecipientCache *)_proxy isFrictionlessRecipient:(__bridge id)objc_arg0 ];
	return objc_result;
}

signed char FacebookCXX::FBFrictionlessRecipientCacheCxx::areFrictionlessRecipients(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[(__bridge FBFrictionlessRecipientCache *)_proxy areFrictionlessRecipients:(__bridge id)objc_arg0 ];
	return objc_result;
}

void FacebookCXX::FBFrictionlessRecipientCacheCxx::prefetchAndCacheForSession(FacebookCXX::FBSessionCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBFrictionlessRecipientCache *)_proxy prefetchAndCacheForSession:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBFrictionlessRecipientCacheCxx::prefetchAndCacheForSession_completionHandler(FacebookCXX::FBSessionCxx * arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void (^objc_arg1)(FBRequestConnection *, id, NSError *);
	objc_arg1 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBRequestConnectionCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		void * barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_object(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg1(barg0, barg1, barg2);
	};

	[(__bridge FBFrictionlessRecipientCache *)_proxy prefetchAndCacheForSession:(__bridge id)objc_arg0 completionHandler:objc_arg1 ];
}

std::vector<void *> FacebookCXX::FBFrictionlessRecipientCacheCxx::recipientIDs(){
	void *objc_result = (__bridge void *)[(__bridge FBFrictionlessRecipientCache *)_proxy recipientIDs];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBFrictionlessRecipientCacheCxx::setRecipientIDs(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBFrictionlessRecipientCache *)_proxy setRecipientIDs:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBFrictionlessRecipientCacheCxx::webDialogsWillPresentDialog_parameters_session(std::string& arg0,void *& arg1,FacebookCXX::FBSessionCxx * arg2){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_FBSessionCxx(objc_arg2, arg2, CONVERT_TO_OBJC);

	[(__bridge FBFrictionlessRecipientCache *)_proxy webDialogsWillPresentDialog:(__bridge id)objc_arg0 parameters:(__bridge id)objc_arg1 session:(__bridge id)objc_arg2 ];
}

signed char FacebookCXX::FBFrictionlessRecipientCacheCxx::webDialogsDialog_parameters_session_shouldAutoHandleURL(std::string& arg0,std::map<void *, void *>& arg1,FacebookCXX::FBSessionCxx * arg2,void *& arg3){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_dictionary(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_FBSessionCxx(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_object(objc_arg3, arg3, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[(__bridge FBFrictionlessRecipientCache *)_proxy webDialogsDialog:(__bridge id)objc_arg0 parameters:(__bridge id)objc_arg1 session:(__bridge id)objc_arg2 shouldAutoHandleURL:(__bridge id)objc_arg3 ];
	return objc_result;
}


