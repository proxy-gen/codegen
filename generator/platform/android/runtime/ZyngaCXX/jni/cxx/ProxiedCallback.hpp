/*
 * ProxiedCallback.h
 *
 * Created on: Jan 30, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
 */

#ifndef PROXIEDCALLBACK_H_
#define PROXIEDCALLBACK_H_

#include <stdarg.h>
#include <string>
#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus


class ProxiedCallback
{

public:

	virtual jobject callMethod(long address, std::string methodName, void * payload) = 0;
};


#ifdef __cplusplus
}
#endif //__cplusplus

#endif /* PROXIEDCALLBACK_H_ */
