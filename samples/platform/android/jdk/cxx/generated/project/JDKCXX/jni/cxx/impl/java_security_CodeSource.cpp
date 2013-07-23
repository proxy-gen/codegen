/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
 		 


 		 
 	
 		 
 		 
 	
 		 














// Generated Code 

#include <java_security_CodeSource.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <JDKCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "java_security_CodeSource"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace JDKCXX;

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
java_security_CodeSource::java_security_CodeSource(const java_security_CodeSource& cc)
{
	LOGV("java_security_CodeSource::java_security_CodeSource(const java_security_CodeSource& cc) enter");

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

	LOGV("java_security_CodeSource::java_security_CodeSource(const java_security_CodeSource& cc) exit");
}
java_security_CodeSource::java_security_CodeSource(void * proxy)
{
	LOGV("java_security_CodeSource::java_security_CodeSource(void * proxy) enter");

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

	LOGV("java_security_CodeSource::java_security_CodeSource(void * proxy) exit");
}
// TODO: remove
// 
// 
// java_security_CodeSource::java_security_CodeSource()
// {
// 	LOGV("java_security_CodeSource::java_security_CodeSource() enter");	

// 	const char *methodName = "<init>";
// 	const char *methodSignature = "()V";
// 	const char *className = "java/security/CodeSource";

// 	LOGV("java_security_CodeSource className %d methodName %s methodSignature %s", className, methodName, methodSignature);

// 	CXXContext *ctx = CXXContext::sharedInstance();
// 	JNIContext *jni = JNIContext::sharedInstance();

// 	jni->pushLocalFrame();

// 	long cxxAddress = (long) this;
// 	LOGV("java_security_CodeSource cxx address %d", cxxAddress);
// 	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
// 	LOGV("java_security_CodeSource jni address %d", proxiedComponent);

// 	if (proxiedComponent == 0)
// 	{
// 		jclass clazz = jni->getClassRef(className);

// 		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
// 		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

// 		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
// 	}

// 	jni->popLocalFrame();

