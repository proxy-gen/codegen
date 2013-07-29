/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBPlacePickerViewControllerCxx.hpp"
#include <FacebookSDK/FBPlacePickerViewController.h>
#include <FacebookSDK/FBCacheDescriptor.h>
#include <FacebookSDK/FBSession.h>
#include <FacebookSDK/FBGraphPlace.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBPlacePickerViewControllerCxx::FBPlacePickerViewControllerCxx(const FBPlacePickerViewControllerCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBPlacePickerViewControllerCxx::FBPlacePickerViewControllerCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBPlacePickerViewControllerCxx::~FBPlacePickerViewControllerCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBPlacePickerViewControllerCxx::getProxy() const{
	return _proxy;
}

void FacebookCXX::FBPlacePickerViewControllerCxx::clearSelection(){
	[(__bridge FBPlacePickerViewController *)_proxy clearSelection];
}

void * FacebookCXX::FBPlacePickerViewControllerCxx::init(){
	void *objc_result = (__bridge void *)[(__bridge FBPlacePickerViewController *)_proxy init];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBPlacePickerViewControllerCxx::initWithCoder(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge FBPlacePickerViewController *)_proxy initWithCoder:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBPlacePickerViewControllerCxx::initWithNibName_bundle(std::string& arg0,void *& arg1){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge FBPlacePickerViewController *)_proxy initWithNibName:(__bridge id)objc_arg0 bundle:(__bridge id)objc_arg1 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBPlacePickerViewControllerCxx::configureUsingCachedDescriptor(FacebookCXX::FBCacheDescriptorCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBCacheDescriptorCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBPlacePickerViewController *)_proxy configureUsingCachedDescriptor:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBPlacePickerViewControllerCxx::loadData(){
	[(__bridge FBPlacePickerViewController *)_proxy loadData];
}

void * FacebookCXX::FBPlacePickerViewControllerCxx::spinner(){
	void *objc_result = (__bridge void *)[(__bridge FBPlacePickerViewController *)_proxy spinner];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBPlacePickerViewControllerCxx::setSpinner(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBPlacePickerViewController *)_proxy setSpinner:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBPlacePickerViewControllerCxx::tableView(){
	void *objc_result = (__bridge void *)[(__bridge FBPlacePickerViewController *)_proxy tableView];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBPlacePickerViewControllerCxx::setTableView(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBPlacePickerViewController *)_proxy setTableView:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBPlacePickerViewControllerCxx::fieldsForRequest(){
	void *objc_result = (__bridge void *)[(__bridge FBPlacePickerViewController *)_proxy fieldsForRequest];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBPlacePickerViewControllerCxx::setFieldsForRequest(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBPlacePickerViewController *)_proxy setFieldsForRequest:(__bridge id)objc_arg0 ];
}

signed char FacebookCXX::FBPlacePickerViewControllerCxx::itemPicturesEnabled(){
	signed char objc_result = (signed char)[(__bridge FBPlacePickerViewController *)_proxy itemPicturesEnabled];
	return objc_result;
}

void FacebookCXX::FBPlacePickerViewControllerCxx::setItemPicturesEnabled(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[(__bridge FBPlacePickerViewController *)_proxy setItemPicturesEnabled:objc_arg0 ];
}

int FacebookCXX::FBPlacePickerViewControllerCxx::radiusInMeters(){
	int objc_result = (int)[(__bridge FBPlacePickerViewController *)_proxy radiusInMeters];
	return objc_result;
}

void FacebookCXX::FBPlacePickerViewControllerCxx::setRadiusInMeters(int& arg0){
	NSInteger objc_arg0 = (NSInteger)arg0;

	[(__bridge FBPlacePickerViewController *)_proxy setRadiusInMeters:objc_arg0 ];
}

int FacebookCXX::FBPlacePickerViewControllerCxx::resultsLimit(){
	int objc_result = (int)[(__bridge FBPlacePickerViewController *)_proxy resultsLimit];
	return objc_result;
}

void FacebookCXX::FBPlacePickerViewControllerCxx::setResultsLimit(int& arg0){
	NSInteger objc_arg0 = (NSInteger)arg0;

	[(__bridge FBPlacePickerViewController *)_proxy setResultsLimit:objc_arg0 ];
}

std::string FacebookCXX::FBPlacePickerViewControllerCxx::searchText(){
	void *objc_result = (__bridge void *)[(__bridge FBPlacePickerViewController *)_proxy searchText];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBPlacePickerViewControllerCxx::setSearchText(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBPlacePickerViewController *)_proxy setSearchText:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBSessionCxx * FacebookCXX::FBPlacePickerViewControllerCxx::session(){
	void *objc_result = (__bridge void *)[(__bridge FBPlacePickerViewController *)_proxy session];
	FacebookCXX::FBSessionCxx * result = NULL;
	convert_FBSessionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBPlacePickerViewControllerCxx::setSession(FacebookCXX::FBSessionCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBPlacePickerViewController *)_proxy setSession:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBGraphPlaceProtocolCxx * FacebookCXX::FBPlacePickerViewControllerCxx::selection(){
	void *objc_result = (__bridge void *)[(__bridge FBPlacePickerViewController *)_proxy selection];
	FacebookCXX::FBGraphPlaceProtocolCxx * result = NULL;
	convert_FBGraphPlaceProtocolCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}


