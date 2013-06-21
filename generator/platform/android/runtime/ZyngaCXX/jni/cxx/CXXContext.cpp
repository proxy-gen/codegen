/*
 * ExternalContext.cpp
 *
 * Created on: Jan 29, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
 */

#include "CXXContext.hpp"
#include "ProxiedCallback.hpp"
#include "com_zynga_sdk_cxx_CXXContext.h"
#include "JNIContext.hpp"
#include <map>

#define LOG_TAG "CXXContext"
#define LOGV(...) ((void)__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__))
#define LOGW_V(message, args) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, message, args))

#define JAVA_CLASS_NAME "com/zynga/sdk/cxx/CXXContext"
#define JAVA_CREATE_PROXIED_METHOD_NAME "createProxiedCallback"
#define JAVA_CREATE_PROXIED_METHOD_SIGNATURE "(JJLjava/lang/Class;)Ljava/lang/Object;"

pthread_mutex_t mutex;
pthread_mutex_t contextIDMutex;
pthread_mutex_t userDataMapMutex;
pthread_mutex_t callbackDataMapMutex;
pthread_mutex_t proxyComponentMapMutex;

std::map<long, std::string> contextIDMap = std::map<long, std::string>();
std::map<long, long> callbackDataMap = std::map<long, long>();
std::map<long, long> userDataMap = std::map<long, long>();
std::map<long, jobject> proxyComponentMap = std::map<long, jobject>();

CXXContext* CXXContext::sm_sharedInstance = 0;

CXXContext::CXXContext(jobject applicationContext, jobject cxxJavaContext)
{
	sm_sharedInstance = this;

	JNIContext *jniContext = JNIContext::sharedInstance();

	actx_object = jniContext->localToGlobalRef(applicationContext);
	LOGV("loaded actx_object %d", actx_object);
	ectx_object = jniContext->localToGlobalRef(cxxJavaContext);
	LOGV("loaded ectx_object %d", ectx_object);
	ectx_class = jniContext->getClassRef(JAVA_CLASS_NAME);
	ectx_class = (jclass) jniContext->localToGlobalRef(ectx_class);
	LOGV("loaded ectx_class %d", ectx_class);
	ectx_method_createProxiedCallback = jniContext->getMethodID(ectx_class, JAVA_CREATE_PROXIED_METHOD_NAME, JAVA_CREATE_PROXIED_METHOD_SIGNATURE);
	LOGV("loaded ectx_method_createProxiedCallback");
}

CXXContext::~CXXContext()
{
	JNIContext *jniContext = JNIContext::sharedInstance();

	ectx_method_createProxiedCallback = 0;

	if (ectx_class != 0)
	{
		jniContext->deleteGlobalRef(ectx_class);
		ectx_class = 0;
	}

	if (ectx_object != 0)
	{
		jniContext->deleteGlobalRef(ectx_object);
		ectx_object = 0;
	}

	if (actx_object != 0)
	{
		jniContext->deleteGlobalRef(actx_object);
		actx_object = 0;
	}

	sm_sharedInstance = 0;
}

CXXContext* CXXContext::sharedInstance()
{
	return sm_sharedInstance;
}

int CXXContext::createCXXContext(JavaVM *vm, jobject applicationContext)
{
	pthread_mutex_lock(&mutex);
	if (sm_sharedInstance == 0)
	{
		JNIEnv* env = 0;
		if (vm->GetEnv(reinterpret_cast<void**>(&env), CXX_JNI_VERSION) != JNI_OK)
		{
			LOGW("Java VM failed to initialize");
			pthread_mutex_unlock(&mutex);
			return CXX_ERR;
		}
		JNIContext::createContext(vm);
		JNIContext *jni = JNIContext::sharedInstance();
		jobject cxxJavaContext = jni->invokeStaticObjectMethod("com/zynga/sdk/cxx/CXXContext", "getInstance", "()Lcom/zynga/sdk/cxx/CXXContext;");
		new CXXContext(applicationContext, cxxJavaContext);
	}
	pthread_mutex_unlock(&mutex);
	return CXX_OK;
}

void CXXContext::destroyCXXContext()
{
	pthread_mutex_lock(&mutex);
	if (sm_sharedInstance != 0)
	{
		delete sm_sharedInstance;
		JNIContext::destroyContext();
	}
	pthread_mutex_unlock(&mutex);
}

jobject CXXContext::getAndroidContext()
{
	return actx_object;
}

void CXXContext::setAndroidContext(jobject applicationContext)
{
	LOGV("setApplicationContext applicationContext %ld", (long) applicationContext);
	JNIContext *jniContext = JNIContext::sharedInstance();
	jniContext->deleteGlobalRef(actx_object);
	actx_object = jniContext->localToGlobalRef(applicationContext);
	LOGV("updated actx_object %ld", (long) actx_object);
}

jobject CXXContext::createProxiedCallback(long contextAddress, long proxiedObjectID, const char *externalClassName)
{
	LOGV("createProxiedCallback contextAddress %ld proxiedObjectID %d proxiedClass %s", contextAddress, proxiedObjectID, externalClassName);
	JNIContext *jni = JNIContext::sharedInstance();
	jclass clazz = jni->getClassRef(externalClassName);
	jobject object = jni->callObjectMethod(ectx_object, ectx_method_createProxiedCallback, (jlong) contextAddress, (jlong) proxiedObjectID, clazz);
	jni->deleteLocalRef(clazz);
	return object;
}

