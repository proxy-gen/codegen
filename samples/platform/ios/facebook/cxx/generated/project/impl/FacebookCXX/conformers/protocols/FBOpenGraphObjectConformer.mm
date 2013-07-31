/*
 * Header (Protocol Implementation)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/converters/FacebookCXXConverter.hpp>
#include <FacebookCXX/conformers/protocols/FBOpenGraphObjectConformer.h>

@interface FBOpenGraphObjectConformer()

@property(readwrite, nonatomic) FacebookCXX::FBOpenGraphObjectConformerCxx * proxy;

@end

@implementation FBOpenGraphObjectConformer

@synthesize proxy;

- (id) initWithProxy:(FacebookCXX::FBOpenGraphObjectConformerCxx *)aproxy{
	self.proxy = aproxy;
	return self;
}

+ (FBOpenGraphObjectConformer *)conformerWithProxy:(FacebookCXX::FBOpenGraphObjectConformerCxx *)proxy{
	return [[FBOpenGraphObjectConformer alloc] initWithProxy:proxy];
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

- (NSString *) type{
	std::string result = self.proxy->type();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setType:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setType(arg0);
}

- (NSString *) title{
	std::string result = self.proxy->title();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setTitle:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setTitle(arg0);
}

- (id) image{
	void * result = self.proxy->image();
	void *objc_result = NULL;
	convert_object(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setImage:(id)objc_arg0{
	void * arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_object(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setImage(arg0);
}

- (id) url{
	void * result = self.proxy->url();
	void *objc_result = NULL;
	convert_object(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setUrl:(id)objc_arg0{
	void * arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_object(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setUrl(arg0);
}

- (id) description{
	void * result = self.proxy->description();
	void *objc_result = NULL;
	convert_object(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setDescription:(id)objc_arg0{
	void * arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_object(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setDescription(arg0);
}

- (id<FBGraphObject>) data{
	FacebookCXX::FBGraphObjectProtocolCxx *result = self.proxy->data();
	void *objc_result = NULL;
	convert_FBGraphObjectProtocolCxx(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setData:(id<FBGraphObject>)objc_arg0{
	FacebookCXX::FBGraphObjectConformerCxx *arg0 = NULL;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_FBGraphObjectConformerCxx(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setData(arg0);
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
