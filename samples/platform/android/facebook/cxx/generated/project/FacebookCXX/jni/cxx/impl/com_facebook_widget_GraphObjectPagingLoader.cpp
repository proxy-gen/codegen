/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
 		 
 		 


 		 
 		 
 	
 		 















// Generated Code 

#include <com_facebook_widget_GraphObjectPagingLoader.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <FacebookCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "com_facebook_widget_GraphObjectPagingLoader"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace FacebookCXX;

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

// Default Instance Constructors
com_facebook_widget_GraphObjectPagingLoader::com_facebook_widget_GraphObjectPagingLoader(const com_facebook_widget_GraphObjectPagingLoader& cc)
{
	LOGV("com_facebook_widget_GraphObjectPagingLoader::com_facebook_widget_GraphObjectPagingLoader(const com_facebook_widget_GraphObjectPagingLoader& cc) enter");

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

	LOGV("com_facebook_widget_GraphObjectPagingLoader::com_facebook_widget_GraphObjectPagingLoader(const com_facebook_widget_GraphObjectPagingLoader& cc) exit");
}
com_facebook_widget_GraphObjectPagingLoader::com_facebook_widget_GraphObjectPagingLoader(void * proxy)
{
	LOGV("com_facebook_widget_GraphObjectPagingLoader::com_facebook_widget_GraphObjectPagingLoader(void * proxy) enter");

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

	LOGV("com_facebook_widget_GraphObjectPagingLoader::com_facebook_widget_GraphObjectPagingLoader(void * proxy) exit");
}
// TODO: remove
// 
// 
// com_facebook_widget_GraphObjectPagingLoader::com_facebook_widget_GraphObjectPagingLoader()
// {
// 	LOGV("com_facebook_widget_GraphObjectPagingLoader::com_facebook_widget_GraphObjectPagingLoader() enter");	

// 	const char *methodName = "<init>";
// 	const char *methodSignature = "()V";
// 	const char *className = "com/facebook/widget/GraphObjectPagingLoader";

// 	LOGV("com_facebook_widget_GraphObjectPagingLoader className %d methodName %s methodSignature %s", className, methodName, methodSignature);

// 	CXXContext *ctx = CXXContext::sharedInstance();
// 	JNIContext *jni = JNIContext::sharedInstance();

// 	jni->pushLocalFrame();

// 	long cxxAddress = (long) this;
// 	LOGV("com_facebook_widget_GraphObjectPagingLoader cxx address %d", cxxAddress);
// 	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
// 	LOGV("com_facebook_widget_GraphObjectPagingLoader jni address %d", proxiedComponent);

// 	if (proxiedComponent == 0)
// 	{
// 		jclass clazz = jni->getClassRef(className);

// 		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
// 		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

// 		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
// 	}

// 	jni->popLocalFrame();

