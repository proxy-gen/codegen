/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
	
	
	
 		 
 		 
	
	
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 	
 	
 	
 		 
 		 
 	
 		 
 		 


















// Generated Code 

#include <android_widget_SimpleAdapter.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>

#define LOG_TAG "android_widget_SimpleAdapter"
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
android_widget_SimpleAdapter::android_widget_SimpleAdapter(const android_widget_SimpleAdapter& cc)
{
	LOGV("android_widget_SimpleAdapter::android_widget_SimpleAdapter(const android_widget_SimpleAdapter& cc) enter");

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

	LOGV("android_widget_SimpleAdapter::android_widget_SimpleAdapter(const android_widget_SimpleAdapter& cc) exit");
}
android_widget_SimpleAdapter::android_widget_SimpleAdapter(void * proxy)
{
	LOGV("android_widget_SimpleAdapter::android_widget_SimpleAdapter(void * proxy) enter");

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

	LOGV("android_widget_SimpleAdapter::android_widget_SimpleAdapter(void * proxy) exit");
}
android_widget_SimpleAdapter::android_widget_SimpleAdapter()
{
	LOGV("android_widget_SimpleAdapter::android_widget_SimpleAdapter() enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "()V";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", proxiedComponent);

	if (proxiedComponent == 0)
	{
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_SimpleAdapter::android_widget_SimpleAdapter() exit");	
}
// Public Constructors
android_widget_SimpleAdapter::android_widget_SimpleAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_util_List& arg1,int& arg2,std::vector<java_lang_String >& arg3,std::vector<int>& arg4)
{
	LOGV("android_widget_SimpleAdapter::android_widget_SimpleAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_util_List& arg1,int& arg2,std::vector<java_lang_String >& arg3,std::vector<int>& arg4) enter");	

	const char *methodName = "<init>";
	const char *methodSignature = "(Landroid/content/Context;Ljava/util/List;I[Ljava/lang/String;[I)V";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", proxiedComponent);

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
				cxx_type_hierarchy.type_name = std::string("java.util.Map");
				{
					CXXTypeHierarchy child_cxx_type_hierarchy;
					cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
					cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
					
				}
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
			{
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("java.lang.String");
			}
			std::stack<long> converter_stack;
			
			{
				{
					converter_stack.push((long) &convert_java_util_Map);				

						
				}
			}
			{
				{
					converter_stack.push((long) &convert_java_lang_String);				

				}
				{
					converter_stack.push((long) &convert_java_lang_Object);				

				}
			}
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert_java_util_List(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
		}
		jint jarg2;
		{
			long cxx_value = (long) & arg2;
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
			jarg2 = convert_jni_int_to_jni(java_value);
		}
		jobjectArray jarg3;
		{
			long cxx_value = (long) & arg3;
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
				cxx_type_hierarchy.type_name = std::string("java.lang.String");
			}
			std::stack<long> converter_stack;
			
			{
				{
					converter_stack.push((long) &convert_java_lang_String);				

				}
			}
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg3 = convert_jni__object_array_type_to_jni(java_value);
		}
		jintArray jarg4;
		{
			long cxx_value = (long) & arg4;
			long java_value = 0;

			CXXTypeHierarchy cxx_type_hierarchy;
			std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
			
			cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
			{
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("_int_array_type");
				{
					CXXTypeHierarchy child_cxx_type_hierarchy;
					cxx_type_hierarchy.child_types.push_back(child_cxx_type_hierarchy);
					cxx_type_hierarchy_stack.push(child_cxx_type_hierarchy);
					
				}
			}
			{
				CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
				cxx_type_hierarchy_stack.pop();
				cxx_type_hierarchy.type_name = std::string("int");
			}
			std::stack<long> converter_stack;
			
			{
				{
					converter_stack.push((long) &convert_int);				

				}
			}
			converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
			convert__int_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

			// Convert to JNI
			jarg4 = convert_jni__int_array_type_to_jni(java_value);
		}
			
		jclass clazz = jni->getClassRef(className);

		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, methodName, methodSignature),jarg0,jarg1,jarg2,jarg3,jarg4);
		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
	}

	jni->popLocalFrame();

	LOGV("android_widget_SimpleAdapter::android_widget_SimpleAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_util_List& arg1,int& arg2,std::vector<java_lang_String >& arg3,std::vector<int>& arg4) exit");	
}
// Default Instance Destructor
android_widget_SimpleAdapter::~android_widget_SimpleAdapter()
{
	LOGV("android_widget_SimpleAdapter::~android_widget_SimpleAdapter() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("android_widget_SimpleAdapter::~android_widget_SimpleAdapter() exit");
}
// Functions
AndroidCXX::android_view_View android_widget_SimpleAdapter::getView(int& arg0,AndroidCXX::android_view_View& arg1,AndroidCXX::android_view_ViewGroup& arg2)
{
	LOGV("AndroidCXX::android_view_View android_widget_SimpleAdapter::getView(int& arg0,AndroidCXX::android_view_View& arg1,AndroidCXX::android_view_ViewGroup& arg2) enter");

	const char *methodName = "getView";
	const char *methodSignature = "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jobject jarg2;
	{
		long cxx_value = (long) & arg2;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.view.ViewGroup");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewGroup(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg2 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_view_View result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_view_View) (AndroidCXX::android_view_View((AndroidCXX::android_view_View *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_view_View android_widget_SimpleAdapter::getView(int& arg0,AndroidCXX::android_view_View& arg1,AndroidCXX::android_view_ViewGroup& arg2) exit");

	return result;
}
AndroidCXX::android_widget_Filter android_widget_SimpleAdapter::getFilter()
{
	LOGV("AndroidCXX::android_widget_Filter android_widget_SimpleAdapter::getFilter() enter");

	const char *methodName = "getFilter";
	const char *methodSignature = "()Landroid/widget/Filter;";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", javaObject);


	AndroidCXX::android_widget_Filter result;
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
			cxx_type_hierarchy.type_name = std::string("android.widget.Filter");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_Filter(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_widget_Filter) (AndroidCXX::android_widget_Filter((AndroidCXX::android_widget_Filter *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_widget_Filter android_widget_SimpleAdapter::getFilter() exit");

	return result;
}
AndroidCXX::java_lang_Object android_widget_SimpleAdapter::getItem(int& arg0)
{
	LOGV("AndroidCXX::java_lang_Object android_widget_SimpleAdapter::getItem(int& arg0) enter");

	const char *methodName = "getItem";
	const char *methodSignature = "(I)Ljava/lang/Object;";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", javaObject);

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

	AndroidCXX::java_lang_Object result;
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
			cxx_type_hierarchy.type_name = std::string("java.lang.Object");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_java_lang_Object(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::java_lang_Object) (AndroidCXX::java_lang_Object((AndroidCXX::java_lang_Object *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::java_lang_Object android_widget_SimpleAdapter::getItem(int& arg0) exit");

	return result;
}
long android_widget_SimpleAdapter::getItemId(int& arg0)
{
	LOGV("long android_widget_SimpleAdapter::getItemId(int& arg0) enter");

	const char *methodName = "getItemId";
	const char *methodSignature = "(I)J";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", javaObject);

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

	LOGV("long android_widget_SimpleAdapter::getItemId(int& arg0) exit");

	return result;
}
int android_widget_SimpleAdapter::getCount()
{
	LOGV("int android_widget_SimpleAdapter::getCount() enter");

	const char *methodName = "getCount";
	const char *methodSignature = "()I";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", javaObject);


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

	LOGV("int android_widget_SimpleAdapter::getCount() exit");

	return result;
}
AndroidCXX::android_view_View android_widget_SimpleAdapter::getDropDownView(int& arg0,AndroidCXX::android_view_View& arg1,AndroidCXX::android_view_ViewGroup& arg2)
{
	LOGV("AndroidCXX::android_view_View android_widget_SimpleAdapter::getDropDownView(int& arg0,AndroidCXX::android_view_View& arg1,AndroidCXX::android_view_ViewGroup& arg2) enter");

	const char *methodName = "getDropDownView";
	const char *methodSignature = "(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jobject jarg2;
	{
		long cxx_value = (long) & arg2;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.view.ViewGroup");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_view_ViewGroup(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg2 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	AndroidCXX::android_view_View result;
	jobject jni_result = (jobject) jni->invokeObjectMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1,jarg2);
	long cxx_value = (long) 0;
	long java_value = convert_jni_java_lang_Object_to_java(jni_result);
	{
		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("android.view.View");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_view_View(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_view_View) (AndroidCXX::android_view_View((AndroidCXX::android_view_View *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_view_View android_widget_SimpleAdapter::getDropDownView(int& arg0,AndroidCXX::android_view_View& arg1,AndroidCXX::android_view_ViewGroup& arg2) exit");

	return result;
}
void android_widget_SimpleAdapter::setDropDownViewResource(int& arg0)
{
	LOGV("void android_widget_SimpleAdapter::setDropDownViewResource(int& arg0) enter");

	const char *methodName = "setDropDownViewResource";
	const char *methodSignature = "(I)V";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", javaObject);

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

	LOGV("void android_widget_SimpleAdapter::setDropDownViewResource(int& arg0) exit");

}
AndroidCXX::android_widget_SimpleAdapter_ViewBinder android_widget_SimpleAdapter::getViewBinder()
{
	LOGV("AndroidCXX::android_widget_SimpleAdapter_ViewBinder android_widget_SimpleAdapter::getViewBinder() enter");

	const char *methodName = "getViewBinder";
	const char *methodSignature = "()Landroid/widget/SimpleAdapter$ViewBinder;";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", javaObject);


	AndroidCXX::android_widget_SimpleAdapter_ViewBinder result;
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
			cxx_type_hierarchy.type_name = std::string("android.widget.SimpleAdapter$ViewBinder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert_android_widget_SimpleAdapter_ViewBinder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}
	result = (AndroidCXX::android_widget_SimpleAdapter_ViewBinder) (AndroidCXX::android_widget_SimpleAdapter_ViewBinder((AndroidCXX::android_widget_SimpleAdapter_ViewBinder *) cxx_value));
		
	jni->popLocalFrame();

	LOGV("AndroidCXX::android_widget_SimpleAdapter_ViewBinder android_widget_SimpleAdapter::getViewBinder() exit");

	return result;
}
void android_widget_SimpleAdapter::setViewBinder(AndroidCXX::android_widget_SimpleAdapter_ViewBinder& arg0)
{
	LOGV("void android_widget_SimpleAdapter::setViewBinder(AndroidCXX::android_widget_SimpleAdapter_ViewBinder& arg0) enter");

	const char *methodName = "setViewBinder";
	const char *methodSignature = "(Landroid/widget/SimpleAdapter$ViewBinder;)V";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.SimpleAdapter$ViewBinder");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_SimpleAdapter_ViewBinder(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0);
		
	jni->popLocalFrame();

	LOGV("void android_widget_SimpleAdapter::setViewBinder(AndroidCXX::android_widget_SimpleAdapter_ViewBinder& arg0) exit");

}
void android_widget_SimpleAdapter::setViewImage(AndroidCXX::android_widget_ImageView& arg0,int& arg1)
{
	LOGV("void android_widget_SimpleAdapter::setViewImage(AndroidCXX::android_widget_ImageView& arg0,int& arg1) enter");

	const char *methodName = "setViewImage";
	const char *methodSignature = "(Landroid/widget/ImageView;I)V";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.ImageView");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_ImageView(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
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

	LOGV("void android_widget_SimpleAdapter::setViewImage(AndroidCXX::android_widget_ImageView& arg0,int& arg1) exit");

}
void android_widget_SimpleAdapter::setViewImage(AndroidCXX::android_widget_ImageView& arg0,AndroidCXX::java_lang_String& arg1)
{
	LOGV("void android_widget_SimpleAdapter::setViewImage(AndroidCXX::android_widget_ImageView& arg0,AndroidCXX::java_lang_String& arg1) enter");

	const char *methodName = "setViewImage";
	const char *methodSignature = "(Landroid/widget/ImageView;Ljava/lang/String;)V";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.ImageView");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_ImageView(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jstring jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_string_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	jni->popLocalFrame();

	LOGV("void android_widget_SimpleAdapter::setViewImage(AndroidCXX::android_widget_ImageView& arg0,AndroidCXX::java_lang_String& arg1) exit");

}
void android_widget_SimpleAdapter::setViewText(AndroidCXX::android_widget_TextView& arg0,AndroidCXX::java_lang_String& arg1)
{
	LOGV("void android_widget_SimpleAdapter::setViewText(AndroidCXX::android_widget_TextView& arg0,AndroidCXX::java_lang_String& arg1) enter");

	const char *methodName = "setViewText";
	const char *methodSignature = "(Landroid/widget/TextView;Ljava/lang/String;)V";
	const char *className = "android/widget/SimpleAdapter";

	LOGV("android_widget_SimpleAdapter className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("android_widget_SimpleAdapter cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("android_widget_SimpleAdapter jni address %d", javaObject);

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
			cxx_type_hierarchy.type_name = std::string("android.widget.TextView");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_android_widget_TextView(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg0 = convert_jni_java_lang_Object_to_jni(java_value);
	}
	jstring jarg1;
	{
		long cxx_value = (long) & arg1;
		long java_value = 0;

		CXXTypeHierarchy cxx_type_hierarchy;
		std::stack<CXXTypeHierarchy> cxx_type_hierarchy_stack;
		
		cxx_type_hierarchy_stack.push(cxx_type_hierarchy);
		{
			CXXTypeHierarchy cxx_type_hierarchy = cxx_type_hierarchy_stack.top();
			cxx_type_hierarchy_stack.pop();
			cxx_type_hierarchy.type_name = std::string("java.lang.String");
		}
		std::stack<long> converter_stack;
		converter_t converter_type = (converter_t) CONVERT_TO_JAVA;
		convert_java_lang_String(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);

		// Convert to JNI
		jarg1 = convert_jni_string_to_jni(java_value);
	}

	jni->invokeVoidMethod(javaObject,className,methodName,methodSignature,jarg0,jarg1);
		
	jni->popLocalFrame();

	LOGV("void android_widget_SimpleAdapter::setViewText(AndroidCXX::android_widget_TextView& arg0,AndroidCXX::java_lang_String& arg1) exit");

}
