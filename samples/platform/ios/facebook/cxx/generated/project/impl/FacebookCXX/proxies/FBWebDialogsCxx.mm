/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBWebDialogsCxx.hpp>
#include <FacebookSDK/FBWebDialogs.h>
#include <FacebookSDK/FBSession.h>
#include <FacebookSDK/FBFrictionlessRecipientCache.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

FacebookCXX::FBWebDialogsCxx::FBWebDialogsCxx(const FBWebDialogsCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBWebDialogsCxx::FBWebDialogsCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBWebDialogsCxx::~FBWebDialogsCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBWebDialogsCxx::getProxy() const{
	return _proxy;
}

void FacebookCXX::FBWebDialogsCxx::presentDialogModallyWithSession_dialog_parameters_handler(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::map<void *, void *>& arg2,void(*arg3)(FacebookCXX::FBWebDialogResultCxx &, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_dictionary(objc_arg2, arg2, CONVERT_TO_OBJC);

	void (^objc_arg3)(FBWebDialogResult, NSURL *, NSError *);
	objc_arg3 = ^(FBWebDialogResult objc_barg0, NSURL * objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBWebDialogResultCxx barg0 = (FacebookCXX::FBWebDialogResultCxx)objc_barg0;

		void * barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_object(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg3(barg0, barg1, barg2);
	};

	[FBWebDialogs presentDialogModallyWithSession:(__bridge id)objc_arg0 dialog:(__bridge id)objc_arg1 parameters:(__bridge id)objc_arg2 handler:objc_arg3 ];
}

void FacebookCXX::FBWebDialogsCxx::presentDialogModallyWithSession_dialog_parameters_handler_delegate(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::map<void *, void *>& arg2,void(*arg3)(FacebookCXX::FBWebDialogResultCxx &, void * &, std::string &),FacebookCXX::FBWebDialogsDelegateConformerCxx * arg4){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_dictionary(objc_arg2, arg2, CONVERT_TO_OBJC);

	void (^objc_arg3)(FBWebDialogResult, NSURL *, NSError *);
	objc_arg3 = ^(FBWebDialogResult objc_barg0, NSURL * objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBWebDialogResultCxx barg0 = (FacebookCXX::FBWebDialogResultCxx)objc_barg0;

		void * barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_object(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg3(barg0, barg1, barg2);
	};

	void *objc_arg4 = NULL;
	convert_FBWebDialogsDelegateConformerCxx(objc_arg4, arg4, CONVERT_TO_OBJC);

	[FBWebDialogs presentDialogModallyWithSession:(__bridge id)objc_arg0 dialog:(__bridge id)objc_arg1 parameters:(__bridge id)objc_arg2 handler:objc_arg3 delegate:(__bridge id)objc_arg4 ];
}

void FacebookCXX::FBWebDialogsCxx::presentRequestsDialogModallyWithSession_message_title_parameters_handler(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::string& arg2,std::map<void *, void *>& arg3,void(*arg4)(FacebookCXX::FBWebDialogResultCxx &, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_dictionary(objc_arg3, arg3, CONVERT_TO_OBJC);

	void (^objc_arg4)(FBWebDialogResult, NSURL *, NSError *);
	objc_arg4 = ^(FBWebDialogResult objc_barg0, NSURL * objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBWebDialogResultCxx barg0 = (FacebookCXX::FBWebDialogResultCxx)objc_barg0;

		void * barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_object(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg4(barg0, barg1, barg2);
	};

	[FBWebDialogs presentRequestsDialogModallyWithSession:(__bridge id)objc_arg0 message:(__bridge id)objc_arg1 title:(__bridge id)objc_arg2 parameters:(__bridge id)objc_arg3 handler:objc_arg4 ];
}

void FacebookCXX::FBWebDialogsCxx::presentRequestsDialogModallyWithSession_message_title_parameters_handler_friendCache(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::string& arg2,std::map<void *, void *>& arg3,void(*arg4)(FacebookCXX::FBWebDialogResultCxx &, void * &, std::string &),FacebookCXX::FBFrictionlessRecipientCacheCxx * arg5){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_dictionary(objc_arg3, arg3, CONVERT_TO_OBJC);

	void (^objc_arg4)(FBWebDialogResult, NSURL *, NSError *);
	objc_arg4 = ^(FBWebDialogResult objc_barg0, NSURL * objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBWebDialogResultCxx barg0 = (FacebookCXX::FBWebDialogResultCxx)objc_barg0;

		void * barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_object(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg4(barg0, barg1, barg2);
	};

	void *objc_arg5 = NULL;
	convert_FBFrictionlessRecipientCacheCxx(objc_arg5, arg5, CONVERT_TO_OBJC);

	[FBWebDialogs presentRequestsDialogModallyWithSession:(__bridge id)objc_arg0 message:(__bridge id)objc_arg1 title:(__bridge id)objc_arg2 parameters:(__bridge id)objc_arg3 handler:objc_arg4 friendCache:(__bridge id)objc_arg5 ];
}

void FacebookCXX::FBWebDialogsCxx::presentFeedDialogModallyWithSession_parameters_handler(FacebookCXX::FBSessionCxx * arg0,std::map<void *, void *>& arg1,void(*arg2)(FacebookCXX::FBWebDialogResultCxx &, void * &, std::string &)){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_dictionary(objc_arg1, arg1, CONVERT_TO_OBJC);

	void (^objc_arg2)(FBWebDialogResult, NSURL *, NSError *);
	objc_arg2 = ^(FBWebDialogResult objc_barg0, NSURL * objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBWebDialogResultCxx barg0 = (FacebookCXX::FBWebDialogResultCxx)objc_barg0;

		void * barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_object(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg2(barg0, barg1, barg2);
	};

	[FBWebDialogs presentFeedDialogModallyWithSession:(__bridge id)objc_arg0 parameters:(__bridge id)objc_arg1 handler:objc_arg2 ];
}


