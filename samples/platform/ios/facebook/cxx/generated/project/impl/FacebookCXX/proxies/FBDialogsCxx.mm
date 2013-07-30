/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBDialogsCxx.hpp"
#include <FacebookSDK/FBDialogs.h>
#include <FacebookSDK/FBSession.h>
#include <FacebookSDK/FBShareDialogParams.h>
#include <FacebookSDK/FBAppCall.h>
#include <FacebookSDK/FBOpenGraphActionShareDialogParams.h>
#include <FacebookSDK/FBOpenGraphAction.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBDialogsCxx::FBDialogsCxx(const FBDialogsCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBDialogsCxx::FBDialogsCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBDialogsCxx::~FBDialogsCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBDialogsCxx::getProxy() const{
	return _proxy;
}

signed char FacebookCXX::FBDialogsCxx::presentOSIntegratedShareDialogModallyFrom_initialText_image_url_handler(void *& arg0,std::string& arg1,void *& arg2,void *& arg3,void(*arg4)(FacebookCXX::FBOSIntegratedShareDialogResultCxx &, std::string &)){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_object(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_object(objc_arg3, arg3, CONVERT_TO_OBJC);

	void (^objc_arg4)(FBOSIntegratedShareDialogResult, NSError *);
	objc_arg4 = ^(FBOSIntegratedShareDialogResult objc_barg0, NSError * objc_barg1){
		FacebookCXX::FBOSIntegratedShareDialogResultCxx barg0 = (FacebookCXX::FBOSIntegratedShareDialogResultCxx)objc_barg0;

		std::string barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_error(objc_bcast1, barg1, CONVERT_TO_CXX);

		arg4(barg0, barg1);
	};

	signed char objc_result = (signed char)[FBDialogs presentOSIntegratedShareDialogModallyFrom:(__bridge id)objc_arg0 initialText:(__bridge id)objc_arg1 image:(__bridge id)objc_arg2 url:(__bridge id)objc_arg3 handler:objc_arg4 ];
	return objc_result;
}

signed char FacebookCXX::FBDialogsCxx::presentOSIntegratedShareDialogModallyFrom_initialText_images_urls_handler(void *& arg0,std::string& arg1,std::vector<void *>& arg2,std::vector<void *>& arg3,void(*arg4)(FacebookCXX::FBOSIntegratedShareDialogResultCxx &, std::string &)){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_array(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_array(objc_arg3, arg3, CONVERT_TO_OBJC);

	void (^objc_arg4)(FBOSIntegratedShareDialogResult, NSError *);
	objc_arg4 = ^(FBOSIntegratedShareDialogResult objc_barg0, NSError * objc_barg1){
		FacebookCXX::FBOSIntegratedShareDialogResultCxx barg0 = (FacebookCXX::FBOSIntegratedShareDialogResultCxx)objc_barg0;

		std::string barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_error(objc_bcast1, barg1, CONVERT_TO_CXX);

		arg4(barg0, barg1);
	};

	signed char objc_result = (signed char)[FBDialogs presentOSIntegratedShareDialogModallyFrom:(__bridge id)objc_arg0 initialText:(__bridge id)objc_arg1 images:(__bridge id)objc_arg2 urls:(__bridge id)objc_arg3 handler:objc_arg4 ];
	return objc_result;
}

signed char FacebookCXX::FBDialogsCxx::presentOSIntegratedShareDialogModallyFrom_session_initialText_images_urls_handler(void *& arg0,FacebookCXX::FBSessionCxx * arg1,std::string& arg2,std::vector<void *>& arg3,std::vector<void *>& arg4,void(*arg5)(FacebookCXX::FBOSIntegratedShareDialogResultCxx &, std::string &)){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_FBSessionCxx(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_array(objc_arg3, arg3, CONVERT_TO_OBJC);

	void *objc_arg4 = NULL;
	convert_array(objc_arg4, arg4, CONVERT_TO_OBJC);

	void (^objc_arg5)(FBOSIntegratedShareDialogResult, NSError *);
	objc_arg5 = ^(FBOSIntegratedShareDialogResult objc_barg0, NSError * objc_barg1){
		FacebookCXX::FBOSIntegratedShareDialogResultCxx barg0 = (FacebookCXX::FBOSIntegratedShareDialogResultCxx)objc_barg0;

		std::string barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_error(objc_bcast1, barg1, CONVERT_TO_CXX);

		arg5(barg0, barg1);
	};

	signed char objc_result = (signed char)[FBDialogs presentOSIntegratedShareDialogModallyFrom:(__bridge id)objc_arg0 session:(__bridge id)objc_arg1 initialText:(__bridge id)objc_arg2 images:(__bridge id)objc_arg3 urls:(__bridge id)objc_arg4 handler:objc_arg5 ];
	return objc_result;
}

signed char FacebookCXX::FBDialogsCxx::canPresentOSIntegratedShareDialogWithSession(FacebookCXX::FBSessionCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[FBDialogs canPresentOSIntegratedShareDialogWithSession:(__bridge id)objc_arg0 ];
	return objc_result;
}

signed char FacebookCXX::FBDialogsCxx::canPresentShareDialogWithParams(FacebookCXX::FBShareDialogParamsCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBShareDialogParamsCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[FBDialogs canPresentShareDialogWithParams:(__bridge id)objc_arg0 ];
	return objc_result;
}

FacebookCXX::FBAppCallCxx * FacebookCXX::FBDialogsCxx::presentShareDialogWithParams_clientState_handler(FacebookCXX::FBShareDialogParamsCxx * arg0,std::map<void *, void *>& arg1,void(*arg2)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &)){
	void *objc_arg0 = NULL;
	convert_FBShareDialogParamsCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_dictionary(objc_arg1, arg1, CONVERT_TO_OBJC);

	void (^objc_arg2)(FBAppCall *, NSDictionary *, NSError *);
	objc_arg2 = ^(FBAppCall * objc_barg0, NSDictionary * objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBAppCallCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBAppCallCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		std::map<void *, void *> barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_dictionary(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg2(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBDialogs presentShareDialogWithParams:(__bridge id)objc_arg0 clientState:(__bridge id)objc_arg1 handler:objc_arg2 ];
	FacebookCXX::FBAppCallCxx * result = NULL;
	convert_FBAppCallCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBAppCallCxx * FacebookCXX::FBDialogsCxx::presentShareDialogWithLink_handler(void *& arg0,void(*arg1)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &)){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void (^objc_arg1)(FBAppCall *, NSDictionary *, NSError *);
	objc_arg1 = ^(FBAppCall * objc_barg0, NSDictionary * objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBAppCallCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBAppCallCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		std::map<void *, void *> barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_dictionary(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg1(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBDialogs presentShareDialogWithLink:(__bridge id)objc_arg0 handler:objc_arg1 ];
	FacebookCXX::FBAppCallCxx * result = NULL;
	convert_FBAppCallCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBAppCallCxx * FacebookCXX::FBDialogsCxx::presentShareDialogWithLink_name_handler(void *& arg0,std::string& arg1,void(*arg2)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &)){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void (^objc_arg2)(FBAppCall *, NSDictionary *, NSError *);
	objc_arg2 = ^(FBAppCall * objc_barg0, NSDictionary * objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBAppCallCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBAppCallCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		std::map<void *, void *> barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_dictionary(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg2(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBDialogs presentShareDialogWithLink:(__bridge id)objc_arg0 name:(__bridge id)objc_arg1 handler:objc_arg2 ];
	FacebookCXX::FBAppCallCxx * result = NULL;
	convert_FBAppCallCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBAppCallCxx * FacebookCXX::FBDialogsCxx::presentShareDialogWithLink_name_caption_description_picture_clientState_handler(void *& arg0,std::string& arg1,std::string& arg2,std::string& arg3,void *& arg4,std::map<void *, void *>& arg5,void(*arg6)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &)){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_string(objc_arg3, arg3, CONVERT_TO_OBJC);

	void *objc_arg4 = NULL;
	convert_object(objc_arg4, arg4, CONVERT_TO_OBJC);

	void *objc_arg5 = NULL;
	convert_dictionary(objc_arg5, arg5, CONVERT_TO_OBJC);

	void (^objc_arg6)(FBAppCall *, NSDictionary *, NSError *);
	objc_arg6 = ^(FBAppCall * objc_barg0, NSDictionary * objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBAppCallCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBAppCallCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		std::map<void *, void *> barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_dictionary(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg6(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBDialogs presentShareDialogWithLink:(__bridge id)objc_arg0 name:(__bridge id)objc_arg1 caption:(__bridge id)objc_arg2 description:(__bridge id)objc_arg3 picture:(__bridge id)objc_arg4 clientState:(__bridge id)objc_arg5 handler:objc_arg6 ];
	FacebookCXX::FBAppCallCxx * result = NULL;
	convert_FBAppCallCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

signed char FacebookCXX::FBDialogsCxx::canPresentShareDialogWithOpenGraphActionParams(FacebookCXX::FBOpenGraphActionShareDialogParamsCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBOpenGraphActionShareDialogParamsCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	signed char objc_result = (signed char)[FBDialogs canPresentShareDialogWithOpenGraphActionParams:(__bridge id)objc_arg0 ];
	return objc_result;
}

FacebookCXX::FBAppCallCxx * FacebookCXX::FBDialogsCxx::presentShareDialogWithOpenGraphActionParams_clientState_handler(FacebookCXX::FBOpenGraphActionShareDialogParamsCxx * arg0,std::map<void *, void *>& arg1,void(*arg2)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &)){
	void *objc_arg0 = NULL;
	convert_FBOpenGraphActionShareDialogParamsCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_dictionary(objc_arg1, arg1, CONVERT_TO_OBJC);

	void (^objc_arg2)(FBAppCall *, NSDictionary *, NSError *);
	objc_arg2 = ^(FBAppCall * objc_barg0, NSDictionary * objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBAppCallCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBAppCallCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		std::map<void *, void *> barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_dictionary(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg2(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBDialogs presentShareDialogWithOpenGraphActionParams:(__bridge id)objc_arg0 clientState:(__bridge id)objc_arg1 handler:objc_arg2 ];
	FacebookCXX::FBAppCallCxx * result = NULL;
	convert_FBAppCallCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBAppCallCxx * FacebookCXX::FBDialogsCxx::presentShareDialogWithOpenGraphAction_actionType_previewPropertyName_handler(FacebookCXX::FBOpenGraphActionConformerCxx * arg0,std::string& arg1,std::string& arg2,void(*arg3)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &)){
	void *objc_arg0 = NULL;
	convert_FBOpenGraphActionConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC);

	void (^objc_arg3)(FBAppCall *, NSDictionary *, NSError *);
	objc_arg3 = ^(FBAppCall * objc_barg0, NSDictionary * objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBAppCallCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBAppCallCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		std::map<void *, void *> barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_dictionary(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg3(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBDialogs presentShareDialogWithOpenGraphAction:(__bridge id)objc_arg0 actionType:(__bridge id)objc_arg1 previewPropertyName:(__bridge id)objc_arg2 handler:objc_arg3 ];
	FacebookCXX::FBAppCallCxx * result = NULL;
	convert_FBAppCallCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBAppCallCxx * FacebookCXX::FBDialogsCxx::presentShareDialogWithOpenGraphAction_actionType_previewPropertyName_clientState_handler(FacebookCXX::FBOpenGraphActionConformerCxx * arg0,std::string& arg1,std::string& arg2,std::map<void *, void *>& arg3,void(*arg4)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &)){
	void *objc_arg0 = NULL;
	convert_FBOpenGraphActionConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_string(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_arg2 = NULL;
	convert_string(objc_arg2, arg2, CONVERT_TO_OBJC);

	void *objc_arg3 = NULL;
	convert_dictionary(objc_arg3, arg3, CONVERT_TO_OBJC);

	void (^objc_arg4)(FBAppCall *, NSDictionary *, NSError *);
	objc_arg4 = ^(FBAppCall * objc_barg0, NSDictionary * objc_barg1, NSError * objc_barg2){
		FacebookCXX::FBAppCallCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBAppCallCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		std::map<void *, void *> barg1;
		void *objc_bcast1 = (__bridge void *)objc_barg1;
		convert_dictionary(objc_bcast1, barg1, CONVERT_TO_CXX);

		std::string barg2;
		void *objc_bcast2 = (__bridge void *)objc_barg2;
		convert_error(objc_bcast2, barg2, CONVERT_TO_CXX);

		arg4(barg0, barg1, barg2);
	};

	void *objc_result = (__bridge void *)[FBDialogs presentShareDialogWithOpenGraphAction:(__bridge id)objc_arg0 actionType:(__bridge id)objc_arg1 previewPropertyName:(__bridge id)objc_arg2 clientState:(__bridge id)objc_arg3 handler:objc_arg4 ];
	FacebookCXX::FBAppCallCxx * result = NULL;
	convert_FBAppCallCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}


