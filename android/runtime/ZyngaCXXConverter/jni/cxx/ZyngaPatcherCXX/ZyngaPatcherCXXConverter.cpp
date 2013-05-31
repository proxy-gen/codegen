/*
 * ZyngaPatcherCXXConverter.cpp
 *
 *  Created on: Apr 4, 2013
 *      Author: rvergis
 */

#include "ZyngaPatcherCXXConverter.hpp"

#define LOG_TAG "ZyngaPatcherCXXConverter"
#define LOGV(...) ((void)__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__))
#define LOGW_V(message, args) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, message, args))

ZyngaPatcherCXXConverter* ZyngaPatcherCXXConverter::sm_sharedInstance = new ZyngaPatcherCXXConverter();

ZyngaPatcherCXXConverter::ZyngaPatcherCXXConverter()
{
	LOGV("ZyngaPatcherCXXConverter constructor invoked");
}

ZyngaPatcherCXXConverter::~ZyngaPatcherCXXConverter()
{
	LOGV("ZyngaPatcherCXXConverter destructor invoked");
}

ZyngaPatcherCXXConverter* ZyngaPatcherCXXConverter::sharedInstance()
{
	return sm_sharedInstance;
}

void ZyngaPatcherCXXConverter::readBoolFromPayload(jobject obj, bool &result)
{
	JNIContext *jni = JNIContext::sharedInstance();

	LOGV("callMethod jniType jobject");
	bool arg0;
 	//~ begin convert from java.lang.Object to bool
	arg0 = jni->booleanValue(obj);
	result = arg0;
}

void ZyngaPatcherCXXConverter::readStringFromPayload(jobject obj, std::string& result)
{
	JNIContext *jni = JNIContext::sharedInstance();

	LOGV("callMethod jniType jobject");
	std::string arg0;
 	//~ begin convert from java.lang.Object to std::string
 	arg0 = (std::string) jni->getUTFString((jstring) obj);

 	result = arg0;
}

void ZyngaPatcherCXXConverter::readIntFromPayload(jobject obj, int& result)
{
	JNIContext *jni = JNIContext::sharedInstance();

	LOGV("callMethod jniType jobject");
	int arg0 = 0;
 	//~ begin convert from java.lang.Object to int
		arg0 = jni->intValue(obj);
	result = arg0;
}

