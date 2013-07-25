/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBRequestConnectionCxx.hpp"
#include <FacebookSDK/FBRequestConnection.h>
#include <FacebookSDK/FBRequest.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBRequestConnectionCxx::FBRequestConnectionCxx(const FBRequestConnectionCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBRequestConnectionCxx::FBRequestConnectionCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBRequestConnectionCxx::~FBRequestConnectionCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBRequestConnectionCxx::getProxy() const{
	return _proxy;
}

void * FacebookCXX::FBRequestConnectionCxx::init(){
	id objc_result = [(__bridge FBRequestConnection *)_proxy init];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestConnectionCxx::initWithTimeout(double& arg0){
	NSTimeInterval objc_arg0 = (NSTimeInterval)arg0;

	id objc_result = [(__bridge FBRequestConnection *)_proxy initWithTimeout:objc_arg0 ];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestConnectionCxx::addRequest_completionHandler(FacebookCXX::FBRequestCxx * arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	id objc_arg0 = nil;
	convert_FBRequestCxx((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	void (^objc_arg1)(FBRequestConnection *, id, NSError *);
	objc_arg1 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		convert_FBRequestConnectionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		void * barg1;
		convert_object((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg1(barg0, barg1, barg2);
	};

	[(__bridge FBRequestConnection *)_proxy addRequest:objc_arg0 completionHandler:objc_arg1 ];
}

void FacebookCXX::FBRequestConnectionCxx::addRequest_completionHandler_batchEntryName(FacebookCXX::FBRequestCxx * arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &),std::string& arg2){
	id objc_arg0 = nil;
	convert_FBRequestCxx((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	void (^objc_arg1)(FBRequestConnection *, id, NSError *);
	objc_arg1 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		convert_FBRequestConnectionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		void * barg1;
		convert_object((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg1(barg0, barg1, barg2);
	};

	id objc_arg2 = nil;
	convert_string((__bridge void *)objc_arg2, arg2, CONVERT_TO_OBJC);

	[(__bridge FBRequestConnection *)_proxy addRequest:objc_arg0 completionHandler:objc_arg1 batchEntryName:objc_arg2 ];
}

void FacebookCXX::FBRequestConnectionCxx::start(){
	[(__bridge FBRequestConnection *)_proxy start];
}

void FacebookCXX::FBRequestConnectionCxx::cancel(){
	[(__bridge FBRequestConnection *)_proxy cancel];
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForMeWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
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

	id objc_result = [FBRequestConnection startForMeWithCompletionHandler:objc_arg0 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForMyFriendsWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
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

	id objc_result = [FBRequestConnection startForMyFriendsWithCompletionHandler:objc_arg0 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForUploadPhoto_completionHandler(void *& arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	id objc_arg0 = nil;
	convert_object((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	void (^objc_arg1)(FBRequestConnection *, id, NSError *);
	objc_arg1 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		convert_FBRequestConnectionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		void * barg1;
		convert_object((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg1(barg0, barg1, barg2);
	};

	id objc_result = [FBRequestConnection startForUploadPhoto:objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForPostStatusUpdate_completionHandler(std::string& arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	void (^objc_arg1)(FBRequestConnection *, id, NSError *);
	objc_arg1 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		convert_FBRequestConnectionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		void * barg1;
		convert_object((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg1(barg0, barg1, barg2);
	};

	id objc_result = [FBRequestConnection startForPostStatusUpdate:objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForPostStatusUpdate_place_tags_completionHandler(std::string& arg0,void *& arg1,void *& arg2,void(*arg3)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_object((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	id objc_arg2 = nil;
	convert_object((__bridge void *)objc_arg2, arg2, CONVERT_TO_OBJC);

	void (^objc_arg3)(FBRequestConnection *, id, NSError *);
	objc_arg3 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		convert_FBRequestConnectionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		void * barg1;
		convert_object((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg3(barg0, barg1, barg2);
	};

	id objc_result = [FBRequestConnection startForPostStatusUpdate:objc_arg0 place:objc_arg1 tags:objc_arg2 completionHandler:objc_arg3 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startWithGraphPath_completionHandler(std::string& arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	void (^objc_arg1)(FBRequestConnection *, id, NSError *);
	objc_arg1 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		convert_FBRequestConnectionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		void * barg1;
		convert_object((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg1(barg0, barg1, barg2);
	};

	id objc_result = [FBRequestConnection startWithGraphPath:objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForPostWithGraphPath_graphObject_completionHandler(std::string& arg0,void *& arg1,void(*arg2)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_object((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	void (^objc_arg2)(FBRequestConnection *, id, NSError *);
	objc_arg2 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		convert_FBRequestConnectionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		void * barg1;
		convert_object((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg2(barg0, barg1, barg2);
	};

	id objc_result = [FBRequestConnection startForPostWithGraphPath:objc_arg0 graphObject:objc_arg1 completionHandler:objc_arg2 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startWithGraphPath_parameters_HTTPMethod_completionHandler(std::string& arg0,std::map<void *, void *>& arg1,std::string& arg2,void(*arg3)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	id objc_arg0 = nil;
	convert_string((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_dictionary((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	id objc_arg2 = nil;
	convert_string((__bridge void *)objc_arg2, arg2, CONVERT_TO_OBJC);

	void (^objc_arg3)(FBRequestConnection *, id, NSError *);
	objc_arg3 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		convert_FBRequestConnectionCxx((__bridge void *)objc_barg0, barg0, CONVERT_TO_CXX);

		void * barg1;
		convert_object((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		convert_error((__bridge void *)objc_barg2, barg2, CONVERT_TO_CXX);

		arg3(barg0, barg1, barg2);
	};

	id objc_result = [FBRequestConnection startWithGraphPath:objc_arg0 parameters:objc_arg1 HTTPMethod:objc_arg2 completionHandler:objc_arg3 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestConnectionCxx::urlRequest(){
	id objc_result = [(__bridge FBRequestConnection *)_proxy urlRequest];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestConnectionCxx::setUrlRequest(void *& arg0){
	id objc_arg0 = nil;
	convert_object((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBRequestConnection *)_proxy setUrlRequest:objc_arg0 ];
}

void * FacebookCXX::FBRequestConnectionCxx::urlResponse(){
	id objc_result = [(__bridge FBRequestConnection *)_proxy urlResponse];
	void * result;
	convert_object((__bridge void *)objc_result, result, CONVERT_TO_CXX);
	return result;
}


