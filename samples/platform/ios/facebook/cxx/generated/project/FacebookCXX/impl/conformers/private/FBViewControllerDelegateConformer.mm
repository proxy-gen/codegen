/*
 * Header (Protocol Implementation)
 * Author: cxx-bindings-generator
 */


#include "FacebookCXXConverter.hpp"
#include "FBViewControllerDelegateConformer.h"

@interface FBViewControllerDelegateConformer()

@property(readwrite, nonatomic) FacebookCXX::FBViewControllerDelegateConformerCxx * proxy;

@end

@implementation FBViewControllerDelegateConformer

@synthesize proxy;

- (id) initWithProxy:(FacebookCXX::FBViewControllerDelegateConformerCxx *)aproxy{
	self.proxy = aproxy;
	return self;
}

+ (FBViewControllerDelegateConformer *)conformerWithProxy:(FacebookCXX::FBViewControllerDelegateConformerCxx *)proxy{
	return [[FBViewControllerDelegateConformer alloc] initWithProxy:proxy];
}

- (void)  facebookViewControllerCancelWasPressed:(id)objc_arg0{
	void * arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_object(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->facebookViewControllerCancelWasPressed(arg0);
}

- (void)  facebookViewControllerDoneWasPressed:(id)objc_arg0{
	void * arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_object(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->facebookViewControllerDoneWasPressed(arg0);
}

@end
