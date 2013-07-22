/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 
	
 		 
	
	




















// Generated Code 

#include <android_view_SurfaceHolder.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_view_SurfaceHolder"
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

static long static_obj;
static long static_address = (long) &static_obj;


// Default Instance Constructors
android_view_SurfaceHolder::android_view_SurfaceHolder(const android_view_SurfaceHolder& cc)
{
	LOGV("android_view_SurfaceHolder::android_view_SurfaceHolder(const android_view_SurfaceHolder& cc) enter");

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

	LOGV("android_view_SurfaceHolder::android_view_SurfaceHolder(const android_view_SurfaceHolder& cc) exit");
}
android_view_SurfaceHolder::android_view_SurfaceHolder(void * proxy)
{
	LOGV("android_view_SurfaceHolder::android_view_SurfaceHolder(void * proxy) enter");

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

	LOGV("android_view_SurfaceHolder::android_view_SurfaceHolder(void * proxy) exit");
}
android_view_SurfaceHolder::android_view_SurfaceHolder()
{
	LOGV("android_view_SurfaceHolder::android_view_SurfaceHolder() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_view_SurfaceHolder::android_view_SurfaceHolder() exit");	
}
// Public Constructors
// Default Instance Destructor
android_view_SurfaceHolder::~android_view_SurfaceHolder()
{
	LOGV("android_view_SurfaceHolder::~android_view_SurfaceHolder() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_view_SurfaceHolder::~android_view_SurfaceHolder() exit");
}
// Functions
void android_view_SurfaceHolder::setFormat(int& arg0)
{
	LOGV("void android_view_SurfaceHolder::setFormat(int& arg0) enter");

	const char *methodName = "setFormat";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_SurfaceHolder::setFormat(int& arg0) exit");

}
void android_view_SurfaceHolder::setType(int& arg0)
{
	LOGV("void android_view_SurfaceHolder::setType(int& arg0) enter");

	const char *methodName = "setType";
	const char *methodSignature = "(I)V";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", javaObject);

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

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_SurfaceHolder::setType(int& arg0) exit");

}
void android_view_SurfaceHolder::setKeepScreenOn(bool& arg0)
{
	LOGV("void android_view_SurfaceHolder::setKeepScreenOn(bool& arg0) enter");

	const char *methodName = "setKeepScreenOn";
	const char *methodSignature = "(Z)V";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", javaObject);

	jboolean jarg0;
	{
		long cxx_value = (long) & arg0;
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
		jarg0 = convert_jni_boolean_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_SurfaceHolder::setKeepScreenOn(bool& arg0) exit");

}
void android_view_SurfaceHolder::addCallback(AndroidCXX::android_view_SurfaceHolder_Callback& arg0)
{
	LOGV("void android_view_SurfaceHolder::addCallback(AndroidCXX::android_view_SurfaceHolder_Callback& arg0) enter");

	const char *methodName = "addCallback";
	const char *methodSignature = "(Landroid/view/SurfaceHolder$Callback;)V";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.SurfaceHolder$Callback");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_SurfaceHolder_Callback(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_SurfaceHolder::addCallback(AndroidCXX::android_view_SurfaceHolder_Callback& arg0) exit");

}
void android_view_SurfaceHolder::removeCallback(AndroidCXX::android_view_SurfaceHolder_Callback& arg0)
{
	LOGV("void android_view_SurfaceHolder::removeCallback(AndroidCXX::android_view_SurfaceHolder_Callback& arg0) enter");

	const char *methodName = "removeCallback";
	const char *methodSignature = "(Landroid/view/SurfaceHolder$Callback;)V";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.SurfaceHolder$Callback");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_SurfaceHolder_Callback(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_SurfaceHolder::removeCallback(AndroidCXX::android_view_SurfaceHolder_Callback& arg0) exit");

}
bool android_view_SurfaceHolder::isCreating()
{
	LOGV("bool android_view_SurfaceHolder::isCreating() enter");

	const char *methodName = "isCreating";
	const char *methodSignature = "()Z";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", javaObject);


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

	LOGV("bool android_view_SurfaceHolder::isCreating() exit");

	return result;
}
void android_view_SurfaceHolder::setFixedSize(int& arg0,int& arg1)
{
	LOGV("void android_view_SurfaceHolder::setFixedSize(int& arg0,int& arg1) enter");

	const char *methodName = "setFixedSize";
	const char *methodSignature = "(II)V";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", javaObject);

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
	jint jarg1;
	{
		long cxx_value = (long) & arg1;
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
		jarg1 = convert_jni_int_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	jni->popLocalFrame();

	LOGV("void android_view_SurfaceHolder::setFixedSize(int& arg0,int& arg1) exit");

}
void android_view_SurfaceHolder::setSizeFromLayout()
{
	LOGV("void android_view_SurfaceHolder::setSizeFromLayout() enter");

	const char *methodName = "setSizeFromLayout";
	const char *methodSignature = "()V";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", javaObject);


	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature);
		
	jni->popLocalFrame();

	LOGV("void android_view_SurfaceHolder::setSizeFromLayout() exit");

}
AndroidCXX::android_graphics_Canvas android_view_SurfaceHolder::lockCanvas()
{
	LOGV("AndroidCXX::android_graphics_Canvas android_view_SurfaceHolder::lockCanvas() enter");

	const char *methodName = "lockCanvas";
	const char *methodSignature = "()Landroid/graphics/Canvas;";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", javaObject);


	AndroidCXX::android_graphics_Canvas result;
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
			cxx_type_hierarchy.type_name = std::string("android.graphics.Canvas");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_graphics_Canvas(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_graphics_Canvas) (AndroidCXX::android_graphics_Canvas((AndroidCXX::android_graphics_Canvas *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_graphics_Canvas android_view_SurfaceHolder::lockCanvas() exit");

	return result;
}
AndroidCXX::android_graphics_Canvas android_view_SurfaceHolder::lockCanvas(AndroidCXX::android_graphics_Rect& arg0)
{
	LOGV("AndroidCXX::android_graphics_Canvas android_view_SurfaceHolder::lockCanvas(AndroidCXX::android_graphics_Rect& arg0) enter");

	const char *methodName = "lockCanvas";
	const char *methodSignature = "(Landroid/graphics/Rect;)Landroid/graphics/Canvas;";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.graphics.Rect");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_graphics_Rect(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_graphics_Canvas result;
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
			cxx_type_hierarchy.type_name = std::string("android.graphics.Canvas");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_graphics_Canvas(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_graphics_Canvas) (AndroidCXX::android_graphics_Canvas((AndroidCXX::android_graphics_Canvas *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_graphics_Canvas android_view_SurfaceHolder::lockCanvas(AndroidCXX::android_graphics_Rect& arg0) exit");

	return result;
}
void android_view_SurfaceHolder::unlockCanvasAndPost(AndroidCXX::android_graphics_Canvas& arg0)
{
	LOGV("void android_view_SurfaceHolder::unlockCanvasAndPost(AndroidCXX::android_graphics_Canvas& arg0) enter");

	const char *methodName = "unlockCanvasAndPost";
	const char *methodSignature = "(Landroid/graphics/Canvas;)V";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.graphics.Canvas");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_graphics_Canvas(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_view_SurfaceHolder::unlockCanvasAndPost(AndroidCXX::android_graphics_Canvas& arg0) exit");

}
AndroidCXX::android_graphics_Rect android_view_SurfaceHolder::getSurfaceFrame()
{
	LOGV("AndroidCXX::android_graphics_Rect android_view_SurfaceHolder::getSurfaceFrame() enter");

	const char *methodName = "getSurfaceFrame";
	const char *methodSignature = "()Landroid/graphics/Rect;";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", javaObject);


	AndroidCXX::android_graphics_Rect result;
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
			cxx_type_hierarchy.type_name = std::string("android.graphics.Rect");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_graphics_Rect(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_graphics_Rect) (AndroidCXX::android_graphics_Rect((AndroidCXX::android_graphics_Rect *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_graphics_Rect android_view_SurfaceHolder::getSurfaceFrame() exit");

	return result;
}
AndroidCXX::android_view_Surface android_view_SurfaceHolder::getSurface()
{
	LOGV("AndroidCXX::android_view_Surface android_view_SurfaceHolder::getSurface() enter");

	const char *methodName = "getSurface";
	const char *methodSignature = "()Landroid/view/Surface;";
	const char *className = "android/view/SurfaceHolder";

	LOGV("android_view_SurfaceHolder className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_view_SurfaceHolder cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_view_SurfaceHolder jni address %d", javaObject);


	AndroidCXX::android_view_Surface result;
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
			cxx_type_hierarchy.type_name = std::string("android.view.Surface");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_Surface(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_view_Surface) (AndroidCXX::android_view_Surface((AndroidCXX::android_view_Surface *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_view_Surface android_view_SurfaceHolder::getSurface() exit");

	return result;
}
