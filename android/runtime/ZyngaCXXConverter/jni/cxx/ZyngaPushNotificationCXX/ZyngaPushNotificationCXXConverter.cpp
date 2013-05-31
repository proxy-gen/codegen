/*
 * CXXConverter.cpp
 *
 *  Created on: Apr 4, 2013
 *      Author: rvergis
 */

#include "ZyngaPushNotificationCXXConverter.hpp"
#include <ZyngaPushNotificationCXX/ZyngaPushNotification.hpp>

#define LOG_TAG "CXXConverter"
#define LOGV(...) ((void)__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__))
#define LOGW_V(message, args) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, message, args))

ZyngaPushNotificationCXXConverter* ZyngaPushNotificationCXXConverter::sm_sharedInstance = new ZyngaPushNotificationCXXConverter();

ZyngaPushNotificationCXXConverter::ZyngaPushNotificationCXXConverter()
{
	LOGV("ZyngaPushNotificationCXXConverter constructor invoked");
}

ZyngaPushNotificationCXXConverter::~ZyngaPushNotificationCXXConverter()
{
	LOGV("ZyngaPushNotificationCXXConverter destructor invoked");
}

ZyngaPushNotificationCXXConverter* ZyngaPushNotificationCXXConverter::sharedInstance()
{
	return sm_sharedInstance;
}

void ZyngaPushNotificationCXXConverter::to_cxx(const jobject &source, std::map<std::string, std::string> &result, const char * source_type, const char * result_type)
{
	if (source_type == "com/zynga/sdk/push/PushNotificationMessage" && result_type == "std::map<std::string,std::string>")
	{
		JNIContext *jni = JNIContext::sharedInstance();

		// ZDK::ZyngaPushNotification::kKeyEventType;
		jint jvalue0 = jni->invokeIntMethod(source, source_type, "getMessageType", "()I");
		int value0 = (int) jvalue0;
		std::stringstream stream0;
		stream0 << (int) value0;
		result[ZDK::ZyngaPushNotification::kKeyEventType] = stream0.str();

		// ZDK::ZyngaPushNotification::kKeyAlertMessage;
		jstring jvalue1 = jni->invokeStringMethod(source, source_type, "getMessage", "()Ljava/lang/String;");
		if (jvalue1 != 0)
		{			
			std::string value1 = jni->getUTFString(jvalue1);
			result[ZDK::ZyngaPushNotification::kKeyAlertMessage] = value1;
		}

		// ZDK::ZyngaPushNotification::kKeyBadgeCount;
		jint jvalue2 = jni->invokeIntMethod(source, source_type, "getBadgeCount", "()I");
		int value2 = (int) jvalue2;
		std::stringstream stream2;
		stream2 << (int) value2;
		result[ZDK::ZyngaPushNotification::kKeyEventType] = stream2.str();

		// ZDK::ZyngaPushNotification::kKeyUseSandbox;
		jboolean jvalue3 = jni->invokeBooleanMethod(source, source_type, "isUseSandbox", "()Z");
		bool value3 = (bool) jvalue3;
		std::stringstream stream3;
		stream3 << (bool) value3;
		result[ZDK::ZyngaPushNotification::kKeyUseSandbox] = stream3.str();

		// ZDK::ZyngaPushNotification::kKeyExpiry;  
		jlong jvalue4 = jni->invokeLongMethod(source, source_type, "getExpiry", "()J");
		long value4 = (long) jvalue4;
		std::stringstream stream4;
		stream4 << (long) value4;
		result[ZDK::ZyngaPushNotification::kKeyExpiry] = stream4.str();

		// ZDK::ZyngaPushNotification::kKeyUserData;
		jstring jvalue5 = jni->invokeStringMethod(source, source_type, "getUserData", "()Ljava/lang/String;");
		if (jvalue5 != 0)
		{
			std::string value5 = jni->getUTFString(jvalue5);
			result[ZDK::ZyngaPushNotification::kKeyUserData] = value5;
		}

		// ZDK::ZyngaPushNotification::kKeyTemplateVariables;
		jobject jvalue6 = jni->invokeObjectMethod(source, source_type, "getTemplateVariables", "()Lorg/json/JSONObject;");
		if (jvalue6 != 0)
		{
			jstring jvalue6_0 = jni->invokeStringMethod(jvalue6, "org/json/JSONObject", "toString", "()Ljava/lang/String;");
			if (jvalue6_0 != 0)
			{				
				std::string value6 = jni->getUTFString(jvalue6_0);
				result[ZDK::ZyngaPushNotification::kKeyTemplateVariables] = value6;
			}
		}

		// ZDK::ZyngaPushNotification::kKeyUdIdFilter;
		jstring jvalue7 = jni->invokeStringMethod(source, source_type, "getUdIdFilter", "()Ljava/lang/String;");
		if (jvalue7 != 0)
		{			
			std::string value7 = jni->getUTFString(jvalue7);
			result[ZDK::ZyngaPushNotification::kKeyUdIdFilter] = value7;
		}

		// ZDK::ZyngaPushNotification::kKeyClientIdFilter;
		jstring jvalue8 = jni->invokeStringMethod(source, source_type, "getClientIdFilter", "()Ljava/lang/String;");
		if (jvalue8 != 0)
		{			
			std::string value8 = jni->getUTFString(jvalue8);
			result[ZDK::ZyngaPushNotification::kKeyClientIdFilter] = value8;
		}

		// ZDK::ZyngaPushNotification::kKeyAndroidCollapseKey;
		jstring jvalue9 = jni->invokeStringMethod(source, source_type, "getClientIdFilter", "()Ljava/lang/String;");
		if (jvalue9 != 0)
		{			
			std::string value9 = jni->getUTFString(jvalue9);
			result[ZDK::ZyngaPushNotification::kKeyAndroidCollapseKey] = value9;
		}

		// ZDK::ZyngaPushNotification::kKeyAndroidPackageNameFilter;
		jstring jvalue10 = jni->invokeStringMethod(source, source_type, "getPackageNameFilter", "()Ljava/lang/String;");
		if (jvalue10 != 0)
		{			
			std::string value10 = jni->getUTFString(jvalue10);
			result[ZDK::ZyngaPushNotification::kKeyAndroidPackageNameFilter] = value10;
		}		

		// ZDK::ZyngaPushNotification::kKeyAndroidTransport;		
		jboolean jvalue11 = jni->invokeBooleanMethod(source, source_type, "isUsesGCM", "()Z");
		bool value11 = (bool) jvalue11;
		if (value11 == true)
		{
			result[ZDK::ZyngaPushNotification::kKeyAndroidTransport] = std::string("gcm");	
		}
		else
		{
			result[ZDK::ZyngaPushNotification::kKeyAndroidTransport] = std::string("c2dm");		
		}

		// ZDK::ZyngaPushNotification::kKeySound;
		jstring jvalue12 = jni->invokeStringMethod(source, source_type, "getSound", "()Ljava/lang/String;");
		if (jvalue12 != 0)
		{			
			std::string value12 = jni->getUTFString(jvalue12);
			result[ZDK::ZyngaPushNotification::kKeySound] = value12;
		}	

		// ZDK::ZyngaPushNotification::kKeyiOSBundleIdFilter;
		jstring jvalue13 = jni->invokeStringMethod(source, source_type, "getIOSBundleIdFilter", "()Ljava/lang/String;");
		if (jvalue13 != 0)
		{			
			std::string value13 = jni->getUTFString(jvalue13);
			result[ZDK::ZyngaPushNotification::kKeyiOSBundleIdFilter] = value13;
		}		
	}
}

