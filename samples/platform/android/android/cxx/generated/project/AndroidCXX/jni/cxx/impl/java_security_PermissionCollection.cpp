/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
	














// Generated Code 

#include <java_security_PermissionCollection.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "java_security_PermissionCollection"
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

static long static_obj;
static long static_address = (long) &static_obj;

java_security_PermissionCollection::java_security_PermissionCollection(const java_security_PermissionCollection& cc)
{
	LOGV("java_security_PermissionCollection::java_security_PermissionCollection(const java_security_PermissionCollection& cc) enter");

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

	LOGV("java_security_PermissionCollection::java_security_PermissionCollection(const java_security_PermissionCollection& cc) exit");
}
java_security_PermissionCollection::java_security_PermissionCollection(Proxy proxy)
{
	LOGV("java_security_PermissionCollection::java_security_PermissionCollection(Proxy proxy) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	LOGV("registerProxyComponent address %d", address);
	jobject proxiedComponent = ctx->findProxyComponent(address);
	LOGV("registerProxyComponent proxiedComponent %d", proxiedComponent);
	if (proxiedComponent == 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		// ensure local ref
		jobject proxyref = jni->newLocalRef((jobject) proxy.address);
		proxiedComponent = jni->localToGlobalRef(proxyref);
		ctx->registerProxyComponent(address, proxiedComponent);
	}

	LOGV("java_security_PermissionCollection::java_security_PermissionCollection(Proxy proxy) exit");
}
Proxy java_security_PermissionCollection::proxy() const
{	
	LOGV("java_security_PermissionCollection::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_security_PermissionCollection cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_PermissionCollection jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("java_security_PermissionCollection::proxy() exit");	

	return proxy;
}
java_security_PermissionCollection::java_security_PermissionCollection()
{
	LOGV("java_security_PermissionCollection::java_security_PermissionCollection() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "java/security/PermissionCollection";

	LOGV("java_security_PermissionCollection className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_security_PermissionCollection cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_PermissionCollection jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{

			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("java_security_PermissionCollection::java_security_PermissionCollection() exit");	
}
// Default Instance Destructor
java_security_PermissionCollection::~java_security_PermissionCollection()
{
	LOGV("java_security_PermissionCollection::~java_security_PermissionCollection() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("java_security_PermissionCollection::~java_security_PermissionCollection() exit");
}
// Functions
void java_security_PermissionCollection::add(AndroidCXX::java_security_Permission const& arg0)
{
	LOGV("void java_security_PermissionCollection::add(AndroidCXX::java_security_Permission const& arg0) enter");

	const char *methodName = "add";
	const char *methodSignature = "(Ljava/security/Permission;)V";
	const char *className = "java/security/PermissionCollection";

	LOGV("java_security_PermissionCollection className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_security_PermissionCollection cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_PermissionCollection jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.security.Permission");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_security_Permission(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void java_security_PermissionCollection::add(AndroidCXX::java_security_Permission const& arg0) exit");

}
AndroidCXX::java_lang_String java_security_PermissionCollection::toString()
{
	LOGV("AndroidCXX::java_lang_String java_security_PermissionCollection::toString() enter");

	const char *methodName = "toString";
	const char *methodSignature = "()Ljava/lang/String;";
	const char *className = "java/security/PermissionCollection";

	LOGV("java_security_PermissionCollection className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_security_PermissionCollection cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_PermissionCollection jni address %d", javaObject);


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

	AndroidCXX::java_lang_String result((AndroidCXX::java_lang_String) *((AndroidCXX::java_lang_String *) cxx_value));
	delete ((AndroidCXX::java_lang_String *) cxx_value);
		
	LOGV("AndroidCXX::java_lang_String java_security_PermissionCollection::toString() exit");

	return result;
}
bool java_security_PermissionCollection::implies(AndroidCXX::java_security_Permission const& arg0)
{
	LOGV("bool java_security_PermissionCollection::implies(AndroidCXX::java_security_Permission const& arg0) enter");

	const char *methodName = "implies";
	const char *methodSignature = "(Ljava/security/Permission;)Z";
	const char *className = "java/security/PermissionCollection";

	LOGV("java_security_PermissionCollection className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_security_PermissionCollection cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_PermissionCollection jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("java.security.Permission");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_security_Permission(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
		
	LOGV("bool java_security_PermissionCollection::implies(AndroidCXX::java_security_Permission const& arg0) exit");

	return result;
}
void java_security_PermissionCollection::setReadOnly()
{
	LOGV("void java_security_PermissionCollection::setReadOnly() enter");

	const char *methodName = "setReadOnly";
	const char *methodSignature = "()V";
	const char *className = "java/security/PermissionCollection";

	LOGV("java_security_PermissionCollection className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_security_PermissionCollection cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_PermissionCollection jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	LOGV("void java_security_PermissionCollection::setReadOnly() exit");

}
AndroidCXX::java_util_Enumeration java_security_PermissionCollection::elements()
{
	LOGV("AndroidCXX::java_util_Enumeration java_security_PermissionCollection::elements() enter");

	const char *methodName = "elements";
	const char *methodSignature = "()Ljava/util/Enumeration;";
	const char *className = "java/security/PermissionCollection";

	LOGV("java_security_PermissionCollection className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_security_PermissionCollection cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_PermissionCollection jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.util.Enumeration");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.security.Permission");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_java_security_Permission);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_util_Enumeration(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	AndroidCXX::java_util_Enumeration result((AndroidCXX::java_util_Enumeration) *((AndroidCXX::java_util_Enumeration *) cxx_value));
	delete ((AndroidCXX::java_util_Enumeration *) cxx_value);
		
	LOGV("AndroidCXX::java_util_Enumeration java_security_PermissionCollection::elements() exit");

	return result;
}
bool java_security_PermissionCollection::isReadOnly()
{
	LOGV("bool java_security_PermissionCollection::isReadOnly() enter");

	const char *methodName = "isReadOnly";
	const char *methodSignature = "()Z";
	const char *className = "java/security/PermissionCollection";

	LOGV("java_security_PermissionCollection className %s methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("java_security_PermissionCollection cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_security_PermissionCollection jni address %d", javaObject);


	jboolean jni_result = (jboolean) jni->invokeBooleanMethod(javaObject,className,methodName,methodSignature);
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
		
	LOGV("bool java_security_PermissionCollection::isReadOnly() exit");

	return result;
}
