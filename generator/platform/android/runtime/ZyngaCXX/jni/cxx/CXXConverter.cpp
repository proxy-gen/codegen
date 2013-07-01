/*
 * CXXConverter.cpp
 *
 *  Created on: June 30, 2013
 *      Author: rvergis
 */

#include <CXXConverter.hpp>
#include <CXXContext.hpp>
#include <JNIContext.hpp>

#define LOG_ENABLED 1
#define log(...) if (LOG_ENABLED) fprintf(stderr, __VA_ARGS__)

void convert_java_util_Date_to_cxx(jobject& java_value, long& cxx_value)
{
	JNIContext *jni = JNIContext::sharedInstance();

	cxx_value = (long) jni->invokeLongMethod(java_value, "java/util/Date", "getTime", "()J");
}

void convert_java_util_Date_to_java(jobject& java_value, long& cxx_value)
{
	JNIContext *jni = JNIContext::sharedInstance();

	java_value = jni->createNewObjectRef("java/util/Date");

	jni->invokeVoidMethod(java_value, "java/util/Date", "setTime", "(J)V", (jlong) cxx_value);
}

template<typename C>
void convert_proxy_template_to_cxx(jobject& java_value, C& cxx_value)
{
	cxx_value = C((void *) java_value);
}

template<typename C>
void convert_proxy_template_to_java(C& cxx_value, jobject& java_value)
{
	CXXContext *ctx = CXXContext::sharedInstance();

	long address = (long) cxx_value;
	java_value = ctx->findProxyComponent(address);
}

template<typename C>
void convert_java_util_List_template_to_cxx(jobject& java_value, std::vector<C>& cxx_value)
{
	JNIContext *jni = JNIContext::sharedInstance();

	int len = (int) jni->getArrayLength(java_value);
	for (int idx = 0; idx < len; idx++)
	{
		jobject java_elem = jni->getObjectArrayElement(java_value, idx);
		C cxx_elem((void *) java_value);
		cxx_value.push(cxx_elem);
	}
}

template<typename C>
void convert_java_util_List_template_to_java(jobject& java_value, C& cxx_value)
{
	JNIContext *jni = JNIContext::sharedInstance();

	int len = (int) cxx_value.size();
	for (int idx = 0; idx < len; idx++)
	{
		jni->setObjectArrayElement(java_value, idx, cxx_value[idx]);
	}
}

template<typename C>
void convert_java_util_Map_template_to_cxx(jobject& java_value, std::map<std::string, C>& cxx_value)
{
	JNIContext *jni = JNIContext::sharedInstance();

	jobject java_map_key_iterator = jni->getMapKeyIterator(java_value);
	int len = jni->getMapSize(java_value);
	for (int idx = 0; idx < len; idx++)
	{
		jstring java_map_key = (jstring) jni->nextIteratorElement(java_map_key_iterator);
		jobject java_map_value = jni->readMapValue(java_value, java_map_key);
		std::string cxx_map_key = jni->getUTFString(java_map_value);
		C cxx_map_value((void *) java_map_value);
		cxx_value[cxx_map_key] = cxx_map_value;
	}
}

template<typename C>
void convert_java_util_Map_template_to_java(jobject& java_value, std::map<std::string, C>& cxx_value)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	typename std::map<std::string, C>::const_iterator iter;
	for (iter = cxx_value.begin(); iter != cxx_value.end(); iter++)
	{
		std::string cxx_map_key = (*iter).first;
		long cxx_map_value = (long) (*iter).second;
		jstring java_map_key = jni->toJString(cxx_map_key);
		jobject java_map_value = ctx->findProxyComponent(cxx_map_value);
		jni->putMapKeyValue(java_value, java_map_key, java_map_value);
	}
}

