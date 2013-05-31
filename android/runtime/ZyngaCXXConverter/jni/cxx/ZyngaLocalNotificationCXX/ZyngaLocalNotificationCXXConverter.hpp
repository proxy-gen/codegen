/*
 * CXXConverter.hpp
 *
 *  Created on: Apr 4, 2013
 *      Author: rvergis
 */

#ifndef CXXCONVERTER_HPP_
#define CXXCONVERTER_HPP_

#include <jni.h>
#include <cstddef>
#include <android/log.h>
#include <pthread.h>
#include <stdarg.h>
#include <string>
#include <map>
#include <vector>
#include <stdlib.h>
#include <JNIContext.hpp>
#include <sstream>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

class ZyngaLocalNotificationCXXConverter
{
public:
	void fromCXXMapToMap(std::map<std::string,std::string> map, jobject &result);

	static ZyngaLocalNotificationCXXConverter* sharedInstance();

protected:

	static ZyngaLocalNotificationCXXConverter* sm_sharedInstance;
	ZyngaLocalNotificationCXXConverter();
	virtual ~ZyngaLocalNotificationCXXConverter();
};

#ifdef __cplusplus
}

#endif //__cplusplus

#endif /* CXXCONVERTER_HPP_ */
