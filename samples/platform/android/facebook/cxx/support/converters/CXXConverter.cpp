/*
 * CXXConverter.cpp
 *
 *  Created on: Apr 4, 2013
 *      Author: rvergis
 */

#include "CXXConverter.hpp"

#define LOG_TAG "CXXConverter"
#define LOGV(...) ((void)__android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__))
#define LOGW_V(message, args) ((void)__android_log_print(ANDROID_LOG_WARN, LOG_TAG, message, args))

void CXXConverter::to_cxx(const jobject &source, long &result, const char * source_type, const char * result_type)
{

}

void CXXConverter::from_cxx(long &source, jobject &result, const char * source_type, const char * result_type)
{

}
