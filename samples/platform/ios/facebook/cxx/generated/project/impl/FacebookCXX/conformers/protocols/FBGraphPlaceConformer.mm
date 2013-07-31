/*
 * Header (Protocol Implementation)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/converters/FacebookCXXConverter.hpp>
#include <FacebookCXX/conformers/protocols/FBGraphPlaceConformer.h>

@interface FBGraphPlaceConformer()

@property(readwrite, nonatomic) FacebookCXX::FBGraphPlaceConformerCxx * proxy;

@end

@implementation FBGraphPlaceConformer

@synthesize proxy;

- (id) initWithProxy:(FacebookCXX::FBGraphPlaceConformerCxx *)aproxy{
	self.proxy = aproxy;
	return self;
}

+ (FBGraphPlaceConformer *)conformerWithProxy:(FacebookCXX::FBGraphPlaceConformerCxx *)proxy{
	return [[FBGraphPlaceConformer alloc] initWithProxy:proxy];
}

- (NSString *) id{
	std::string result = self.proxy->_id();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setId:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setId(arg0);
}

- (NSString *) name{
	std::string result = self.proxy->name();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setName:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setName(arg0);
}

- (NSString *) category{
	std::string result = self.proxy->category();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setCategory:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setCategory(arg0);
}

- (id<FBGraphLocation>) location{
	FacebookCXX::FBGraphLocationProtocolCxx *result = self.proxy->location();
	void *objc_result = NULL;
	convert_FBGraphLocationProtocolCxx(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setLocation:(id<FBGraphLocation>)objc_arg0{
	FacebookCXX::FBGraphLocationConformerCxx *arg0 = NULL;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_FBGraphLocationConformerCxx(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setLocation(arg0);
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
