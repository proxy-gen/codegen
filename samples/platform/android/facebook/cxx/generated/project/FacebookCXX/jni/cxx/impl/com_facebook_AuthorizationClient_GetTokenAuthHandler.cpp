/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//









// Generated Code 

#include <com_facebook_AuthorizationClient_GetTokenAuthHandler.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_AuthorizationClient_GetTokenAuthHandler"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

com_facebook_AuthorizationClient_GetTokenAuthHandler::com_facebook_AuthorizationClient_GetTokenAuthHandler(const com_facebook_AuthorizationClient_GetTokenAuthHandler& cc)
{
	LOGV("com_facebook_AuthorizationClient_GetTokenAuthHandler::com_facebook_AuthorizationClient_GetTokenAuthHandler(const com_facebook_AuthorizationClient_GetTokenAuthHandler& cc) enter");

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

	LOGV("com_facebook_AuthorizationClient_GetTokenAuthHandler::com_facebook_AuthorizationClient_GetTokenAuthHandler(const com_facebook_AuthorizationClient_GetTokenAuthHandler& cc) exit");
}
com_facebook_AuthorizationClient_GetTokenAuthHandler::com_facebook_AuthorizationClient_GetTokenAuthHandler(Proxy proxy)
{
	LOGV("com_facebook_AuthorizationClient_GetTokenAuthHandler::com_facebook_AuthorizationClient_GetTokenAuthHandler(Proxy proxy) enter");

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

	LOGV("com_facebook_AuthorizationClient_GetTokenAuthHandler::com_facebook_AuthorizationClient_GetTokenAuthHandler(Proxy proxy) exit");
}
Proxy com_facebook_AuthorizationClient_GetTokenAuthHandler::proxy() const
{	
	LOGV("com_facebook_AuthorizationClient_GetTokenAuthHandler::proxy() enter");	
	CXXContext *ctx = CXXContext::sharedInstance();

	long cxxAddress = (long) this;
	LOGV("com_facebook_AuthorizationClient_GetTokenAuthHandler cxx address %d", cxxAddress);
	long proxiedComponent = (long) ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_AuthorizationClient_GetTokenAuthHandler jni address %d", proxiedComponent);

	Proxy proxy;
	proxy.address = proxiedComponent;	

	LOGV("com_facebook_AuthorizationClient_GetTokenAuthHandler::proxy() exit");	

	return proxy;
}
// Default Instance Destructor
com_facebook_AuthorizationClient_GetTokenAuthHandler::~com_facebook_AuthorizationClient_GetTokenAuthHandler()
{
	LOGV("com_facebook_AuthorizationClient_GetTokenAuthHandler::~com_facebook_AuthorizationClient_GetTokenAuthHandler() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}			
	LOGV("com_facebook_AuthorizationClient_GetTokenAuthHandler::~com_facebook_AuthorizationClient_GetTokenAuthHandler() exit");
}
// Functions
