/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
 		 
	
	
	
	
	
	
	
	
	
	























// Generated Code 

#include <java_security_cert_X509Certificate.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>

#define LOG_TAG "java_security_cert_X509Certificate"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

static long static_obj;
static long static_address = (long) &static_obj;

// Proxy Converter Template
template <class T>
void convert_proxy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

template <class T>
void convert_proxy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		cxx_value = 0; // TODO: add constructor (long) new T((void *)java_value);
	}
}

// Proxy Converter Types

template void convert_proxy<java_math_BigInteger>(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

template void convert_proxy<java_security_Principal>(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

template void convert_proxy<java_util_Date>(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

template void convert_proxy<javax_security_auth_x500_X500Principal>(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

template void convert_proxy<java_lang_String>(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

template void convert_proxy<java_util_List>(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

template void convert_proxy<java_util_Collection>(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack);

// Functions
std::vector<char> java_security_cert_X509Certificate::getSignature()
{
	const char *methodName = "getSignature";
	const char *methodSignature = "()[[B";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	std::vector<char> result;
	jbyteArray jni_result = (jbyteArray) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni__byte_array_type_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_byte_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("byte");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_byte);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert__byte_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (std::vector<char>) (*((std::vector<char> *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
int java_security_cert_X509Certificate::getBasicConstraints()
{
	const char *methodName = "getBasicConstraints";
	const char *methodSignature = "()I";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	int result;
	jint jni_result = (jint) jni->invokeIntMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_int_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (int) (*((int *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
int java_security_cert_X509Certificate::getVersion()
{
	const char *methodName = "getVersion";
	const char *methodSignature = "()I";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	int result;
	jint jni_result = (jint) jni->invokeIntMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_int_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (int) (*((int *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
java_math_BigInteger *  java_security_cert_X509Certificate::getSerialNumber()
{
	const char *methodName = "getSerialNumber";
	const char *methodSignature = "()Ljava/math/BigInteger;";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	java_math_BigInteger *  result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.math.BigInteger");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_proxy<java_math_BigInteger>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (java_math_BigInteger * ) (*((java_math_BigInteger *  *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
java_security_Principal *  java_security_cert_X509Certificate::getIssuerDN()
{
	const char *methodName = "getIssuerDN";
	const char *methodSignature = "()Ljava/security/Principal;";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	java_security_Principal *  result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.security.Principal");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_proxy<java_security_Principal>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (java_security_Principal * ) (*((java_security_Principal *  *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
std::vector<char> java_security_cert_X509Certificate::getTBSCertificate()
{
	const char *methodName = "getTBSCertificate";
	const char *methodSignature = "()[[B";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	std::vector<char> result;
	jbyteArray jni_result = (jbyteArray) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni__byte_array_type_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_byte_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("byte");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_byte);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert__byte_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (std::vector<char>) (*((std::vector<char> *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
void java_security_cert_X509Certificate::checkValidity(java_util_Date& arg0)
{
	const char *methodName = "checkValidity";
	const char *methodSignature = "(Ljava/util/Date;)V";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);

	jobject jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_proxy<java_util_Date>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

}
javax_security_auth_x500_X500Principal *  java_security_cert_X509Certificate::getIssuerX500Principal()
{
	const char *methodName = "getIssuerX500Principal";
	const char *methodSignature = "()Ljavax/security/auth/x500/X500Principal;";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	javax_security_auth_x500_X500Principal *  result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("javax.security.auth.x500.X500Principal");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_proxy<javax_security_auth_x500_X500Principal>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (javax_security_auth_x500_X500Principal * ) (*((javax_security_auth_x500_X500Principal *  *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
java_security_Principal *  java_security_cert_X509Certificate::getSubjectDN()
{
	const char *methodName = "getSubjectDN";
	const char *methodSignature = "()Ljava/security/Principal;";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	java_security_Principal *  result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.security.Principal");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_proxy<java_security_Principal>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (java_security_Principal * ) (*((java_security_Principal *  *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
javax_security_auth_x500_X500Principal *  java_security_cert_X509Certificate::getSubjectX500Principal()
{
	const char *methodName = "getSubjectX500Principal";
	const char *methodSignature = "()Ljavax/security/auth/x500/X500Principal;";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	javax_security_auth_x500_X500Principal *  result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("javax.security.auth.x500.X500Principal");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_proxy<javax_security_auth_x500_X500Principal>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (javax_security_auth_x500_X500Principal * ) (*((javax_security_auth_x500_X500Principal *  *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
java_util_Date *  java_security_cert_X509Certificate::getNotBefore()
{
	const char *methodName = "getNotBefore";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	java_util_Date *  result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_proxy<java_util_Date>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (java_util_Date * ) (*((java_util_Date *  *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
java_util_Date *  java_security_cert_X509Certificate::getNotAfter()
{
	const char *methodName = "getNotAfter";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	java_util_Date *  result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.util.Date");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_proxy<java_util_Date>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (java_util_Date * ) (*((java_util_Date *  *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
java_lang_String *  java_security_cert_X509Certificate::getSigAlgName()
{
	const char *methodName = "getSigAlgName";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	java_lang_String *  result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_proxy<java_lang_String>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (java_lang_String * ) (*((java_lang_String *  *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
java_lang_String *  java_security_cert_X509Certificate::getSigAlgOID()
{
	const char *methodName = "getSigAlgOID";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	java_lang_String *  result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_proxy<java_lang_String>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (java_lang_String * ) (*((java_lang_String *  *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
std::vector<char> java_security_cert_X509Certificate::getSigAlgParams()
{
	const char *methodName = "getSigAlgParams";
	const char *methodSignature = "()[[B";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	std::vector<char> result;
	jbyteArray jni_result = (jbyteArray) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni__byte_array_type_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_byte_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("byte");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_byte);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert__byte_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (std::vector<char>) (*((std::vector<char> *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
std::vector<bool> java_security_cert_X509Certificate::getIssuerUniqueID()
{
	const char *methodName = "getIssuerUniqueID";
	const char *methodSignature = "()[[Z";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	std::vector<bool> result;
	jbooleanArray jni_result = (jbooleanArray) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni__boolean_array_type_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_boolean_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_boolean);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert__boolean_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (std::vector<bool>) (*((std::vector<bool> *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
std::vector<bool> java_security_cert_X509Certificate::getSubjectUniqueID()
{
	const char *methodName = "getSubjectUniqueID";
	const char *methodSignature = "()[[Z";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	std::vector<bool> result;
	jbooleanArray jni_result = (jbooleanArray) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni__boolean_array_type_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_boolean_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_boolean);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert__boolean_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (std::vector<bool>) (*((std::vector<bool> *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
std::vector<bool> java_security_cert_X509Certificate::getKeyUsage()
{
	const char *methodName = "getKeyUsage";
	const char *methodSignature = "()[[Z";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	std::vector<bool> result;
	jbooleanArray jni_result = (jbooleanArray) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni__boolean_array_type_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_boolean_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_boolean);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert__boolean_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (std::vector<bool>) (*((std::vector<bool> *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
java_util_List *  java_security_cert_X509Certificate::getExtendedKeyUsage()
{
	const char *methodName = "getExtendedKeyUsage";
	const char *methodSignature = "()Ljava/util/List;";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	java_util_List *  result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.util.List");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_proxy<java_lang_String>);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_proxy<java_util_List>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (java_util_List * ) (*((java_util_List *  *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
java_util_Collection *  java_security_cert_X509Certificate::getSubjectAlternativeNames()
{
	const char *methodName = "getSubjectAlternativeNames";
	const char *methodSignature = "()Ljava/util/Collection;";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	java_util_Collection *  result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.util.Collection");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.util.List");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_proxy<java_util_List>);				

					
			}
		}
		{
			{
				converter_stack.push((long) &convert_proxy<java_lang_Object>);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_proxy<java_util_Collection>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (java_util_Collection * ) (*((java_util_Collection *  *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
java_util_Collection *  java_security_cert_X509Certificate::getIssuerAlternativeNames()
{
	const char *methodName = "getIssuerAlternativeNames";
	const char *methodSignature = "()Ljava/util/Collection;";
	const char *className = "java_security_cert_X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	java_util_Collection *  result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.util.Collection");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.util.List");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_proxy<java_util_List>);				

					
			}
		}
		{
			{
				converter_stack.push((long) &convert_proxy<java_lang_Object>);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_proxy<java_util_Collection>(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (java_util_Collection * ) (*((java_util_Collection *  *) cxx_value));
		
	jni->popLocalFrame();

	return result;
}
