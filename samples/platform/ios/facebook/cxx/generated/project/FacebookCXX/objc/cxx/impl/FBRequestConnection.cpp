/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBRequestConnection.hpp"
#include <FacebookSDK/FBRequestConnection.h>
#include <FacebookSDK/FBRequest.h>
#include <FacebookSDK/FBRequestConnection.h>

using namespace FacebookCXX;

void * FBRequestConnection::init(){
	void * objc_result = (__bridge void *)[(__bridge FBRequestConnection *)proxy init];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void * FBRequestConnection::initWithTimeout(double& arg0){
	NSTimeInterval objc_arg0 = (NSTimeInterval)arg0

	void * objc_result = (__bridge void *)[(__bridge FBRequestConnection *)proxy initWithTimeout:objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void FBRequestConnection::addRequest_completionHandler(FacebookCXX::FBRequest * arg0,void(*arg1)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_FBRequest(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_block(objc_arg1, arg1, CONVERT_TO_OBJC)

	[(__bridge FBRequestConnection *)proxy addRequest:(__bridge FBRequest *)objc_arg0 completionHandler:objc_arg1 ];
}

void FBRequestConnection::addRequest_completionHandler_batchEntryName(FacebookCXX::FBRequest * arg0,void(*arg1)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2),std::string& arg2){
	void * objc_arg0 = NULL;
	convert_FBRequest(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_block(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC)

	[(__bridge FBRequestConnection *)proxy addRequest:(__bridge FBRequest *)objc_arg0 completionHandler:objc_arg1 batchEntryName:(__bridge NSString *)objc_arg2 ];
}

void FBRequestConnection::start(){
	[(__bridge FBRequestConnection *)proxy start];
}

void FBRequestConnection::cancel(){
	[(__bridge FBRequestConnection *)proxy cancel];
}

FacebookCXX::FBRequestConnection * FBRequestConnection::startForMeWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_block(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequestConnection startForMeWithCompletionHandler:objc_arg0 ];
	FacebookCXX::FBRequestConnection * *result = NULL;
	convert_FBRequestConnection(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequestConnection * FBRequestConnection::startForMyFriendsWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_block(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequestConnection startForMyFriendsWithCompletionHandler:objc_arg0 ];
	FacebookCXX::FBRequestConnection * *result = NULL;
	convert_FBRequestConnection(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequestConnection * FBRequestConnection::startForUploadPhoto_completionHandler(void *& arg0,void(*arg1)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_block(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequestConnection startForUploadPhoto:(__bridge UIImage *)objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnection * *result = NULL;
	convert_FBRequestConnection(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequestConnection * FBRequestConnection::startForPostStatusUpdate_completionHandler(std::string& arg0,void(*arg1)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_block(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequestConnection startForPostStatusUpdate:(__bridge NSString *)objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnection * *result = NULL;
	convert_FBRequestConnection(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequestConnection * FBRequestConnection::startForPostStatusUpdate_place_tags_completionHandler(std::string& arg0,void *& arg1,void *& arg2,void(*arg3)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_arg2 = NULL;
	convert_object(objc_arg2, arg2, CONVERT_TO_OBJC)

	void * objc_arg3 = NULL;
	convert_block(objc_arg3, arg3, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequestConnection startForPostStatusUpdate:(__bridge NSString *)objc_arg0 place:(__bridge id)objc_arg1 tags:(__bridge id<NSFastEnumeration>)objc_arg2 completionHandler:objc_arg3 ];
	FacebookCXX::FBRequestConnection * *result = NULL;
	convert_FBRequestConnection(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequestConnection * FBRequestConnection::startWithGraphPath_completionHandler(std::string& arg0,void(*arg1)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_block(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequestConnection startWithGraphPath:(__bridge NSString *)objc_arg0 completionHandler:objc_arg1 ];
	FacebookCXX::FBRequestConnection * *result = NULL;
	convert_FBRequestConnection(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequestConnection * FBRequestConnection::startForPostWithGraphPath_graphObject_completionHandler(std::string& arg0,void *& arg1,void(*arg2)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_arg2 = NULL;
	convert_block(objc_arg2, arg2, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequestConnection startForPostWithGraphPath:(__bridge NSString *)objc_arg0 graphObject:(__bridge id<FBGraphObject>)objc_arg1 completionHandler:objc_arg2 ];
	FacebookCXX::FBRequestConnection * *result = NULL;
	convert_FBRequestConnection(objc_result, result, CONVERT_TO_CXX)
	return result;
}

FacebookCXX::FBRequestConnection * FBRequestConnection::startWithGraphPath_parameters_HTTPMethod_completionHandler(std::string& arg0,std::map<void *, void *>& arg1,std::string& arg2,void(*arg3)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2)){
	void * objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC)

	void * objc_arg1 = NULL;
	convert_dictionary(objc_arg1, arg1, CONVERT_TO_OBJC)

	void * objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC)

	void * objc_arg3 = NULL;
	convert_block(objc_arg3, arg3, CONVERT_TO_OBJC)

	void * objc_result = (__bridge void *)[FBRequestConnection startWithGraphPath:(__bridge NSString *)objc_arg0 parameters:(__bridge NSDictionary *)objc_arg1 HTTPMethod:(__bridge NSString *)objc_arg2 completionHandler:objc_arg3 ];
	FacebookCXX::FBRequestConnection * *result = NULL;
	convert_FBRequestConnection(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void * FBRequestConnection::urlRequest(){
	void * objc_result = (__bridge void *)[(__bridge FBRequestConnection *)proxy urlRequest];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}

void FBRequestConnection::setUrlRequest(void *& arg0){
	void * objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC)

	[(__bridge FBRequestConnection *)proxy setUrlRequest:(__bridge NSMutableURLRequest *)objc_arg0 ];
}

void * FBRequestConnection::urlResponse(){
	void * objc_result = (__bridge void *)[(__bridge FBRequestConnection *)proxy urlResponse];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX)
	return result;
}


