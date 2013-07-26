/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBRequestCxx.hpp"
#include <FacebookSDK/FBRequest.h>
#include <FacebookSDK/FBSession.h>
#include <FacebookSDK/FBGraphObject.h>
#include <FacebookSDK/FBRequestConnection.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBRequestCxx::FBRequestCxx(const FBRequestCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBRequestCxx::FBRequestCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBRequestCxx::~FBRequestCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBRequestCxx::getProxy() const{
	return _proxy;
}

void * FacebookCXX::FBRequestCxx::init(){
	id objc_result = [(__bridge FBRequest *)_proxy init];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestCxx::initWithSession_graphPath(FacebookCXX::FBSessionCxx * arg0,std::string& arg1){
	id objc_arg0 = nil;
	convert_FBSessionCxx((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_string((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	id objc_result = [(__bridge FBRequest *)_proxy initWithSession:objc_arg0 graphPath:objc_arg1 ];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestCxx::initWithSession_graphPath_parameters_HTTPMethod(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::map<void *, void *>& arg2,std::string& arg3){
	id objc_arg0 = nil;
	convert_FBSessionCxx((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_string((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	id objc_arg2 = nil;
	convert_dictionary((__bridge void *)objc_arg2, arg2, CONVERT_TO_OBJC);

	id objc_arg3 = nil;
	convert_string((__bridge void *)objc_arg3, arg3, CONVERT_TO_OBJC);

	id objc_result = [(__bridge FBRequest *)_proxy initWithSession:objc_arg0 graphPath:objc_arg1 parameters:objc_arg2 HTTPMethod:objc_arg3 ];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestCxx::initForPostWithSession_graphPath_graphObject(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,FacebookCXX::FBGraphObjectConformerCxx * arg2){
	id objc_arg0 = nil;
	convert_FBSessionCxx((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_string((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	id objc_arg2 = nil;
	convert_FBGraphObjectConformerCxx((__bridge void *)objc_arg2, arg2, CONVERT_TO_OBJC);

	id objc_result = [(__bridge FBRequest *)_proxy initForPostWithSession:objc_arg0 graphPath:objc_arg1 graphObject:objc_arg2 ];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestCxx::initWithSession_restMethod_parameters_HTTPMethod(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::map<void *, void *>& arg2,std::string& arg3){
	id objc_arg0 = nil;
	convert_FBSessionCxx((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_string((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	id objc_arg2 = nil;
	convert_dictionary((__bridge void *)objc_arg2, arg2, CONVERT_TO_OBJC);

	id objc_arg3 = nil;
	convert_string((__bridge void *)objc_arg3, arg3, CONVERT_TO_OBJC);

	id objc_result = [(__bridge FBRequest *)_proxy initWithSession:objc_arg0 restMethod:objc_arg1 parameters:objc_arg2 HTTPMethod:objc_arg3 ];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestCxx::startWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void (^objc_arg0)(FBRequestConnection *, id, NSError *);
	objc_arg0 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		convert_FBRequestConnectionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		void * barg1;
		convert_object((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg0(barg0, barg1, barg2);
	};

	id objc_result = [(__bridge FBRequest *)_proxy startWithCompletionHandler:objc_arg0 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForMe(){
	id objc_result = [FBRequest requestForMe];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForMyFriends(){
	id objc_result = [FBRequest requestForMyFriends];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForUploadPhoto(void *& arg0){
	id objc_arg0 = nil;
	convert_object((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_result = [FBRequest requestForUploadPhoto:objc_arg0 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForPostStatusUpdate(std::string& arg0){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_result = [FBRequest requestForPostStatusUpdate:objc_arg0 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForPostStatusUpdate_place_tags(std::string& arg0,void *& arg1,void *& arg2){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_object((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	id objc_arg2 = nil;
	convert_object((__bridge void *)objc_arg2, arg2, CONVERT_TO_OBJC);

	id objc_result = [FBRequest requestForPostStatusUpdate:objc_arg0 place:objc_arg1 tags:objc_arg2 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForGraphPath(std::string& arg0){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_result = [FBRequest requestForGraphPath:objc_arg0 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForPostWithGraphPath_graphObject(std::string& arg0,FacebookCXX::FBGraphObjectConformerCxx * arg1){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_FBGraphObjectConformerCxx((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	id objc_result = [FBRequest requestForPostWithGraphPath:objc_arg0 graphObject:objc_arg1 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestWithGraphPath_parameters_HTTPMethod(std::string& arg0,std::map<void *, void *>& arg1,std::string& arg2){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_dictionary((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	id objc_arg2 = nil;
	convert_string((__bridge void *)objc_arg2, arg2, CONVERT_TO_OBJC);

	id objc_result = [FBRequest requestWithGraphPath:objc_arg0 parameters:objc_arg1 HTTPMethod:objc_arg2 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestCxx::parameters(){
	id objc_result = [(__bridge FBRequest *)_proxy parameters];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBSessionCxx * FacebookCXX::FBRequestCxx::session(){
	id objc_result = [(__bridge FBRequest *)_proxy session];
	FacebookCXX::FBSessionCxx * result = NULL;
	convert_FBSessionCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestCxx::setSession(FacebookCXX::FBSessionCxx * arg0){
	id objc_arg0 = nil;
	convert_FBSessionCxx((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBRequest *)_proxy setSession:objc_arg0 ];
}

std::string FacebookCXX::FBRequestCxx::graphPath(){
	id objc_result = [(__bridge FBRequest *)_proxy graphPath];
	std::string result;
	convert_string((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestCxx::setGraphPath(std::string& arg0){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBRequest *)_proxy setGraphPath:objc_arg0 ];
}

std::string FacebookCXX::FBRequestCxx::restMethod(){
	id objc_result = [(__bridge FBRequest *)_proxy restMethod];
	std::string result;
	convert_string((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestCxx::setRestMethod(std::string& arg0){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBRequest *)_proxy setRestMethod:objc_arg0 ];
}

std::string FacebookCXX::FBRequestCxx::HTTPMethod(){
	id objc_result = [(__bridge FBRequest *)_proxy HTTPMethod];
	std::string result;
	convert_string((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestCxx::setHTTPMethod(std::string& arg0){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBRequest *)_proxy setHTTPMethod:objc_arg0 ];
}

FacebookCXX::FBGraphObjectConformerCxx * FacebookCXX::FBRequestCxx::graphObject(){
	id objc_result = [(__bridge FBRequest *)_proxy graphObject];
	FacebookCXX::FBGraphObjectConformerCxx * result = NULL;
	convert_FBGraphObjectConformerCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestCxx::setGraphObject(FacebookCXX::FBGraphObjectConformerCxx * arg0){
	id objc_arg0 = nil;
	convert_FBGraphObjectConformerCxx((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBRequest *)_proxy setGraphObject:objc_arg0 ];
}


