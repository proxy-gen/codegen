/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//










// Generated Code 

#include <android_webkit_WebStorage_QuotaUpdater.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "android_webkit_WebStorage_QuotaUpdater"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

android_webkit_WebStorage_QuotaUpdater::android_webkit_WebStorage_QuotaUpdater(const android_webkit_WebStorage_QuotaUpdater& cc)
{
	LOGV("android_webkit_WebStorage_QuotaUpdater::android_webkit_WebStorage_QuotaUpdater(const android_webkit_WebStorage_QuotaUpdater& cc) enter");

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

	LOGV("android_webkit_WebStorage_QuotaUpdater::android_webkit_WebStorage_QuotaUpdater(const android_webkit_WebStorage_QuotaUpdater& cc) exit");
}
android_webkit_WebStorage_QuotaUpdater::android_webkit_WebStorage_QuotaUpdater(Proxy proxy)
{
	LOGV("android_webkit_WebStorage_QuotaUpdater::android_webkit_WebStorage_QuotaUpdater(Proxy proxy) enter");

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

	LOGV("android_webkit_WebStorage_QuotaUpdater::android_webkit_WebStorage_QuotaUpdater(Proxy proxy) exit");
}
Proxy android_webkit_WebStorage_QuotaUpdater::proxy() const
{	
	LOGV("android_webkit_WebStorage_QuotaUpdater::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_webkit_WebStorage_QuotaUpdater cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("android_webkit_WebStorage_QuotaUpdater jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("android_webkit_WebStorage_QuotaUpdater::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
android_webkit_WebStorage_QuotaUpdater::~android_webkit_WebStorage_QuotaUpdater()
{
	LOGV("android_webkit_WebStorage_QuotaUpdater::~android_webkit_WebStorage_QuotaUpdater() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("android_webkit_WebStorage_QuotaUpdater::~android_webkit_WebStorage_QuotaUpdater() exit");
}
// Functions
void android_webkit_WebStorage_QuotaUpdater::updateQuota(long const& arg0)
{
	LOGV("void android_webkit_WebStorage_QuotaUpdater::updateQuota(long const& arg0) enter");

	const char *methodName = "updateQuota";
	const char *methodSignature = "(J)V";
	const char *className = "android/webkit/WebStorage$QuotaUpdater";

	LOGV("android_webkit_WebStorage_QuotaUpdater className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("android_webkit_WebStorage_QuotaUpdater cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_webkit_WebStorage_QuotaUpdater jni address %d", javaObject);

	jlong jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_long(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_long_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	LOGV("void android_webkit_WebStorage_QuotaUpdater::updateQuota(long const& arg0) exit");

}
