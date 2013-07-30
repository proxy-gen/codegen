/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBOpenGraphActionShareDialogParamsCxx.hpp"
#include <FacebookSDK/FBOpenGraphActionShareDialogParams.h>
#include <FacebookSDK/FBOpenGraphAction.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBOpenGraphActionShareDialogParamsCxx::FBOpenGraphActionShareDialogParamsCxx(const FBOpenGraphActionShareDialogParamsCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBOpenGraphActionShareDialogParamsCxx::FBOpenGraphActionShareDialogParamsCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBOpenGraphActionShareDialogParamsCxx::~FBOpenGraphActionShareDialogParamsCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBOpenGraphActionShareDialogParamsCxx::getProxy() const{
	return _proxy;
}

FacebookCXX::FBOpenGraphActionProtocolCxx * FacebookCXX::FBOpenGraphActionShareDialogParamsCxx::action(){
	void *objc_result = (__bridge void *)[(__bridge FBOpenGraphActionShareDialogParams *)_proxy action];
	FacebookCXX::FBOpenGraphActionProtocolCxx * result = NULL;
	convert_FBOpenGraphActionProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionShareDialogParamsCxx::setAction(FacebookCXX::FBOpenGraphActionConformerCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBOpenGraphActionConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBOpenGraphActionShareDialogParams *)_proxy setAction:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBOpenGraphActionShareDialogParamsCxx::previewPropertyName(){
	void *objc_result = (__bridge void *)[(__bridge FBOpenGraphActionShareDialogParams *)_proxy previewPropertyName];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionShareDialogParamsCxx::setPreviewPropertyName(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBOpenGraphActionShareDialogParams *)_proxy setPreviewPropertyName:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBOpenGraphActionShareDialogParamsCxx::actionType(){
	void *objc_result = (__bridge void *)[(__bridge FBOpenGraphActionShareDialogParams *)_proxy actionType];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBOpenGraphActionShareDialogParamsCxx::setActionType(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBOpenGraphActionShareDialogParams *)_proxy setActionType:(__bridge id)objc_arg0 ];
}


