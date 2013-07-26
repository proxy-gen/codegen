/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBLoginViewCxx.hpp"
#include <FacebookSDK/FBLoginView.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBLoginViewCxx::FBLoginViewCxx(const FBLoginViewCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBLoginViewCxx::FBLoginViewCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBLoginViewCxx::~FBLoginViewCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBLoginViewCxx::getProxy() const{
	return _proxy;
}

void * FacebookCXX::FBLoginViewCxx::init(){
	void *objc_result = (__bridge void *)[(__bridge FBLoginView *)_proxy init];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBLoginViewCxx::initWithPermissions(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge FBLoginView *)_proxy initWithPermissions:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBLoginViewCxx::initWithReadPermissions(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge FBLoginView *)_proxy initWithReadPermissions:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBLoginViewCxx::initWithPublishPermissions_defaultAudience(std::vector<void *>& arg0,FacebookCXX::FBSessionDefaultAudienceCxx& arg1){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	FBSessionDefaultAudience objc_arg1 = (FBSessionDefaultAudience)arg1;

	void *objc_result = (__bridge void *)[(__bridge FBLoginView *)_proxy initWithPublishPermissions:(__bridge id)objc_arg0 defaultAudience:objc_arg1 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

std::vector<void *> FacebookCXX::FBLoginViewCxx::permissions(){
	void *objc_result = (__bridge void *)[(__bridge FBLoginView *)_proxy permissions];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBLoginViewCxx::setPermissions(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBLoginView *)_proxy setPermissions:(__bridge id)objc_arg0 ];
}

std::vector<void *> FacebookCXX::FBLoginViewCxx::readPermissions(){
	void *objc_result = (__bridge void *)[(__bridge FBLoginView *)_proxy readPermissions];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBLoginViewCxx::setReadPermissions(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBLoginView *)_proxy setReadPermissions:(__bridge id)objc_arg0 ];
}

std::vector<void *> FacebookCXX::FBLoginViewCxx::publishPermissions(){
	void *objc_result = (__bridge void *)[(__bridge FBLoginView *)_proxy publishPermissions];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBLoginViewCxx::setPublishPermissions(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBLoginView *)_proxy setPublishPermissions:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBSessionDefaultAudienceCxx FacebookCXX::FBLoginViewCxx::defaultAudience(){
	FacebookCXX::FBSessionDefaultAudienceCxx objc_result = (FacebookCXX::FBSessionDefaultAudienceCxx)[(__bridge FBLoginView *)_proxy defaultAudience];
	return objc_result;
}

void FacebookCXX::FBLoginViewCxx::setDefaultAudience(FacebookCXX::FBSessionDefaultAudienceCxx& arg0){
	FBSessionDefaultAudience objc_arg0 = (FBSessionDefaultAudience)arg0;

	[(__bridge FBLoginView *)_proxy setDefaultAudience:objc_arg0 ];
}

FacebookCXX::FBLoginViewDelegateConformerCxx * FacebookCXX::FBLoginViewCxx::delegate(){
	void *objc_result = (__bridge void *)[(__bridge FBLoginView *)_proxy delegate];
	FacebookCXX::FBLoginViewDelegateConformerCxx * result = NULL;
	convert_FBLoginViewDelegateConformerCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBLoginViewCxx::setDelegate(FacebookCXX::FBLoginViewDelegateConformerCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBLoginViewDelegateConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBLoginView *)_proxy setDelegate:(__bridge id)objc_arg0 ];
}


