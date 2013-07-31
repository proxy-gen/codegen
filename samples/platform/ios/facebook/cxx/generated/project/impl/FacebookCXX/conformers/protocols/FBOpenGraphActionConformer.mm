/*
 * Header (Protocol Implementation)
 * Author: cxx-bindings-generator
 */


#include <FacebookCXX/converters/FacebookCXXConverter.hpp>
#include <FacebookCXX/conformers/protocols/FBOpenGraphActionConformer.h>

@interface FBOpenGraphActionConformer()

@property(readwrite, nonatomic) FacebookCXX::FBOpenGraphActionConformerCxx * proxy;

@end

@implementation FBOpenGraphActionConformer

@synthesize proxy;

- (id) initWithProxy:(FacebookCXX::FBOpenGraphActionConformerCxx *)aproxy{
	self.proxy = aproxy;
	return self;
}

+ (FBOpenGraphActionConformer *)conformerWithProxy:(FacebookCXX::FBOpenGraphActionConformerCxx *)proxy{
	return [[FBOpenGraphActionConformer alloc] initWithProxy:proxy];
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

- (NSString *) start_time{
	std::string result = self.proxy->start_time();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setStart_time:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setStart_time(arg0);
}

- (NSString *) end_time{
	std::string result = self.proxy->end_time();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setEnd_time:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setEnd_time(arg0);
}

- (NSString *) publish_time{
	std::string result = self.proxy->publish_time();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setPublish_time:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setPublish_time(arg0);
}

- (NSString *) created_time{
	std::string result = self.proxy->created_time();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setCreated_time:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setCreated_time(arg0);
}

- (NSString *) expires_time{
	std::string result = self.proxy->expires_time();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setExpires_time:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setExpires_time(arg0);
}

- (NSString *) ref{
	std::string result = self.proxy->ref();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setRef:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setRef(arg0);
}

- (NSString *) message{
	std::string result = self.proxy->message();
	void *objc_result = NULL;
	convert_string(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setMessage:(NSString *)objc_arg0{
	std::string arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_string(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setMessage(arg0);
}

- (id<FBGraphPlace>) place{
	FacebookCXX::FBGraphPlaceProtocolCxx *result = self.proxy->place();
	void *objc_result = NULL;
	convert_FBGraphPlaceProtocolCxx(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setPlace:(id<FBGraphPlace>)objc_arg0{
	FacebookCXX::FBGraphPlaceConformerCxx *arg0 = NULL;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_FBGraphPlaceConformerCxx(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setPlace(arg0);
}

- (NSArray *) tags{
	std::vector<void *> result = self.proxy->tags();
	void *objc_result = NULL;
	convert_array(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setTags:(NSArray *)objc_arg0{
	std::vector<void *> arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_array(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setTags(arg0);
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

- (id<FBGraphUser>) from{
	FacebookCXX::FBGraphUserProtocolCxx *result = self.proxy->from();
	void *objc_result = NULL;
	convert_FBGraphUserProtocolCxx(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setFrom:(id<FBGraphUser>)objc_arg0{
	FacebookCXX::FBGraphUserConformerCxx *arg0 = NULL;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_FBGraphUserConformerCxx(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setFrom(arg0);
}

- (NSArray *) likes{
	std::vector<void *> result = self.proxy->likes();
	void *objc_result = NULL;
	convert_array(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setLikes:(NSArray *)objc_arg0{
	std::vector<void *> arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_array(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setLikes(arg0);
}

- (id<FBGraphObject>) application{
	FacebookCXX::FBGraphObjectProtocolCxx *result = self.proxy->application();
	void *objc_result = NULL;
	convert_FBGraphObjectProtocolCxx(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setApplication:(id<FBGraphObject>)objc_arg0{
	FacebookCXX::FBGraphObjectConformerCxx *arg0 = NULL;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_FBGraphObjectConformerCxx(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setApplication(arg0);
}

- (NSArray *) comments{
	std::vector<void *> result = self.proxy->comments();
	void *objc_result = NULL;
	convert_array(objc_result, result, CONVERT_TO_OBJC);
	return (__bridge id)objc_result;
}

- (void)  setComments:(NSArray *)objc_arg0{
	std::vector<void *> arg0;
	void *objc_cast0 = (__bridge void *)objc_arg0;
	convert_array(objc_cast0, arg0, CONVERT_TO_CXX);

	self.proxy->setComments(arg0);
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
