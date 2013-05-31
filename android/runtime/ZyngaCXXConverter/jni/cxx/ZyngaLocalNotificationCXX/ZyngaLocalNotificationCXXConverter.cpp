/*
 * ZyngaLocalNotificationCXXConverter.cpp
 *
 *  Created on: May 16, 2013
 *      Author: rvergis
 */

#include "ZyngaLocalNotificationCXXConverter.hpp"

#define LOG_TAG "ZyngaLocalNotificationCXXConverter"
#define LOGV(...) ((void)__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__))
#define LOGW_V(message, args) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, message, args))

ZyngaLocalNotificationCXXConverter* ZyngaLocalNotificationCXXConverter::sm_sharedInstance = new ZyngaLocalNotificationCXXConverter();

ZyngaLocalNotificationCXXConverter::ZyngaLocalNotificationCXXConverter()
{
	LOGV("ZyngaLocalNotificationCXXConverter constructor invoked");
}

ZyngaLocalNotificationCXXConverter::~ZyngaLocalNotificationCXXConverter()
{
	LOGV("ZyngaLocalNotificationCXXConverter destructor invoked");
}

ZyngaLocalNotificationCXXConverter* ZyngaLocalNotificationCXXConverter::sharedInstance()
{
	return sm_sharedInstance;
}

void ZyngaLocalNotificationCXXConverter::fromCXXMapToMap(std::map<std::string,std::string> map, jobject &result)
{
	JNIContext *jni = JNIContext::sharedInstance();
	result = jni->createNewObjectRef("java/util/HashMap");
	for (std::map<std::string,std::string>::const_iterator iter = map.begin();
		  iter != map.end(); iter++)
	{
	  std::string skey = (std::string) (*iter).first;
	  std::string sval = (std::string) (*iter).second;
	  jstring jkey = jni->toJString(skey);
	  jstring jval = jni->toJString(sval);
	  jni->invokeObjectMethod(result, "java/util/HashMap", "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", jkey, jval);
	  jni->deleteLocalRef(jkey);
	  jni->deleteLocalRef(jval);
	}
}
