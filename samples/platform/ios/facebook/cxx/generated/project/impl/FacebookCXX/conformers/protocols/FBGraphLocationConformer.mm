/*
 * Header (Protocol Implementation)
 * Author: cxx-bindings-generator
 */


#include "FacebookCXXConverter.hpp"
#include "FBGraphLocationConformer.h"

@interface FBGraphLocationConformer()

@property(readwrite, nonatomic) FacebookCXX::FBGraphLocationConformerCxx * proxy;

@end

@implementation FBGraphLocationConformer

@synthesize proxy;

- (id) initWithProxy:(FacebookCXX::FBGraphLocationConformerCxx *)aproxy{
	self.proxy = aproxy;
	return self;
}

+ (FBGraphLocationConformer *)conformerWithProxy:(FacebookCXX::FBGraphLocationConformerCxx *)proxy{
	return [[FBGraphLocationConformer alloc] initWithProxy:proxy];
}

- (NSString *) street{
	std::string result = self.proxy->street();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setStreet:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setStreet(arg0);
}

- (NSString *) city{
	std::string result = self.proxy->city();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setCity:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setCity(arg0);
}

- (NSString *) state{
	std::string result = self.proxy->state();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setState:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setState(arg0);
}

- (NSString *) country{
	std::string result = self.proxy->country();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setCountry:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setCountry(arg0);
}

- (NSString *) zip{
	std::string result = self.proxy->zip();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setZip:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setZip(arg0);
}

- (NSNumber *) latitude{
	void * result = self.proxy->latitude();
	void *objc_result = NULL;
	convert_object(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setLatitude:(NSNumber *)objc_arg0{
	void * arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_object(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setLatitude(arg0);
}

- (NSNumber *) longitude{
	void * result = self.proxy->longitude();
	void *objc_result = NULL;
	convert_object(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setLongitude:(NSNumber *)objc_arg0{
	void * arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_object(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setLongitude(arg0);
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
