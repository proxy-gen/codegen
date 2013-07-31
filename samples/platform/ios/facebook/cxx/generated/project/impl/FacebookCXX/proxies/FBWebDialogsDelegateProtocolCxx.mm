/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBWebDialogsDelegateProtocolCxx.hpp>
#include <FacebookSDK/FBWebDialogs.h>
#include <FacebookSDK/FBSession.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

FacebookCXX::FBWebDialogsDelegateProtocolCxx::FBWebDialogsDelegateProtocolCxx(const FBWebDialogsDelegateProtocolCxx* cc){
	id<FBWebDialogsDelegate> proxy_id = (__bridge id<FBWebDialogsDelegate>)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBWebDialogsDelegateProtocolCxx::FBWebDialogsDelegateProtocolCxx(const void * proxy){
	id<FBWebDialogsDelegate> proxy_id = (__bridge id<FBWebDialogsDelegate>)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBWebDialogsDelegateProtocolCxx::~FBWebDialogsDelegateProtocolCxx(){
	id<FBWebDialogsDelegate> _no_op = (__bridge_transfer id<FBWebDialogsDelegate>)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBWebDialogsDelegateProtocolCxx::getProxy() const{
	return _proxy;
}

void FacebookCXX::FBWebDialogsDelegateProtocolCxx::webDialogsWillPresentDialog_parameters_session(std::string& arg0,void *& arg1,FacebookCXX::FBSessionCxx * arg2){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_FBSessionCxx(objc_arg2, arg2, CONVERT_TO_OBJC);

	[(__bridge id<FBWebDialogsDelegate>)_proxy webDialogsWillPresentDialog:(__bridge id)objc_arg0 parameters:(__bridge id)objc_arg1 session:(__bridge id)objc_arg2 ];
}

signed char FacebookCXX::FBWebDialogsDelegateProtocolCxx::webDialogsDialog_parameters_session_shouldAutoHandleURL(std::string& arg0,std::map<void *, void *>& arg1,FacebookCXX::FBSessionCxx * arg2,void *& arg3){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_dictionary(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_FBSessionCxx(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_object(objc_arg3, arg3, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[(__bridge id<FBWebDialogsDelegate>)_proxy webDialogsDialog:(__bridge id)objc_arg0 parameters:(__bridge id)objc_arg1 session:(__bridge id)objc_arg2 shouldAutoHandleURL:(__bridge id)objc_arg3 ];
	return objc_result;
}


