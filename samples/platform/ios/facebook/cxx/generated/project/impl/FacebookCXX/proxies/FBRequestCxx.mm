/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBRequestCxx.hpp"
#include <FacebookSDK/FBRequest.h>
#include <FacebookSDK/FBSession.h>
#include <FacebookSDK/FBGraphObject.h>
#include <FacebookSDK/FBRequestConnection.h>
#include <FacebookSDK/FBOpenGraphObject.h>
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
	void *objc_result = (__bridge void *)[(__bridge FBRequest *)_proxy init];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestCxx::initWithSession_graphPath(FacebookCXX::FBSessionCxx * arg0,std::string& arg1){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge FBRequest *)_proxy initWithSession:(__bridge id)objc_arg0 graphPath:(__bridge id)objc_arg1 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestCxx::initWithSession_graphPath_parameters_HTTPMethod(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::map<void *, void *>& arg2,std::string& arg3){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_dictionary(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_string(objc_arg3, arg3, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge FBRequest *)_proxy initWithSession:(__bridge id)objc_arg0 graphPath:(__bridge id)objc_arg1 parameters:(__bridge id)objc_arg2 HTTPMethod:(__bridge id)objc_arg3 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestCxx::initForPostWithSession_graphPath_graphObject(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,FacebookCXX::FBGraphObjectConformerCxx * arg2){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_FBGraphObjectConformerCxx(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge FBRequest *)_proxy initForPostWithSession:(__bridge id)objc_arg0 graphPath:(__bridge id)objc_arg1 graphObject:(__bridge id)objc_arg2 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestCxx::initWithSession_restMethod_parameters_HTTPMethod(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::map<void *, void *>& arg2,std::string& arg3){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_dictionary(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_string(objc_arg3, arg3, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge FBRequest *)_proxy initWithSession:(__bridge id)objc_arg0 restMethod:(__bridge id)objc_arg1 parameters:(__bridge id)objc_arg2 HTTPMethod:(__bridge id)objc_arg3 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestConnectionCxx * FacebookCXX::FBRequestCxx::startWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &)){
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

	void *objc_result = (__bridge void *)[(__bridge FBRequest *)_proxy startWithCompletionHandler:objc_arg0 ];
	FacebookCXX::FBRequestConnectionCxx * result = NULL;
	convert_FBRequestConnectionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForMe(){
	void *objc_result = (__bridge void *)[FBRequest requestForMe];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForMyFriends(){
	void *objc_result = (__bridge void *)[FBRequest requestForMyFriends];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForUploadPhoto(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBRequest requestForUploadPhoto:(__bridge id)objc_arg0 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForPostStatusUpdate(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBRequest requestForPostStatusUpdate:(__bridge id)objc_arg0 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForPostStatusUpdate_place_tags(std::string& arg0,void *& arg1,void *& arg2){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_object(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBRequest requestForPostStatusUpdate:(__bridge id)objc_arg0 place:(__bridge id)objc_arg1 tags:(__bridge id)objc_arg2 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForCustomAudienceThirdPartyID(FacebookCXX::FBSessionCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBRequest requestForCustomAudienceThirdPartyID:(__bridge id)objc_arg0 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForGraphPath(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBRequest requestForGraphPath:(__bridge id)objc_arg0 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForDeleteObject(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBRequest requestForDeleteObject:(__bridge id)objc_arg0 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForPostWithGraphPath_graphObject(std::string& arg0,FacebookCXX::FBGraphObjectConformerCxx * arg1){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_FBGraphObjectConformerCxx(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBRequest requestForPostWithGraphPath:(__bridge id)objc_arg0 graphObject:(__bridge id)objc_arg1 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestWithGraphPath_parameters_HTTPMethod(std::string& arg0,std::map<void *, void *>& arg1,std::string& arg2){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_dictionary(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBRequest requestWithGraphPath:(__bridge id)objc_arg0 parameters:(__bridge id)objc_arg1 HTTPMethod:(__bridge id)objc_arg2 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForPostOpenGraphObject(FacebookCXX::FBOpenGraphObjectConformerCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBOpenGraphObjectConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBRequest requestForPostOpenGraphObject:(__bridge id)objc_arg0 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForPostOpenGraphObjectWithType_title_image_url_description_objectProperties(std::string& arg0,std::string& arg1,void *& arg2,void *& arg3,std::string& arg4,std::map<void *, void *>& arg5){
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

	void *objc_result = (__bridge void *)[FBRequest requestForPostOpenGraphObjectWithType:(__bridge id)objc_arg0 title:(__bridge id)objc_arg1 image:(__bridge id)objc_arg2 url:(__bridge id)objc_arg3 description:(__bridge id)objc_arg4 objectProperties:(__bridge id)objc_arg5 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForUpdateOpenGraphObject(FacebookCXX::FBOpenGraphObjectConformerCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBOpenGraphObjectConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBRequest requestForUpdateOpenGraphObject:(__bridge id)objc_arg0 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForUpdateOpenGraphObjectWithId_title_image_url_description_objectProperties(void *& arg0,std::string& arg1,void *& arg2,void *& arg3,std::string& arg4,std::map<void *, void *>& arg5){
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

	void *objc_result = (__bridge void *)[FBRequest requestForUpdateOpenGraphObjectWithId:(__bridge id)objc_arg0 title:(__bridge id)objc_arg1 image:(__bridge id)objc_arg2 url:(__bridge id)objc_arg3 description:(__bridge id)objc_arg4 objectProperties:(__bridge id)objc_arg5 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBRequestCxx * FacebookCXX::FBRequestCxx::requestForUploadStagingResourceWithImage(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBRequest requestForUploadStagingResourceWithImage:(__bridge id)objc_arg0 ];
	FacebookCXX::FBRequestCxx * result = NULL;
	convert_FBRequestCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBRequestCxx::parameters(){
	void *objc_result = (__bridge void *)[(__bridge FBRequest *)_proxy parameters];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBSessionCxx * FacebookCXX::FBRequestCxx::session(){
	void *objc_result = (__bridge void *)[(__bridge FBRequest *)_proxy session];
	FacebookCXX::FBSessionCxx * result = NULL;
	convert_FBSessionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestCxx::setSession(FacebookCXX::FBSessionCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBRequest *)_proxy setSession:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBRequestCxx::graphPath(){
	void *objc_result = (__bridge void *)[(__bridge FBRequest *)_proxy graphPath];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestCxx::setGraphPath(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBRequest *)_proxy setGraphPath:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBRequestCxx::restMethod(){
	void *objc_result = (__bridge void *)[(__bridge FBRequest *)_proxy restMethod];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestCxx::setRestMethod(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBRequest *)_proxy setRestMethod:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBRequestCxx::HTTPMethod(){
	void *objc_result = (__bridge void *)[(__bridge FBRequest *)_proxy HTTPMethod];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestCxx::setHTTPMethod(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBRequest *)_proxy setHTTPMethod:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBGraphObjectProtocolCxx * FacebookCXX::FBRequestCxx::graphObject(){
	void *objc_result = (__bridge void *)[(__bridge FBRequest *)_proxy graphObject];
	FacebookCXX::FBGraphObjectProtocolCxx * result = NULL;
	convert_FBGraphObjectProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBRequestCxx::setGraphObject(FacebookCXX::FBGraphObjectConformerCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBGraphObjectConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBRequest *)_proxy setGraphObject:(__bridge id)objc_arg0 ];
}


