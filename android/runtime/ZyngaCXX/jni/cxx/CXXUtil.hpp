/*
 * CXXUtil.hpp
 * ZyngaCXX
 *
 * Created on: Apr 17, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
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
