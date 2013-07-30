/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBViewControllerCxx.hpp"
#include <FacebookSDK/FBViewController.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBViewControllerCxx::FBViewControllerCxx(const FBViewControllerCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBViewControllerCxx::FBViewControllerCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBViewControllerCxx::~FBViewControllerCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBViewControllerCxx::getProxy() const{
	return _proxy;
}

void FacebookCXX::FBViewControllerCxx::presentModallyFromViewController_animated_handler(void *& arg0,signed char& arg1,void(*arg2)(FacebookCXX::FBViewControllerCxx *, signed char &)){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	BOOL objc_arg1 = (BOOL)arg1;

	void (^objc_arg2)(FBViewController *, signed char);
	objc_arg2 = ^(FBViewController * objc_barg0, BOOL objc_barg1){
		FacebookCXX::FBViewControllerCxx *barg0 = NULL;
		void *objc_bcast0 = (__bridge void *)objc_barg0;
		convert_FBViewControllerCxx(objc_bcast0, barg0, CONVERT_TO_CXX);

		signed char barg1 = (signed char)objc_barg1;

		arg2(barg0, barg1);
	};

	[(__bridge FBViewController *)_proxy presentModallyFromViewController:(__bridge id)objc_arg0 animated:objc_arg1 handler:objc_arg2 ];
}

void * FacebookCXX::FBViewControllerCxx::cancelButton(){
	void *objc_result = (__bridge void *)[(__bridge FBViewController *)_proxy cancelButton];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBViewControllerCxx::setCancelButton(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBViewController *)_proxy setCancelButton:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBViewControllerCxx::doneButton(){
	void *objc_result = (__bridge void *)[(__bridge FBViewController *)_proxy doneButton];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBViewControllerCxx::setDoneButton(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBViewController *)_proxy setDoneButton:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBViewControllerDelegateProtocolCxx * FacebookCXX::FBViewControllerCxx::delegate(){
	void *objc_result = (__bridge void *)[(__bridge FBViewController *)_proxy delegate];
	FacebookCXX::FBViewControllerDelegateProtocolCxx * result = NULL;
	convert_FBViewControllerDelegateProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBViewControllerCxx::setDelegate(FacebookCXX::FBViewControllerDelegateConformerCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBViewControllerDelegateConformerCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBViewController *)_proxy setDelegate:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBViewControllerCxx::canvasView(){
	void *objc_result = (__bridge void *)[(__bridge FBViewController *)_proxy canvasView];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}


