/*
 * Header (Protocol Implementation)
 * Author: cxx-bindings-generator
 */


#include "FacebookCXXConverter.hpp"
#include "FBWebDialogsDelegateConformer.h"

@interface FBWebDialogsDelegateConformer()

@property(readwrite, nonatomic) FacebookCXX::FBWebDialogsDelegateConformerCxx * proxy;

@end

@implementation FBWebDialogsDelegateConformer

@synthesize proxy;

- (id) initWithProxy:(FacebookCXX::FBWebDialogsDelegateConformerCxx *)aproxy{
	self.proxy = aproxy;
	return self;
}

+ (FBWebDialogsDelegateConformer *)conformerWithProxy:(FacebookCXX::FBWebDialogsDelegateConformerCxx *)proxy{
	return [[FBWebDialogsDelegateConformer alloc] initWithProxy:proxy];
}

- (void)  webDialogsWillPresentDialog:(NSString *)objc_arg0 parameters:(NSMutableDictionary *)objc_arg1 session:(FBSession *)objc_arg2{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	void * arg1;
	void *objc_cast1 = (__bridge void *)objc_arg1;
	convert_object(objc_cast1, arg1, CONVERT_TO_CXX);

	FacebookCXX::FBSessionCxx *arg2 = NULL;
	void *objc_cast2 = (__bridge void *)objc_arg2;
	convert_FBSessionCxx(objc_cast2, arg2, CONVERT_TO_CXX);

	self.proxy->webDialogsWillPresentDialog_parameters_session(arg0, arg1, arg2);
}

- (BOOL)  webDialogsDialog:(NSString *)objc_arg0 parameters:(NSDictionary *)objc_arg1 session:(FBSession *)objc_arg2 shouldAutoHandleURL:(NSURL *)objc_arg3{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	std::map<void *, void *> arg1;
	void *objc_cast1 = (__bridge void *)objc_arg1;
	convert_dictionary(objc_cast1, arg1, CONVERT_TO_CXX);

	FacebookCXX::FBSessionCxx *arg2 = NULL;
	void *objc_cast2 = (__bridge void *)objc_arg2;
	convert_FBSessionCxx(objc_cast2, arg2, CONVERT_TO_CXX);

	void * arg3;
	void *objc_cast3 = (__bridge void *)objc_arg3;
	convert_object(objc_cast3, arg3, CONVERT_TO_CXX);

	signed char result = (BOOL)(self.proxy->webDialogsDialog_parameters_session_shouldAutoHandleURL(arg0, arg1, arg2, arg3));
	return result;
}

@end
