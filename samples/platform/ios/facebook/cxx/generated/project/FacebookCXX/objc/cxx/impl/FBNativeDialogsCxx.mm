/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBNativeDialogsCxx.hpp"
#include <FacebookSDK/FBNativeDialogs.h>
#include <FacebookSDK/FBSession.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBNativeDialogsCxx::FBNativeDialogsCxx(const FBNativeDialogsCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBNativeDialogsCxx::FBNativeDialogsCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBNativeDialogsCxx::~FBNativeDialogsCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBNativeDialogsCxx::getProxy() const{
	return _proxy;
}

signed char FacebookCXX::FBNativeDialogsCxx::presentShareDialogModallyFrom_initialText_image_url_handler(void *& arg0,std::string& arg1,void *& arg2,void *& arg3,void(*arg4)(FacebookCXX::FBNativeDialogResultCxx &, std::string &)){
	id objc_arg0 = nil;
	convert_object((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_string((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	id objc_arg2 = nil;
	convert_object((__bridge void *)objc_arg2, arg2, CONVERT_TO_OBJC);

	id objc_arg3 = nil;
	convert_object((__bridge void *)objc_arg3, arg3, CONVERT_TO_OBJC);

	void (^objc_arg4)(FBNativeDialogResult, NSError *);
	objc_arg4 = ^(FBNativeDialogResult objc_barg0, NSError * objc_barg1){
		FacebookCXX::FBNativeDialogResultCxx barg0 = (FacebookCXX::FBNativeDialogResultCxx)objc_barg0;

		std::string barg1;
		convert_error((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		arg4(barg0, barg1);
	};

	signed char objc_result = (signed char)[FBNativeDialogs presentShareDialogModallyFrom:objc_arg0 initialText:objc_arg1 image:objc_arg2 url:objc_arg3 handler:objc_arg4 ];
	return objc_result;
}

signed char FacebookCXX::FBNativeDialogsCxx::presentShareDialogModallyFrom_initialText_images_urls_handler(void *& arg0,std::string& arg1,std::vector<void *>& arg2,std::vector<void *>& arg3,void(*arg4)(FacebookCXX::FBNativeDialogResultCxx &, std::string &)){
	id objc_arg0 = nil;
	convert_object((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_string((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	id objc_arg2 = nil;
	convert_array((__bridge void *)objc_arg2, arg2, CONVERT_TO_OBJC);

	id objc_arg3 = nil;
	convert_array((__bridge void *)objc_arg3, arg3, CONVERT_TO_OBJC);

	void (^objc_arg4)(FBNativeDialogResult, NSError *);
	objc_arg4 = ^(FBNativeDialogResult objc_barg0, NSError * objc_barg1){
		FacebookCXX::FBNativeDialogResultCxx barg0 = (FacebookCXX::FBNativeDialogResultCxx)objc_barg0;

		std::string barg1;
		convert_error((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		arg4(barg0, barg1);
	};

	signed char objc_result = (signed char)[FBNativeDialogs presentShareDialogModallyFrom:objc_arg0 initialText:objc_arg1 images:objc_arg2 urls:objc_arg3 handler:objc_arg4 ];
	return objc_result;
}

signed char FacebookCXX::FBNativeDialogsCxx::presentShareDialogModallyFrom_session_initialText_images_urls_handler(void *& arg0,FacebookCXX::FBSessionCxx * arg1,std::string& arg2,std::vector<void *>& arg3,std::vector<void *>& arg4,void(*arg5)(FacebookCXX::FBNativeDialogResultCxx &, std::string &)){
	id objc_arg0 = nil;
	convert_object((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	id objc_arg1 = nil;
	convert_FBSessionCxx((__bridge void *)objc_arg1, arg1, CONVERT_TO_OBJC);

	id objc_arg2 = nil;
	convert_string((__bridge void *)objc_arg2, arg2, CONVERT_TO_OBJC);

	id objc_arg3 = nil;
	convert_array((__bridge void *)objc_arg3, arg3, CONVERT_TO_OBJC);

	id objc_arg4 = nil;
	convert_array((__bridge void *)objc_arg4, arg4, CONVERT_TO_OBJC);

	void (^objc_arg5)(FBNativeDialogResult, NSError *);
	objc_arg5 = ^(FBNativeDialogResult objc_barg0, NSError * objc_barg1){
		FacebookCXX::FBNativeDialogResultCxx barg0 = (FacebookCXX::FBNativeDialogResultCxx)objc_barg0;

		std::string barg1;
		convert_error((__bridge void *)objc_barg1, barg1, CONVERT_TO_CXX);

		arg5(barg0, barg1);
	};

	signed char objc_result = (signed char)[FBNativeDialogs presentShareDialogModallyFrom:objc_arg0 session:objc_arg1 initialText:objc_arg2 images:objc_arg3 urls:objc_arg4 handler:objc_arg5 ];
	return objc_result;
}

signed char FacebookCXX::FBNativeDialogsCxx::canPresentShareDialogWithSession(FacebookCXX::FBSessionCxx * arg0){
	id objc_arg0 = nil;
	convert_FBSessionCxx((__bridge void *)objc_arg0, arg0, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[FBNativeDialogs canPresentShareDialogWithSession:objc_arg0 ];
	return objc_result;
}


