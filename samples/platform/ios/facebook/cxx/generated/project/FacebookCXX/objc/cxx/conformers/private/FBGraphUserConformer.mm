/*
 * Header (Protocol Implementation)
 * Author: cxx-bindings-generator
 */


#include "FacebookCXXConverter.hpp"
#include "FBGraphUserConformer.h"

@interface FBGraphUserConformer()

@property(readwrite, nonatomic) FacebookCXX::FBGraphUserConformerCxx * proxy;

@end

@implementation FBGraphUserConformer

@synthesize proxy;

- (id) initWithProxy:(FacebookCXX::FBGraphUserConformerCxx *)aproxy{
	self.proxy = aproxy;
	return self;
}

+ (FBGraphUserConformer *)conformerWithProxy:(FacebookCXX::FBGraphUserConformerCxx *)proxy{
	return [[FBGraphUserConformer alloc] initWithProxy:proxy];
}

- (NSString *) id{
	std::string result = self.proxy->id();
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

- (NSString *) first_name{
	std::string result = self.proxy->first_name();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setFirst_name:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setFirst_name(arg0);
}

- (NSString *) middle_name{
	std::string result = self.proxy->middle_name();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setMiddle_name:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setMiddle_name(arg0);
}

- (NSString *) last_name{
	std::string result = self.proxy->last_name();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setLast_name:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setLast_name(arg0);
}

- (NSString *) link{
	std::string result = self.proxy->link();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setLink:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setLink(arg0);
}

- (NSString *) username{
	std::string result = self.proxy->username();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setUsername:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setUsername(arg0);
}

- (NSString *) birthday{
	std::string result = self.proxy->birthday();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setBirthday:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setBirthday(arg0);
}

- (id<FBGraphPlace>) location{
	FacebookCXX::FBGraphPlaceConformerCxx *result = self.proxy->location();
	void *objc_result = NULL;
	convert_FBGraphPlaceConformerCxx(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setLocation:(id<FBGraphPlace>)objc_arg0{
	FacebookCXX::FBGraphPlaceConformerCxx *arg0 = NULL;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_FBGraphPlaceConformerCxx(objc_cast0, arg0, CONVERT_TO_CXX);

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

@end
