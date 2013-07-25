/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBRequest.hpp"
#include <FacebookSDK/FBRequest.h>
#include <FacebookSDK/FBSession.h>
#include <FacebookSDK/FBRequestConnection.h>
#include <FacebookSDK/FBRequest.h>

using namespace FacebookCXX;

void * FBRequest::init(){
	void * objc_result = (__bridge void *)[(__bridge FBRequest *)proxy init];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void * FBRequest::initWithSession_graphPath(FacebookCXX::FBSession * arg0,std::string& arg1){
	void * objc_arg0 = NULL;
	convert_FBSession(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[(__bridge FBRequest *)proxy initWithSession:(__bridge FBSession *)objc_arg0 graphPath:(__bridge NSString *)objc_arg1 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void * FBRequest::initWithSession_graphPath_parameters_HTTPMethod(FacebookCXX::FBSession * arg0,std::string& arg1,std::map<void *, void *>& arg2,std::string& arg3){
	void * objc_arg0 = NULL;
	convert_FBSession(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_arg2 = NULL;
	convert_dictionary(objc_arg2, arg2, CONVERT_TO_OBJC)

	void * objc_arg3 = NULL;
	convert_string(objc_arg3, arg3, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[(__bridge FBRequest *)proxy initWithSession:(__bridge FBSession *)objc_arg0 graphPath:(__bridge NSString *)objc_arg1 parameters:(__bridge NSDictionary *)objc_arg2 HTTPMethod:(__bridge NSString *)objc_arg3 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void * FBRequest::initForPostWithSession_graphPath_graphObject(FacebookCXX::FBSession * arg0,std::string& arg1,void *& arg2){
	void * objc_arg0 = NULL;
	convert_FBSession(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_arg2 = NULL;
	convert_object(objc_arg2, arg2, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[(__bridge FBRequest *)proxy initForPostWithSession:(__bridge FBSession *)objc_arg0 graphPath:(__bridge NSString *)objc_arg1 graphObject:(__bridge id<FBGraphObject>)objc_arg2 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void * FBRequest::initWithSession_restMethod_parameters_HTTPMethod(FacebookCXX::FBSession * arg0,std::string& arg1,std::map<void *, void *>& arg2,std::string& arg3){
	void * objc_arg0 = NULL;
	convert_FBSession(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_arg2 = NULL;
	convert_dictionary(objc_arg2, arg2, CONVERT_TO_OBJC)

	void * objc_arg3 = NULL;
	convert_string(objc_arg3, arg3, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[(__bridge FBRequest *)proxy initWithSession:(__bridge FBSession *)objc_arg0 restMethod:(__bridge NSString *)objc_arg1 parameters:(__bridge NSDictionary *)objc_arg2 HTTPMethod:(__bridge NSString *)objc_arg3 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequestConnection * FBRequest::startWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_block(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[(__bridge FBRequest *)proxy startWithCompletionHandler:objc_arg0 ];
	FacebookCXX::FBRequestConnection * *result = NULL;
	convert_FBRequestConnection(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequest * FBRequest::requestForMe(){
	void * objc_result = (__bridge void *)[FBRequest requestForMe];
	FacebookCXX::FBRequest * *result = NULL;
	convert_FBRequest(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequest * FBRequest::requestForMyFriends(){
	void * objc_result = (__bridge void *)[FBRequest requestForMyFriends];
	FacebookCXX::FBRequest * *result = NULL;
	convert_FBRequest(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequest * FBRequest::requestForUploadPhoto(void *& arg0){
	void * objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequest requestForUploadPhoto:(__bridge UIImage *)objc_arg0 ];
	FacebookCXX::FBRequest * *result = NULL;
	convert_FBRequest(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequest * FBRequest::requestForPostStatusUpdate(std::string& arg0){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequest requestForPostStatusUpdate:(__bridge NSString *)objc_arg0 ];
	FacebookCXX::FBRequest * *result = NULL;
	convert_FBRequest(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequest * FBRequest::requestForPostStatusUpdate_place_tags(std::string& arg0,void *& arg1,void *& arg2){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_arg2 = NULL;
	convert_object(objc_arg2, arg2, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequest requestForPostStatusUpdate:(__bridge NSString *)objc_arg0 place:(__bridge id)objc_arg1 tags:(__bridge id<NSFastEnumeration>)objc_arg2 ];
	FacebookCXX::FBRequest * *result = NULL;
	convert_FBRequest(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequest * FBRequest::requestForGraphPath(std::string& arg0){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequest requestForGraphPath:(__bridge NSString *)objc_arg0 ];
	FacebookCXX::FBRequest * *result = NULL;
	convert_FBRequest(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequest * FBRequest::requestForPostWithGraphPath_graphObject(std::string& arg0,void *& arg1){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequest requestForPostWithGraphPath:(__bridge NSString *)objc_arg0 graphObject:(__bridge id<FBGraphObject>)objc_arg1 ];
	FacebookCXX::FBRequest * *result = NULL;
	convert_FBRequest(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequest * FBRequest::requestWithGraphPath_parameters_HTTPMethod(std::string& arg0,std::map<void *, void *>& arg1,std::string& arg2){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_dictionary(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequest requestWithGraphPath:(__bridge NSString *)objc_arg0 parameters:(__bridge NSDictionary *)objc_arg1 HTTPMethod:(__bridge NSString *)objc_arg2 ];
	FacebookCXX::FBRequest * *result = NULL;
	convert_FBRequest(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void * FBRequest::parameters(){
	void * objc_result = (__bridge void *)[(__bridge FBRequest *)proxy parameters];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBSession * FBRequest::session(){
	void * objc_result = (__bridge void *)[(__bridge FBRequest *)proxy session];
	FacebookCXX::FBSession * *result = NULL;
	convert_FBSession(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void FBRequest::setSession(FacebookCXX::FBSession * arg0){
	void * objc_arg0 = NULL;
	convert_FBSession(objc_arg0, arg0, CONVERT_TO_OBJC)

	[(__bridge FBRequest *)proxy setSession:(__bridge FBSession *)objc_arg0 ];
}

std::string FBRequest::graphPath(){
	void * objc_result = (__bridge void *)[(__bridge FBRequest *)proxy graphPath];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void FBRequest::setGraphPath(std::string& arg0){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	[(__bridge FBRequest *)proxy setGraphPath:(__bridge NSString *)objc_arg0 ];
}

std::string FBRequest::restMethod(){
	void * objc_result = (__bridge void *)[(__bridge FBRequest *)proxy restMethod];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void FBRequest::setRestMethod(std::string& arg0){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	[(__bridge FBRequest *)proxy setRestMethod:(__bridge NSString *)objc_arg0 ];
}

std::string FBRequest::HTTPMethod(){
	void * objc_result = (__bridge void *)[(__bridge FBRequest *)proxy HTTPMethod];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void FBRequest::setHTTPMethod(std::string& arg0){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	[(__bridge FBRequest *)proxy setHTTPMethod:(__bridge NSString *)objc_arg0 ];
}

void * FBRequest::graphObject(){
	void * objc_result = (__bridge void *)[(__bridge FBRequest *)proxy graphObject];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void FBRequest::setGraphObject(void *& arg0){
	void * objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC)

	[(__bridge FBRequest *)proxy setGraphObject:(__bridge id<FBGraphObject>)objc_arg0 ];
}


