/*
 * JDKCXXTest.hpp
 *
 *  Created on: Jul 22, 2013
 *      Author: rvergis
 */

#ifndef JDKCXXTEST_HPP_
#define JDKCXXTEST_HPP_

#include <cstddef>
#include <sstream>
#include <jni.h>
#include <android/log.h>
#include <CXXContext.hpp>
#include <string>
#include <vector>
#include <map>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

void test_java_lang_String();
void test_java_net_URLConnection();
void test_java_util_Map();
void test_callbacks();

// ~ jni
JNIEXPORT void JNICALL Java_com_cxx_bindings_samples_jdk_MainActivity_testJDKCXXFull(JNIEnv *env, jobject classRef);

// ~ internal
std::vector<char> to_std_vector(const char * str);
std::string to_std_string(std::vector<signed char> vec);
std::string boolstr(bool val);


#ifdef __cplusplus
}
#endif //__cplusplus

#endif /* JDKCXXTEST_HPP_ */
