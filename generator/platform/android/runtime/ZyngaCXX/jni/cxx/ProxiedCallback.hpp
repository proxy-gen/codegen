/*
 * ProxiedCallback.h
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
