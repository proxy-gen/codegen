/*
 * JNIContext.cpp
 * ZyngaCXX
 *
 * Created on: Jan 29, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
 */

#include "JNIContext.hpp"
#include <stdexcept>
#include <algorithm>

#ifdef ANDROID
#include <android/log.h>
#define LOG_TAG "JNIContext"
#define LOGV(...) ((void)__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__))
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__))
#define LOGW_V(message, args) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, message, args))
#else
#define LOGV(...)
#define LOGI(...)
#define LOGW(...) printf(__VA_ARGS__); printf("\n")
#define LOGW_V(message, args) printf(message, args); printf("\n")
#endif

using namespace std;

JavaVM* JNIContext::sm_pJavaVM = 0;
JNIContext* JNIContext::sm_pSharedInstance = 0;

void JNIContext::createContext(JavaVM* ajava_vm)
{
	new JNIContext();
	sm_pJavaVM = ajava_vm;
}

void JNIContext::destroyContext()
{
	delete sm_pSharedInstance;
	sm_pJavaVM = 0;
}

JNIContext::JNIContext()
{
	sm_pSharedInstance = this;
	sm_pJavaVM = 0;
	status.hasException = false;
}

JNIContext::~JNIContext()
{
	sm_pJavaVM = 0;
	sm_pSharedInstance = 0;
}

JNIContext* JNIContext::sharedInstance()
{
	return sm_pSharedInstance;
}

JNIEnv* JNIContext::currentJNIEnv()
{
	JNIEnv *env = 0;
	getEnv(&env);
	return env;
}

int JNIContext::retainObjectRef(jobject &object)
{
	// we assume here that any released object ref will be 0
	if (object == 0)
	{
		return -1;
	}
	JNIEnv *env = 0;
	getEnv(&env);
	jobjectRefType refType = env->GetObjectRefType(object);
	if (checkException(env))
	{
		return -1;
	}
	if (refType == JNIInvalidRefType)
	{
		return -1;
	}
	if (refType == JNIGlobalRefType)
	{
		return 0; // Nothing to do
	}
	if (refType == JNIWeakGlobalRefType)
	{
		return 0; // Nothing to do
	}
	if (refType == JNILocalRefType)
	{
		object = localToGlobalRef(object);
		return 0;
	}
	return -1;
}

int JNIContext::releaseObjectRef(jobject &object)
{
	if (object == 0)
	{
		return 0; // Nothing to do
	}
	JNIEnv *env = 0;
	getEnv(&env);
	jobjectRefType refType = env->GetObjectRefType(object);
	if (checkException(env))
	{
		return -1;
	}
	if (refType == JNIInvalidRefType)
	{
		return -1;
	}
	if (refType == JNILocalRefType)
	{
		deleteLocalRef(object);
		return 0;
	}
	if (refType == JNIWeakGlobalRefType)
	{
		deleteGlobalRef(object);
		return 0;
	}
	if (refType == JNIGlobalRefType)
	{
		deleteGlobalRef(object);
		return 0;
	}
	return -1;
}

void JNIContext::pushLocalFrame(int frameSize)
{
	if (frameSize <= 0)
	{
		frameSize = JNI_FRAME_SIZE;
	}
	jint jframeSize = (jint) frameSize;
	JNIEnv *env = 0;
	getEnv(&env);
	int result = env->EnsureLocalCapacity(jframeSize);
	if (result < 0) // Out of Memory
	{
		// throw std::runtime_error("Out of Memory");
	}
	result = env->PushLocalFrame(jframeSize);
	if (result < 0) // Out of Memory
	{
		// throw std::runtime_error("Out of Memory");
	}
}
	
jobject JNIContext::popLocalFrame(jobject localRef)
{
	jobject tempGlobalRef = 0;
	JNIEnv *env = 0;
	getEnv(&env);
	if (localRef != 0)
	{		
		tempGlobalRef = localToGlobalRef(localRef); 
	}
	env->PopLocalFrame(0); // we don't pass in the localRef since there is no guarentee of an outer frame
	jobject newLocalRef = 0;
	if (tempGlobalRef != 0)
	{
		newLocalRef = globalToLocalRef(tempGlobalRef);
	}
	return newLocalRef;
}


jclass JNIContext::getClassRef(const char *clazzName)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jclass clazRef = env->FindClass(clazzName);
	if (checkException(env) == false)
	{
		LOGV("getClassRef local clazRef for %s is %ld", clazzName, (long) clazRef);
		return (jclass) clazRef;
	}
	return 0;
}

jobject JNIContext::getStaticObjectRef(bool isField, const char *clazName, const char *name, const char *signature, ...)
{
	jobject obj = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		if (isField)
		{
			jfieldID fieldID = getStaticFieldID(clazz, name, signature);
			if (fieldID != 0)
			{
				LOGV("getStaticObjectRef fieldID is %ld", (long) fieldID);
				obj = getStaticObjectField(clazz, fieldID);
			}
		}
		else
		{
			jmethodID methodID = getStaticMethodID(clazz, name, signature);
			if (methodID != 0)
			{
				LOGV("getStaticObjectRef methodID is %ld", (long) methodID);
				va_list args;
				va_start(args, signature);
				obj = callStaticObjectMethodV(clazz, methodID, args);
				va_end(args);
			}
		}
		deleteLocalRef(clazz);
	}
	return obj;
}

jobject JNIContext::createNewObjectRef(const char *clazName)
{
	jobject obj = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jmethodID methodID = getMethodID(clazz, "<init>", "()V");
		if (methodID != 0)
		{
			obj = createNewObject(clazz, methodID);
		}
		deleteLocalRef(clazz);
	}
	return obj;
}

