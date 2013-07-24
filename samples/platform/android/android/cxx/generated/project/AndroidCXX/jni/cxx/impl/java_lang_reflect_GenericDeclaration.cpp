/*
 * Implementation (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//










// Generated Code 

#include <java_lang_reflect_GenericDeclaration.hpp>
#include <jni.h>
#include <CXXContext.hpp>
#include <JNIContext.hpp>
// TODO: integrate with custom converters
#include <CXXConverter.hpp>
#include <AndroidCXXConverter.hpp>
// TODO: FIXME: add include package
// FIXME: remove after testing

#define LOG_TAG "java_lang_reflect_GenericDeclaration"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

using namespace AndroidCXX;

// 
// 

static long static_obj;
static long static_address = (long) &static_obj;

// Default Instance Constructors
java_lang_reflect_GenericDeclaration::java_lang_reflect_GenericDeclaration(const java_lang_reflect_GenericDeclaration& cc)
{
	LOGV("java_lang_reflect_GenericDeclaration::java_lang_reflect_GenericDeclaration(const java_lang_reflect_GenericDeclaration& cc) enter");

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

	LOGV("java_lang_reflect_GenericDeclaration::java_lang_reflect_GenericDeclaration(const java_lang_reflect_GenericDeclaration& cc) exit");
}
java_lang_reflect_GenericDeclaration::java_lang_reflect_GenericDeclaration(void * proxy)
{
	LOGV("java_lang_reflect_GenericDeclaration::java_lang_reflect_GenericDeclaration(void * proxy) enter");

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

	LOGV("java_lang_reflect_GenericDeclaration::java_lang_reflect_GenericDeclaration(void * proxy) exit");
}
// TODO: remove
// 
// 
// java_lang_reflect_GenericDeclaration::java_lang_reflect_GenericDeclaration()
// {
// 	LOGV("java_lang_reflect_GenericDeclaration::java_lang_reflect_GenericDeclaration() enter");	

// 	const char *methodName = "<init>";
// 	const char *methodSignature = "()V";
// 	const char *className = "java/lang/reflect/GenericDeclaration";

// 	LOGV("java_lang_reflect_GenericDeclaration className %d methodName %s methodSignature %s", className, methodName, methodSignature);

// 	CXXContext *ctx = CXXContext::sharedInstance();
// 	JNIContext *jni = JNIContext::sharedInstance();

// 	jni->pushLocalFrame();

// 	long cxxAddress = (long) this;
// 	LOGV("java_lang_reflect_GenericDeclaration cxx address %d", cxxAddress);
// 	jobject proxiedComponent = ctx->findProxyComponent(cxxAddress);
// 	LOGV("java_lang_reflect_GenericDeclaration jni address %d", proxiedComponent);

// 	if (proxiedComponent == 0)
// 	{
// 		jclass clazz = jni->getClassRef(className);

// 		proxiedComponent = jni->createNewObject(clazz,jni->getMethodID(clazz, "<init>", methodSignature));
// 		proxiedComponent = jni->localToGlobalRef(proxiedComponent);

// 		ctx->registerProxyComponent(cxxAddress, proxiedComponent);
// 	}

// 	jni->popLocalFrame();

// 	LOGV("java_lang_reflect_GenericDeclaration::java_lang_reflect_GenericDeclaration() exit");	
// }
// 
// 
// Public Constructors
// Default Instance Destructor
java_lang_reflect_GenericDeclaration::~java_lang_reflect_GenericDeclaration()
{
	LOGV("java_lang_reflect_GenericDeclaration::~java_lang_reflect_GenericDeclaration() enter");
	CXXContext *ctx = CXXContext::sharedInstance();
	long address = (long) this;
	jobject proxiedComponent = ctx->findProxyComponent(address);
	if (proxiedComponent != 0)
	{
		JNIContext *jni = JNIContext::sharedInstance();
		ctx->deregisterProxyComponent(address);
	}		
	LOGV("java_lang_reflect_GenericDeclaration::~java_lang_reflect_GenericDeclaration() exit");
}
// Functions
std::vector<AndroidCXX::java_lang_reflect_TypeVariable > java_lang_reflect_GenericDeclaration::getTypeParameters()
{
	LOGV("std::vector<AndroidCXX::java_lang_reflect_TypeVariable > java_lang_reflect_GenericDeclaration::getTypeParameters() enter");

	const char *methodName = "getTypeParameters";
	const char *methodSignature = "()[Ljava/lang/reflect/TypeVariable;";
	const char *className = "java/lang/reflect/GenericDeclaration";

	LOGV("java_lang_reflect_GenericDeclaration className %d methodName %s methodSignature %s", className, methodName, methodSignature);

	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	jni->pushLocalFrame();

	long cxxAddress = (long) this;
	LOGV("java_lang_reflect_GenericDeclaration cxx address %d", cxxAddress);
	jobject javaObject = ctx->findProxyComponent(cxxAddress);
	LOGV("java_lang_reflect_GenericDeclaration jni address %d", javaObject);


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
			cxx_type_hierarchy.type_name = std::string("java.lang.reflect.TypeVariable");
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
				converter_stack.push((long) &convert_java_lang_reflect_TypeVariable);				

					
			}
		}
		{
			{
				converter_stack.push((long) &convert_java_lang_Object);				

			}
		}
		converter_t converter_type = (converter_t) CONVERT_TO_CXX;
		convert__object_array_type(java_value,cxx_value,cxx_type_hierarchy,converter_type,converter_stack);
	}

	std::vector<AndroidCXX::java_lang_reflect_TypeVariable > result = (std::vector<AndroidCXX::java_lang_reflect_TypeVariable >) *((std::vector<AndroidCXX::java_lang_reflect_TypeVariable > *) cxx_value);
	delete ((std::vector<AndroidCXX::java_lang_reflect_TypeVariable > *) cxx_value);
		
	jni->popLocalFrame();

	LOGV("std::vector<AndroidCXX::java_lang_reflect_TypeVariable > java_lang_reflect_GenericDeclaration::getTypeParameters() exit");

	return result;
}
