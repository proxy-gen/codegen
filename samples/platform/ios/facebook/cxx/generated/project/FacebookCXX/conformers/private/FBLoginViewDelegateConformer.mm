/*
 * Header (Protocol Implementation)
 * Author: cxx-bindings-generator
 */


#include "FacebookCXXConverter.hpp"
#include "FBLoginViewDelegateConformer.h"

@interface FBLoginViewDelegateConformer()

@property(readwrite, nonatomic) FacebookCXX::FBLoginViewDelegateConformerCxx * proxy;

@end

@implementation FBLoginViewDelegateConformer

@synthesize proxy;

- (id) initWithProxy:(FacebookCXX::FBLoginViewDelegateConformerCxx *)aproxy{
	self.proxy = aproxy;
	return self;
}

+ (FBLoginViewDelegateConformer *)conformerWithProxy:(FacebookCXX::FBLoginViewDelegateConformerCxx *)proxy{
	return [[FBLoginViewDelegateConformer alloc] initWithProxy:proxy];
}

- (void)  loginViewShowingLoggedInUser:(FBLoginView *)objc_arg0{
	FacebookCXX::FBLoginViewCxx *arg0 = NULL;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_FBLoginViewCxx(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->loginViewShowingLoggedInUser(arg0);
}

- (void)  loginViewFetchedUserInfo:(FBLoginView *)objc_arg0 user:(id<FBGraphUser>)objc_arg1{
	FacebookCXX::FBLoginViewCxx *arg0 = NULL;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_FBLoginViewCxx(objc_cast0, arg0, CONVERT_TO_CXX);

	FacebookCXX::FBGraphUserConformerCxx *arg1 = NULL;
	void *objc_cast1 = (__bridge void *)objc_arg1;
	convert_FBGraphUserConformerCxx(objc_cast1, arg1, CONVERT_TO_CXX);

	self.proxy->loginViewFetchedUserInfo_user(arg0, arg1);
}

- (void)  loginViewShowingLoggedOutUser:(FBLoginView *)objc_arg0{
	FacebookCXX::FBLoginViewCxx *arg0 = NULL;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_FBLoginViewCxx(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->loginViewShowingLoggedOutUser(arg0);
}

- (void)  loginView:(FBLoginView *)objc_arg0 handleError:(NSError *)objc_arg1{
	FacebookCXX::FBLoginViewCxx *arg0 = NULL;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_FBLoginViewCxx(objc_cast0, arg0, CONVERT_TO_CXX);

	std::string arg1;
	void *objc_cast1 = (__bridge void *)objc_arg1;
	convert_error(objc_cast1, arg1, CONVERT_TO_CXX);

	self.proxy->loginView_handleError(arg0, arg1);
}

@end