void ZyngaPatcherCXXConverter::readMiSocialFriendVectorFromPayload(jobject obj, std::vector<std::map<std::string,std::string> > &result)
{
		JNIContext *jni = JNIContext::sharedInstance();

			LOGV("callMethod jniType jobject");
			std::vector<std::map<std::string,std::string> > arg0;
			 //~ begin convert from java.util.ArrayList<Friend> to std::vector<std::map<std::string,std::string> >
 jint jsize = jni->invokeIntMethod(obj, "java/util/ArrayList", "size", "()I");
 int size = (int) jsize;
 jobject jarrayListIterator = jni->invokeObjectMethod(obj, "java/util/ArrayList","iterator","()Ljava/util/Iterator;");
 for (int i = 0; i < size; i++)
 {
 std::map<std::string,std::string> sFriendMap = std::map<std::string,std::string>();
 jobject jFriend = jni->invokeObjectMethod(jarrayListIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
 if (jFriend != 0)
 {
 jstring jFriendJsonStr = (jstring) jni->invokeObjectMethod(jFriend, "com/zynga/core/util/Friend", "toString", "()Ljava/lang/String;");
 jobject jFriendMap = jni->invokeStaticObjectMethod("com/zynga/sdk/cxx/CXXUtil", "convertFromJSONToMap","(Ljava/lang/String;)Ljava/util/Map;",jFriendJsonStr);
 jobject jFriendMapKeySet = jni->invokeObjectMethod(jFriendMap, "java/util/Map", "keySet", "()Ljava/util/Set;");
 jobject jFriendMapIterator = jni->invokeObjectMethod(jFriendMapKeySet, "java/util/Set","iterator","()Ljava/util/Iterator;");
 jint jFriendMapSize = jni->invokeIntMethod(jFriendMap, "java/util/Map", "size", "()I");
 int friendMapSize = (int) jFriendMapSize;
 for (int j = 0; j < friendMapSize; j++)
 {
 std::string sFriendMapkey = std::string();
 std::string sFriendMapVal = std::string();
 jobject jFriendMapKey = jni->invokeObjectMethod(jFriendMapIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
 jobject jFriendMapVal = jni->invokeObjectMethod(jFriendMap, "java/util/Map","get","(Ljava/lang/Object;)Ljava/lang/Object;",jFriendMapKey);
 if (jFriendMapKey != 0)
 {
 jstring jstrFriendMapKey = jni->invokeStringMethod(jFriendMapKey, "java/lang/Object", "toString","()Ljava/lang/String;");
 if (jstrFriendMapKey != 0)
 {
 sFriendMapkey = jni->getUTFString(jstrFriendMapKey);
 jni->deleteLocalRef(jstrFriendMapKey);
 }
 jni->deleteLocalRef(jFriendMapKey);
 }
 if (jFriendMapVal != 0)
 {
 jstring jstrFriendMapVal = jni->invokeStringMethod(jFriendMapVal, "java/lang/Object", "toString","()Ljava/lang/String;");
 if (jstrFriendMapVal != 0)
 {
 sFriendMapVal = jni->getUTFString(jstrFriendMapVal);
 jni->deleteLocalRef(jstrFriendMapVal);
 }
 jni->deleteLocalRef(jFriendMapVal);
 }
 sFriendMap.insert( std::pair<std::string,std::string>(sFriendMapkey,sFriendMapVal) );
 }
 jni->deleteLocalRef(jFriendMapIterator);
 jni->deleteLocalRef(jFriendMapKeySet);
 jni->deleteLocalRef(jFriendMap);
 jni->deleteLocalRef(jFriendJsonStr);
 jni->deleteLocalRef(jFriend);
 }
 arg0.push_back(sFriendMap);
 }
 jni->deleteLocalRef(jarrayListIterator);
 //~ end convert from java.util.ArrayList<Friend> to std::vector<std::map< std::string,std::string> >

result = arg0;
}

void ZyngaPatcherCXXConverter::readMiSocialFriendMapFromPayload(jobject obj, std::map<std::string,std::vector<std::map<std::string,std::string> > > &result)
{
	JNIContext *jni = JNIContext::sharedInstance();

			LOGV("callMethod jniType jobject");
			std::map<std::string,std::vector<std::map<std::string,std::string> > > arg0;
			 //~ begin convert from java.util.HashMap<String,ArrayList<Friend>> to std::map<std::string,std::vector<std::map<std::string,std::string>>>
 jobject jset = jni->invokeObjectMethod(obj, "java/util/HashMap", "keySet", "()Ljava/util/Set;");
 jint jsize = jni->invokeIntMethod(jset, "java/util/Set", "size", "()I");
 int size = (int) jsize;
 jobject jsetIterator = jni->invokeObjectMethod(jset, "java/util/Set","iterator","()Ljava/util/Iterator;");
 for (int i = 0; i < size; i++)
 {
 std::string skey = std::string();
 std::vector<std::map<std::string,std::string> > sval = std::vector<std::map<std::string,std::string> >();
 jobject jkey = jni->invokeObjectMethod(jsetIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
 jobject jval = jni->invokeObjectMethod(obj, "java/util/HashMap","get","(Ljava/lang/Object;)Ljava/lang/Object;",jkey);
 if (jkey != 0)
 {
 jstring jstrkey = jni->invokeStringMethod(jkey, "java/lang/Object", "toString","()Ljava/lang/String;");
 if (jstrkey != 0)
 {
 skey = jni->getUTFString(jstrkey);
 jni->deleteLocalRef(jstrkey);
 }
 jni->deleteLocalRef(jkey);
 }
 if (jval != 0)
 {
 // build the value as a vector of
 jobject jarrayListIterator = jni->invokeObjectMethod(jval, "java/util/ArrayList","iterator","()Ljava/util/Iterator;");
 jint jarrayListSize = jni->invokeIntMethod(jval, "java/util/ArrayList", "size", "()I");
 int arrayListSize = (int) jarrayListSize;
 for (int j = 0; j < arrayListSize; j++)
 {
 std::map<std::string,std::string> sFriendMap = std::map<std::string,std::string>();
 jobject jFriend = jni->invokeObjectMethod(jarrayListIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
 jstring jFriendJsonStr = (jstring) jni->invokeObjectMethod(jFriend, "com/zynga/core/util/Friend", "toString", "()Ljava/lang/String;");
 jobject jFriendMap = jni->invokeStaticObjectMethod("com/zynga/sdk/cxx/CXXUtil", "convertFromJSONToMap","(Ljava/lang/String;)Ljava/util/Map;",jFriendJsonStr);
 jobject jFriendMapKeySet = jni->invokeObjectMethod(jFriendMap, "java/util/Map", "keySet", "()Ljava/util/Set;");
 jobject jFriendMapIterator = jni->invokeObjectMethod(jFriendMapKeySet, "java/util/Set","iterator","()Ljava/util/Iterator;");
 jint jFriendMapSize = jni->invokeIntMethod(jFriendMap, "java/util/Map", "size", "()I");
 int friendMapSize = (int) jFriendMapSize;
 for (int k = 0; k < friendMapSize; k++)
 {
 std::string sFriendMapkey = std::string();
 std::string sFriendMapVal = std::string();
 jobject jFriendMapKey = jni->invokeObjectMethod(jFriendMapIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
 jobject jFriendMapVal = jni->invokeObjectMethod(jFriendMap, "java/util/Map","get","(Ljava/lang/Object;)Ljava/lang/Object;",jFriendMapKey);
 if (jFriendMapKey != 0)
 {
 jstring jstrFriendMapKey = jni->invokeStringMethod(jFriendMapKey, "java/lang/Object", "toString","()Ljava/lang/String;");
 if (jstrFriendMapKey != 0)
 {
 sFriendMapkey = jni->getUTFString(jstrFriendMapKey);
 jni->deleteLocalRef(jstrFriendMapKey);
 }
 }
 if (jFriendMapVal != 0)
 {
 jstring jstrFriendMapVal = jni->invokeStringMethod(jFriendMapVal, "java/lang/Object", "toString","()Ljava/lang/String;");
 if (jstrFriendMapVal != 0)
 {
 sFriendMapVal = jni->getUTFString(jstrFriendMapVal);
 jni->deleteLocalRef(jstrFriendMapVal);
 }
 }
 if (jFriendMapKey != 0)
 {
 jni->deleteLocalRef(jFriendMapKey);
 }
 sFriendMap.insert( std::pair<std::string,std::string>(sFriendMapkey,sFriendMapVal) );
 if (jFriendMapVal != 0)
 {
 jni->deleteLocalRef(jFriendMapVal);
 }
 }
 sval.push_back(sFriendMap);
 jni->deleteLocalRef(jFriendMapIterator);
 jni->deleteLocalRef(jFriendMapKeySet);
 jni->deleteLocalRef(jFriendMap);
 jni->deleteLocalRef(jFriend);
 }
 jni->deleteLocalRef(jval);
 }
 arg0.insert( std::pair<std::string,std::vector<std::map<std::string,std::string> > >(skey,sval) );
 }
 jni->deleteLocalRef(jsetIterator);
 jni->deleteLocalRef(jset);
 //~ end convert from java.util.HashMap<String,ArrayList<Friend>> to std::map<std::string,std::vector<std::map<std::string,std::string>>>

 result = arg0;
}

void ZyngaPatcherCXXConverter::readStringMapFromPayload(jobject obj, std::map<std::string, std::string> &result)
{
	JNIContext *jni = JNIContext::sharedInstance();
	//~ begin convert from java.util.HashMap to std::map<std::string,std::string>
jobject jset = jni->invokeObjectMethod(obj, "java/util/HashMap", "keySet", "()Ljava/util/Set;");
jint jsize = jni->invokeIntMethod(jset, "java/util/Set", "size", "()I");
int size = (int) jsize;
jobject jsetIterator = jni->invokeObjectMethod(jset, "java/util/Set","iterator","()Ljava/util/Iterator;");
for (int i = 0; i < size; i++)
{
std::string skey = std::string();
std::string sval = std::string();
jobject jkey = jni->invokeObjectMethod(jsetIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
jobject jval = jni->invokeObjectMethod(obj, "java/util/HashMap","get","(Ljava/lang/Object;)Ljava/lang/Object;",jkey);
if (jkey != 0)
{
jstring jstrkey = jni->invokeStringMethod(jkey, "java/lang/Object", "toString","()Ljava/lang/String;");
if (jstrkey != 0)
{
skey = jni->getUTFString(jstrkey);
jni->deleteLocalRef(jstrkey);
}
jni->deleteLocalRef(jkey);
}
if (jval != 0)
{
jstring jstrval = jni->invokeStringMethod(jval, "java/lang/Object", "toString","()Ljava/lang/String;");
if (jstrval != 0)
{
sval = jni->getUTFString(jstrval);
jni->deleteLocalRef(jstrval);
}
jni->deleteLocalRef(jval);
}
result.insert( std::pair<std::string,std::string>(skey,sval) );
}
jni->deleteLocalRef(jsetIterator);
jni->deleteLocalRef(jset);
//~ end convert from java.util.HashMap to std::map<std::string,std::string>
}

void ZyngaPatcherCXXConverter::fromCXXMapToBundle(std::map<std::string,std::string> map, jobject &result)
{

	JNIContext *jni = JNIContext::sharedInstance();
result = jni->createNewObjectRef("android/os/Bundle");
for (std::map<std::string,std::string>::const_iterator iter = map.begin();
iter != map.end(); iter++)
{
std::string skey = (std::string) (*iter).first;
std::string sval = (std::string) (*iter).second;
jstring jkey = jni->toJString(skey);
jstring jval = jni->toJString(sval);
jni->invokeVoidMethod(result, "android/os/Bundle", "putString", "(Ljava/lang/String;Ljava/lang/String;)V", jkey, jval);
jni->deleteLocalRef(jkey);
jni->deleteLocalRef(jval);
}
}

void ZyngaPatcherCXXConverter::fromCXXVectorToJSONArray(std::vector<std::string> vec, jobject &result)
{
	JNIContext *jni = JNIContext::sharedInstance();
result = jni->createNewObjectRef("org/json/JSONArray");
std::vector<std::string>::size_type size = vec.size();
for (int i = 0; i < size; i++)
{
std::string sval = (std::string) vec[i];
jstring jval = jni->toJString(sval);
jni->invokeObjectMethod(result, "org/json/JSONArray", "put", "(Ljava/lang/Object;)Lorg/json/JSONArray;", jval);
jni->deleteLocalRef(jval);
}
}

void ZyngaPatcherCXXConverter::fromCXXMapToMap(std::map<std::string,std::string> map, jobject &result)
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
