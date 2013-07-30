/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBRequestConnectionCxx.hpp"
#include <FacebookSDK/FBRequestConnection.h>
#include <FacebookSDK/FBRequest.h>
#include <FacebookSDK/FBSession.h>
#include <FacebookSDK/FBGraphObject.h>
#include <FacebookSDK/FBOpenGraphObject.h>
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
	void *objc_result = (__bridge void *)[(__bridge FBRequestConnection *)_proxy init];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestConnectionCxx::initWithTimeout(double& arg0){
	NSTimeInterval objc_arg0 = (NSTimeInterval)arg0;

	void *objc_result = (__bridge void *)[(__bridge FBRequestConnection *)_proxy initWithTimeout:objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestConnectionCxx::addRequest_completionHandler(FacebookCXX::FBRequestCxx * arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_FBRequestCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

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

	[(__bridge FBRequestConnection *)_proxy addRequest:(__bridge id)objc_arg0 completionHandler:objc_arg1 ];
}

void FacebookCXX::FBRequestConnectionCxx::addRequest_completionHandler_batchEntryName(FacebookCXX::FBRequestCxx * arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &),std::string& arg2){
	void *objc_arg0 = NULL;
	convert_FBRequestCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

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

	void *objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC);

	[(__bridge FBRequestConnection *)_proxy addRequest:(__bridge id)objc_arg0 completionHandler:objc_arg1 batchEntryName:(__bridge id)objc_arg2 ];
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
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBRequestConnectionCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		void * barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_object(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg0(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBRequestConnection startForMeWithCompletionHandler:objc_arg0 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForMyFriendsWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void (^objc_arg0)(FBRequestConnection *, id, NSError *);
	objc_arg0 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBRequestConnectionCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		void * barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_object(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg0(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBRequestConnection startForMyFriendsWithCompletionHandler:objc_arg0 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForUploadPhoto_completionHandler(void *& arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

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

	void *objc_result = (__bridge void *)[FBRequestConnection startForUploadPhoto:(__bridge id)objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForPostStatusUpdate_completionHandler(std::string& arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

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

	void *objc_result = (__bridge void *)[FBRequestConnection startForPostStatusUpdate:(__bridge id)objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForPostStatusUpdate_place_tags_completionHandler(std::string& arg0,void *& arg1,void *& arg2,void(*arg3)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_object(objc_arg2, arg2, CONVERT_TO_OBJC);

	void (^objc_arg3)(FBRequestConnection *, id, NSError *);
	objc_arg3 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBRequestConnectionCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		void * barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_object(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg3(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBRequestConnection startForPostStatusUpdate:(__bridge id)objc_arg0 place:(__bridge id)objc_arg1 tags:(__bridge id)objc_arg2 completionHandler:objc_arg3 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForCustomAudienceThirdPartyID_completionHandler(FacebookCXX::FBSessionCxx * arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
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

	void *objc_result = (__bridge void *)[FBRequestConnection startForCustomAudienceThirdPartyID:(__bridge id)objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startWithGraphPath_completionHandler(std::string& arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

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

	void *objc_result = (__bridge void *)[FBRequestConnection startWithGraphPath:(__bridge id)objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForDeleteObject_completionHandler(void *& arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

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

	void *objc_result = (__bridge void *)[FBRequestConnection startForDeleteObject:(__bridge id)objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForPostWithGraphPath_graphObject_completionHandler(std::string& arg0,FacebookCXX::FBGraphObjectConformerCxx * arg1,void(*arg2)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_FBGraphObjectConformerCxx(objc_arg1, arg1, CONVERT_TO_OBJC);

	void (^objc_arg2)(FBRequestConnection *, id, NSError *);
	objc_arg2 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBRequestConnectionCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		void * barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_object(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg2(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBRequestConnection startForPostWithGraphPath:(__bridge id)objc_arg0 graphObject:(__bridge id)objc_arg1 completionHandler:objc_arg2 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startWithGraphPath_parameters_HTTPMethod_completionHandler(std::string& arg0,std::map<void *, void *>& arg1,std::string& arg2,void(*arg3)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_dictionary(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC);

	void (^objc_arg3)(FBRequestConnection *, id, NSError *);
	objc_arg3 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBRequestConnectionCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		void * barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_object(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg3(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBRequestConnection startWithGraphPath:(__bridge id)objc_arg0 parameters:(__bridge id)objc_arg1 HTTPMethod:(__bridge id)objc_arg2 completionHandler:objc_arg3 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForPostOpenGraphObject_completionHandler(FacebookCXX::FBOpenGraphObjectConformerCxx * arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_FBOpenGraphObjectConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

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

	void *objc_result = (__bridge void *)[FBRequestConnection startForPostOpenGraphObject:(__bridge id)objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForPostOpenGraphObjectWithType_title_image_url_description_objectProperties_completionHandler(std::string& arg0,std::string& arg1,void *& arg2,void *& arg3,std::string& arg4,std::map<void *, void *>& arg5,void(*arg6)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_object(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_object(objc_arg3, arg3, CONVERT_TO_OBJC);

	void *objc_arg4 = NULL;
	convert_string(objc_arg4, arg4, CONVERT_TO_OBJC);

	void *objc_arg5 = NULL;
	convert_dictionary(objc_arg5, arg5, CONVERT_TO_OBJC);

	void (^objc_arg6)(FBRequestConnection *, id, NSError *);
	objc_arg6 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBRequestConnectionCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		void * barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_object(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg6(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBRequestConnection startForPostOpenGraphObjectWithType:(__bridge id)objc_arg0 title:(__bridge id)objc_arg1 image:(__bridge id)objc_arg2 url:(__bridge id)objc_arg3 description:(__bridge id)objc_arg4 objectProperties:(__bridge id)objc_arg5 completionHandler:objc_arg6 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForUpdateOpenGraphObject_completionHandler(FacebookCXX::FBOpenGraphObjectConformerCxx * arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_FBOpenGraphObjectConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

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

	void *objc_result = (__bridge void *)[FBRequestConnection startForUpdateOpenGraphObject:(__bridge id)objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForUpdateOpenGraphObjectWithId_title_image_url_description_objectProperties_completionHandler(void *& arg0,std::string& arg1,void *& arg2,void *& arg3,std::string& arg4,std::map<void *, void *>& arg5,void(*arg6)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_object(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_object(objc_arg3, arg3, CONVERT_TO_OBJC);

	void *objc_arg4 = NULL;
	convert_string(objc_arg4, arg4, CONVERT_TO_OBJC);

	void *objc_arg5 = NULL;
	convert_dictionary(objc_arg5, arg5, CONVERT_TO_OBJC);

	void (^objc_arg6)(FBRequestConnection *, id, NSError *);
	objc_arg6 = ^(FBRequestConnection * objc_barg0, id objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBRequestConnectionCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBRequestConnectionCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		void * barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_object(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg6(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBRequestConnection startForUpdateOpenGraphObjectWithId:(__bridge id)objc_arg0 title:(__bridge id)objc_arg1 image:(__bridge id)objc_arg2 url:(__bridge id)objc_arg3 description:(__bridge id)objc_arg4 objectProperties:(__bridge id)objc_arg5 completionHandler:objc_arg6 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestConnectionCxx::startForUploadStagingResourceWithImage_completionHandler(void *& arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

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

	void *objc_result = (__bridge void *)[FBRequestConnection startForUploadStagingResourceWithImage:(__bridge id)objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestConnectionCxx::urlRequest(){
	void *objc_result = (__bridge void *)[(__bridge FBRequestConnection *)_proxy urlRequest];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestConnectionCxx::setUrlRequest(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBRequestConnection *)_proxy setUrlRequest:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBRequestConnectionCxx::urlResponse(){
	void *objc_result = (__bridge void *)[(__bridge FBRequestConnection *)_proxy urlResponse];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}