void ZyngaPushNotificationCXXConverter::from_cxx(const std::map<std::string, std::string> &source, jobject &result, const char * source_type, const char * result_type)
{
	if (source_type == "std::map<std::string,std::string>" && result_type == "com/zynga/sdk/push/PushNotificationMessage")
	{
		JNIContext *jni = JNIContext::sharedInstance();

		result = jni->createNewObjectRef(result_type);

		std::map<std::string, std::string> s = source;

		// ZDK::ZyngaPushNotification::kKeyEventType
		std::string value0 = s[ZDK::ZyngaPushNotification::kKeyEventType];
		if (value0.empty() == false)
		{			
			int value0_0 = atoi(value0.c_str());
			jint jvalue0 = (jint) value0_0;
			jni->invokeVoidMethod(result, result_type, "setMessageType", "(I)V", jvalue0);
		}

		// ZDK::ZyngaPushNotification::kKeyAlertMessage
		std::string value1 = s[ZDK::ZyngaPushNotification::kKeyAlertMessage];
		if (value1.empty() == false)
		{			
			jstring jvalue1 = jni->toJString(value1);
			jni->invokeVoidMethod(result, result_type, "setMessage", "(Ljava/lang/String;)V", jvalue1);
		}

		// ZDK::ZyngaPushNotification::kKeyBadgeCount
		std::string value2 = s[ZDK::ZyngaPushNotification::kKeyBadgeCount];
		int value2_0 = atoi(value2.c_str());
		jint jvalue2 = (jint) value2_0;
		jni->invokeVoidMethod(result, result_type, "setBadgeCount", "(I)V", jvalue2);

		// ZDK::ZyngaPushNotification::kKeyUseSandbox;
		std::string value3 = s[ZDK::ZyngaPushNotification::kKeyUseSandbox];
		bool value3_0 = value3 == std::string("true");
		jboolean jvalue3 = (jboolean) value3_0;
		jni->invokeVoidMethod(result, result_type, "setUseSandbox", "(Z)V", jvalue3);

		// ZDK::ZyngaPushNotification::kKeyExpiry
		std::string value4 = s[ZDK::ZyngaPushNotification::kKeyExpiry];
		long value4_0 = atol(value4.c_str());
		jlong jvalue4 = (jlong) value4_0;
		jni->invokeVoidMethod(result, result_type, "setExpiry", "(J)V", jvalue4);

		// ZDK::ZyngaPushNotification::kKeyUserData
		std::string value5 = s[ZDK::ZyngaPushNotification::kKeyUserData];
		if (value5.empty() == false)
		{
			jstring jvalue5 = jni->toJString(value5);
			jni->invokeVoidMethod(result, result_type, "setUserData", "(Ljava/lang/String;)V", jvalue5);
		}

		// ZDK::ZyngaPushNotification::kKeyTemplateVariables
		std::string value6 = s[ZDK::ZyngaPushNotification::kKeyTemplateVariables];
		if (value6.empty() == false)
		{
			jstring jvalue6 = jni->toJString(value6);
			jobject jvalue6_0 = jni->createNewObject(jni->getClassRef("org/json/JSONObject"), 
													 jni->getMethodID(jni->getClassRef("org/json/JSONObject"), 
													 				  "<init>", 
													 				  "(Ljava/lang/String;)V"), 
													 jvalue6);
			jni->invokeVoidMethod(result, result_type, "setTemplateVariables", "(Lorg/json/JSONObject;)V", jvalue6_0);
		}

		// ZDK::ZyngaPushNotification::kKeyUdIdFilter;
		std::string value7 = s[ZDK::ZyngaPushNotification::kKeyUdIdFilter];
		if (value7.empty() == false)
		{
			jstring jvalue7 = jni->toJString(value7);
			jni->invokeVoidMethod(result, result_type, "setUdIdFilter", "(Ljava/lang/String;)V", jvalue7);
		}

		// ZDK::ZyngaPushNotification::kKeyClientIdFilter;
		std::string value8 = s[ZDK::ZyngaPushNotification::kKeyClientIdFilter];
		if (value8.empty() == false)
		{
			jstring jvalue8 = jni->toJString(value8);
			jni->invokeVoidMethod(result, result_type, "setClientIdFilter", "(Ljava/lang/String;)V", jvalue8);
		}

		// ZDK::ZyngaPushNotification::kKeyAndroidCollapseKey;
		std::string value9 = s[ZDK::ZyngaPushNotification::kKeyAndroidCollapseKey];
		if (value9.empty() == false)
		{
			jstring jvalue9 = jni->toJString(value9);
			jni->invokeVoidMethod(result, result_type, "setCollapseKey", "(Ljava/lang/String;)V", jvalue9);
		}		

		// ZDK::ZyngaPushNotification::kKeyAndroidPackageNameFilter;
		std::string value10 = s[ZDK::ZyngaPushNotification::kKeyAndroidPackageNameFilter];
		if (value10.empty() == false)
		{
			jstring jvalue10 = jni->toJString(value10);
			jni->invokeVoidMethod(result, result_type, "setPackageNameFilter", "(Ljava/lang/String;)V", jvalue10);
		}		

		// ZDK::ZyngaPushNotification::kKeyAndroidTransport;		
		std::string value11 = s[ZDK::ZyngaPushNotification::kKeyAndroidTransport];
		if (value11.empty() == false)
		{			
			bool value11_0 = value11 == "gcm";
			jboolean jvalue11 = (jboolean) value11_0;
			jni->invokeVoidMethod(result, result_type, "setUsesGCM", "(Z)V", jvalue11);
		}

		// ZDK::ZyngaPushNotification::kKeySound;
		std::string value12 = s[ZDK::ZyngaPushNotification::kKeySound];
		if (value12.empty() == false)
		{			
			jstring jvalue12 = jni->toJString(value12);
			jni->invokeVoidMethod(result, result_type, "setSound", "(Ljava/lang/String;)V", jvalue12);
		}

		// ZDK::ZyngaPushNotification::kKeyiOSBundleIdFilter;
		std::string value13 = s[ZDK::ZyngaPushNotification::kKeyiOSBundleIdFilter];
		if (value13.empty() == false)
		{			
			jstring jvalue13 = jni->toJString(value13);
			jni->invokeVoidMethod(result, result_type, "setIOSBundleIdFilter", "(Ljava/lang/String;)V", jvalue13);
		}

	}
}
