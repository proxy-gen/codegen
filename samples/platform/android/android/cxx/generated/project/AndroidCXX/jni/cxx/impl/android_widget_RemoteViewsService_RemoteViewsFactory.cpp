/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
















// Generated Code 

#include <android_widget_RemoteViewsService_RemoteViewsFactory.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_widget_RemoteViewsService_RemoteViewsFactory"
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

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_widget_RemoteViewsService_RemoteViewsFactory::android_widget_RemoteViewsService_RemoteViewsFactory(const android_widget_RemoteViewsService_RemoteViewsFactory& cc)
{
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory::android_widget_RemoteViewsService_RemoteViewsFactory(const android_widget_RemoteViewsService_RemoteViewsFactory& cc) enter");

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

	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory::android_widget_RemoteViewsService_RemoteViewsFactory(const android_widget_RemoteViewsService_RemoteViewsFactory& cc) exit");
}
android_widget_RemoteViewsService_RemoteViewsFactory::android_widget_RemoteViewsService_RemoteViewsFactory(void * proxy)
{
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory::android_widget_RemoteViewsService_RemoteViewsFactory(void * proxy) enter");

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

	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory::android_widget_RemoteViewsService_RemoteViewsFactory(void * proxy) exit");
}
android_widget_RemoteViewsService_RemoteViewsFactory::android_widget_RemoteViewsService_RemoteViewsFactory()
{
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory::android_widget_RemoteViewsService_RemoteViewsFactory() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/widget/RemoteViewsService$RemoteViewsFactory";

	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory::android_widget_RemoteViewsService_RemoteViewsFactory() exit");	
}
// Public Constructors
// Default Instance Destructor
android_widget_RemoteViewsService_RemoteViewsFactory::~android_widget_RemoteViewsService_RemoteViewsFactory()
{
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory::~android_widget_RemoteViewsService_RemoteViewsFactory() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory::~android_widget_RemoteViewsService_RemoteViewsFactory() exit");
}
// Functions
void android_widget_RemoteViewsService_RemoteViewsFactory::onCreate()
{
	LOGV("void android_widget_RemoteViewsService_RemoteViewsFactory::onCreate() enter");

	const char *methodName = "onCreate";
	const char *methodSignature = "()V";
	const char *className = "android/widget/RemoteViewsService$RemoteViewsFactory";

	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_widget_RemoteViewsService_RemoteViewsFactory::onCreate() exit");

}
void android_widget_RemoteViewsService_RemoteViewsFactory::onDestroy()
{
	LOGV("void android_widget_RemoteViewsService_RemoteViewsFactory::onDestroy() enter");

	const char *methodName = "onDestroy";
	const char *methodSignature = "()V";
	const char *className = "android/widget/RemoteViewsService$RemoteViewsFactory";

	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_widget_RemoteViewsService_RemoteViewsFactory::onDestroy() exit");

}
long android_widget_RemoteViewsService_RemoteViewsFactory::getItemId(int& arg0)
{
	LOGV("long android_widget_RemoteViewsService_RemoteViewsFactory::getItemId(int& arg0) enter");

	const char *methodName = "getItemId";
	const char *methodSignature = "(I)J";
	const char *className = "android/widget/RemoteViewsService$RemoteViewsFactory";

	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory jni address %d", javaObject);

	jint jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_int_to_jni(java_value);
	}

	long result;
	jlong jni_result = (jlong) jni->invokeLongMethod(javaObject,className,methodName,methodSignature,jarg0);
	long cxx_value = (long) 0;
	long java_value = convert_jni_long_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("long");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_long(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (long) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("long android_widget_RemoteViewsService_RemoteViewsFactory::getItemId(int& arg0) exit");

	return result;
}
int android_widget_RemoteViewsService_RemoteViewsFactory::getCount()
{
	LOGV("int android_widget_RemoteViewsService_RemoteViewsFactory::getCount() enter");

	const char *methodName = "getCount";
	const char *methodSignature = "()I";
	const char *className = "android/widget/RemoteViewsService$RemoteViewsFactory";

	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory jni address %d", javaObject);


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

	LOGV("int android_widget_RemoteViewsService_RemoteViewsFactory::getCount() exit");

	return result;
}
bool android_widget_RemoteViewsService_RemoteViewsFactory::hasStableIds()
{
	LOGV("bool android_widget_RemoteViewsService_RemoteViewsFactory::hasStableIds() enter");

	const char *methodName = "hasStableIds";
	const char *methodSignature = "()Z";
	const char *className = "android/widget/RemoteViewsService$RemoteViewsFactory";

	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory jni address %d", javaObject);


	bool result;
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
	result = (bool) (cxx_value);
		
	jni->popLocalFrame();

	LOGV("bool android_widget_RemoteViewsService_RemoteViewsFactory::hasStableIds() exit");

	return result;
}
int android_widget_RemoteViewsService_RemoteViewsFactory::getViewTypeCount()
{
	LOGV("int android_widget_RemoteViewsService_RemoteViewsFactory::getViewTypeCount() enter");

	const char *methodName = "getViewTypeCount";
	const char *methodSignature = "()I";
	const char *className = "android/widget/RemoteViewsService$RemoteViewsFactory";

	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory jni address %d", javaObject);


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

	LOGV("int android_widget_RemoteViewsService_RemoteViewsFactory::getViewTypeCount() exit");

	return result;
}
void android_widget_RemoteViewsService_RemoteViewsFactory::onDataSetChanged()
{
	LOGV("void android_widget_RemoteViewsService_RemoteViewsFactory::onDataSetChanged() enter");

	const char *methodName = "onDataSetChanged";
	const char *methodSignature = "()V";
	const char *className = "android/widget/RemoteViewsService$RemoteViewsFactory";

	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_widget_RemoteViewsService_RemoteViewsFactory::onDataSetChanged() exit");

}
AndroidCXX::android_widget_RemoteViews android_widget_RemoteViewsService_RemoteViewsFactory::getViewAt(int& arg0)
{
	LOGV("AndroidCXX::android_widget_RemoteViews android_widget_RemoteViewsService_RemoteViewsFactory::getViewAt(int& arg0) enter");

	const char *methodName = "getViewAt";
	const char *methodSignature = "(I)Landroid/widget/RemoteViews;";
	const char *className = "android/widget/RemoteViewsService$RemoteViewsFactory";

	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory jni address %d", javaObject);

	jint jarg0;
	{
		long cxx_value = (long) & arg0;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("int");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_int(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_int_to_jni(java_value);
	}

	AndroidCXX::android_widget_RemoteViews result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.widget.RemoteViews");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_RemoteViews(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_widget_RemoteViews) (AndroidCXX::android_widget_RemoteViews((AndroidCXX::android_widget_RemoteViews *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_widget_RemoteViews android_widget_RemoteViewsService_RemoteViewsFactory::getViewAt(int& arg0) exit");

	return result;
}
AndroidCXX::android_widget_RemoteViews android_widget_RemoteViewsService_RemoteViewsFactory::getLoadingView()
{
	LOGV("AndroidCXX::android_widget_RemoteViews android_widget_RemoteViewsService_RemoteViewsFactory::getLoadingView() enter");

	const char *methodName = "getLoadingView";
	const char *methodSignature = "()Landroid/widget/RemoteViews;";
	const char *className = "android/widget/RemoteViewsService$RemoteViewsFactory";

	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_RemoteViewsService_RemoteViewsFactory jni address %d", javaObject);


	AndroidCXX::android_widget_RemoteViews result;
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
			cxx_type_hierarchy.type_name = std::string("android.widget.RemoteViews");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_RemoteViews(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_widget_RemoteViews) (AndroidCXX::android_widget_RemoteViews((AndroidCXX::android_widget_RemoteViews *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_widget_RemoteViews android_widget_RemoteViewsService_RemoteViewsFactory::getLoadingView() exit");

	return result;
}
