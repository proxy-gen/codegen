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
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "java_security_cert_X509Certificate"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
java_security_cert_X509Certificate::java_security_cert_X509Certificate(const java_security_cert_X509Certificate& cc)
{
	LOGV("java_security_cert_X509Certificate::java_security_cert_X509Certificate(const java_security_cert_X509Certificate& cc) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	long ccaddress = (long) &cc;
	LOGV("registerProxyComponent ccaddress %ld", ccaddress);
	jobject proxiedCCComponent = ctx->findProxyComponent(ccaddress);
	LOGV("registerProxyComponent proxiedCCComponent %ld", (long) proxiedCCComponent);
	long address = (long) this;
	LOGV("registerProxyComponent address %ld", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		proxiedComponent = proxiedCCComponent;
		LOGV("registerProxyComponent registering proxied component %ld using %d", proxiedComponent, address);
		ctx->registerProxyComponent(address, proxiedComponent);
	}

	LOGV("java_security_cert_X509Certificate::java_security_cert_X509Certificate(const java_security_cert_X509Certificate& cc) exit");
}
java_security_cert_X509Certificate::java_security_cert_X509Certificate(void * proxy)
{
	LOGV("java_security_cert_X509Certificate::java_security_cert_X509Certificate(void * proxy) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	LOGV("registerProxyComponent address %d", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		proxiedComponent = jni->localToGlobalRef((jobject) proxy);
		ctx->registerProxyComponent(address, proxiedComponent);
	}

	LOGV("java_security_cert_X509Certificate::java_security_cert_X509Certificate(void * proxy) exit");
}
java_security_cert_X509Certificate::java_security_cert_X509Certificate()
{
	LOGV("java_security_cert_X509Certificate::java_security_cert_X509Certificate() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("java_security_cert_X509Certificate::java_security_cert_X509Certificate() exit");	
}
// Public Constructors
// Default Instance Destructor
java_security_cert_X509Certificate::~java_security_cert_X509Certificate()
{
	LOGV("java_security_cert_X509Certificate::~java_security_cert_X509Certificate() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("java_security_cert_X509Certificate::~java_security_cert_X509Certificate() exit");
}
// Functions
std::vector<byte> java_security_cert_X509Certificate::getSignature()
{
	LOGV("std::vector<byte> java_security_cert_X509Certificate::getSignature() enter");

	const char *methodName = "getSignature";
	const char *methodSignature = "()[B";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	std::vector<byte> result;
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
	result = (std::vector<byte>) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("std::vector<byte> java_security_cert_X509Certificate::getSignature() exit");

	return result;
}
int java_security_cert_X509Certificate::getBasicConstraints()
{
	LOGV("int java_security_cert_X509Certificate::getBasicConstraints() enter");

	const char *methodName = "getBasicConstraints";
	const char *methodSignature = "()I";
	const char *className = "java/security/cert/X509Certificate";

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
	result = (int) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("int java_security_cert_X509Certificate::getBasicConstraints() exit");

	return result;
}
int java_security_cert_X509Certificate::getVersion()
{
	LOGV("int java_security_cert_X509Certificate::getVersion() enter");

	const char *methodName = "getVersion";
	const char *methodSignature = "()I";
	const char *className = "java/security/cert/X509Certificate";

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
	result = (int) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("int java_security_cert_X509Certificate::getVersion() exit");

	return result;
}
AndroidCXX::java_math_BigInteger java_security_cert_X509Certificate::getSerialNumber()
{
	LOGV("AndroidCXX::java_math_BigInteger java_security_cert_X509Certificate::getSerialNumber() enter");

	const char *methodName = "getSerialNumber";
	const char *methodSignature = "()Ljava/math/BigInteger;";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	AndroidCXX::java_math_BigInteger result;
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
		convert_java_math_BigInteger(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_math_BigInteger) (AndroidCXX::java_math_BigInteger((AndroidCXX::java_math_BigInteger *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_math_BigInteger java_security_cert_X509Certificate::getSerialNumber() exit");

	return result;
}
AndroidCXX::java_security_Principal java_security_cert_X509Certificate::getIssuerDN()
{
	LOGV("AndroidCXX::java_security_Principal java_security_cert_X509Certificate::getIssuerDN() enter");

	const char *methodName = "getIssuerDN";
	const char *methodSignature = "()Ljava/security/Principal;";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	AndroidCXX::java_security_Principal result;
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
		convert_java_security_Principal(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_security_Principal) (AndroidCXX::java_security_Principal((AndroidCXX::java_security_Principal *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_security_Principal java_security_cert_X509Certificate::getIssuerDN() exit");

	return result;
}
std::vector<byte> java_security_cert_X509Certificate::getTBSCertificate()
{
	LOGV("std::vector<byte> java_security_cert_X509Certificate::getTBSCertificate() enter");

	const char *methodName = "getTBSCertificate";
	const char *methodSignature = "()[B";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	std::vector<byte> result;
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
	result = (std::vector<byte>) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("std::vector<byte> java_security_cert_X509Certificate::getTBSCertificate() exit");

	return result;
}
void java_security_cert_X509Certificate::checkValidity()
{
	LOGV("void java_security_cert_X509Certificate::checkValidity() enter");

	const char *methodName = "checkValidity";
	const char *methodSignature = "()V";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void java_security_cert_X509Certificate::checkValidity() exit");

}
void java_security_cert_X509Certificate::checkValidity(AndroidCXX::java_util_Date& arg0)
{
	LOGV("void java_security_cert_X509Certificate::checkValidity(AndroidCXX::java_util_Date& arg0) enter");

	const char *methodName = "checkValidity";
	const char *methodSignature = "(Ljava/util/Date;)V";
	const char *className = "java/security/cert/X509Certificate";

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
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void java_security_cert_X509Certificate::checkValidity(AndroidCXX::java_util_Date& arg0) exit");

}
AndroidCXX::javax_security_auth_x500_X500Principal java_security_cert_X509Certificate::getIssuerX500Principal()
{
	LOGV("AndroidCXX::javax_security_auth_x500_X500Principal java_security_cert_X509Certificate::getIssuerX500Principal() enter");

	const char *methodName = "getIssuerX500Principal";
	const char *methodSignature = "()Ljavax/security/auth/x500/X500Principal;";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	AndroidCXX::javax_security_auth_x500_X500Principal result;
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
		convert_javax_security_auth_x500_X500Principal(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::javax_security_auth_x500_X500Principal) (AndroidCXX::javax_security_auth_x500_X500Principal((AndroidCXX::javax_security_auth_x500_X500Principal *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::javax_security_auth_x500_X500Principal java_security_cert_X509Certificate::getIssuerX500Principal() exit");

	return result;
}
AndroidCXX::java_security_Principal java_security_cert_X509Certificate::getSubjectDN()
{
	LOGV("AndroidCXX::java_security_Principal java_security_cert_X509Certificate::getSubjectDN() enter");

	const char *methodName = "getSubjectDN";
	const char *methodSignature = "()Ljava/security/Principal;";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	AndroidCXX::java_security_Principal result;
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
		convert_java_security_Principal(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_security_Principal) (AndroidCXX::java_security_Principal((AndroidCXX::java_security_Principal *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_security_Principal java_security_cert_X509Certificate::getSubjectDN() exit");

	return result;
}
AndroidCXX::javax_security_auth_x500_X500Principal java_security_cert_X509Certificate::getSubjectX500Principal()
{
	LOGV("AndroidCXX::javax_security_auth_x500_X500Principal java_security_cert_X509Certificate::getSubjectX500Principal() enter");

	const char *methodName = "getSubjectX500Principal";
	const char *methodSignature = "()Ljavax/security/auth/x500/X500Principal;";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	AndroidCXX::javax_security_auth_x500_X500Principal result;
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
		convert_javax_security_auth_x500_X500Principal(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::javax_security_auth_x500_X500Principal) (AndroidCXX::javax_security_auth_x500_X500Principal((AndroidCXX::javax_security_auth_x500_X500Principal *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::javax_security_auth_x500_X500Principal java_security_cert_X509Certificate::getSubjectX500Principal() exit");

	return result;
}
AndroidCXX::java_util_Date java_security_cert_X509Certificate::getNotBefore()
{
	LOGV("AndroidCXX::java_util_Date java_security_cert_X509Certificate::getNotBefore() enter");

	const char *methodName = "getNotBefore";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	AndroidCXX::java_util_Date result;
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
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_util_Date) (AndroidCXX::java_util_Date((AndroidCXX::java_util_Date *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_util_Date java_security_cert_X509Certificate::getNotBefore() exit");

	return result;
}
AndroidCXX::java_util_Date java_security_cert_X509Certificate::getNotAfter()
{
	LOGV("AndroidCXX::java_util_Date java_security_cert_X509Certificate::getNotAfter() enter");

	const char *methodName = "getNotAfter";
	const char *methodSignature = "()Ljava/util/Date;";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	AndroidCXX::java_util_Date result;
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
		convert_java_util_Date(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_util_Date) (AndroidCXX::java_util_Date((AndroidCXX::java_util_Date *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_util_Date java_security_cert_X509Certificate::getNotAfter() exit");

	return result;
}
AndroidCXX::java_lang_String java_security_cert_X509Certificate::getSigAlgName()
{
	LOGV("AndroidCXX::java_lang_String java_security_cert_X509Certificate::getSigAlgName() enter");

	const char *methodName = "getSigAlgName";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	AndroidCXX::java_lang_String result;
	jstring jni_result = (jstring) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_string_to_java(jni_result);
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
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_lang_String) (AndroidCXX::java_lang_String((AndroidCXX::java_lang_String *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_lang_String java_security_cert_X509Certificate::getSigAlgName() exit");

	return result;
}
AndroidCXX::java_lang_String java_security_cert_X509Certificate::getSigAlgOID()
{
	LOGV("AndroidCXX::java_lang_String java_security_cert_X509Certificate::getSigAlgOID() enter");

	const char *methodName = "getSigAlgOID";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	AndroidCXX::java_lang_String result;
	jstring jni_result = (jstring) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni_string_to_java(jni_result);
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
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_lang_String) (AndroidCXX::java_lang_String((AndroidCXX::java_lang_String *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_lang_String java_security_cert_X509Certificate::getSigAlgOID() exit");

	return result;
}
std::vector<byte> java_security_cert_X509Certificate::getSigAlgParams()
{
	LOGV("std::vector<byte> java_security_cert_X509Certificate::getSigAlgParams() enter");

	const char *methodName = "getSigAlgParams";
	const char *methodSignature = "()[B";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	std::vector<byte> result;
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
	result = (std::vector<byte>) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("std::vector<byte> java_security_cert_X509Certificate::getSigAlgParams() exit");

	return result;
}
std::vector<bool> java_security_cert_X509Certificate::getIssuerUniqueID()
{
	LOGV("std::vector<bool> java_security_cert_X509Certificate::getIssuerUniqueID() enter");

	const char *methodName = "getIssuerUniqueID";
	const char *methodSignature = "()[Z";
	const char *className = "java/security/cert/X509Certificate";

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
	result = (std::vector<bool>) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("std::vector<bool> java_security_cert_X509Certificate::getIssuerUniqueID() exit");

	return result;
}
std::vector<bool> java_security_cert_X509Certificate::getSubjectUniqueID()
{
	LOGV("std::vector<bool> java_security_cert_X509Certificate::getSubjectUniqueID() enter");

	const char *methodName = "getSubjectUniqueID";
	const char *methodSignature = "()[Z";
	const char *className = "java/security/cert/X509Certificate";

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
	result = (std::vector<bool>) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("std::vector<bool> java_security_cert_X509Certificate::getSubjectUniqueID() exit");

	return result;
}
std::vector<bool> java_security_cert_X509Certificate::getKeyUsage()
{
	LOGV("std::vector<bool> java_security_cert_X509Certificate::getKeyUsage() enter");

	const char *methodName = "getKeyUsage";
	const char *methodSignature = "()[Z";
	const char *className = "java/security/cert/X509Certificate";

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
	result = (std::vector<bool>) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("std::vector<bool> java_security_cert_X509Certificate::getKeyUsage() exit");

	return result;
}
AndroidCXX::java_util_List java_security_cert_X509Certificate::getExtendedKeyUsage()
{
	LOGV("AndroidCXX::java_util_List java_security_cert_X509Certificate::getExtendedKeyUsage() enter");

	const char *methodName = "getExtendedKeyUsage";
	const char *methodSignature = "()Ljava/util/List;";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	AndroidCXX::java_util_List result;
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
				converter_stack.push((long) &convert_java_lang_String);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_List(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_util_List) (AndroidCXX::java_util_List((AndroidCXX::java_util_List *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_util_List java_security_cert_X509Certificate::getExtendedKeyUsage() exit");

	return result;
}
AndroidCXX::java_util_Collection java_security_cert_X509Certificate::getSubjectAlternativeNames()
{
	LOGV("AndroidCXX::java_util_Collection java_security_cert_X509Certificate::getSubjectAlternativeNames() enter");

	const char *methodName = "getSubjectAlternativeNames";
	const char *methodSignature = "()Ljava/util/Collection;";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	AndroidCXX::java_util_Collection result;
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
				converter_stack.push((long) &convert_java_util_List);				

					
			}
		}
		{
			{
				converter_stack.push((long) &convert_java_lang_Object);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_Collection(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_util_Collection) (AndroidCXX::java_util_Collection((AndroidCXX::java_util_Collection *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_util_Collection java_security_cert_X509Certificate::getSubjectAlternativeNames() exit");

	return result;
}
AndroidCXX::java_util_Collection java_security_cert_X509Certificate::getIssuerAlternativeNames()
{
	LOGV("AndroidCXX::java_util_Collection java_security_cert_X509Certificate::getIssuerAlternativeNames() enter");

	const char *methodName = "getIssuerAlternativeNames";
	const char *methodSignature = "()Ljava/util/Collection;";
	const char *className = "java/security/cert/X509Certificate";

	LOGV("java_security_cert_X509Certificate className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_cert_X509Certificate cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_cert_X509Certificate jni address %d", javaObject);


	AndroidCXX::java_util_Collection result;
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
				converter_stack.push((long) &convert_java_util_List);				

					
			}
		}
		{
			{
				converter_stack.push((long) &convert_java_lang_Object);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_Collection(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_util_Collection) (AndroidCXX::java_util_Collection((AndroidCXX::java_util_Collection *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_util_Collection java_security_cert_X509Certificate::getIssuerAlternativeNames() exit");

	return result;
}
