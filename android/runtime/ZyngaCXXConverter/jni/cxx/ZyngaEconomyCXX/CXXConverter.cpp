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

void CXXConverter::to_cxx(const jobject &source, std::vector<std::string> &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	int size = (int) jni->invokeIntMethod(source, "java/util/List", "size", "()I");
	jobject jListIterator = jni->invokeObjectMethod(source, "java/util/List","iterator","()Ljava/util/Iterator;");

	for ( int i=0; i < size; i++ )
	{
		jstring jstringItem = (jstring)jni->invokeObjectMethod(jListIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
		result.push_back(jni->getUTFString(jstringItem));
	}
}

void CXXConverter::to_cxx(const jobject &source, std::vector<ZDK::EconomyPlayerMessage*> &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	int size = (int) jni->invokeIntMethod(source, "java/util/List", "size", "()I");
	jobject jListIterator = jni->invokeObjectMethod(source, "java/util/List","iterator","()Ljava/util/Iterator;");

	for ( int i=0; i < size; i++ )
	{
		jobject obj = jni->invokeObjectMethod(jListIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
		result.push_back(new ZDK::EconomyPlayerMessage(obj));
	}
}

void CXXConverter::to_cxx(const jobject &source, std::vector<ZDK::EconomyCurrency*> &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	int size = (int) jni->invokeIntMethod(source, "java/util/List", "size", "()I");
	jobject jListIterator = jni->invokeObjectMethod(source, "java/util/List","iterator","()Ljava/util/Iterator;");

	for ( int i=0; i < size; i++ )
	{
		jobject obj = jni->invokeObjectMethod(jListIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
		result.push_back(new ZDK::EconomyCurrency(obj));
	}
}

void CXXConverter::to_cxx(const jobject &source, std::vector<ZDK::EconomyGood*> &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	int size = (int) jni->invokeIntMethod(source, "java/util/List", "size", "()I");
	jobject jListIterator = jni->invokeObjectMethod(source, "java/util/List","iterator","()Ljava/util/Iterator;");

	for ( int i=0; i < size; i++ )
	{
		jobject obj = jni->invokeObjectMethod(jListIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
		result.push_back(new ZDK::EconomyGood(obj));
	}
}

void CXXConverter::to_cxx(const jobject &source, std::vector<ZDK::EconomyTransactionRecord*> &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	int size = (int) jni->invokeIntMethod(source, "java/util/List", "size", "()I");
	jobject jListIterator = jni->invokeObjectMethod(source, "java/util/List","iterator","()Ljava/util/Iterator;");

	for ( int i=0; i < size; i++ )
	{
		jobject obj = jni->invokeObjectMethod(jListIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
		result.push_back(new ZDK::EconomyTransactionRecord(obj));
	}
}

void CXXConverter::to_cxx(const jobject &source, std::vector<ZDK::EconomyAccountAdjustmentRecord*> &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	int size = (int) jni->invokeIntMethod(source, "java/util/List", "size", "()I");
	jobject jListIterator = jni->invokeObjectMethod(source, "java/util/List","iterator","()Ljava/util/Iterator;");

	for ( int i=0; i < size; i++ )
	{
		jobject obj = jni->invokeObjectMethod(jListIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
		result.push_back(new ZDK::EconomyAccountAdjustmentRecord(obj));
	}
}

void CXXConverter::to_cxx(const jobject &source, std::vector<ZDK::EconomyItem*> &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	int size = (int) jni->invokeIntMethod(source, "java/util/List", "size", "()I");
	jobject jListIterator = jni->invokeObjectMethod(source, "java/util/List","iterator","()Ljava/util/Iterator;");

	for ( int i=0; i < size; i++ )
	{
		jobject obj = jni->invokeObjectMethod(jListIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
		result.push_back(new ZDK::EconomyItem(obj));
	}
}

void CXXConverter::to_cxx(const jobject &source, std::vector<ZDK::EconomyCategory*> &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	int size = (int) jni->invokeIntMethod(source, "java/util/List", "size", "()I");
	jobject jListIterator = jni->invokeObjectMethod(source, "java/util/List","iterator","()Ljava/util/Iterator;");

	for ( int i=0; i < size; i++ )
	{
		jobject obj = jni->invokeObjectMethod(jListIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
		ZDK::EconomyCategory* i = new ZDK::EconomyCategory(obj);
		LOGW("CATEGORY_NAME: %s", i->getName().c_str());
		result.push_back(i);
	}
	LOGW("LAST_CATEGORY_NAME: %s", result[0]->getName().c_str());
}

void CXXConverter::to_cxx(const jobject &source, std::vector<ZDK::EconomyCampaign*> &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	int size = (int) jni->invokeIntMethod(source, "java/util/List", "size", "()I");
	jobject jListIterator = jni->invokeObjectMethod(source, "java/util/List","iterator","()Ljava/util/Iterator;");

	for ( int i=0; i < size; i++ )
	{
		jobject obj = jni->invokeObjectMethod(jListIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
		result.push_back(new ZDK::EconomyCampaign(obj));
	}
}

void CXXConverter::to_cxx(const jobject &source, std::vector<ZDK::EconomyPrice*> &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	int size = (int) jni->invokeIntMethod(source, "java/util/List", "size", "()I");
	jobject jListIterator = jni->invokeObjectMethod(source, "java/util/List","iterator","()Ljava/util/Iterator;");

	for ( int i=0; i < size; i++ )
	{
		jobject obj = jni->invokeObjectMethod(jListIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
		result.push_back(new ZDK::EconomyPrice(obj));
	}
}

void CXXConverter::to_cxx(const jobject &source, std::string &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	std::string arg0;
	if (source_type == "org.json.JSONObject") {
		jstring jstr = jni->invokeStringMethod(source, "org/json/JSONObject", "toString", "()Ljava/lang/String;");
		arg0 = jni->getUTFString(jstr);
	} else {
		arg0 = (std::string) jni->getUTFString((jstring) source);
	}
	result = arg0;
}

void CXXConverter::to_cxx(const jobject &source, std::map<std::string,std::string> &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	int size = (int) jni->invokeIntMethod(source, "java/util/Map", "size", "()I");
	jobject jEntrySet = jni->invokeObjectMethod(source, "java/util/Map","entrySet","()Ljava/util/Set;");
	jobject jSetIterator = jni->invokeObjectMethod(jEntrySet, "java/util/Set","iterator","()Ljava/util/Iterator;");

	LOGW("STRING:STRING MAP");
	for ( int i=0; i < size; i++ )
	{
		jobject entry = jni->invokeObjectMethod(jSetIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
		jobject key = jni->invokeObjectMethod(entry, "java/util/Map$Entry","getKey","()Ljava/lang/Object;");
		jobject value = jni->invokeObjectMethod(entry, "java/util/Map$Entry","getValue","()Ljava/lang/Object;");
		std::string strKey = jni->getUTFString((jstring) key);
		std::string strValue = jni->getUTFString((jstring) value);
		result[strKey] = strValue;
		LOGW("STRING:STRING MAP %d %s %s", i, strKey.c_str(), strValue.c_str());
	}
}

void CXXConverter::to_cxx(const jobject &source, std::map<std::string,int> &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	int size = (int) jni->invokeIntMethod(source, "java/util/Map", "size", "()I");
	jobject jEntrySet = jni->invokeObjectMethod(source, "java/util/Map","entrySet","()Ljava/util/Set;");
	jobject jSetIterator = jni->invokeObjectMethod(jEntrySet, "java/util/Set","iterator","()Ljava/util/Iterator;");

	for ( int i=0; i < size; i++ )
	{
		jobject entry = jni->invokeObjectMethod(jSetIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
		jobject key = jni->invokeObjectMethod(entry, "java/util/Map$Entry","getKey","()Ljava/lang/Object;");
		jobject value = jni->invokeObjectMethod(entry, "java/util/Map$Entry","getValue","()Ljava/lang/Object;");
		std::string strKey = jni->getUTFString((jstring) key);
		int intValue = jni->invokeIntMethod(value, "java/lang/Integer", "intValue", "()I");
		result[strKey] = intValue;
	}
}

void CXXConverter::to_cxx(const jobject &source, std::map<std::string,long> &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	int size = (int) jni->invokeIntMethod(source, "java/util/Map", "size", "()I");
	jobject jEntrySet = jni->invokeObjectMethod(source, "java/util/Map","entrySet","()Ljava/util/Set;");
	jobject jSetIterator = jni->invokeObjectMethod(jEntrySet, "java/util/Set","iterator","()Ljava/util/Iterator;");

	for ( int i=0; i < size; i++ )
	{
		jobject entry = jni->invokeObjectMethod(jSetIterator, "java/util/Iterator","next","()Ljava/lang/Object;");
		jobject key = jni->invokeObjectMethod(entry, "java/util/Map$Entry","getKey","()Ljava/lang/Object;");
		jobject value = jni->invokeObjectMethod(entry, "java/util/Map$Entry","getValue","()Ljava/lang/Object;");
		std::string strKey = jni->getUTFString((jstring) key);
		long longValue = jni->invokeLongMethod(value, "java/lang/Long", "longValue", "()J");
		result[strKey] = longValue;
	}
}

void CXXConverter::from_cxx(const std::vector<std::string> &source, jobject &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();

	for ( int i=0; i < source.size(); i++ )
	{
		jstring obj = jni->toJString(source[i]);
		jni->invokeObjectMethod(result, "java/util/List", "add", "(Ljava/lang/Object;)Lboolean;", obj);
	}
}

void CXXConverter::from_cxx(const std::vector<ZDK::EconomyPlayerMessage*> &source, jobject &result, const char * source_type, const char * result_type)
{
	// result =
}

void CXXConverter::from_cxx(const std::vector<ZDK::EconomyCurrency*> &source, jobject &result, const char * source_type, const char * result_type)
{
	// result =
}

void CXXConverter::from_cxx(const std::vector<ZDK::EconomyGood*> &source, jobject &result, const char * source_type, const char * result_type)
{
	// result =
}

void CXXConverter::from_cxx(const std::vector<ZDK::EconomyTransactionRecord*> &source, jobject &result, const char * source_type, const char * result_type)
{
	// result =
}

void CXXConverter::from_cxx(const std::vector<ZDK::EconomyAccountAdjustmentRecord*> &source, jobject &result, const char * source_type, const char * result_type)
{
	// result =
}

void CXXConverter::from_cxx(const std::vector<ZDK::EconomyItem*> &source, jobject &result, const char * source_type, const char * result_type)
{
	// result =
}

void CXXConverter::from_cxx(const std::vector<ZDK::EconomyCategory*> &source, jobject &result, const char * source_type, const char * result_type)
{
	// result =
}

void CXXConverter::from_cxx(const std::vector<ZDK::EconomyCampaign*> &source, jobject &result, const char * source_type, const char * result_type)
{
	// result =
}

void CXXConverter::from_cxx(const std::vector<ZDK::EconomyPrice*> &source, jobject &result, const char * source_type, const char * result_type)
{
	// result =
}

void CXXConverter::from_cxx(const std::string &source, jobject &result, const char * source_type, const char * result_type)
{
	JNIContext *jni = JNIContext::sharedInstance();
	result = jni->toJString(source);
}

void CXXConverter::from_cxx(const std::map<std::string,std::string> &source, jobject &result, const char * source_type, const char * result_type)
{
	// result =
}

void CXXConverter::from_cxx(const std::map<std::string,int> &source, jobject &result, const char * source_type, const char * result_type)
{
	// result =
}

void CXXConverter::from_cxx(const std::map<std::string,long> &source, jobject &result, const char * source_type, const char * result_type)
{
	// result =
}

