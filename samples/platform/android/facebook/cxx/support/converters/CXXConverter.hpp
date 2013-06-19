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
#include <JNIContext.hpp>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

class CXXConverter
{
public:

	static void to_cxx(const jobject &source, long &result, const char * source_type, const char * result_type);

	static void from_cxx(long &source, jobject &result, const char * source_type, const char * result_type);

};

#ifdef __cplusplus
}

#endif //__cplusplus

#endif /* CXXCONVERTER_HPP_ */