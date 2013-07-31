/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBGraphUserProtocolCxx.hpp>
#include <FacebookSDK/FBGraphUser.h>
#include <FacebookSDK/FBGraphPlace.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

FacebookCXX::FBGraphUserProtocolCxx::FBGraphUserProtocolCxx(const FBGraphUserProtocolCxx* cc){
	id<FBGraphUser> proxy_id = (__bridge id<FBGraphUser>)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBGraphUserProtocolCxx::FBGraphUserProtocolCxx(const void * proxy){
	id<FBGraphUser> proxy_id = (__bridge id<FBGraphUser>)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBGraphUserProtocolCxx::~FBGraphUserProtocolCxx(){
	id<FBGraphUser> _no_op = (__bridge_transfer id<FBGraphUser>)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBGraphUserProtocolCxx::getProxy() const{
	return _proxy;
}

std::string FacebookCXX::FBGraphUserProtocolCxx::_id(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphUser>)_proxy id];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphUserProtocolCxx::setId(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphUser>)_proxy setId:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBGraphUserProtocolCxx::name(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphUser>)_proxy name];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphUserProtocolCxx::setName(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphUser>)_proxy setName:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBGraphUserProtocolCxx::first_name(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphUser>)_proxy first_name];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphUserProtocolCxx::setFirst_name(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphUser>)_proxy setFirst_name:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBGraphUserProtocolCxx::middle_name(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphUser>)_proxy middle_name];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphUserProtocolCxx::setMiddle_name(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphUser>)_proxy setMiddle_name:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBGraphUserProtocolCxx::last_name(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphUser>)_proxy last_name];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphUserProtocolCxx::setLast_name(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphUser>)_proxy setLast_name:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBGraphUserProtocolCxx::link(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphUser>)_proxy link];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphUserProtocolCxx::setLink(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphUser>)_proxy setLink:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBGraphUserProtocolCxx::username(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphUser>)_proxy username];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphUserProtocolCxx::setUsername(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphUser>)_proxy setUsername:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBGraphUserProtocolCxx::birthday(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphUser>)_proxy birthday];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphUserProtocolCxx::setBirthday(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphUser>)_proxy setBirthday:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBGraphPlaceProtocolCxx * FacebookCXX::FBGraphUserProtocolCxx::location(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphUser>)_proxy location];
	FacebookCXX::FBGraphPlaceProtocolCxx * result = NULL;
	convert_FBGraphPlaceProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphUserProtocolCxx::setLocation(FacebookCXX::FBGraphPlaceConformerCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBGraphPlaceConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphUser>)_proxy setLocation:(__bridge id)objc_arg0 ];
}

unsigned int FacebookCXX::FBGraphUserProtocolCxx::count(){
	unsigned int objc_result = (unsigned int)[(__bridge id<FBGraphUser>)_proxy count];
	return objc_result;
}

void * FacebookCXX::FBGraphUserProtocolCxx::objectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge id<FBGraphUser>)_proxy objectForKey:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBGraphUserProtocolCxx::keyEnumerator(){
	void *objc_result = (__bridge void *)[(__bridge id<FBGraphUser>)_proxy keyEnumerator];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBGraphUserProtocolCxx::removeObjectForKey(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphUser>)_proxy removeObjectForKey:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBGraphUserProtocolCxx::setObject_forKey(void *& arg0,void *& arg1){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	[(__bridge id<FBGraphUser>)_proxy setObject:(__bridge id)objc_arg0 forKey:(__bridge id)objc_arg1 ];
}

signed char FacebookCXX::FBGraphUserProtocolCxx::provisionedForPost(){
	signed char objc_result = (signed char)[(__bridge id<FBGraphUser>)_proxy provisionedForPost];
	return objc_result;
}

void FacebookCXX::FBGraphUserProtocolCxx::setProvisionedForPost(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[(__bridge id<FBGraphUser>)_proxy setProvisionedForPost:objc_arg0 ];
}


