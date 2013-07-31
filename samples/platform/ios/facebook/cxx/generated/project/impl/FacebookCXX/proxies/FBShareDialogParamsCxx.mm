/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBShareDialogParamsCxx.hpp>
#include <FacebookSDK/FBShareDialogParams.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

FacebookCXX::FBShareDialogParamsCxx::FBShareDialogParamsCxx(const FBShareDialogParamsCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBShareDialogParamsCxx::FBShareDialogParamsCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBShareDialogParamsCxx::~FBShareDialogParamsCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBShareDialogParamsCxx::getProxy() const{
	return _proxy;
}

void * FacebookCXX::FBShareDialogParamsCxx::link(){
	void *objc_result = (__bridge void *)[(__bridge FBShareDialogParams *)_proxy link];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBShareDialogParamsCxx::setLink(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBShareDialogParams *)_proxy setLink:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBShareDialogParamsCxx::name(){
	void *objc_result = (__bridge void *)[(__bridge FBShareDialogParams *)_proxy name];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBShareDialogParamsCxx::setName(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBShareDialogParams *)_proxy setName:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBShareDialogParamsCxx::caption(){
	void *objc_result = (__bridge void *)[(__bridge FBShareDialogParams *)_proxy caption];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBShareDialogParamsCxx::setCaption(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBShareDialogParams *)_proxy setCaption:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBShareDialogParamsCxx::description(){
	void *objc_result = (__bridge void *)[(__bridge FBShareDialogParams *)_proxy description];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBShareDialogParamsCxx::setDescription(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBShareDialogParams *)_proxy setDescription:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBShareDialogParamsCxx::picture(){
	void *objc_result = (__bridge void *)[(__bridge FBShareDialogParams *)_proxy picture];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBShareDialogParamsCxx::setPicture(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBShareDialogParams *)_proxy setPicture:(__bridge id)objc_arg0 ];
}

std::vector<void *> FacebookCXX::FBShareDialogParamsCxx::friends(){
	void *objc_result = (__bridge void *)[(__bridge FBShareDialogParams *)_proxy friends];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBShareDialogParamsCxx::setFriends(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBShareDialogParams *)_proxy setFriends:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBShareDialogParamsCxx::place(){
	void *objc_result = (__bridge void *)[(__bridge FBShareDialogParams *)_proxy place];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBShareDialogParamsCxx::setPlace(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBShareDialogParams *)_proxy setPlace:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBShareDialogParamsCxx::ref(){
	void *objc_result = (__bridge void *)[(__bridge FBShareDialogParams *)_proxy ref];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBShareDialogParamsCxx::setRef(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBShareDialogParams *)_proxy setRef:(__bridge id)objc_arg0 ];
}

signed char FacebookCXX::FBShareDialogParamsCxx::dataFailuresFatal(){
	signed char objc_result = (signed char)[(__bridge FBShareDialogParams *)_proxy dataFailuresFatal];
	return objc_result;
}

void FacebookCXX::FBShareDialogParamsCxx::setDataFailuresFatal(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[(__bridge FBShareDialogParams *)_proxy setDataFailuresFatal:objc_arg0 ];
}