void CXXContext::registerProxyComponent(long contextAddress, jobject externalObject)
{
	LOGV("registerProxyComponent contextAddress %ld externalObject %ld", contextAddress, externalObject);
	pthread_mutex_lock(&proxyComponentMapMutex);
	proxyComponentMap[contextAddress] = externalObject;
	pthread_mutex_unlock(&proxyComponentMapMutex);
}

void CXXContext::deregisterProxyComponent(long contextAddress)
{
	LOGV("deregisterProxyComponent contextAddress %ld", contextAddress);
	pthread_mutex_lock(&proxyComponentMapMutex);
	proxyComponentMap[contextAddress] = 0;
	std::map<long,jobject>::const_iterator iter;
	for (iter = proxyComponentMap.begin(); iter != proxyComponentMap.end(); iter++)
	{
		if ((*iter).first == contextAddress)
		{
			LOGV("deregisterProxyComponent erasing contextAddress %ld", contextAddress);
			proxyComponentMap.erase(contextAddress);
			break;
		}
	}
	pthread_mutex_unlock(&proxyComponentMapMutex);
}

jobject CXXContext::findProxyComponent(long contextAddress)
{
	LOGV("findProxyComponent contextAddress %ld", contextAddress);
	jobject value = 0;
	pthread_mutex_lock(&proxyComponentMapMutex);
	value = (jobject) proxyComponentMap[contextAddress];
	LOGV("findProxyComponent proxyComponentMap[contextAddress] %ld", (long) proxyComponentMap[contextAddress]);
	pthread_mutex_unlock(&proxyComponentMapMutex);
	return value;
}

void CXXContext::registerContextID(long contextAddress, std::string& contextID)
{
	LOGV("registerContextID contextAddress: %ld contextID %s", contextAddress, contextID.c_str());
	pthread_mutex_lock(&contextIDMutex);
	contextIDMap[contextAddress] = contextID;
	pthread_mutex_unlock(&contextIDMutex);
}

void CXXContext::deregisterContextID(long contextAddress)
{
	LOGV("deregisterContextID contextAddress %ld", contextAddress);
	pthread_mutex_lock(&contextIDMutex);
	std::map<long,std::string>::const_iterator iter;
	for (iter = contextIDMap.begin(); iter != contextIDMap.end(); iter++)
	{
		if ((*iter).first == contextAddress)
		{
			LOGV("deregisterContextID erasing contextAddress %ld", contextAddress);
			contextIDMap.erase(contextAddress);
			break;
		}
	}
	pthread_mutex_unlock(&contextIDMutex);
}

std::string CXXContext::findContextID(long contextAddress)
{
	LOGV("findContextID contextAddress %ld", contextAddress);
	pthread_mutex_lock(&contextIDMutex);
	std::string value = (std::string) contextIDMap[contextAddress];
	LOGV("findContextID contextID %s", value.c_str());
	pthread_mutex_unlock(&contextIDMutex);
	return value;
}

void CXXContext::registerCallbackData(long contextAddress, long callbackData)
{
	LOGV("registerCallbackData contextAddress %ld callbackData %ld", contextAddress, callbackData);
	pthread_mutex_lock(&callbackDataMapMutex);
	callbackDataMap[contextAddress] = callbackData;
	pthread_mutex_unlock(&callbackDataMapMutex);
}

void CXXContext::deregisterCallbackData(long contextAddress)
{
	LOGV("deregisterCallbackData contextAddress %ld", contextAddress);
	pthread_mutex_lock(&callbackDataMapMutex);
	callbackDataMap[contextAddress] = 0;
	std::map<long,long>::const_iterator iter;
	for (iter = callbackDataMap.begin(); iter != callbackDataMap.end(); iter++)
	{
		if ((*iter).first == contextAddress)
		{
			callbackDataMap.erase(contextAddress);
			break;
		}
	}
	pthread_mutex_unlock(&callbackDataMapMutex);
}

long CXXContext::findCallbackData(long contextAddress)
{
	LOGV("findCallbackData contextAddress %ld", contextAddress);
	long value = 0;
	pthread_mutex_lock(&callbackDataMapMutex);
	value = callbackDataMap[contextAddress];
	pthread_mutex_unlock(&callbackDataMapMutex);
	return value;
}

jobject CXXContext::notify(long proxiedObjectAddress, long proxiedObjectID, std::string methodName, void * payload)
{
	LOGV("CXXContext::notifyMethod for proxiedObjectAddress %ld proxiedObjectID %ld methodName %s", proxiedObjectAddress, proxiedObjectID, methodName.c_str());
	ProxiedCallback *callback = (ProxiedCallback *) reinterpret_cast<ProxiedCallback*>(proxiedObjectID);
	LOGV("CXXContext::notifyMethod callback %d", callback);
	return callback->callMethod(proxiedObjectAddress, methodName, payload);
}

void CXXContext::clearException()
{
	JNIContext *jniContext = JNIContext::sharedInstance();
	jniContext->status.code = 0;
	jniContext->status.message = std::string();
}

std::string CXXContext::exceptionMessage()
{
	JNIContext *jniContext = JNIContext::sharedInstance();
	return jniContext->status.message;
}


