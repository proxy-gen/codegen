/*
 * ZyngaMiSocialCXXConverter.hpp
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

class ZyngaMiSocialCXXConverter
{
public:
	void readBoolFromPayload(jobject obj, bool &result);
	void readStringFromPayload(jobject obj, std::string& result);
	void readIntFromPayload(jobject obj, int& result);
	void readMiSocialFriendVectorFromPayload(jobject obj, std::vector<std::map<std::string,std::string> > &result);
	void readMiSocialFriendMapFromPayload(jobject obj, std::map<std::string,std::vector<std::map<std::string,std::string> > > &result);
	void readStringMapFromPayload(jobject obj, std::map<std::string, std::string> &result);

	void fromCXXMapToBundle(std::map<std::string,std::string> map, jobject &result);
	void fromCXXVectorToJSONArray(std::vector<std::string> vec, jobject &result);
	void fromCXXMapToMap(std::map<std::string,std::string> map, jobject &result);

	static ZyngaMiSocialCXXConverter* sharedInstance();

protected:

	static ZyngaMiSocialCXXConverter* sm_sharedInstance;
	ZyngaMiSocialCXXConverter();
	virtual ~ZyngaMiSocialCXXConverter();
};

#ifdef __cplusplus
}

#endif //__cplusplus

#endif /* CXXCONVERTER_HPP_ */