// 	LOGV("java_security_CodeSource::java_security_CodeSource() exit");	
// }
// 
// 
// Public Constructors
java_security_CodeSource::java_security_CodeSource(JDKCXX::java_net_URL& arg0,std::vector<JDKCXX::java_security_CodeSigner >& arg1)
{
	LOGV("java_security_CodeSource::java_security_CodeSource(JDKCXX::java_net_URL& arg0,std::vector<JDKCXX::java_security_CodeSigner >& arg1) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Ljava/net/URL;[Ljava/security/CodeSigner;)V";
	const char *className = "java/security/CodeSource";

	LOGV("java_security_CodeSource className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_CodeSource cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_CodeSource jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

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
				cxx_type_hierarchy.type_name = std::string("java.net.URL");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_java_net_URL(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
		}
		jobjectArray jarg1;
		{
			long cxx_value = (long) & arg1;
			long java_value = 0;

			CXXTypeHierarchy cxx_type_hierarchy;
			std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
			
			cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
			{
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("_object_array_type");
				{
					CXXTypeHierarchy child_cxx_type_hierarchy;
					cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
					cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
					
				}
			}
			{
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("java.security.CodeSigner");
			}
			std::stack<long> converter_stack;
			
			{
				{
					converter_stack.push((long) &convert_java_security_CodeSigner);				

				}
			}
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni__object_array_type_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("java_security_CodeSource::java_security_CodeSource(JDKCXX::java_net_URL& arg0,std::vector<JDKCXX::java_security_CodeSigner >& arg1) exit");	
}
java_security_CodeSource::java_security_CodeSource(JDKCXX::java_net_URL& arg0,std::vector<JDKCXX::java_security_cert_Certificate >& arg1)
{
	LOGV("java_security_CodeSource::java_security_CodeSource(JDKCXX::java_net_URL& arg0,std::vector<JDKCXX::java_security_cert_Certificate >& arg1) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Ljava/net/URL;[Ljava/security/cert/Certificate;)V";
	const char *className = "java/security/CodeSource";

	LOGV("java_security_CodeSource className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_CodeSource cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_CodeSource jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

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
				cxx_type_hierarchy.type_name = std::string("java.net.URL");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_java_net_URL(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
		}
		jobjectArray jarg1;
		{
			long cxx_value = (long) & arg1;
			long java_value = 0;

			CXXTypeHierarchy cxx_type_hierarchy;
			std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
			
			cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
			{
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("_object_array_type");
				{
					CXXTypeHierarchy child_cxx_type_hierarchy;
					cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
					cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
					
				}
			}
			{
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("java.security.cert.Certificate");
			}
			std::stack<long> converter_stack;
			
			{
				{
					converter_stack.push((long) &convert_java_security_cert_Certificate);				

				}
			}
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni__object_array_type_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("java_security_CodeSource::java_security_CodeSource(JDKCXX::java_net_URL& arg0,std::vector<JDKCXX::java_security_cert_Certificate >& arg1) exit");	
}
// Default Instance Destructor
java_security_CodeSource::~java_security_CodeSource()
{
	LOGV("java_security_CodeSource::~java_security_CodeSource() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("java_security_CodeSource::~java_security_CodeSource() exit");
}
// Functions
bool java_security_CodeSource::equals(JDKCXX::java_lang_Object& arg0)
{
	LOGV("bool java_security_CodeSource::equals(JDKCXX::java_lang_Object& arg0) enter");

	const char *methodName = "equals";
	const char *methodSignature = "(Ljava/lang/Object;)Z";
	const char *className = "java/security/CodeSource";

	LOGV("java_security_CodeSource className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_CodeSource cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_CodeSource jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jboolean jni_result = (jboolean) jni->invokeBooleanMethod(javaObject,className,methodName,methodSignature,jarg0);
	long cxx_value = (long) 0;
	long java_value = convert_jni_boolean_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	jni->popLocalFrame();

	LOGV("bool java_security_CodeSource::equals(JDKCXX::java_lang_Object& arg0) exit");

	return result;
}
JDKCXX::java_lang_String java_security_CodeSource::toString()
{
	LOGV("JDKCXX::java_lang_String java_security_CodeSource::toString() enter");

	const char *methodName = "toString";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "java/security/CodeSource";

	LOGV("java_security_CodeSource className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_CodeSource cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_CodeSource jni address %d", javaObject);


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

	JDKCXX::java_lang_String result((JDKCXX::java_lang_String) *((JDKCXX::java_lang_String *) cxx_value));
	delete ((JDKCXX::java_lang_String *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_lang_String java_security_CodeSource::toString() exit");

	return result;
}
int java_security_CodeSource::hashCode()
{
	LOGV("int java_security_CodeSource::hashCode() enter");

	const char *methodName = "hashCode";
	const char *methodSignature = "()I";
	const char *className = "java/security/CodeSource";

	LOGV("java_security_CodeSource className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_CodeSource cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_CodeSource jni address %d", javaObject);


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

	int result = (int) *((int *) cxx_value);
	// 
		
	jni->popLocalFrame();

	LOGV("int java_security_CodeSource::hashCode() exit");

	return result;
}
JDKCXX::java_net_URL java_security_CodeSource::getLocation()
{
	LOGV("JDKCXX::java_net_URL java_security_CodeSource::getLocation() enter");

	const char *methodName = "getLocation";
	const char *methodSignature = "()Ljava/net/URL;";
	const char *className = "java/security/CodeSource";

	LOGV("java_security_CodeSource className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_CodeSource cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_CodeSource jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.net.URL");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_net_URL(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	JDKCXX::java_net_URL result((JDKCXX::java_net_URL) *((JDKCXX::java_net_URL *) cxx_value));
	delete ((JDKCXX::java_net_URL *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("JDKCXX::java_net_URL java_security_CodeSource::getLocation() exit");

	return result;
}
std::vector<JDKCXX::java_security_cert_Certificate > java_security_CodeSource::getCertificates()
{
	LOGV("std::vector<JDKCXX::java_security_cert_Certificate > java_security_CodeSource::getCertificates() enter");

	const char *methodName = "getCertificates";
	const char *methodSignature = "()[Ljava/security/cert/Certificate;";
	const char *className = "java/security/CodeSource";

	LOGV("java_security_CodeSource className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_CodeSource cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_CodeSource jni address %d", javaObject);


	jobjectArray jni_result = (jobjectArray) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni__object_array_type_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_object_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.security.cert.Certificate");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_security_cert_Certificate);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	std::vector<JDKCXX::java_security_cert_Certificate > result = (std::vector<JDKCXX::java_security_cert_Certificate >) *((std::vector<JDKCXX::java_security_cert_Certificate > *) cxx_value);
	delete ((std::vector<JDKCXX::java_security_cert_Certificate > *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("std::vector<JDKCXX::java_security_cert_Certificate > java_security_CodeSource::getCertificates() exit");

	return result;
}
bool java_security_CodeSource::implies(JDKCXX::java_security_CodeSource& arg0)
{
	LOGV("bool java_security_CodeSource::implies(JDKCXX::java_security_CodeSource& arg0) enter");

	const char *methodName = "implies";
	const char *methodSignature = "(Ljava/security/CodeSource;)Z";
	const char *className = "java/security/CodeSource";

	LOGV("java_security_CodeSource className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_CodeSource cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_CodeSource jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.security.CodeSource");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_security_CodeSource(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jboolean jni_result = (jboolean) jni->invokeBooleanMethod(javaObject,className,methodName,methodSignature,jarg0);
	long cxx_value = (long) 0;
	long java_value = convert_jni_boolean_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	bool result = (bool) *((bool *) cxx_value);
	// 
		
	jni->popLocalFrame();

	LOGV("bool java_security_CodeSource::implies(JDKCXX::java_security_CodeSource& arg0) exit");

	return result;
}
std::vector<JDKCXX::java_security_CodeSigner > java_security_CodeSource::getCodeSigners()
{
	LOGV("std::vector<JDKCXX::java_security_CodeSigner > java_security_CodeSource::getCodeSigners() enter");

	const char *methodName = "getCodeSigners";
	const char *methodSignature = "()[Ljava/security/CodeSigner;";
	const char *className = "java/security/CodeSource";

	LOGV("java_security_CodeSource className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_CodeSource cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_CodeSource jni address %d", javaObject);


	jobjectArray jni_result = (jobjectArray) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature);
	long cxx_value = (long) 0;
	long java_value = convert_jni__object_array_type_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("_object_array_type");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.security.CodeSigner");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_security_CodeSigner);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	std::vector<JDKCXX::java_security_CodeSigner > result = (std::vector<JDKCXX::java_security_CodeSigner >) *((std::vector<JDKCXX::java_security_CodeSigner > *) cxx_value);
	delete ((std::vector<JDKCXX::java_security_CodeSigner > *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("std::vector<JDKCXX::java_security_CodeSigner > java_security_CodeSource::getCodeSigners() exit");

	return result;
}
