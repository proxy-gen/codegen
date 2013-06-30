/*
 * CXXContext.h
 * ZyngaCXX
 *
 * Created on: Jan 30, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
 */

#ifndef _CXXCONTEXT_H
#define _CXXCONTEXT_H

#include <jni.h>
#include <cstddef>
#include <android/log.h>
#include <pthread.h>
#include <stdarg.h>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

#define CXX_OK          (0)         /* no error */
#define CXX_ERR         (-1)        /* generic error */

class CXXContext
{

public:

	jobject createProxiedComponent(long proxiedObjectAddress, const char * externalClassName, jvalue *args);
	jobject createProxiedCallback(long proxiedObjectAddress, long proxiedObjectID, const char * externalClassName);
	
	void registerCallbackData(long contextID, long userData);
	void deregisterCallbackData(long contextID);
	long findCallbackData(long contextID);

	void registerContextID(long address, std::string& contextID);
	void deregisterContextID(long address);
	std::string findContextID(long address);

	void registerProxyComponent(long address, jobject externalObject);
	void deregisterProxyComponent(long address);
	jobject findProxyComponent(long address);

	jobject notify(long proxiedObjectAddress, long proxiedObjectID, std::string methodName, void * payload);
	void setAndroidContext(jobject applicationContext);
	jobject getAndroidContext();

	void clearException();
	std::string exceptionMessage();

	static CXXContext* sharedInstance();
	static int createCXXContext(JavaVM *vm, jobject applicationContext);
	static void destroyCXXContext();

protected:

	CXXContext(jobject applicationContext, jobject cxxJavaContext);
	virtual ~CXXContext();

	jobject actx_object;
	jobject ectx_object;
	jclass ectx_class;
	jmethodID ectx_method_createProxiedCallback;

	//CXXDictionary *m_dictionary;

	static CXXContext* sm_sharedInstance;

private:

	CXXContext(const CXXContext&);
};

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _CXXCONTEXT_H