jboolean JNIContext::invokeBooleanMethod(jobject object, const char *clazName, const char *name, const char *signature, ...)
{
	jboolean result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jmethodID methodID = getMethodID(clazz, name, signature);
			if (methodID != 0)
			{
				va_list args;
				va_start(args, signature);
				result = callBooleanMethodV(object, methodID, args);
				va_end(args);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jbyte JNIContext::invokeByteMethod(jobject object, const char *clazName, const char *name, const char *signature, ...)
{
	jbyte result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jmethodID methodID = getMethodID(clazz, name, signature);
			if (methodID != 0)
			{
				va_list args;
				va_start(args, signature);
				result = callByteMethodV(object, methodID, args);
				va_end(args);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jchar JNIContext::invokeCharMethod(jobject object, const char *clazName, const char *name, const char *signature, ...)
{
	jchar result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jmethodID methodID = getMethodID(clazz, name, signature);
			if (methodID != 0)
			{
				va_list args;
				va_start(args, signature);
				result = callCharMethodV(object, methodID, args);
				va_end(args);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jshort JNIContext::invokeShortMethod(jobject object, const char *clazName, const char *name, const char *signature, ...)
{
	jshort result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jmethodID methodID = getMethodID(clazz, name, signature);
			if (methodID != 0)
			{
				va_list args;
				va_start(args, signature);
				result = callShortMethodV(object, methodID, args);
				va_end(args);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jint JNIContext::invokeIntMethod(jobject object, const char *clazName, const char *name, const char *signature, ...)
{
	jint result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jmethodID methodID = getMethodID(clazz, name, signature);
			if (methodID != 0)
			{
				va_list args;
				va_start(args, signature);
				result = callIntMethodV(object, methodID, args);
				va_end(args);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jlong JNIContext::invokeLongMethod(jobject object, const char *clazName, const char *name, const char *signature, ...)
{
	jlong result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jmethodID methodID = getMethodID(clazz, name, signature);
			if (methodID != 0)
			{
				va_list args;
				va_start(args, signature);
				result = callLongMethodV(object, methodID, args);
				va_end(args);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jfloat JNIContext::invokeFloatMethod(jobject object, const char *clazName, const char *name, const char *signature, ...)
{
	jfloat result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jmethodID methodID = getMethodID(clazz, name, signature);
			if (methodID != 0)
			{
				va_list args;
				va_start(args, signature);
				result = callFloatMethodV(object, methodID, args);
				va_end(args);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jdouble JNIContext::invokeDoubleMethod(jobject object, const char *clazName, const char *name, const char *signature, ...)
{
	jdouble result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jmethodID methodID = getMethodID(clazz, name, signature);
			if (methodID != 0)
			{
				va_list args;
				va_start(args, signature);
				result = callDoubleMethodV(object, methodID, args);
				va_end(args);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

void JNIContext::invokeVoidMethod(jobject object, const char *clazName, const char *name, const char *signature, ...)
{
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jmethodID methodID = getMethodID(clazz, name, signature);
			if (methodID != 0)
			{
				va_list args;
				va_start(args, signature);
				callVoidMethodV(object, methodID, args);
				va_end(args);
			}
			deleteLocalRef(clazz);
		}
	}
}

jstring JNIContext::invokeStringMethod(jobject object, const char *clazName, const char *name, const char *signature, ...)
{
	jstring result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jmethodID methodID = getMethodID(clazz, name, signature);
			if (methodID != 0)
			{
				va_list args;
				va_start(args, signature);
				result = callStringMethodV(object, methodID, args);
				va_end(args);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jobject JNIContext::invokeObjectMethod(jobject object, const char *clazName, const char *name, const char *signature, ...)
{
	jobject result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jmethodID methodID = getMethodID(clazz, name, signature);
			if (methodID != 0)
			{
				va_list args;
				va_start(args, signature);
				result = callObjectMethodV(object, methodID, args);
				va_end(args);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jboolean JNIContext::invokeStaticBooleanMethod(const char *clazName, const char *name, const char *signature, ...)
{
	jboolean result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jmethodID methodID = getStaticMethodID(clazz, name, signature);
		if (methodID != 0)
		{
			va_list args;
			va_start(args, signature);
			result = callStaticBooleanMethodV(clazz, methodID, args);
			va_end(args);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jbyte JNIContext::invokeStaticByteMethod(const char *clazName, const char *name, const char *signature, ...)
{
	jbyte result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jmethodID methodID = getStaticMethodID(clazz, name, signature);
		if (methodID != 0)
		{
			va_list args;
			va_start(args, signature);
			result = callStaticByteMethodV(clazz, methodID, args);
			va_end(args);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jchar JNIContext::invokeStaticCharMethod(const char *clazName, const char *name, const char *signature, ...)
{
	jchar result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jmethodID methodID = getStaticMethodID(clazz, name, signature);
		if (methodID != 0)
		{
			va_list args;
			va_start(args, signature);
			result = callStaticCharMethodV(clazz, methodID, args);
			va_end(args);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jshort JNIContext::invokeStaticShortMethod(const char *clazName, const char *name, const char *signature, ...)
{
	jshort result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jmethodID methodID = getStaticMethodID(clazz, name, signature);
		if (methodID != 0)
		{
			va_list args;
			va_start(args, signature);
			result = callStaticShortMethodV(clazz, methodID, args);
			va_end(args);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jint JNIContext::invokeStaticIntMethod(const char *clazName, const char *name, const char *signature, ...)
{
	jint result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jmethodID methodID = getStaticMethodID(clazz, name, signature);
		if (methodID != 0)
		{
			va_list args;
			va_start(args, signature);
			result = callStaticIntMethodV(clazz, methodID, args);
			va_end(args);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jlong JNIContext::invokeStaticLongMethod(const char *clazName, const char *name, const char *signature, ...)
{
	jlong result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jmethodID methodID = getStaticMethodID(clazz, name, signature);
		if (methodID != 0)
		{
			va_list args;
			va_start(args, signature);
			result = callStaticLongMethodV(clazz, methodID, args);
			va_end(args);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jfloat JNIContext::invokeStaticFloatMethod(const char *clazName, const char *name, const char *signature, ...)
{
	jfloat result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jmethodID methodID = getStaticMethodID(clazz, name, signature);
		if (methodID != 0)
		{
			va_list args;
			va_start(args, signature);
			result = callStaticFloatMethodV(clazz, methodID, args);
			va_end(args);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jdouble JNIContext::invokeStaticDoubleMethod(const char *clazName, const char *name, const char *signature, ...)
{
	jdouble result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jmethodID methodID = getStaticMethodID(clazz, name, signature);
		if (methodID != 0)
		{
			va_list args;
			va_start(args, signature);
			result = callStaticDoubleMethodV(clazz, methodID, args);
			va_end(args);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

void JNIContext::invokeStaticVoidMethod(const char *clazName, const char *name, const char *signature, ...)
{
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jmethodID methodID = getStaticMethodID(clazz, name, signature);
		if (methodID != 0)
		{
			va_list args;
			va_start(args, signature);
			callStaticVoidMethodV(clazz, methodID, args);
			va_end(args);
		}
		deleteLocalRef(clazz);
	}
}

jstring JNIContext::invokeStaticStringMethod(const char *clazName, const char *name, const char *signature, ...)
{
	jstring result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jmethodID methodID = getStaticMethodID(clazz, name, signature);
		if (methodID != 0)
		{
			va_list args;
			va_start(args, signature);
			result = callStaticStringMethodV(clazz, methodID, args);
			va_end(args);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jobject JNIContext::invokeStaticObjectMethod(const char *clazName, const char *name, const char *signature, ...)
{
	jobject result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jmethodID methodID = getStaticMethodID(clazz, name, signature);
		if (methodID != 0)
		{
			va_list args;
			va_start(args, signature);
			result = callStaticObjectMethodV(clazz, methodID, args);
			va_end(args);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jboolean JNIContext::readBooleanField(jobject object, const char *clazName, const char *name, const char *signature)
{
	jboolean result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jfieldID fieldID = getFieldID(clazz, name, signature);
			if (fieldID != 0)
			{
				result = (jboolean) getBooleanField(object, fieldID);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jbyte JNIContext::readByteField(jobject object, const char *clazName, const char *name, const char *signature)
{
	jbyte result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jfieldID fieldID = getFieldID(clazz, name, signature);
			if (fieldID != 0)
			{
				result = (jbyte) getByteField(object, fieldID);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jchar JNIContext::readCharField(jobject object, const char *clazName, const char *name, const char *signature)
{
	jchar result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jfieldID fieldID = getFieldID(clazz, name, signature);
			if (fieldID != 0)
			{
				result = (jchar) getCharField(object, fieldID);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jshort JNIContext::readShortField(jobject object, const char *clazName, const char *name, const char *signature)
{
	jshort result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jfieldID fieldID = getFieldID(clazz, name, signature);
			if (fieldID != 0)
			{
				result = (jshort) getShortField(object, fieldID);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jint JNIContext::readIntField(jobject object, const char *clazName, const char *name, const char *signature)
{
	jint result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jfieldID fieldID = getFieldID(clazz, name, signature);
			if (fieldID != 0)
			{
				result = (jint) getIntField(object, fieldID);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jlong JNIContext::readLongField(jobject object, const char *clazName, const char *name, const char *signature)
{
	jlong result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jfieldID fieldID = getFieldID(clazz, name, signature);
			if (fieldID != 0)
			{
				result = (jlong) getLongField(object, fieldID);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jfloat JNIContext::readFloatField(jobject object, const char *clazName, const char *name, const char *signature)
{
	jfloat result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz)
		{
			jfieldID fieldID = getFieldID(clazz, name, signature);
			if (fieldID != 0)
			{
				result = (jfloat) getFloatField(object, fieldID);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jdouble JNIContext::readDoubleField(jobject object, const char *clazName, const char *name, const char *signature)
{
	jdouble result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jfieldID fieldID = getFieldID(clazz, name, signature);
			if (fieldID != 0)
			{
				result = (jdouble) getDoubleField(object, fieldID);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jstring JNIContext::readStringField(jobject object, const char *clazName, const char *name, const char *signature)
{
	jstring result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jfieldID fieldID = getFieldID(clazz, name, signature);
			if (fieldID != 0)
			{
				result = (jstring) getObjectField(object, fieldID);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jobject JNIContext::readObjectField(jobject object, const char *clazName, const char *name, const char *signature)
{
	jobject result = 0;
	if (object != 0)
	{
		jclass clazz = getClassRef(clazName);
		if (clazz != 0)
		{
			jfieldID fieldID = getFieldID(clazz, name, signature);
			if (fieldID != 0)
			{
				result = (jobject) getObjectField(object, fieldID);
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jboolean JNIContext::readStaticBooleanField(const char *clazName, const char *name, const char *signature)
{
	jboolean result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jfieldID fieldID = getStaticFieldID(clazz, name, signature);
		if (fieldID != 0)
		{
			result = (jboolean) getStaticBooleanField(clazz, fieldID);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jbyte JNIContext::readStaticByteField(const char *clazName, const char *name, const char *signature)
{
	jbyte result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jfieldID fieldID = getStaticFieldID(clazz, name, signature);
		if (fieldID != 0)
		{
			result = (jbyte) getStaticByteField(clazz, fieldID);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jchar JNIContext::readStaticCharField(const char *clazName, const char *name, const char *signature)
{
	jchar result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jfieldID fieldID = getStaticFieldID(clazz, name, signature);
		if (fieldID != 0)
		{
			result = (jchar) getStaticCharField(clazz, fieldID);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jshort JNIContext::readStaticShortField(const char *clazName, const char *name, const char *signature)
{
	jshort result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jfieldID fieldID = getStaticFieldID(clazz, name, signature);
		if (fieldID != 0)
		{
			result = (jshort) getStaticShortField(clazz, fieldID);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jint JNIContext::readStaticIntField(const char *clazName, const char *name, const char *signature)
{
	jint result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jfieldID fieldID = getStaticFieldID(clazz, name, signature);
		if (fieldID != 0)
		{
			result = (jint) getStaticIntField(clazz, fieldID);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jlong JNIContext::readStaticLongField(const char *clazName, const char *name, const char *signature)
{
	jlong result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jfieldID fieldID = getStaticFieldID(clazz, name, signature);
		if (fieldID != 0)
		{
			result = (jlong) getStaticLongField(clazz, fieldID);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jfloat JNIContext::readStaticFloatField(const char *clazName, const char *name, const char *signature)
{
	jfloat result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jfieldID fieldID = getStaticFieldID(clazz, name, signature);
		if (fieldID != 0)
		{
			result = (jfloat) getStaticFloatField(clazz, fieldID);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jdouble JNIContext::readStaticDoubleField(const char *clazName, const char *name, const char *signature)
{
	jdouble result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jfieldID fieldID = getStaticFieldID(clazz, name, signature);
		if (fieldID != 0)
		{
			result = (jdouble) getStaticDoubleField(clazz, fieldID);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jstring JNIContext::readStaticStringField(const char *clazName, const char *name, const char *signature)
{
	jstring result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jfieldID fieldID = getStaticFieldID(clazz, name, signature);
		if (fieldID != 0)
		{
			result =  (jstring) getStaticObjectField(clazz, fieldID);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jobject JNIContext::readStaticObjectField(const char *clazName, const char *name, const char *signature)
{
	jobject result = 0;
	jclass clazz = getClassRef(clazName);
	if (clazz != 0)
	{
		jfieldID fieldID = getStaticFieldID(clazz, name, signature);
		if (fieldID != 0)
		{
			result = (jobject) getStaticObjectField(clazz, fieldID);
		}
		deleteLocalRef(clazz);
	}
	return result;
}

jclass JNIContext::getObjectClass(jobject object)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jclass clazRef = env->GetObjectClass(object);
		if (checkException(env) == false)
		{
			return (jclass) clazRef;
		}
	}
	return 0;
}

jstring JNIContext::getClassName(jobject object)
{
	jstring result = 0;
	if (object != 0)
	{
		jclass clazz = getObjectClass(object);
		if (clazz != 0)
		{
			result = invokeStringMethod(clazz, "java/lang/Class", "getName()", "()Ljava/lang/String;");
			deleteLocalRef(clazz);
		}
	}
	return result;
}

std::string JNIContext::getJNIName(std::string name)
{
	std::string jni_name = std::string(name);
	std::replace(jni_name.begin(), jni_name.end(), '.', '/');
	return jni_name;
}

jmethodID JNIContext::getMethodID(jclass clazz, const char *methodName, const char *methodSignature)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jmethodID methodID = env->GetMethodID(clazz, methodName, methodSignature);
	if (checkException(env) == false)
	{
		return methodID;
	}
	return 0;
}

jmethodID JNIContext::getStaticMethodID(jclass clazz, const char *methodName, const char *methodSignature)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jmethodID methodID = env->GetStaticMethodID(clazz, methodName, methodSignature);
	if (checkException(env) == false)
	{
		return methodID;
	}
	return 0;
}

jfieldID JNIContext::getFieldID(jclass clazz, const char *fieldName, const char *fieldSignature)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jfieldID fieldID = env->GetFieldID(clazz, fieldName, fieldSignature);
	if (checkException(env) == false)
	{
		return fieldID;
	}
	return 0;
}

jfieldID JNIContext::getStaticFieldID(jclass clazz, const char *fieldName, const char *fieldSignature)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jfieldID fieldID = env->GetStaticFieldID(clazz, fieldName, fieldSignature);
	if (checkException(env) == false)
	{
		return fieldID;
	}
	return 0;
}

jboolean JNIContext::getBooleanField(jobject object, jfieldID fieldID)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jboolean result = env->GetBooleanField(object, fieldID);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jbyte JNIContext::getByteField(jobject object, jfieldID fieldID)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jbyte result = env->GetByteField(object, fieldID);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jchar JNIContext::getCharField(jobject object, jfieldID fieldID)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jchar result = env->GetCharField(object, fieldID);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jshort JNIContext::getShortField(jobject object, jfieldID fieldID)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jshort result = env->GetShortField(object, fieldID);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jint JNIContext::getIntField(jobject object, jfieldID fieldID)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jint result = env->GetIntField(object, fieldID);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jlong JNIContext::getLongField(jobject object, jfieldID fieldID)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jlong result = env->GetLongField(object, fieldID);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jfloat JNIContext::getFloatField(jobject object, jfieldID fieldID)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jfloat result = env->GetFloatField(object, fieldID);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jdouble JNIContext::getDoubleField(jobject object, jfieldID fieldID)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jdouble result = env->GetDoubleField(object, fieldID);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jobject JNIContext::getObjectField(jobject object, jfieldID fieldID)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject result = env->GetObjectField(object, fieldID);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jboolean JNIContext::getStaticBooleanField(jclass clazz, jfieldID fieldID)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jboolean result = env->GetStaticBooleanField(clazz, fieldID);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jbyte JNIContext::getStaticByteField(jclass clazz, jfieldID fieldID)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jbyte result =  env->GetStaticByteField(clazz, fieldID);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jchar JNIContext::getStaticCharField(jclass clazz, jfieldID fieldID)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jchar result = env->GetStaticCharField(clazz, fieldID);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jshort JNIContext::getStaticShortField(jclass clazz, jfieldID fieldID)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jshort result = env->GetStaticShortField(clazz, fieldID);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jint JNIContext::getStaticIntField(jclass clazz, jfieldID fieldID)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jint result = env->GetStaticIntField(clazz, fieldID);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jlong JNIContext::getStaticLongField(jclass clazz, jfieldID fieldID)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jlong result = env->GetStaticLongField(clazz, fieldID);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jfloat JNIContext::getStaticFloatField(jclass clazz, jfieldID fieldID)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jfloat result = env->GetStaticFloatField(clazz, fieldID);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jdouble JNIContext::getStaticDoubleField(jclass clazz, jfieldID fieldID)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jdouble result = env->GetStaticDoubleField(clazz, fieldID);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jobject JNIContext::getStaticObjectField(jclass clazz, jfieldID fieldID)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jobject result = env->GetStaticObjectField(clazz, fieldID);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jboolean JNIContext::callBooleanMethod(jobject object, jmethodID methodID, ...)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		va_list args;
		va_start(args, methodID);
		jboolean result = env->CallBooleanMethodV(object, methodID, args);
		va_end(args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jbyte JNIContext::callByteMethod(jobject object, jmethodID methodID, ...)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		va_list args;
		va_start(args, methodID);
		jbyte result = env->CallByteMethodV(object, methodID, args);
		va_end(args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jchar JNIContext::callCharMethod(jobject object, jmethodID methodID, ...)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		va_list args;
		va_start(args, methodID);
		jchar result = env->CallCharMethodV(object, methodID, args);
		va_end(args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jshort JNIContext::callShortMethod(jobject object, jmethodID methodID, ...)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		va_list args;
		va_start(args, methodID);
		jchar result = env->CallShortMethodV(object, methodID, args);
		va_end(args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jint JNIContext::callIntMethod(jobject object, jmethodID methodID, ...)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		va_list args;
		va_start(args, methodID);
		jint result = env->CallIntMethodV(object, methodID, args);
		va_end(args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jlong JNIContext::callLongMethod(jobject object, jmethodID methodID, ...)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		va_list args;
		va_start(args, methodID);
		jlong result = env->CallLongMethodV(object, methodID, args);
		va_end(args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jfloat JNIContext::callFloatMethod(jobject object, jmethodID methodID, ...)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		va_list args;
		va_start(args, methodID);
		jfloat result = env->CallFloatMethodV(object, methodID, args);
		va_end(args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jdouble JNIContext::callDoubleMethod(jobject object, jmethodID methodID, ...)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		va_list args;
		va_start(args, methodID);
		jdouble result = env->CallDoubleMethodV(object, methodID, args);
		va_end(args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jstring JNIContext::callStringMethod(jobject object, jmethodID methodID, ...)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		va_list args;
		va_start(args, methodID);
		jstring result = (jstring) env->CallObjectMethodV(object, methodID, args);
		va_end(args);
		if (checkException(env) == false)
		{
			return (jstring) result;
		}
	}
	return 0;
}

jobject JNIContext::callObjectMethod(jobject object, jmethodID methodID, ...)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		va_list args;
		va_start(args, methodID);
		jobject result = env->CallObjectMethodV(object, methodID, args);
		va_end(args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

void JNIContext::callVoidMethod(jobject object, jmethodID methodID, ...)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		va_list args;
		va_start(args, methodID);
		env->CallVoidMethodV(object, methodID, args);
		va_end(args);
		checkException(env);
	}
}

jboolean JNIContext::callStaticBooleanMethod(jclass clazz, jmethodID methodID, ...)
{
	JNIEnv *env = 0;
	getEnv(&env);
	va_list args;
	va_start(args, methodID);
	jboolean result = env->CallStaticBooleanMethodV(clazz, methodID, args);
	va_end(args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jbyte JNIContext::callStaticByteMethod(jclass clazz, jmethodID methodID, ...)
{
	JNIEnv *env = 0;
	getEnv(&env);
	va_list args;
	va_start(args, methodID);
	jbyte result = env->CallStaticByteMethodV(clazz, methodID, args);
	va_end(args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jchar JNIContext::callStaticCharMethod(jclass clazz, jmethodID methodID, ...)
{
	JNIEnv *env = 0;
	getEnv(&env);
	va_list args;
	va_start(args, methodID);
	jchar result = env->CallStaticCharMethodV(clazz, methodID, args);
	va_end(args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jshort JNIContext::callStaticShortMethod(jclass clazz, jmethodID methodID, ...)
{
	JNIEnv *env = 0;
	getEnv(&env);
	va_list args;
	va_start(args, methodID);
	jchar result = env->CallStaticShortMethodV(clazz, methodID, args);
	va_end(args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jint JNIContext::callStaticIntMethod(jclass clazz, jmethodID methodID, ...)
{
	JNIEnv *env = 0;
	getEnv(&env);
	va_list args;
	va_start(args, methodID);
	jint result = env->CallStaticIntMethodV(clazz, methodID, args);
	va_end(args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jlong JNIContext::callStaticLongMethod(jclass clazz, jmethodID methodID, ...)
{
	JNIEnv *env = 0;
	getEnv(&env);
	va_list args;
	va_start(args, methodID);
	jlong result = env->CallStaticLongMethodV(clazz, methodID, args);
	va_end(args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jfloat JNIContext::callStaticFloatMethod(jclass clazz, jmethodID methodID, ...)
{
	JNIEnv *env = 0;
	getEnv(&env);
	va_list args;
	va_start(args, methodID);
	jfloat result = env->CallStaticFloatMethodV(clazz, methodID, args);
	va_end(args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jdouble JNIContext::callStaticDoubleMethod(jclass clazz, jmethodID methodID, ...)
{
	JNIEnv *env = 0;
	getEnv(&env);
	va_list args;
	va_start(args, methodID);
	jdouble result = env->CallStaticDoubleMethodV(clazz, methodID, args);
	va_end(args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jstring JNIContext::callStaticStringMethod(jclass clazz, jmethodID methodID, ...)
{
	JNIEnv *env = 0;
	getEnv(&env);
	va_list args;
	va_start(args, methodID);
	jstring result = (jstring) env->CallStaticObjectMethodV(clazz, methodID, args);
	va_end(args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jobject JNIContext::callStaticObjectMethod(jclass clazz, jmethodID methodID, ...)
{
	JNIEnv *env = 0;
	getEnv(&env);
	va_list args;
	va_start(args, methodID);
	jobject result = env->CallStaticObjectMethodV(clazz, methodID, args);
	va_end(args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

void JNIContext::callStaticVoidMethod(jclass clazz, jmethodID methodID, ...)
{
	JNIEnv *env = 0;
	getEnv(&env);
	va_list args;
	va_start(args, methodID);
	env->CallStaticVoidMethodV(clazz, methodID, args);
	va_end(args);
	checkException(env);
}

jboolean JNIContext::callBooleanMethodV(jobject object, jmethodID methodID, va_list args)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jboolean result = env->CallBooleanMethodV(object, methodID, args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jbyte JNIContext::callByteMethodV(jobject object, jmethodID methodID, va_list args)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jbyte result = env->CallByteMethodV(object, methodID, args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jchar JNIContext::callCharMethodV(jobject object, jmethodID methodID, va_list args)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jchar result = env->CallCharMethodV(object, methodID, args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jshort JNIContext::callShortMethodV(jobject object, jmethodID methodID, va_list args)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jshort result = env->CallShortMethodV(object, methodID, args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jint JNIContext::callIntMethodV(jobject object, jmethodID methodID, va_list args)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jint result = env->CallIntMethodV(object, methodID, args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jlong JNIContext::callLongMethodV(jobject object, jmethodID methodID, va_list args)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jlong result = env->CallLongMethodV(object, methodID, args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jfloat JNIContext::callFloatMethodV(jobject object, jmethodID methodID, va_list args)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jfloat result = env->CallFloatMethodV(object, methodID, args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jdouble JNIContext::callDoubleMethodV(jobject object, jmethodID methodID, va_list args)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jdouble result = env->CallDoubleMethodV(object, methodID, args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jstring JNIContext::callStringMethodV(jobject object, jmethodID methodID, va_list args)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jstring result = (jstring) env->CallObjectMethodV(object, methodID, args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jobject JNIContext::callObjectMethodV(jobject object, jmethodID methodID, va_list args)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject result = env->CallObjectMethodV(object, methodID, args);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

void JNIContext::callVoidMethodV(jobject object, jmethodID methodID, va_list args)
{
	if (object != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		env->CallVoidMethodV(object, methodID, args);
		checkException(env);
	}
}

jboolean JNIContext::callStaticBooleanMethodV(jclass clazz, jmethodID methodID, va_list args)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jboolean result = env->CallStaticBooleanMethodV(clazz, methodID, args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jbyte JNIContext::callStaticByteMethodV(jclass clazz, jmethodID methodID, va_list args)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jbyte result = env->CallStaticByteMethodV(clazz, methodID, args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jchar JNIContext::callStaticCharMethodV(jclass clazz, jmethodID methodID, va_list args)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jchar result = env->CallStaticCharMethodV(clazz, methodID, args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jshort JNIContext::callStaticShortMethodV(jclass clazz, jmethodID methodID, va_list args)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jshort result = env->CallStaticShortMethodV(clazz, methodID, args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jint JNIContext::callStaticIntMethodV(jclass clazz, jmethodID methodID, va_list args)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jint result = env->CallStaticIntMethodV(clazz, methodID, args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jlong JNIContext::callStaticLongMethodV(jclass clazz, jmethodID methodID, va_list args)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jlong result = env->CallStaticLongMethodV(clazz, methodID, args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jfloat JNIContext::callStaticFloatMethodV(jclass clazz, jmethodID methodID, va_list args)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jfloat result = env->CallStaticFloatMethodV(clazz, methodID, args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jdouble JNIContext::callStaticDoubleMethodV(jclass clazz, jmethodID methodID, va_list args)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jdouble result = env->CallStaticDoubleMethodV(clazz, methodID, args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jstring JNIContext::callStaticStringMethodV(jclass clazz, jmethodID methodID, va_list args)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jstring result = (jstring) env->CallStaticObjectMethodV(clazz, methodID, args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

jobject JNIContext::callStaticObjectMethodV(jclass clazz, jmethodID methodID, va_list args)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jobject result = env->CallStaticObjectMethodV(clazz, methodID, args);
	if (checkException(env) == false)
	{
		return result;
	}
	return 0;
}

void JNIContext::callStaticVoidMethodV(jclass clazz, jmethodID methodID, va_list args)
{
	JNIEnv *env = 0;
	getEnv(&env);
	env->CallStaticVoidMethodV(clazz, methodID, args);
	checkException(env);
}

jboolean JNIContext::readBooleanObjectArrayElement(jobjectArray array, int index)
{
	if (array != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject elem = (jobject) env->GetObjectArrayElement(array, index);
		if (checkException(env) == false)
		{
			jboolean result = invokeBooleanMethod(elem, "java/lang/Boolean", "booleanValue", "()Z");
			deleteLocalRef(elem);
			return result;
		}
	}
	return 0;
}

jbyte JNIContext::readByteObjectArrayElement(jobjectArray array, int index)
{
	if (array != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject elem = (jobject) env->GetObjectArrayElement(array, index);
		if (checkException(env) == false)
		{
			jbyte result = invokeByteMethod(elem, "java/lang/Byte", "byteValue", "()B");
			deleteLocalRef(elem);
			return result;
		}
	}
	return 0;
}

jchar JNIContext::readCharObjectArrayElement(jobjectArray array, int index)
{
	if (array != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject elem = (jobject) env->GetObjectArrayElement(array, index);
		if (checkException(env) == false)
		{
			jchar result = invokeCharMethod(elem, "java/lang/Character", "charValue", "()C");
			deleteLocalRef(elem);
			return result;
		}
	}
	return 0;
}

jshort JNIContext::readShortObjectArrayElement(jobjectArray array, int index)
{
	if (array != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject elem = (jobject) env->GetObjectArrayElement(array, index);
		if (checkException(env) == false)
		{
			jshort result = invokeShortMethod(elem, "java/lang/Short", "shortValue", "()S");
			deleteLocalRef(elem);
			return result;
		}
	}
	return 0;
}

jint JNIContext::readIntObjectArrayElement(jobjectArray array, int index)
{
	if (array != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject elem = (jobject) env->GetObjectArrayElement(array, index);
		if (checkException(env) == false)
		{
			jint result = invokeIntMethod(elem, "java/lang/Integer", "intValue", "()I");
			deleteLocalRef(elem);
			return result;
		}
	}
	return 0;
}

jlong JNIContext::readLongObjectArrayElement(jobjectArray array, int index)
{
	if (array != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject elem = (jobject) env->GetObjectArrayElement(array, index);
		if (checkException(env) == false)
		{
			jlong result = invokeLongMethod(elem, "java/lang/Long", "longValue", "()J");
			deleteLocalRef(elem);
			return result;
		}
	}
	return 0;
}

jfloat JNIContext::readFloatObjectArrayElement(jobjectArray array, int index)
{
	if (array != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject elem = (jobject) env->GetObjectArrayElement(array, index);
		if (checkException(env) == false)
		{
			jfloat result = invokeFloatMethod(elem, "java/lang/Float", "floatValue", "()F");
			deleteLocalRef(elem);
			return result;
		}
	}
	return 0;
}

jdouble JNIContext::readDoubleObjectArrayElement(jobjectArray array, int index)
{
	if (array != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject elem = (jobject) env->GetObjectArrayElement(array, index);
		if (checkException(env) == false)
		{
			jdouble result = invokeDoubleMethod(elem, "java/lang/Double", "doubleValue", "()D");
			deleteLocalRef(elem);
			return result;
		}
	}
	return 0;
}

jstring JNIContext::readStringObjectArrayElement(jobjectArray array, int index)
{
	return (jstring) readObjectObjectArrayElement(array, index);
}

jobject JNIContext::readObjectObjectArrayElement(jobjectArray array, int index)
{
	if (array != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject result = (jobject) env->GetObjectArrayElement(array, index);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

bool * JNIContext::getBooleanArray(jbooleanArray array)
{
	bool * result = 0;
	if (array != 0)
	{
		int count = getArrayLength(array);
		if (count > 0)
		{
			JNIEnv *env = 0;
			getEnv(&env);			
			env->GetBooleanArrayRegion(array,0,count,(jboolean *) result);
			if (checkException(env) == false)
			{
				return result;
			}
		}
	}
	return result;
}

char * JNIContext::getByteArray(jbyteArray array)
{
	char * result = 0;
	if (array != 0)
	{
		int count = getArrayLength(array);
		if (count > 0)
		{
			JNIEnv *env = 0;
			getEnv(&env);			
			env->GetByteArrayRegion(array,0,count,(jbyte *) result);
			if (checkException(env) == false)
			{
				return result;
			}
		}
	}
	return result;
}

char * JNIContext::getCharArray(jcharArray array)
{
	char * result = 0;
	if (array != 0)
	{
		int count = getArrayLength(array);
		if (count > 0)
		{
			JNIEnv *env = 0;
			getEnv(&env);			
			env->GetCharArrayRegion(array,0,count,(jchar *) result);
			if (checkException(env) == false)
			{
				return result;
			}
		}
	}
	return result;
}

short * JNIContext::getShortArray(jshortArray array)
{
	short * result = 0;
	if (array != 0)
	{
		int count = getArrayLength(array);
		if (count > 0)
		{
			JNIEnv *env = 0;
			getEnv(&env);			
			env->GetShortArrayRegion(array,0,count,(jshort *) result);
			if (checkException(env) == false)
			{
				return result;
			}
		}
	}
	return result;
}

int * JNIContext::getIntArray(jintArray array)
{
	int * result = 0;
	if (array != 0)
	{
		int count = getArrayLength(array);
		if (count > 0)
		{
			JNIEnv *env = 0;
			getEnv(&env);			
			env->GetIntArrayRegion(array,0,count,(jint *) result);
			if (checkException(env) == false)
			{
				return result;
			}
		}
	}
	return result;
}

long * JNIContext::getLongArray(jlongArray array)
{
	long * result = 0;
	if (array != 0)
	{
		int count = getArrayLength(array);
		if (count > 0)
		{
			JNIEnv *env = 0;
			getEnv(&env);			
			env->GetLongArrayRegion(array,0,count,(jlong *) result);
			if (checkException(env) == false)
			{
				return result;
			}
		}
	}
	return result;
}
	
float * JNIContext::getFloatArray(jfloatArray array)
{
	float * result = 0;
	if (array != 0)
	{
		int count = getArrayLength(array);
		if (count > 0)
		{
			JNIEnv *env = 0;
			getEnv(&env);			
			env->GetFloatArrayRegion(array,0,count,(jfloat *) result);
			if (checkException(env) == false)
			{
				return result;
			}
		}
	}
	return result;
}
	
double * JNIContext::getDoubleArray(jdoubleArray array)
{
	double * result = 0;
	if (array != 0)
	{
		int count = getArrayLength(array);
		if (count > 0)
		{
			JNIEnv *env = 0;
			getEnv(&env);			
			env->GetDoubleArrayRegion(array,0,count,(jdouble *) result);
			if (checkException(env) == false)
			{
				return result;
			}
		}
	}
	return result;
}

jobject JNIContext::createNewObject(jclass clazz, jmethodID methodID, jvalue *args)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jobject obj = env->NewObjectA(clazz, methodID, args);
	if (checkException(env) == false)
	{
		return obj;
	}
	return 0;
}

jobject JNIContext::createNewObject(jclass clazz, jmethodID methodID, ...)
{
	JNIEnv *env = 0;
	getEnv(&env);
	va_list args;
	va_start(args, methodID);
	jobject obj = env->NewObjectV(clazz, methodID, args);
	va_end(args);
	if (checkException(env) == false)
	{
		return obj;
	}
	return 0;
}

jobject JNIContext::globalToLocalRef(jobject globalRef)
{
	if (globalRef != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject localRef = env->NewLocalRef(globalRef);
		env->DeleteGlobalRef(globalRef);
		return localRef;		
	}
	return 0;
}

jobject JNIContext::localToGlobalRef(jobject localRef)
{
	if (localRef != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject globalRef = env->NewGlobalRef(localRef);
		env->DeleteLocalRef(localRef);
		return globalRef;		
	}
	return 0;
}

void JNIContext::deleteLocalRef(jobject localRef)
{
	if (localRef != 0)
	{		
		JNIEnv *env = 0;
		getEnv(&env);
		env->DeleteLocalRef(localRef);
	}
}

void JNIContext::deleteGlobalRef(jobject globalRef)
{
	if (globalRef != 0)
	{		
		JNIEnv *env = 0;
		getEnv(&env);
		env->DeleteGlobalRef(globalRef);
	}
}

jobject JNIContext::newLocalRef(jobject ref)
{
	if (ref != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		return env->NewLocalRef(ref);		
	}
	return 0;
}

jsize JNIContext::getArrayLength(jarray array)
{
	if (array != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jsize result = env->GetArrayLength(array);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jobject JNIContext::getObjectArrayElement(jobjectArray array, int index)
{
	if (array != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jobject result = env->GetObjectArrayElement(array, (jsize) index);
		if (checkException(env) == false)
		{
			return result;
		}
	}
	return 0;
}

jbooleanArray JNIContext::createBooleanArray(bool& array, int count)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jboolean buf[count];
	bool * ptr = &array;
	for (int i = 0; i < count; i++)
	{
		buf[i] = (jboolean) ptr[i];
	}
	jbooleanArray jArray = env->NewBooleanArray(count);
	if (checkException(env))
	{
		return 0;
	}
	env->SetBooleanArrayRegion(jArray, 0, count, buf);
	if (checkException(env))
	{
		return 0;
	}
	return jArray;
}

jbyteArray JNIContext::createByteArray(jbyte& array, int count)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jbyte buf[count];
	jbyte * ptr = &array;
	for (int i = 0; i < count; i++)
	{
		buf[i] = (jbyte) ptr[i];
	}
	jbyteArray jArray = env->NewByteArray(count);
	if (checkException(env))
	{
		return 0;
	}
	env->SetByteArrayRegion(jArray, 0, count, buf);
	if (checkException(env))
	{
		return 0;
	}
	return jArray;
}

jbyteArray JNIContext::createByteArray(char& array, int count)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jbyte buf[count];
	jbyte * ptr = (jbyte *) &array;
	for (int i = 0; i < count; i++)
	{
		buf[i] = (jbyte) ptr[i];
	}
	jbyteArray jArray = env->NewByteArray(count);
	if (checkException(env))
	{
		return 0;
	}
	env->SetByteArrayRegion(jArray, 0, count, buf);
	if (checkException(env))
	{
		return 0;
	}
	return jArray;
}

jcharArray JNIContext::createCharArray(char& array, int count)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jchar buf[count];
	char * ptr = &array;
	for (int i = 0; i < count; i++)
	{
		buf[i] = (jchar) ptr[i];
	}
	jcharArray jArray = env->NewCharArray(count);
	if (checkException(env))
	{
		return 0;
	}
	env->SetCharArrayRegion(jArray, 0, count, buf);
	if (checkException(env))
	{
		return 0;
	}
	return jArray;
}

jshortArray JNIContext::createShortArray(short& array, int count)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jshort buf[count];
	short * ptr = &array;
	for (int i = 0; i < count; i++)
	{
		buf[i] = (jshort) ptr[i];
	}
	jshortArray jArray = env->NewShortArray(count);
	if (checkException(env))
	{
		return 0;
	}
	env->SetShortArrayRegion(jArray, 0, count, buf);
	if (checkException(env))
	{
		return 0;
	}
	return jArray;
}

jintArray JNIContext::createIntArray(int& array, int count)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jint buf[count];
	int * ptr = &array;
	for (int i = 0; i < count; i++)
	{
		buf[i] = (jint) ptr[i];
	}
	jintArray jArray = env->NewIntArray(count);
	if (checkException(env))
	{
		return 0;
	}
	env->SetIntArrayRegion(jArray, 0, count, buf);
	if (checkException(env))
	{
		return 0;
	}
	return jArray;
}

jlongArray JNIContext::createLongArray(long& array, int count)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jlong buf[count];
	long * ptr = &array;
	for (int i = 0; i < count; i++)
	{
		buf[i] = (jlong) ptr[i];
	}
	jlongArray jArray = env->NewLongArray(count);
	if (checkException(env))
	{
		return 0;
	}
	env->SetLongArrayRegion(jArray, 0, count, buf);
	if (checkException(env))
	{
		return 0;
	}
	return jArray;
}

jfloatArray JNIContext::createFloatArray(float& array, int count)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jfloat buf[count];
	float * ptr = &array;
	for (int i = 0; i < count; i++)
	{
		buf[i] = (jfloat) ptr[i];
	}
	jfloatArray jArray = env->NewFloatArray(count);
	if (checkException(env))
	{
		return 0;
	}
	env->SetFloatArrayRegion(jArray, 0, count, buf);
	if (checkException(env))
	{
		return 0;
	}
	return jArray;
}

jdoubleArray JNIContext::createDoubleArray(double& array, int count)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jdouble buf[count];
	double *ptr = &array;
	for (int i = 0; i < count; i++)
	{
		buf[i] = (jdouble) ptr[i];
	}
	jdoubleArray jArray = env->NewDoubleArray(count);
	if (checkException(env))
	{
		return 0;
	}
	env->SetDoubleArrayRegion(jArray, 0, count, buf);
	if (checkException(env))
	{
		return 0;
	}
	return jArray;
}

jobjectArray JNIContext::createStringArray(std::string& array, int count)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jclass clazz = getClassRef("java/lang/String");
	if (clazz != 0)
	{
		jobjectArray jArray = env->NewObjectArray(count, clazz, 0);
		if (checkException(env))
		{
			deleteLocalRef(clazz);
			return 0;
		}
		std::string *ptr = &array;
		for (int i = 0; i < count; i++)
		{
			jobject jobj = toJString(ptr[i]);
			env->SetObjectArrayElement(jArray, i, jobj);
			if (jobj != 0)
			{
				deleteLocalRef(jobj);
			}
			if (checkException(env))
			{
				deleteLocalRef(clazz);
				return 0;
			}
		}
		deleteLocalRef(clazz);
		return jArray;
	}
	return 0;
}

jobjectArray JNIContext::createObjectArray(int count, jclass clazz)
{
	JNIEnv *env = 0;
	getEnv(&env);
	if (clazz != 0)
	{
		jobjectArray jArray = env->NewObjectArray(count, clazz, 0);
		if (checkException(env))
		{
			deleteLocalRef(jArray);
			return 0;
		}
		return jArray;
	}
	return 0;
}

void JNIContext::setObjectArrayElement(jobjectArray array, int index, jobject value)
{
	if (array != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		env->SetObjectArrayElement(array, index, value);
		checkException(env);	
	}
}

jsize JNIContext::getMapSize(jobject java_map)
{
	if (java_map != 0)
	{
		if (isInstanceOf(java_map, "java/util/Map"))
		{		
			jint result = invokeIntMethod(java_map, "java/util/Map", "size", "()I");
			return (jsize) result;
		}
	}
	return (jsize) 0;
}

jobject JNIContext::readMapValue(jobject java_map, jobject java_map_key)
{
	if (java_map != 0)
	{
		if (isInstanceOf(java_map, "java/util/Map"))
		{
			jobject result = invokeObjectMethod(java_map, "java/util/Map", "get", "(Ljava/lang/Object;)Ljava/lang/Object;", java_map_key);
			return result;
		}
	}
	return 0;
}

void JNIContext::putMapKeyValue(jobject java_map, jobject java_map_key, jobject java_map_value)
{
	if (java_map != 0)
	{
		if (isInstanceOf(java_map, "java/util/Map"))
		{
			invokeVoidMethod(java_map, "java/util/Map", "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", java_map_key, java_map_value);
		}
	}
}

jobject JNIContext::getMapKeyIterator(jobject java_map)
{
	if (java_map != 0)
	{
		if (isInstanceOf(java_map, "java/util/Map"))
		{
			jobject java_set = invokeObjectMethod(java_map, "java/util/Map", "keySet", "()Ljava/util/Set;");
			if (java_set != 0)
			{
				jobject java_iterator = invokeObjectMethod(java_set, "java/util/Set", "iterator", "()Ljava/util/Iterator;");
				deleteLocalRef(java_set);
				return java_iterator;
			}				
		}
	}
	return 0;
}

jobject JNIContext::nextIteratorElement(jobject java_iterator)
{
	if (java_iterator != 0)
	{
		if (isInstanceOf(java_iterator, "java/util/Iterator"))
		{
			jobject java_element = invokeObjectMethod(java_iterator, "java/util/Iterator", "next", "()Ljava/lang/Object;");
			return java_element;					
		}
	}
	return 0;
}

jboolean JNIContext::isBooleanObject(jobject obj)
{
	return isInstanceOf(obj, "java/lang/Boolean");
}

jboolean JNIContext::isByteObject(jobject obj)
{
	return isInstanceOf(obj, "java/lang/Byte");
}

jboolean JNIContext::isCharObject(jobject obj)
{
	return isInstanceOf(obj, "java/lang/Character");
}

jboolean JNIContext::isShortObject(jobject obj)
{
	return isInstanceOf(obj, "java/lang/Short");
}

jboolean JNIContext::isIntObject(jobject obj)
{
	return isInstanceOf(obj, "java/lang/Integer");
}

jboolean JNIContext::isLongObject(jobject obj)
{
	return isInstanceOf(obj, "java/lang/Long");
}

jboolean JNIContext::isFloatObject(jobject obj)
{
	return isInstanceOf(obj, "java/lang/Float");
}

jboolean JNIContext::isDoubleObject(jobject obj)
{
	return isInstanceOf(obj, "java/lang/Double");
}

jboolean JNIContext::isInstanceOf(jobject obj, jclass claz)
{
	if (obj != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jboolean result = env->IsInstanceOf(obj, claz);
		if (checkException(env))
		{
			return 0;
		}
		return result;
	}
	return 0;
}

jboolean JNIContext::isInstanceOf(jobject obj, const char * className)
{
	return isInstanceOf(obj, getClassRef(className));
}

jobject JNIContext::toBooleanObject(jboolean value)
{
	jclass clazz = getClassRef("java/lang/Boolean");
	jmethodID methodID = getMethodID(clazz, "<init>", "(Z)V");
	jobject result = createNewObject(clazz, methodID, value);
	deleteLocalRef(clazz);
	return result;
}

jobject JNIContext::toByteObject(jbyte value)
{
	jclass clazz = getClassRef("java/lang/Byte");
	jmethodID methodID = getMethodID(clazz, "<init>", "(B)V");
	jobject result = createNewObject(clazz, methodID, value);
	deleteLocalRef(clazz);
	return result;
}

jobject JNIContext::toCharObject(jchar value)
{
	jclass clazz = getClassRef("java/lang/Character");
	jmethodID methodID = getMethodID(clazz, "<init>", "(C)V");
	jobject result = createNewObject(clazz, methodID, value);
	deleteLocalRef(result);
	return result;
}

jobject JNIContext::toShortObject(jshort value)
{
	jclass clazz = getClassRef("java/lang/Short");
	jmethodID methodID = getMethodID(clazz, "<init>", "(S)V");
	jobject result = createNewObject(clazz, methodID, value);
	deleteLocalRef(clazz);
	return result;
}

jobject JNIContext::toIntObject(jint value)
{
	jclass clazz = getClassRef("java/lang/Integer");
	jmethodID methodID = getMethodID(clazz, "<init>", "(I)V");
	jobject result = createNewObject(clazz, methodID, value);
	deleteLocalRef(clazz);
	return result;
}

jobject JNIContext::toLongObject(jlong value)
{
	jclass clazz = getClassRef("java/lang/Long");
	jmethodID methodID = getMethodID(clazz, "<init>", "(J)V");
	jobject result = createNewObject(clazz, methodID, value);
	deleteLocalRef(clazz);
	return result;
}

jobject JNIContext::toFloatObject(jfloat value)
{
	jclass clazz = getClassRef("java/lang/Float");
	jmethodID methodID = getMethodID(clazz, "<init>", "(F)V");
	jobject result = createNewObject(clazz, methodID, value);
	deleteLocalRef(clazz);
	return result;
}

jobject JNIContext::toDoubleObject(jdouble value)
{
	jclass clazz = getClassRef("java/lang/Double");
	jmethodID methodID = getMethodID(clazz, "<init>", "(D)V");
	jobject result = createNewObject(clazz, methodID, value);
	deleteLocalRef(result);
	return result;
}

jboolean JNIContext::booleanValue(jobject obj)
{
	return invokeBooleanMethod(obj, "java/lang/Boolean", "booleanValue", "()Z");
}

jbyte JNIContext::byteValue(jobject obj)
{
	return invokeByteMethod(obj, "java/lang/Boolean", "byteValue", "()B");
}

jchar JNIContext::charValue(jobject obj)
{
	return invokeCharMethod(obj, "java/lang/Character", "charValue", "()C");
}

jshort JNIContext::shortValue(jobject obj)
{
	return invokeShortMethod(obj, "java/lang/Short", "shortValue", "()S");
}

jint JNIContext::intValue(jobject obj)
{
	return invokeIntMethod(obj, "java/lang/Integer", "intValue", "()I");
}

jlong JNIContext::longValue(jobject obj)
{
	return invokeLongMethod(obj, "java/lang/Long", "longValue", "()J");
}

jfloat JNIContext::floatValue(jobject obj)
{
	return invokeFloatMethod(obj, "java/lang/Float", "floatValue", "()F");
}

jdouble JNIContext::doubleValue(jobject obj)
{
	return invokeDoubleMethod(obj, "java/lang/Double", "doubleValue", "()D");
}

std::string JNIContext::getUTFString(jstring str)
{
	JNIEnv *env = 0;
	getEnv(&env);
	std::string result = std::string();
	if (str != 0)
	{
		jclass clazz = env->GetObjectClass(str);
		if (checkException(env) == false)
		{
			jmethodID methodID = getMethodID(clazz, "getBytes", "(Ljava/lang/String;)[B");
			if (methodID != 0)
			{
				jbyteArray bytes = (jbyteArray) env->CallObjectMethod(str, methodID, toJString(std::string("UTF-8")));
				if (checkException(env) == false)
				{
					jint len = env->GetArrayLength(bytes);
					char chars[len + 1];
					if (chars != 0)
					{
						env->GetByteArrayRegion(bytes, 0, len, (jbyte *) chars);
						chars[len] = 0;
						result = std::string(chars);
					}
					deleteLocalRef(bytes);
				}
			}
			deleteLocalRef(clazz);
		}
	}
	return result;
}

jstring JNIContext::toJString(const std::string& str)
{
	jstring result = 0;
	int len = str.length();
	jbyte * ptr =  (jbyte *) str.c_str();
	jbyteArray byteArray = createByteArray(*ptr, len);
	if (byteArray != 0)
	{
		jclass clazz = getClassRef("java/lang/String");
		if (clazz != 0)
		{
			jmethodID methodID = getMethodID(clazz, "<init>", "([B)V");
			if (methodID != 0)
			{
				result = (jstring) createNewObject(clazz, methodID, byteArray);
			}
			deleteLocalRef(clazz);
		}
		deleteLocalRef(byteArray);
	}
	return result;
}

jobject JNIContext::toJEnum(jclass clazz, const char *enumString)
{
	JNIEnv *env = 0;
	getEnv(&env);
	jclass enumClazz = getClassRef("java/lang/Enum");
	jmethodID jmValueOf = env->GetStaticMethodID(enumClazz, "valueOf", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;");
	std::string sEnumString = std::string(enumString);
	jobject result = env->CallStaticObjectMethod(enumClazz, jmValueOf, clazz, toJString(sEnumString));
	deleteLocalRef(enumClazz);
	return result;
}

jstring JNIContext::toCXXEnumString(jobject obj)
{
	if (obj != 0)
	{
		JNIEnv *env = 0;
		getEnv(&env);
		jclass enumClazz = getClassRef("java/lang/Enum");
		jmethodID jmName = env->GetMethodID(enumClazz, "name", "()Ljava/lang/String;");
		deleteLocalRef(enumClazz);
		if (checkException(env) == false)
		{
			jstring result = (jstring) env->CallObjectMethod(obj, jmName);
			if (checkException(env) == false)
			{
				return result;
			}
		}
	}
	return 0;
}

bool JNIContext::checkException(JNIEnv *env)
{
	status.hasException = (bool) env->ExceptionCheck();
	if (!status.hasException)
	{
		return false;
	}

	jthrowable jexception = env->ExceptionOccurred();
	status.hasException = jexception != 0;
	if (!status.hasException)
	{
		return false;
	}

	env->ExceptionDescribe();
	env->ExceptionClear();

	jclass jexceptionClass = env->FindClass("java/lang/Throwable");
	status.hasException = (bool) env->ExceptionCheck();
	if (status.hasException)
	{
		if (jexceptionClass != 0)
		{			
			env->DeleteLocalRef(jexceptionClass);
		}
		status.code = -1;
		status.message = std::string("Unable to load java/lang/Throwable");
		va_list args;
		LOGW_V(status.message.c_str(), args);
		return true;
	}

	jmethodID jmexceptionMessage = env->GetMethodID(jexceptionClass, "getMessage", "()Ljava/lang/String;");
	status.hasException = (bool) env->ExceptionCheck();
	if (status.hasException)
	{
		status.code = -1;
		status.message = std::string("Unable to getMessage on java/lang/Throwable");
		va_list args;
		LOGW_V(status.message.c_str(), args);
		return true;
	}

	jstring jsexceptionMessage = (jstring) env->CallObjectMethod(jexception, jmexceptionMessage);
	status.hasException = (bool) env->ExceptionCheck();
	if (status.hasException)
	{
		if (jsexceptionMessage != 0)
		{			
			env->DeleteLocalRef(jsexceptionMessage);
		}
		status.code = -1;
		status.message = std::string("Unable to invoke getMessage on java/lang/Throwable");
		va_list args;
		LOGW_V(status.message.c_str(), args);
		return true;
	}
	status.message = getUTFString(jsexceptionMessage);
	va_list args;
	LOGW_V(status.message.c_str(), args);

	if (jsexceptionMessage != 0)
	{		
		env->DeleteLocalRef(jsexceptionMessage);
	}
	if (jexceptionClass != 0)
	{		
		env->DeleteLocalRef(jexceptionClass);
	}
	if (jexception != 0)
	{		
		env->DeleteLocalRef(jexception);
	}

	return true;
}

bool JNIContext::getEnv(JNIEnv **env)
{
	if (sm_pJavaVM == 0)
	{
		LOGW("getJNIEnv failed to acquire JNI env : null JavaVM");
		return false;
	}
	bool status = false;
	do
	{
		if (sm_pJavaVM->GetEnv((void **) env, CXX_JNI_VERSION) != JNI_OK)
		{
			LOGW("getJNIEnv failed to acquire JNI env using JNI version %d", CXX_JNI_VERSION);
		}
	#ifdef ANDROID
		if (sm_pJavaVM->AttachCurrentThread((JNIEnv **) env, 0) < 0)
	#else
		if (sm_pJavaVM->AttachCurrentThread((void **) env, 0) < 0)
	#endif
		{
			LOGW("getJNIEnv failed to acquire JNI env : cannot attach to current thread");
			break;
		}
		status = true;
	} while (0);
	return status;
}
