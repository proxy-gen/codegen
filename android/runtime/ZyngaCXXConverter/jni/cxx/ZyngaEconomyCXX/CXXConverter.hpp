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
#include <ZyngaEconomyCXX/ZyngaEconomyCXX.hpp>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

class CXXConverter
{
public:

	static void to_cxx(const jobject &source, std::vector<std::string> &result, const char * source_type, const char * result_type);
	static void to_cxx(const jobject &source, std::vector<ZDK::EconomyPlayerMessage*> &result, const char * source_type, const char * result_type);
	static void to_cxx(const jobject &source, std::vector<ZDK::EconomyCurrency*> &result, const char * source_type, const char * result_type);
	static void to_cxx(const jobject &source, std::vector<ZDK::EconomyGood*> &result, const char * source_type, const char * result_type);
	static void to_cxx(const jobject &source, std::vector<ZDK::EconomyTransactionRecord*> &result, const char * source_type, const char * result_type);
	static void to_cxx(const jobject &source, std::vector<ZDK::EconomyAccountAdjustmentRecord*> &result, const char * source_type, const char * result_type);
	static void to_cxx(const jobject &source, std::vector<ZDK::EconomyItem*> &result, const char * source_type, const char * result_type);
	static void to_cxx(const jobject &source, std::vector<ZDK::EconomyCategory*> &result, const char * source_type, const char * result_type);
	static void to_cxx(const jobject &source, std::vector<ZDK::EconomyCampaign*> &result, const char * source_type, const char * result_type);
	static void to_cxx(const jobject &source, std::vector<ZDK::EconomyPrice*> &result, const char * source_type, const char * result_type);
	static void to_cxx(const jobject &source, std::string &result, const char * source_type, const char * result_type);
	static void to_cxx(const jobject &source, std::map<std::string,std::string> &result, const char * source_type, const char * result_type);
	static void to_cxx(const jobject &source, std::map<std::string,int> &result, const char * source_type, const char * result_type);
	static void to_cxx(const jobject &source, std::map<std::string,long> &result, const char * source_type, const char * result_type);

	static void from_cxx(const std::vector<std::string> &source, jobject &result, const char * source_type, const char * result_type);
	static void from_cxx(const std::vector<ZDK::EconomyPlayerMessage*> &source, jobject &result, const char * source_type, const char * result_type);
	static void from_cxx(const std::vector<ZDK::EconomyCurrency*> &source, jobject &result, const char * source_type, const char * result_type);
	static void from_cxx(const std::vector<ZDK::EconomyGood*> &source, jobject &result, const char * source_type, const char * result_type);
	static void from_cxx(const std::vector<ZDK::EconomyTransactionRecord*> &source, jobject &result, const char * source_type, const char * result_type);
	static void from_cxx(const std::vector<ZDK::EconomyAccountAdjustmentRecord*> &source, jobject &result, const char * source_type, const char * result_type);
	static void from_cxx(const std::vector<ZDK::EconomyItem*> &source, jobject &result, const char * source_type, const char * result_type);
	static void from_cxx(const std::vector<ZDK::EconomyCategory*> &source, jobject &result, const char * source_type, const char * result_type);
	static void from_cxx(const std::vector<ZDK::EconomyCampaign*> &source, jobject &result, const char * source_type, const char * result_type);
	static void from_cxx(const std::vector<ZDK::EconomyPrice*> &source, jobject &result, const char * source_type, const char * result_type);
	static void from_cxx(const std::string &source, jobject &result, const char * source_type, const char * result_type);
	static void from_cxx(const std::map<std::string,std::string> &source, jobject &result, const char * source_type, const char * result_type);
	static void from_cxx(const std::map<std::string,int> &source, jobject &result, const char * source_type, const char * result_type);
	static void from_cxx(const std::map<std::string,long> &source, jobject &result, const char * source_type, const char * result_type);

};

#ifdef __cplusplus
}

#endif //__cplusplus

#endif /* CXXCONVERTER_HPP_ */
