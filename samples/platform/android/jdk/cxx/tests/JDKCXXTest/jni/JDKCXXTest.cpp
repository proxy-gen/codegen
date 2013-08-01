#include <JDKCXXTest.hpp>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <vector>

#include <java_lang_String.hpp>
#include <java_lang_StringBuilder.hpp>

#include <java_net_HttpURLConnection.hpp>
#include <java_net_URL.hpp>
#include <java_io_InputStream.hpp>

#include <java_util_Map.hpp>
#include <java_util_Map_Entry.hpp>
#include <java_util_HashMap.hpp>

#define LOG_TAG "JDKCXXTest"
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__))
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__))

using namespace JDKCXX;

class java_lang_object_Delegate : public java_lang_Object
{
	public:
		JDKCXX::java_lang_String toString();
};

JDKCXX::java_lang_String java_lang_object_Delegate::toString()
{
	LOGI("java_lang_object_Delegate toString() invoked");
	std::vector<char> message = to_std_vector("test callback");

	java_lang_String str1(message);
	LOGI("java_lang_object_Delegate toString() returning response");

	return str1;
}

void test_java_lang_String()
{
	LOGI("test_java_lang_String enter");

	std::vector<char> message = to_std_vector("hello world");

	java_lang_String str1(message);

	int len1 = str1.length();
	LOGI("str1 length is [%d]",len1);

	java_lang_String str2 = str1.toString();
	int len2 = str2.length();
	LOGI("str2 length is [%d]",len2);
	LOGI("str2 address is [%ld]",(long) &str2);

	// 07-22 15:19:44.206: I/JDKCXXTest(2216): str2 address is [1362140180]

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jobject jobjstr2 = ctx->findProxyComponent((long) &str2);

	LOGI("proxied jobject for str2 is [%ld]",(long) jobjstr2);

	int hashCode1 = str1.hashCode();
	int hashCode2 = str2.hashCode();

	LOGI("hashCode1 %ld hashCode2 %ld",hashCode1,hashCode2);

	int ch = 'w';

	int idx = str1.indexOf(ch);
	LOGI("index of %c is [%d]",ch,idx);

	// TODO: build type hierarchy to test this
	// bool equals = str1.equals(str2);

	int compare = str1.compareTo(str2);
	LOGI("str1 compare to str2 returned [%d]",compare);

	std::vector<char> message2 = to_std_vector("hello worlds");

	java_lang_String str3(message2);
	compare = str1.compareTo(str3);
	LOGI("str1 compare to str3 returned [%d]",compare);

	compare = str3.compareTo(str1);
	LOGI("str3 compare to str1 returned [%d]",compare);

	bool isEmpty = str1.isEmpty();
	LOGI("str1 is empty returned %s",boolstr(isEmpty).c_str());

	java_lang_String str4;
	isEmpty = str4.isEmpty();
	LOGI("str4 is empty returned %s",boolstr(isEmpty).c_str());

	java_lang_StringBuilder strBldr;
	std::vector<char> message3 = to_std_vector("hello built worlds");
	strBldr.append(message3);

	java_lang_String str5(strBldr);
	ch = 'b';
	idx = str5.indexOf(ch);
	LOGI("str5 index of %c is [%d]",ch,idx);

	LOGI("test_java_lang_String exit");

}

void test_java_net_URLConnection()
{
	LOGI("test_java_net_URLConnection enter");

	std::vector<char> site = to_std_vector("http://www.google.com");
	java_lang_String urlStr(site);

	java_net_URL url(urlStr);
	java_net_URLConnection urlConnection = url.openConnection();
	java_io_InputStream in = urlConnection.getInputStream();
	java_lang_StringBuilder builder;
	int data = in.read();
	int limit = 1000;
	int idx = 0;
	while (data != -1)
	{
		char ch = (char) data;
		builder.append(ch);
		if (++idx >= limit)
		{
			break;
		}
		data = in.read();
	}

	java_lang_String response = builder.toString();
	std::vector<signed char> responseBytes = response.getBytes();

	std::string str = to_std_string(responseBytes);
	LOGI("www.google.com returned %s", str.c_str());

	LOGI("test_java_net_URLConnection exit");
}

void test_java_util_Map()
{
	LOGI("test_java_util_Map enter");
	java_util_HashMap map;
	java_lang_Object key1;
	java_lang_Object val1;
	java_lang_Object key2;
	java_lang_Object val2;
	map.put(key1, val1);
	map.put(key2, val2);

	java_lang_Object val1p = map.get(key1);
	java_lang_Object val2p = map.get(key2);

	bool equals = val1.equals(val1p);
	LOGI("val1 equals val1' is %s", boolstr(equals).c_str());
	equals = val2.equals(val2p);
	LOGI("val2 equals val2' is %s", boolstr(equals).c_str());

	equals = val1.equals(val2p);
	LOGI("val1 equals val2' is %s", boolstr(equals).c_str());
	equals = val1p.equals(val2);
	LOGI("val1' equals val2 is %s", boolstr(equals).c_str());

	LOGI("test_java_util_Map exit");
}

void test_callbacks()
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	java_lang_object_Delegate receiver;
	jobject proxyReceiver = ctx->findProxyComponent((long) &receiver);

	jclass objectClass = jni->getClassRef("JDKCXX/java_lang_Object");
	std::string toString = std::string("toString");
	jobject method = jni->invokeObjectMethod(objectClass, "java/lang/Class", "getMethod", "(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;",jni->toJString(toString), (jobject) 0);

	jobject callbackInvoker = jni->createNewObjectRef("com/cxx/bindings/samples/jdk/CallbackInvoker");
	jstring str = (jstring) jni->invokeObjectMethod(callbackInvoker, "com/cxx/bindings/samples/jdk/CallbackInvoker", "invokeNoArg", "(Ljava/lang/reflect/Method;Ljava/lang/Object;)Ljava/lang/Object;",method, proxyReceiver);

	LOGI("java.lang.Object.toString() callback returned [%s]", jni->getUTFString(str).c_str());

}

JNIEXPORT void JNICALL Java_com_cxx_bindings_samples_jdk_MainActivity_testJDKCXXFull(JNIEnv *env, jobject classRef)
{
	LOGI("Java_com_cxx_bindings_samples_jdk_MainActivity_testJDKCXXFull enter");

	test_java_lang_String();
	test_java_net_URLConnection();
	test_java_util_Map();
	test_callbacks();

	LOGI("Java_com_cxx_bindings_samples_jdk_MainActivity_testJDKCXXFull exit");
}

std::vector<char> to_std_vector(const char * str)
{
	std::vector<char> vec;
	int len = strlen(str);
	vec.assign(str, str + len);
	return vec;
}

std::string to_std_string(std::vector<signed char> vec)
{
	char * str = (char *) reinterpret_cast<char*> (&vec[0]);
	return std::string(str);
}

std::string boolstr(bool val)
{
	if (val)
	{
		return std::string("true");
	}
	return std::string("false");
}

