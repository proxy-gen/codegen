/*
 * CXXContext.hpp
 * ZyngaCXX
 *
 * Created on: Jan 30, 2013
 * Author: rvergis
 *
 *  Copyright 2013 Zynga Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
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
	bool deleteProxyComponent(jobject externalObject);
	long findProxiedComponent(jobject javaObject);

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
