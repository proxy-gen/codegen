/*
 * CXXUtil.cpp
 *
 * Created on: Apr 17, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
 */

#include "CXXUtil.hpp"
#include "JNIContext.hpp"
#include "CXXContext.hpp"


#define LOG_TAG "CXXUtil"
#define LOGV(...) ((void)__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__))
#define LOGW_V(message, args) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, message, args))

void CXXUtil::postNotificationToStatusBar(int notificationId, 
											int flags,
											int defaults,
											int smallIconId,
											int ledARGB,
											int ledOffMS,
											int ledOnMS,
											int numberOfEventsInNotification,
											int priorityOfNotification,
											std::string sound,
											std::string tickerText, 
											jobject pendingIntent)
{
	const char *className = "com/zynga/sdk/cxx/CXXUtil";
	const char *methodName = "postNotificationToStatusBar";
	const char *methodSignature = "(Landroid/content/Context;IIIIIIIIILjava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;)V";

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jobject sharedAndroidContext = ctx->getAndroidContext();
	jobject marg0 = sharedAndroidContext;

	jint marg1 = (jint) notificationId;
	jint marg2 = (jint) flags;
	jint marg3 = (jint) defaults;
	jint marg4 = (jint) smallIconId;
	jint marg5 = (jint) ledARGB;
	jint marg6 = (jint) ledOffMS;
	jint marg7 = (jint) ledOnMS;
	jint marg8 = (jint) numberOfEventsInNotification;
	jint marg9 = (jint) priorityOfNotification;

	jstring marg10 = (jstring) jni->toJString(sound);
	jstring marg11 = (jstring) jni->toJString(tickerText);

	jobject marg12 = (jobject) pendingIntent;

	jni->invokeStaticVoidMethod(className, methodName, methodSignature, 
									marg0, 
									marg1, 
									marg2, 
									marg3, 
									marg4, 
									marg5, 
									marg6,
									marg7,
									marg8,
									marg9,
									marg10,
									marg11,
									marg12);
}

void CXXUtil::postNotificationToStatusBar(std::string mainActivityName,
											std::map<std::string, std::string> message)
{
	JNIContext *jni = JNIContext::sharedInstance();
    CXXContext *ctx = CXXContext::sharedInstance();

    // NOTE: THESE KEYS ARE FROM ZyngaPushNotificationCXX.cpp
	std::string keyAlertMessage = "kKeyAlertMessage";
	std::string keyBadgeCount = "kKeyBadgeCount";
	std::string keySound = "kKeySound";
	std::string keyTemplateVariables = "kKeyTemplateVariables";
	std::string keyAppData = "kKeyAppData";
	std::string keyMessageID = "kKeyMessageID";
	std::string keyEventType = "kKeyEventType";
	std::string keyUseSandbox = "kKeyUseSandbox";

    jobject androidContext = ctx->getAndroidContext();

    int notificationId = 0;

    int flags = 0;
    int flagAutoCancel = (int) jni->readStaticIntField("android/app/Notification", "FLAG_AUTO_CANCEL", "I");
    flags = flags | flagAutoCancel;

    int defaults = 0;
    int defaultSound = (int) jni->readStaticIntField("android/app/Notification", "DEFAULT_SOUND", "I");
    defaults = defaults | defaultSound;
    int defaultVibrate = (int) jni->readStaticIntField("android/app/Notification", "DEFAULT_VIBRATE", "I");
    defaults = defaults | defaultVibrate;

    const char * rClassName = "android/R$drawable";
    const char * rFieldName = "sym_def_app_icon";
    int smallIconId = jni->readStaticIntField(rClassName, rFieldName, "I");

	int ledARGB = 0;
	int ledOffMS = 0;
	int ledOnMS = 0;
	int numberOfEventsInNotification = 0;
	int priorityOfNotification = 0;

	std::string sound;
	if (message.count(keySound) > 0) 
	{		
	 	sound = message[keySound];
	}

    std::string tickerText;
    if (message.count(keyAlertMessage) > 0)
    {    	
     	tickerText = message.find(keyAlertMessage)->second;
    }
    jclass androidIntentClazz = jni->getClassRef("android/content/Intent");
    jclass mainActivityClazz = jni->getClassRef(mainActivityName.c_str());
    jobject nIntent = jni->createNewObject(androidIntentClazz, 
                         jni->getMethodID(androidIntentClazz, "<init>", "(Landroid/content/Context;Ljava/lang/Class;)V"),
                         androidContext, 
                         mainActivityClazz);
    jni->deleteLocalRef(mainActivityClazz);
    jni->deleteLocalRef(androidIntentClazz);

    jobject nPendingIntent = jni->invokeStaticObjectMethod("android/app/PendingIntent", 
                                                            "getActivity", 
                                                            "(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
                                                            androidContext,
                                                            0,
                                                            nIntent,
                                                            jni->readStaticIntField("android/app/PendingIntent",
                                                                                    "FLAG_CANCEL_CURRENT",
                                                                                    "I"));

    CXXUtil::postNotificationToStatusBar(notificationId, 
											flags,
											defaults,
											smallIconId,
											ledARGB,
											ledOffMS,
											ledOnMS,
											numberOfEventsInNotification,
											priorityOfNotification,
											sound,
											tickerText, 
											nPendingIntent);
}