/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include "FBFriendPickerViewControllerCxx.hpp"
#include <FacebookSDK/FBFriendPickerViewController.h>
#include <FacebookSDK/FBCacheDescriptor.h>
#include <FacebookSDK/FBSession.h>
#include "FacebookCXXConverter.hpp"

FacebookCXX::FBFriendPickerViewControllerCxx::FBFriendPickerViewControllerCxx(const FBFriendPickerViewControllerCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBFriendPickerViewControllerCxx::FBFriendPickerViewControllerCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBFriendPickerViewControllerCxx::~FBFriendPickerViewControllerCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBFriendPickerViewControllerCxx::getProxy() const{
	return _proxy;
}

void * FacebookCXX::FBFriendPickerViewControllerCxx::init(){
	void *objc_result = (__bridge void *)[(__bridge FBFriendPickerViewController *)_proxy init];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBFriendPickerViewControllerCxx::initWithCoder(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge FBFriendPickerViewController *)_proxy initWithCoder:(__bridge id)objc_arg0 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBFriendPickerViewControllerCxx::initWithNibName_bundle(std::string& arg0,void *& arg1){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[(__bridge FBFriendPickerViewController *)_proxy initWithNibName:(__bridge id)objc_arg0 bundle:(__bridge id)objc_arg1 ];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBFriendPickerViewControllerCxx::configureUsingCachedDescriptor(FacebookCXX::FBCacheDescriptorCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBCacheDescriptorCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBFriendPickerViewController *)_proxy configureUsingCachedDescriptor:(__bridge id)objc_arg0 ];
}

void FacebookCXX::FBFriendPickerViewControllerCxx::loadData(){
	[(__bridge FBFriendPickerViewController *)_proxy loadData];
}

void FacebookCXX::FBFriendPickerViewControllerCxx::updateView(){
	[(__bridge FBFriendPickerViewController *)_proxy updateView];
}

void FacebookCXX::FBFriendPickerViewControllerCxx::clearSelection(){
	[(__bridge FBFriendPickerViewController *)_proxy clearSelection];
}

FacebookCXX::FBCacheDescriptorCxx * FacebookCXX::FBFriendPickerViewControllerCxx::cacheDescriptor(){
	void *objc_result = (__bridge void *)[FBFriendPickerViewController cacheDescriptor];
	FacebookCXX::FBCacheDescriptorCxx * result = NULL;
	convert_FBCacheDescriptorCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBCacheDescriptorCxx * FacebookCXX::FBFriendPickerViewControllerCxx::cacheDescriptorWithUserID_fieldsForRequest(std::string& arg0,void *& arg1){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	void *objc_arg1 = NULL;
	convert_object(objc_arg1, arg1, CONVERT_TO_OBJC);

	void *objc_result = (__bridge void *)[FBFriendPickerViewController cacheDescriptorWithUserID:(__bridge id)objc_arg0 fieldsForRequest:(__bridge id)objc_arg1 ];
	FacebookCXX::FBCacheDescriptorCxx * result = NULL;
	convert_FBCacheDescriptorCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void * FacebookCXX::FBFriendPickerViewControllerCxx::spinner(){
	void *objc_result = (__bridge void *)[(__bridge FBFriendPickerViewController *)_proxy spinner];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBFriendPickerViewControllerCxx::setSpinner(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBFriendPickerViewController *)_proxy setSpinner:(__bridge id)objc_arg0 ];
}

void * FacebookCXX::FBFriendPickerViewControllerCxx::tableView(){
	void *objc_result = (__bridge void *)[(__bridge FBFriendPickerViewController *)_proxy tableView];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBFriendPickerViewControllerCxx::setTableView(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBFriendPickerViewController *)_proxy setTableView:(__bridge id)objc_arg0 ];
}

signed char FacebookCXX::FBFriendPickerViewControllerCxx::allowsMultipleSelection(){
	signed char objc_result = (signed char)[(__bridge FBFriendPickerViewController *)_proxy allowsMultipleSelection];
	return objc_result;
}

void FacebookCXX::FBFriendPickerViewControllerCxx::setAllowsMultipleSelection(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[(__bridge FBFriendPickerViewController *)_proxy setAllowsMultipleSelection:objc_arg0 ];
}

signed char FacebookCXX::FBFriendPickerViewControllerCxx::itemPicturesEnabled(){
	signed char objc_result = (signed char)[(__bridge FBFriendPickerViewController *)_proxy itemPicturesEnabled];
	return objc_result;
}

void FacebookCXX::FBFriendPickerViewControllerCxx::setItemPicturesEnabled(signed char& arg0){
	BOOL objc_arg0 = (BOOL)arg0;

	[(__bridge FBFriendPickerViewController *)_proxy setItemPicturesEnabled:objc_arg0 ];
}

void * FacebookCXX::FBFriendPickerViewControllerCxx::fieldsForRequest(){
	void *objc_result = (__bridge void *)[(__bridge FBFriendPickerViewController *)_proxy fieldsForRequest];
	void * result;
	convert_object(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBFriendPickerViewControllerCxx::setFieldsForRequest(void *& arg0){
	void *objc_arg0 = NULL;
	convert_object(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBFriendPickerViewController *)_proxy setFieldsForRequest:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBSessionCxx * FacebookCXX::FBFriendPickerViewControllerCxx::session(){
	void *objc_result = (__bridge void *)[(__bridge FBFriendPickerViewController *)_proxy session];
	FacebookCXX::FBSessionCxx * result = NULL;
	convert_FBSessionCxx(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBFriendPickerViewControllerCxx::setSession(FacebookCXX::FBSessionCxx * arg0){
	void *objc_arg0 = NULL;
	convert_FBSessionCxx(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBFriendPickerViewController *)_proxy setSession:(__bridge id)objc_arg0 ];
}

std::string FacebookCXX::FBFriendPickerViewControllerCxx::userID(){
	void *objc_result = (__bridge void *)[(__bridge FBFriendPickerViewController *)_proxy userID];
	std::string result;
	convert_string(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBFriendPickerViewControllerCxx::setUserID(std::string& arg0){
	void *objc_arg0 = NULL;
	convert_string(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBFriendPickerViewController *)_proxy setUserID:(__bridge id)objc_arg0 ];
}

std::vector<void *> FacebookCXX::FBFriendPickerViewControllerCxx::selection(){
	void *objc_result = (__bridge void *)[(__bridge FBFriendPickerViewController *)_proxy selection];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

FacebookCXX::FBFriendSortOrderingCxx FacebookCXX::FBFriendPickerViewControllerCxx::sortOrdering(){
	FacebookCXX::FBFriendSortOrderingCxx objc_result = (FacebookCXX::FBFriendSortOrderingCxx)[(__bridge FBFriendPickerViewController *)_proxy sortOrdering];
	return objc_result;
}

void FacebookCXX::FBFriendPickerViewControllerCxx::setSortOrdering(FacebookCXX::FBFriendSortOrderingCxx& arg0){
	FBFriendSortOrdering objc_arg0 = (FBFriendSortOrdering)arg0;

	[(__bridge FBFriendPickerViewController *)_proxy setSortOrdering:objc_arg0 ];
}

FacebookCXX::FBFriendDisplayOrderingCxx FacebookCXX::FBFriendPickerViewControllerCxx::displayOrdering(){
	FacebookCXX::FBFriendDisplayOrderingCxx objc_result = (FacebookCXX::FBFriendDisplayOrderingCxx)[(__bridge FBFriendPickerViewController *)_proxy displayOrdering];
	return objc_result;
}

void FacebookCXX::FBFriendPickerViewControllerCxx::setDisplayOrdering(FacebookCXX::FBFriendDisplayOrderingCxx& arg0){
	FBFriendDisplayOrdering objc_arg0 = (FBFriendDisplayOrdering)arg0;

	[(__bridge FBFriendPickerViewController *)_proxy setDisplayOrdering:objc_arg0 ];
}