// 	LOGV("com_facebook_widget_GraphObjectPagingLoader::com_facebook_widget_GraphObjectPagingLoader() exit");	
// }
// 
// 
// Public Constructors
com_facebook_widget_GraphObjectPagingLoader::com_facebook_widget_GraphObjectPagingLoader(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_Class& arg1)
{
	LOGV("com_facebook_widget_GraphObjectPagingLoader::com_facebook_widget_GraphObjectPagingLoader(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_Class& arg1) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/content/Context;Ljava/lang/Class;)V";
	const char *className = "com/facebook/widget/GraphObjectPagingLoader";

	LOGV("com_facebook_widget_GraphObjectPagingLoader className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectPagingLoader cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectPagingLoader jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("android.content.Context");
			}
			std::stack<long> converter_stack;
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_android_content_Context(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

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
				cxx_type_hierarchy.type_name = std::string("java.lang.Class");
				{
					CXXTypeHierarchy child_cxx_type_hierarchy;
					cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
					cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
					
				}
			}
			{
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphObject");
			}
			std::stack<long> converter_stack;
			
			{
				{
					converter_stack.push((long) &convert_com_facebook_model_GraphObject);				

				}
			}
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_java_lang_Class(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("com_facebook_widget_GraphObjectPagingLoader::com_facebook_widget_GraphObjectPagingLoader(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_Class& arg1) exit");	
}
// Default Instance Destructor
com_facebook_widget_GraphObjectPagingLoader::~com_facebook_widget_GraphObjectPagingLoader()
{
	LOGV("com_facebook_widget_GraphObjectPagingLoader::~com_facebook_widget_GraphObjectPagingLoader() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("com_facebook_widget_GraphObjectPagingLoader::~com_facebook_widget_GraphObjectPagingLoader() exit");
}
// Functions
bool com_facebook_widget_GraphObjectPagingLoader::isLoading()
{
	LOGV("bool com_facebook_widget_GraphObjectPagingLoader::isLoading() enter");

	const char *methodName = "isLoading";
	const char *methodSignature = "()Z";
	const char *className = "com/facebook/widget/GraphObjectPagingLoader";

	LOGV("com_facebook_widget_GraphObjectPagingLoader className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectPagingLoader cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectPagingLoader jni address %d", javaObject);


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
		
	jni->popLocalFrame();

	LOGV("bool com_facebook_widget_GraphObjectPagingLoader::isLoading() exit");

	return result;
}
FacebookCXX::com_facebook_widget_GraphObjectPagingLoader_OnErrorListener com_facebook_widget_GraphObjectPagingLoader::getOnErrorListener()
{
	LOGV("FacebookCXX::com_facebook_widget_GraphObjectPagingLoader_OnErrorListener com_facebook_widget_GraphObjectPagingLoader::getOnErrorListener() enter");

	const char *methodName = "getOnErrorListener";
	const char *methodSignature = "()Lcom/facebook/widget/GraphObjectPagingLoader$OnErrorListener;";
	const char *className = "com/facebook/widget/GraphObjectPagingLoader";

	LOGV("com_facebook_widget_GraphObjectPagingLoader className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectPagingLoader cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectPagingLoader jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.GraphObjectPagingLoader$OnErrorListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_widget_GraphObjectPagingLoader_OnErrorListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_widget_GraphObjectPagingLoader_OnErrorListener result((FacebookCXX::com_facebook_widget_GraphObjectPagingLoader_OnErrorListener) *((FacebookCXX::com_facebook_widget_GraphObjectPagingLoader_OnErrorListener *) cxx_value));
	delete ((FacebookCXX::com_facebook_widget_GraphObjectPagingLoader_OnErrorListener *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_widget_GraphObjectPagingLoader_OnErrorListener com_facebook_widget_GraphObjectPagingLoader::getOnErrorListener() exit");

	return result;
}
void com_facebook_widget_GraphObjectPagingLoader::setOnErrorListener(FacebookCXX::com_facebook_widget_GraphObjectPagingLoader_OnErrorListener& arg0)
{
	LOGV("void com_facebook_widget_GraphObjectPagingLoader::setOnErrorListener(FacebookCXX::com_facebook_widget_GraphObjectPagingLoader_OnErrorListener& arg0) enter");

	const char *methodName = "setOnErrorListener";
	const char *methodSignature = "(Lcom/facebook/widget/GraphObjectPagingLoader$OnErrorListener;)V";
	const char *className = "com/facebook/widget/GraphObjectPagingLoader";

	LOGV("com_facebook_widget_GraphObjectPagingLoader className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectPagingLoader cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectPagingLoader jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.GraphObjectPagingLoader$OnErrorListener");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_widget_GraphObjectPagingLoader_OnErrorListener(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_widget_GraphObjectPagingLoader::setOnErrorListener(FacebookCXX::com_facebook_widget_GraphObjectPagingLoader_OnErrorListener& arg0) exit");

}
FacebookCXX::com_facebook_widget_SimpleGraphObjectCursor com_facebook_widget_GraphObjectPagingLoader::getCursor()
{
	LOGV("FacebookCXX::com_facebook_widget_SimpleGraphObjectCursor com_facebook_widget_GraphObjectPagingLoader::getCursor() enter");

	const char *methodName = "getCursor";
	const char *methodSignature = "()Lcom/facebook/widget/SimpleGraphObjectCursor;";
	const char *className = "com/facebook/widget/GraphObjectPagingLoader";

	LOGV("com_facebook_widget_GraphObjectPagingLoader className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectPagingLoader cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectPagingLoader jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.SimpleGraphObjectCursor");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphObject");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_com_facebook_model_GraphObject);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_com_facebook_widget_SimpleGraphObjectCursor(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	FacebookCXX::com_facebook_widget_SimpleGraphObjectCursor result((FacebookCXX::com_facebook_widget_SimpleGraphObjectCursor) *((FacebookCXX::com_facebook_widget_SimpleGraphObjectCursor *) cxx_value));
	delete ((FacebookCXX::com_facebook_widget_SimpleGraphObjectCursor *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("FacebookCXX::com_facebook_widget_SimpleGraphObjectCursor com_facebook_widget_GraphObjectPagingLoader::getCursor() exit");

	return result;
}
void com_facebook_widget_GraphObjectPagingLoader::clearResults()
{
	LOGV("void com_facebook_widget_GraphObjectPagingLoader::clearResults() enter");

	const char *methodName = "clearResults";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/widget/GraphObjectPagingLoader";

	LOGV("com_facebook_widget_GraphObjectPagingLoader className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectPagingLoader cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectPagingLoader jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_widget_GraphObjectPagingLoader::clearResults() exit");

}
void com_facebook_widget_GraphObjectPagingLoader::startLoading(FacebookCXX::com_facebook_Request& arg0,bool& arg1)
{
	LOGV("void com_facebook_widget_GraphObjectPagingLoader::startLoading(FacebookCXX::com_facebook_Request& arg0,bool& arg1) enter");

	const char *methodName = "startLoading";
	const char *methodSignature = "(Lcom/facebook/Request;Z)V";
	const char *className = "com/facebook/widget/GraphObjectPagingLoader";

	LOGV("com_facebook_widget_GraphObjectPagingLoader className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectPagingLoader cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectPagingLoader jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.Request");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_Request(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jboolean jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("boolean");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_boolean(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_widget_GraphObjectPagingLoader::startLoading(FacebookCXX::com_facebook_Request& arg0,bool& arg1) exit");

}
void com_facebook_widget_GraphObjectPagingLoader::followNextLink()
{
	LOGV("void com_facebook_widget_GraphObjectPagingLoader::followNextLink() enter");

	const char *methodName = "followNextLink";
	const char *methodSignature = "()V";
	const char *className = "com/facebook/widget/GraphObjectPagingLoader";

	LOGV("com_facebook_widget_GraphObjectPagingLoader className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectPagingLoader cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectPagingLoader jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_widget_GraphObjectPagingLoader::followNextLink() exit");

}
void com_facebook_widget_GraphObjectPagingLoader::refreshOriginalRequest(long& arg0)
{
	LOGV("void com_facebook_widget_GraphObjectPagingLoader::refreshOriginalRequest(long& arg0) enter");

	const char *methodName = "refreshOriginalRequest";
	const char *methodSignature = "(J)V";
	const char *className = "com/facebook/widget/GraphObjectPagingLoader";

	LOGV("com_facebook_widget_GraphObjectPagingLoader className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectPagingLoader cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectPagingLoader jni address %d", javaObject);

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
		
	jni->popLocalFrame();

	LOGV("void com_facebook_widget_GraphObjectPagingLoader::refreshOriginalRequest(long& arg0) exit");

}
void com_facebook_widget_GraphObjectPagingLoader::deliverResult(FacebookCXX::com_facebook_widget_SimpleGraphObjectCursor& arg0)
{
	LOGV("void com_facebook_widget_GraphObjectPagingLoader::deliverResult(FacebookCXX::com_facebook_widget_SimpleGraphObjectCursor& arg0) enter");

	const char *methodName = "deliverResult";
	const char *methodSignature = "(Lcom/facebook/widget/SimpleGraphObjectCursor;)V";
	const char *className = "com/facebook/widget/GraphObjectPagingLoader";

	LOGV("com_facebook_widget_GraphObjectPagingLoader className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("com_facebook_widget_GraphObjectPagingLoader cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("com_facebook_widget_GraphObjectPagingLoader jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("com.facebook.widget.SimpleGraphObjectCursor");
			{
				CXXTypeHierarchy child_cxx_type_hierarchy;
				cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
				cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
				
			}
		}
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("com.facebook.model.GraphObject");
		}
		std::stack<long> converter_stack;
		
		{
			{
				converter_stack.push((long) &convert_com_facebook_model_GraphObject);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_com_facebook_widget_SimpleGraphObjectCursor(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void com_facebook_widget_GraphObjectPagingLoader::deliverResult(FacebookCXX::com_facebook_widget_SimpleGraphObjectCursor& arg0) exit");

}
