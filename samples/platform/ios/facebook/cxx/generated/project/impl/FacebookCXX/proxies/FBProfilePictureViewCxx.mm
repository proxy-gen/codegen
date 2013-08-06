/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBProfilePictureViewCxx.hpp>
#include <FacebookSDK/FBProfilePictureView.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

FacebookCXX::FBProfilePictureViewCxx::FBProfilePictureViewCxx(const FBProfilePictureViewCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBProfilePictureViewCxx::FBProfilePictureViewCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBProfilePictureViewCxx::~FBProfilePictureViewCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBProfilePictureViewCxx::getProxy() const{
	return _proxy;
}

void * FacebookCXX::FBProfilePictureViewCxx::init(){
	void *objc_result = (__bridge void *)[(__bridge FBProfilePictureView *)_proxy init];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBProfilePictureViewCxx::initWithProfileID_pictureCropping(std::string& arg0,FacebookCXX::FBProfilePictureCroppingCxx& arg1){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	FBProfilePictureCropping objc_arg1 = (FBProfilePictureCropping)arg1;

	void *objc_result = (__bridge void *)[(__bridge FBProfilePictureView *)_proxy initWithProfileID:(__bridge id)objc_arg0 pictureCropping:objc_arg1 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::string FacebookCXX::FBProfilePictureViewCxx::profileID(){
	void *objc_result = (__bridge void *)[(__bridge FBProfilePictureView *)_proxy profileID];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBProfilePictureViewCxx::setProfileID(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBProfilePictureView *)_proxy setProfileID:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBProfilePictureCroppingCxx FacebookCXX::FBProfilePictureViewCxx::pictureCropping(){
	FacebookCXX::FBProfilePictureCroppingCxx objc_result = (FacebookCXX::FBProfilePictureCroppingCxx)[(__bridge FBProfilePictureView *)_proxy pictureCropping];
	return objc_result;
}

void FacebookCXX::FBProfilePictureViewCxx::setPictureCropping(FacebookCXX::FBProfilePictureCroppingCxx& arg0){
	FBProfilePictureCropping objc_arg0 = (FBProfilePictureCropping)arg0;

	[(__bridge FBProfilePictureView *)_proxy setPictureCropping:objc_arg0 ];
}


