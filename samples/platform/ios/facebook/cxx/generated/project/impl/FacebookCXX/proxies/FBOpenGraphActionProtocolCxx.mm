/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBOpenGraphActionProtocolCxx.hpp>
#include <FacebookSDK/FBOpenGraphAction.h>
#include <FacebookSDK/FBGraphPlace.h>
#include <FacebookSDK/FBGraphUser.h>
#include <FacebookSDK/FBGraphObject.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

FacebookCXX::FBOpenGraphActionProtocolCxx::FBOpenGraphActionProtocolCxx(const FBOpenGraphActionProtocolCxx* cc){
	id<FBOpenGraphAction> proxy_id = (__bridge id<FBOpenGraphAction>)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBOpenGraphActionProtocolCxx::FBOpenGraphActionProtocolCxx(const void * proxy){
	id<FBOpenGraphAction> proxy_id = (__bridge id<FBOpenGraphAction>)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBOpenGraphActionProtocolCxx::~FBOpenGraphActionProtocolCxx(){
	id<FBOpenGraphAction> _no_op = (__bridge_transfer id<FBOpenGraphAction>)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBOpenGraphActionProtocolCxx::getProxy() const{
	return _proxy;
}

std::string FacebookCXX::FBOpenGraphActionProtocolCxx::_id(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy id];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setId(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setId:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBOpenGraphActionProtocolCxx::start_time(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy start_time];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setStart_time(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setStart_time:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBOpenGraphActionProtocolCxx::end_time(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy end_time];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setEnd_time(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setEnd_time:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBOpenGraphActionProtocolCxx::publish_time(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy publish_time];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setPublish_time(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setPublish_time:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBOpenGraphActionProtocolCxx::created_time(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy created_time];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setCreated_time(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setCreated_time:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBOpenGraphActionProtocolCxx::expires_time(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy expires_time];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setExpires_time(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setExpires_time:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBOpenGraphActionProtocolCxx::ref(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy ref];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setRef(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setRef:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBOpenGraphActionProtocolCxx::message(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy message];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setMessage(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setMessage:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBGraphPlaceProtocolCxx * FacebookCXX::FBOpenGraphActionProtocolCxx::place(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy place];
	FacebookCXX::FBGraphPlaceProtocolCxx * result = NULL;
	convert_FBGraphPlaceProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setPlace(FacebookCXX::FBGraphPlaceConformerCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBGraphPlaceConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setPlace:(__bridge id)objc_arg0 ];
}

std::vector<void *> FacebookCXX::FBOpenGraphActionProtocolCxx::tags(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy tags];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setTags(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setTags:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBOpenGraphActionProtocolCxx::image(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy image];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setImage(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setImage:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBGraphUserProtocolCxx * FacebookCXX::FBOpenGraphActionProtocolCxx::from(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy from];
	FacebookCXX::FBGraphUserProtocolCxx * result = NULL;
	convert_FBGraphUserProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setFrom(FacebookCXX::FBGraphUserConformerCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBGraphUserConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setFrom:(__bridge id)objc_arg0 ];
}

std::vector<void *> FacebookCXX::FBOpenGraphActionProtocolCxx::likes(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy likes];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setLikes(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setLikes:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBGraphObjectProtocolCxx * FacebookCXX::FBOpenGraphActionProtocolCxx::application(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy application];
	FacebookCXX::FBGraphObjectProtocolCxx * result = NULL;
	convert_FBGraphObjectProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setApplication(FacebookCXX::FBGraphObjectConformerCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBGraphObjectConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setApplication:(__bridge id)objc_arg0 ];
}

std::vector<void *> FacebookCXX::FBOpenGraphActionProtocolCxx::comments(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy comments];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setComments(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setComments:(__bridge id)objc_arg0 ];
}

unsigned int FacebookCXX::FBOpenGraphActionProtocolCxx::count(){
	unsigned int objc_result = (unsigned int)[(__bridge id<FBOpenGraphAction>)_proxy count];
	return objc_result;
}

void * FacebookCXX::FBOpenGraphActionProtocolCxx::objectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy objectForKey:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBOpenGraphActionProtocolCxx::keyEnumerator(){
	void *objc_result = (__bridge void *)[(__bridge id<FBOpenGraphAction>)_proxy keyEnumerator];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::removeObjectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy removeObjectForKey:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setObject_forKey(void *& arg0,void *& arg1){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	[(__bridge id<FBOpenGraphAction>)_proxy setObject:(__bridge id)objc_arg0 forKey:(__bridge id)objc_arg1 ];
}

signed char FacebookCXX::FBOpenGraphActionProtocolCxx::provisionedForPost(){
	signed char objc_result = (signed char)[(__bridge id<FBOpenGraphAction>)_proxy provisionedForPost];
	return objc_result;
}

void FacebookCXX::FBOpenGraphActionProtocolCxx::setProvisionedForPost(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[(__bridge id<FBOpenGraphAction>)_proxy setProvisionedForPost:objc_arg0 ];
}


