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

class ZyngaPushNotificationCXXConverter
{
public:

	void to_cxx(const jobject &source, std::map<std::string, std::string> &result, const char * source_type, const char * result_type);
	void from_cxx(const std::map<std::string, std::string> &source, jobject &result, const char * source_type, const char * result_type);

	static ZyngaPushNotificationCXXConverter* sharedInstance();

protected:

	static ZyngaPushNotificationCXXConverter* sm_sharedInstance;
	ZyngaPushNotificationCXXConverter();
	virtual ~ZyngaPushNotificationCXXConverter();
};

#ifdef __cplusplus
}

#endif //__cplusplus

#endif /* CXXCONVERTER_HPP_ */
