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

#ifndef _CXXTYPES_H
#define _CXXTYPES_H

typedef struct Proxy
{
	long address;
	long refcount;
	pthread_mutex_t mutex;
} Proxy;

typedef signed char byte;

#endif // _CXXTYPES_H
