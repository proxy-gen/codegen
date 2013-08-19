/*
 * CXXUtil.hpp
 * ZyngaCXX
 *
 * Created on: Apr 17, 2013
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

#ifndef _CXXUTIL_H
#define _CXXUTIL_H

#include <jni.h>
#include <cstddef>
#include <android/log.h>
#include <pthread.h>
#include <stdarg.h>
#include <string>
#include <map>
#include <vector>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

class CXXUtil
{

public:

	static void postNotificationToStatusBar(int notificationId, 
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
											jobject pendingIntent);	

	static void postNotificationToStatusBar(std::string mainActivityName,
											std::map<std::string, std::string> message);
};

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _CXXUTIL_H
