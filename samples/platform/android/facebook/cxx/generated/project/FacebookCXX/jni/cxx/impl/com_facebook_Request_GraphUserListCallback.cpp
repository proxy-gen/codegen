/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#include <com_facebook_Request_GraphUserListCallback_JNI.hpp>
#include <com_facebook_Request_GraphUserListCallback.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_Request_GraphUserListCallback"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

// 
// 
// 
// 
// 
// 
// using namespace AndroidCXX;
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

// JNI callbacks
void Java_FacebookCXX_com_1facebook_1Request_1GraphUserListCallback_onCompleted(JNIEnv *env, jobject objectRef,jobject jarg0,jobject jarg1)
{
	LOGV("void onCompleted(JNIEnv *env, jobject objectRef,jobject jarg0,jobject jarg1) enter");

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jobject javaObject = objectRef;
	LOGV("callback javaObject address %ld", (long) javaObject);

	long contextAddress = ctx->findProxiedComponent(javaObject);
	LOGV("contextAddress for com_facebook_Request_GraphUserListCallback %ld", contextAddress);
	com_facebook_Request_GraphUserListCallback *callback = (com_facebook_Request_GraphUserListCallback *) reinterpret_cast<com_facebook_Request_GraphUserListCallback *>(contextAddress);

	long cxx_value = (long) 0;
	long java_value = (long) 0;


	{
		cxx_value = (long) 0;
		java_value = convert_jni_java_lang_Object_to_java(jarg0);
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
				cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphUser");
			}
			std::stack<long> converter_stack;
			
			{
				{
					converter_stack.push((long) &convert_com_facebook_model_GraphUser);				

				}
			}
			converter_t converter_type = (converter_t) CONVERT_TO_CXX;
			convert_java_util_List(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
		}

	}
	AndroidCXX::java_util_List arg0(*((AndroidCXX::java_util_List *) cxx_value));


	{
		cxx_value = (long) 0;
		java_value = convert_jni_java_lang_Object_to_java(jarg1);
		{
			CXXTypeHierarchy cxx_type_hierarchy;
			std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
			
			cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
			{
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("com.facebook.Response");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_CXX;
			convert_com_facebook_Response(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
		}

	}
	FacebookCXX::com_facebook_Response arg1(*((FacebookCXX::com_facebook_Response *) cxx_value));


	callback->onCompleted(arg0,arg1);
		
	LOGV("void onCompleted(JNIEnv *env, jobject objectRef,jobject jarg0,jobject jarg1) exit");

}
com_facebook_Request_GraphUserListCallback::com_facebook_Request_GraphUserListCallback(const com_facebook_Request_GraphUserListCallback& cc)
{
	LOGV("com_facebook_Request_GraphUserListCallback::com_facebook_Request_GraphUserListCallback(const com_facebook_Request_GraphUserListCallback& cc) enter");

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

	LOGV("com_facebook_Request_GraphUserListCallback::com_facebook_Request_GraphUserListCallback(const com_facebook_Request_GraphUserListCallback& cc) exit");
}
com_facebook_Request_GraphUserListCallback::com_facebook_Request_GraphUserListCallback(Proxy proxy)
{
	LOGV("com_facebook_Request_GraphUserListCallback::com_facebook_Request_GraphUserListCallback(Proxy proxy) enter");

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

	LOGV("com_facebook_Request_GraphUserListCallback::com_facebook_Request_GraphUserListCallback(Proxy proxy) exit");
}
com_facebook_Request_GraphUserListCallback::com_facebook_Request_GraphUserListCallback()
{
	LOGV("com_facebook_Request_GraphUserListCallback::com_facebook_Request_GraphUserListCallback() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "FacebookCXX/com_facebook_Request_GraphUserListCallback";

	LOGV("com_facebook_Request_GraphUserListCallback className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Request_GraphUserListCallback cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Request_GraphUserListCallback jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_Request_GraphUserListCallback::com_facebook_Request_GraphUserListCallback() exit");	
}
Proxy com_facebook_Request_GraphUserListCallback::proxy() const
{	
	LOGV("com_facebook_Request_GraphUserListCallback::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Request_GraphUserListCallback cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Request_GraphUserListCallback jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_Request_GraphUserListCallback::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_Request_GraphUserListCallback::~com_facebook_Request_GraphUserListCallback()
{
	LOGV("com_facebook_Request_GraphUserListCallback::~com_facebook_Request_GraphUserListCallback() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_Request_GraphUserListCallback::~com_facebook_Request_GraphUserListCallback() exit");
}
// Functions
void com_facebook_Request_GraphUserListCallback::onCompleted(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Response const& arg1)
{
	LOGV("void com_facebook_Request_GraphUserListCallback::onCompleted(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Response const& arg1) enter");

	const char *methodName = "onCompleted";
	const char *methodSignature = "(Ljava/util/List;Lcom/facebook/Response;)V";
	const char *className = "FacebookCXX/com_facebook_Request_GraphUserListCallback";

	LOGV("com_facebook_Request_GraphUserListCallback className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_Request_GraphUserListCallback cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_Request_GraphUserListCallback jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphUser");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_com_facebook_model_GraphUser);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_util_List(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jobject jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("com.facebook.Response");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_Response(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	LOGV("void com_facebook_Request_GraphUserListCallback::onCompleted(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Response const& arg1) exit");

}
