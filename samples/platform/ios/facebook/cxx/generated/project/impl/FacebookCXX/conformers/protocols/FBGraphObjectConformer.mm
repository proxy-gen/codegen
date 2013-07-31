/*
 * Header (Protocol Implementation)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/converters/FacebookCXXConverter.hpp>
#include <FacebookCXX/conformers/protocols/FBGraphObjectConformer.h>

@interface FBGraphObjectConformer()

@property(readwrite, nonatomic) FacebookCXX::FBGraphObjectConformerCxx * proxy;

@end

@implementation FBGraphObjectConformer

@synthesize proxy;

- (id) initWithProxy:(FacebookCXX::FBGraphObjectConformerCxx *)aproxy{
	self.proxy = aproxy;
	return self;
}

+ (FBGraphObjectConformer *)conformerWithProxy:(FacebookCXX::FBGraphObjectConformerCxx *)proxy{
	return [[FBGraphObjectConformer alloc] initWithProxy:proxy];
}

- (NSUInteger) count{
	unsigned int result = (NSUInteger)(self.proxy->count());
	return result;
}

- (id)  objectForKey:(id)objc_arg0{
	void * arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_object(objc_cast0, arg0, CONVERT_TO_CXX);

	void * result = self.proxy->objectForKey(arg0);
	void *objc_result = NULL;
	convert_object(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (NSEnumerator *) keyEnumerator{
	void * result = self.proxy->keyEnumerator();
	void *objc_result = NULL;
	convert_object(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  removeObjectForKey:(id)objc_arg0{
	void * arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_object(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->removeObjectForKey(arg0);
}

- (void)  setObject:(id)objc_arg0 forKey:(id)objc_arg1{
	void * arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_object(objc_cast0, arg0, CONVERT_TO_CXX);

	void * arg1;
	void *objc_cast1 = (__bridge void *)objc_arg1;
	convert_object(objc_cast1, arg1, CONVERT_TO_CXX);

	self.proxy->setObject_forKey(arg0, arg1);
}

- (BOOL) provisionedForPost{
	signed char result = (BOOL)(self.proxy->provisionedForPost());
	return result;
}

- (void)  setProvisionedForPost:(BOOL)objc_arg0{
	signed char arg0 = (signed char)objc_arg0;

	self.proxy->setProvisionedForPost(arg0);
}

@end
