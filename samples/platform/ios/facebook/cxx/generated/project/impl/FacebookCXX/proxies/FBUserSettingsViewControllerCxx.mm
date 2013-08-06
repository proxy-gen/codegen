/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/proxies/FBUserSettingsViewControllerCxx.hpp>
#include <FacebookSDK/FBUserSettingsViewController.h>
#include <FacebookCXX/converters/FacebookCXXConverter.hpp>

FacebookCXX::FBUserSettingsViewControllerCxx::FBUserSettingsViewControllerCxx(const FBUserSettingsViewControllerCxx* cc){
	id proxy_id = (__bridge id)cc->getProxy();
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBUserSettingsViewControllerCxx::FBUserSettingsViewControllerCxx(const void * proxy){
	id proxy_id = (__bridge id)proxy;
	_proxy = (__bridge_retained void *)proxy_id;
}

FacebookCXX::FBUserSettingsViewControllerCxx::~FBUserSettingsViewControllerCxx(){
	id _no_op = (__bridge_transfer id)_proxy;
	#pragma unused (_no_op)
}

void *FacebookCXX::FBUserSettingsViewControllerCxx::getProxy() const{
	return _proxy;
}

std::vector<void *> FacebookCXX::FBUserSettingsViewControllerCxx::permissions(){
	void *objc_result = (__bridge void *)[(__bridge FBUserSettingsViewController *)_proxy permissions];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBUserSettingsViewControllerCxx::setPermissions(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBUserSettingsViewController *)_proxy setPermissions:(__bridge id)objc_arg0 ];
}

std::vector<void *> FacebookCXX::FBUserSettingsViewControllerCxx::readPermissions(){
	void *objc_result = (__bridge void *)[(__bridge FBUserSettingsViewController *)_proxy readPermissions];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBUserSettingsViewControllerCxx::setReadPermissions(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBUserSettingsViewController *)_proxy setReadPermissions:(__bridge id)objc_arg0 ];
}

std::vector<void *> FacebookCXX::FBUserSettingsViewControllerCxx::publishPermissions(){
	void *objc_result = (__bridge void *)[(__bridge FBUserSettingsViewController *)_proxy publishPermissions];
	std::vector<void *> result;
	convert_array(objc_result, result, CONVERT_TO_CXX);
	return result;
}

void FacebookCXX::FBUserSettingsViewControllerCxx::setPublishPermissions(std::vector<void *>& arg0){
	void *objc_arg0 = NULL;
	convert_array(objc_arg0, arg0, CONVERT_TO_OBJC);

	[(__bridge FBUserSettingsViewController *)_proxy setPublishPermissions:(__bridge id)objc_arg0 ];
}

FacebookCXX::FBSessionDefaultAudienceCxx FacebookCXX::FBUserSettingsViewControllerCxx::defaultAudience(){
	FacebookCXX::FBSessionDefaultAudienceCxx objc_result = (FacebookCXX::FBSessionDefaultAudienceCxx)[(__bridge FBUserSettingsViewController *)_proxy defaultAudience];
	return objc_result;
}

void FacebookCXX::FBUserSettingsViewControllerCxx::setDefaultAudience(FacebookCXX::FBSessionDefaultAudienceCxx& arg0){
	FBSessionDefaultAudience objc_arg0 = (FBSessionDefaultAudience)arg0;

	[(__bridge FBUserSettingsViewController *)_proxy setDefaultAudience:objc_arg0 ];
}


