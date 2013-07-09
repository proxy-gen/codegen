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

void convert_java_util_List_to_cxx(jobject& java_value, std::vector<C>& cxx_value)
{
	
}

void convert_java_util_List_to_java(jobject& java_value, C& cxx_value)
{

}

void convert_java_util_Map_to_cxx(jobject& java_value, std::map<std::string, C>& cxx_value)
{

}

void convert_java_util_Map_to_java(jobject& java_value, std::map<std::string, C>& cxx_value)
{
	
}
