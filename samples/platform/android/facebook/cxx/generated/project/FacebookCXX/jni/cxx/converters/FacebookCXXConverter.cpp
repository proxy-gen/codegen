/*
 * Implementation (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



#include <FacebookCXXConverter.hpp>

#define LOG_TAG "FacebookCXXConverter"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

// Proxy Converter Types
void convert_com_facebook_AccessToken_SerializationProxyV1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AccessToken_SerializationProxyV1 *cxx_object = new com_facebook_AccessToken_SerializationProxyV1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AccessToken(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AccessToken *cxx_object = new com_facebook_AccessToken(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AccessTokenSource(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (com_facebook_AccessTokenSource::NONE == cxx_value)
			{
				enum_string = "NONE";
				break;
			}
			if (com_facebook_AccessTokenSource::FACEBOOK_APPLICATION_WEB == cxx_value)
			{
				enum_string = "FACEBOOK_APPLICATION_WEB";
				break;
			}
			if (com_facebook_AccessTokenSource::FACEBOOK_APPLICATION_NATIVE == cxx_value)
			{
				enum_string = "FACEBOOK_APPLICATION_NATIVE";
				break;
			}
			if (com_facebook_AccessTokenSource::FACEBOOK_APPLICATION_SERVICE == cxx_value)
			{
				enum_string = "FACEBOOK_APPLICATION_SERVICE";
				break;
			}
			if (com_facebook_AccessTokenSource::WEB_VIEW == cxx_value)
			{
				enum_string = "WEB_VIEW";
				break;
			}
			if (com_facebook_AccessTokenSource::TEST_USER == cxx_value)
			{
				enum_string = "TEST_USER";
				break;
			}
			if (com_facebook_AccessTokenSource::CLIENT_TOKEN == cxx_value)
			{
				enum_string = "CLIENT_TOKEN";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("com/facebook/AccessTokenSource"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("NONE", enum_string) == 0)
				{
					cxx_value = com_facebook_AccessTokenSource::NONE;
					break;
				}
				if (strcmp("FACEBOOK_APPLICATION_WEB", enum_string) == 0)
				{
					cxx_value = com_facebook_AccessTokenSource::FACEBOOK_APPLICATION_WEB;
					break;
				}
				if (strcmp("FACEBOOK_APPLICATION_NATIVE", enum_string) == 0)
				{
					cxx_value = com_facebook_AccessTokenSource::FACEBOOK_APPLICATION_NATIVE;
					break;
				}
				if (strcmp("FACEBOOK_APPLICATION_SERVICE", enum_string) == 0)
				{
					cxx_value = com_facebook_AccessTokenSource::FACEBOOK_APPLICATION_SERVICE;
					break;
				}
				if (strcmp("WEB_VIEW", enum_string) == 0)
				{
					cxx_value = com_facebook_AccessTokenSource::WEB_VIEW;
					break;
				}
				if (strcmp("TEST_USER", enum_string) == 0)
				{
					cxx_value = com_facebook_AccessTokenSource::TEST_USER;
					break;
				}
				if (strcmp("CLIENT_TOKEN", enum_string) == 0)
				{
					cxx_value = com_facebook_AccessTokenSource::CLIENT_TOKEN;
					break;
				}
		} 
		while (0);		
	}
}
void convert_com_facebook_AuthorizationClient_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_1 *cxx_object = new com_facebook_AuthorizationClient_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_2 *cxx_object = new com_facebook_AuthorizationClient_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_3 *cxx_object = new com_facebook_AuthorizationClient_3(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_4(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_4 *cxx_object = new com_facebook_AuthorizationClient_4(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_5(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_5 *cxx_object = new com_facebook_AuthorizationClient_5(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_AuthDialogBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_AuthDialogBuilder *cxx_object = new com_facebook_AuthorizationClient_AuthDialogBuilder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_AuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_AuthHandler *cxx_object = new com_facebook_AuthorizationClient_AuthHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_AuthorizationRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_AuthorizationRequest *cxx_object = new com_facebook_AuthorizationClient_AuthorizationRequest(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_BackgroundProcessingListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_BackgroundProcessingListener *cxx_object = new com_facebook_AuthorizationClient_BackgroundProcessingListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_GetTokenAuthHandler_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_GetTokenAuthHandler_1 *cxx_object = new com_facebook_AuthorizationClient_GetTokenAuthHandler_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_GetTokenAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_GetTokenAuthHandler *cxx_object = new com_facebook_AuthorizationClient_GetTokenAuthHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_KatanaAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_KatanaAuthHandler *cxx_object = new com_facebook_AuthorizationClient_KatanaAuthHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_KatanaLoginDialogAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_KatanaLoginDialogAuthHandler *cxx_object = new com_facebook_AuthorizationClient_KatanaLoginDialogAuthHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_KatanaProxyAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_KatanaProxyAuthHandler *cxx_object = new com_facebook_AuthorizationClient_KatanaProxyAuthHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_OnCompletedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_OnCompletedListener *cxx_object = new com_facebook_AuthorizationClient_OnCompletedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_Result_Code(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (com_facebook_AuthorizationClient_Result_Code::SUCCESS == cxx_value)
			{
				enum_string = "SUCCESS";
				break;
			}
			if (com_facebook_AuthorizationClient_Result_Code::CANCEL == cxx_value)
			{
				enum_string = "CANCEL";
				break;
			}
			if (com_facebook_AuthorizationClient_Result_Code::ERROR == cxx_value)
			{
				enum_string = "ERROR";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("com/facebook/AuthorizationClient$Result$Code"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("SUCCESS", enum_string) == 0)
				{
					cxx_value = com_facebook_AuthorizationClient_Result_Code::SUCCESS;
					break;
				}
				if (strcmp("CANCEL", enum_string) == 0)
				{
					cxx_value = com_facebook_AuthorizationClient_Result_Code::CANCEL;
					break;
				}
				if (strcmp("ERROR", enum_string) == 0)
				{
					cxx_value = com_facebook_AuthorizationClient_Result_Code::ERROR;
					break;
				}
		} 
		while (0);		
	}
}
void convert_com_facebook_AuthorizationClient_Result(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_Result *cxx_object = new com_facebook_AuthorizationClient_Result(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_StartActivityDelegate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_StartActivityDelegate *cxx_object = new com_facebook_AuthorizationClient_StartActivityDelegate(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_WebViewAuthHandler_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_WebViewAuthHandler_1 *cxx_object = new com_facebook_AuthorizationClient_WebViewAuthHandler_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient_WebViewAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient_WebViewAuthHandler *cxx_object = new com_facebook_AuthorizationClient_WebViewAuthHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_AuthorizationClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_AuthorizationClient *cxx_object = new com_facebook_AuthorizationClient(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_FacebookAuthorizationException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_FacebookAuthorizationException *cxx_object = new com_facebook_FacebookAuthorizationException(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_FacebookDialogException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_FacebookDialogException *cxx_object = new com_facebook_FacebookDialogException(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_FacebookException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_FacebookException *cxx_object = new com_facebook_FacebookException(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_FacebookGraphObjectException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_FacebookGraphObjectException *cxx_object = new com_facebook_FacebookGraphObjectException(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_FacebookOperationCanceledException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_FacebookOperationCanceledException *cxx_object = new com_facebook_FacebookOperationCanceledException(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_FacebookRequestError_Category(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (com_facebook_FacebookRequestError_Category::AUTHENTICATION_RETRY == cxx_value)
			{
				enum_string = "AUTHENTICATION_RETRY";
				break;
			}
			if (com_facebook_FacebookRequestError_Category::AUTHENTICATION_REOPEN_SESSION == cxx_value)
			{
				enum_string = "AUTHENTICATION_REOPEN_SESSION";
				break;
			}
			if (com_facebook_FacebookRequestError_Category::PERMISSION == cxx_value)
			{
				enum_string = "PERMISSION";
				break;
			}
			if (com_facebook_FacebookRequestError_Category::SERVER == cxx_value)
			{
				enum_string = "SERVER";
				break;
			}
			if (com_facebook_FacebookRequestError_Category::THROTTLING == cxx_value)
			{
				enum_string = "THROTTLING";
				break;
			}
			if (com_facebook_FacebookRequestError_Category::OTHER == cxx_value)
			{
				enum_string = "OTHER";
				break;
			}
			if (com_facebook_FacebookRequestError_Category::BAD_REQUEST == cxx_value)
			{
				enum_string = "BAD_REQUEST";
				break;
			}
			if (com_facebook_FacebookRequestError_Category::CLIENT == cxx_value)
			{
				enum_string = "CLIENT";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("com/facebook/FacebookRequestError$Category"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("AUTHENTICATION_RETRY", enum_string) == 0)
				{
					cxx_value = com_facebook_FacebookRequestError_Category::AUTHENTICATION_RETRY;
					break;
				}
				if (strcmp("AUTHENTICATION_REOPEN_SESSION", enum_string) == 0)
				{
					cxx_value = com_facebook_FacebookRequestError_Category::AUTHENTICATION_REOPEN_SESSION;
					break;
				}
				if (strcmp("PERMISSION", enum_string) == 0)
				{
					cxx_value = com_facebook_FacebookRequestError_Category::PERMISSION;
					break;
				}
				if (strcmp("SERVER", enum_string) == 0)
				{
					cxx_value = com_facebook_FacebookRequestError_Category::SERVER;
					break;
				}
				if (strcmp("THROTTLING", enum_string) == 0)
				{
					cxx_value = com_facebook_FacebookRequestError_Category::THROTTLING;
					break;
				}
				if (strcmp("OTHER", enum_string) == 0)
				{
					cxx_value = com_facebook_FacebookRequestError_Category::OTHER;
					break;
				}
				if (strcmp("BAD_REQUEST", enum_string) == 0)
				{
					cxx_value = com_facebook_FacebookRequestError_Category::BAD_REQUEST;
					break;
				}
				if (strcmp("CLIENT", enum_string) == 0)
				{
					cxx_value = com_facebook_FacebookRequestError_Category::CLIENT;
					break;
				}
		} 
		while (0);		
	}
}
void convert_com_facebook_FacebookRequestError_Range(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_FacebookRequestError_Range *cxx_object = new com_facebook_FacebookRequestError_Range(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_FacebookRequestError(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_FacebookRequestError *cxx_object = new com_facebook_FacebookRequestError(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_FacebookSdkVersion(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_FacebookSdkVersion *cxx_object = new com_facebook_FacebookSdkVersion(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_FacebookServiceException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_FacebookServiceException *cxx_object = new com_facebook_FacebookServiceException(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_GetTokenClient_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_GetTokenClient_1 *cxx_object = new com_facebook_GetTokenClient_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_GetTokenClient_CompletedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_GetTokenClient_CompletedListener *cxx_object = new com_facebook_GetTokenClient_CompletedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_GetTokenClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_GetTokenClient *cxx_object = new com_facebook_GetTokenClient(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_HttpMethod(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (com_facebook_HttpMethod::GET == cxx_value)
			{
				enum_string = "GET";
				break;
			}
			if (com_facebook_HttpMethod::POST == cxx_value)
			{
				enum_string = "POST";
				break;
			}
			if (com_facebook_HttpMethod::DELETE == cxx_value)
			{
				enum_string = "DELETE";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("com/facebook/HttpMethod"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("GET", enum_string) == 0)
				{
					cxx_value = com_facebook_HttpMethod::GET;
					break;
				}
				if (strcmp("POST", enum_string) == 0)
				{
					cxx_value = com_facebook_HttpMethod::POST;
					break;
				}
				if (strcmp("DELETE", enum_string) == 0)
				{
					cxx_value = com_facebook_HttpMethod::DELETE;
					break;
				}
		} 
		while (0);		
	}
}
void convert_com_facebook_InsightsLogger_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_InsightsLogger_1 *cxx_object = new com_facebook_InsightsLogger_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_InsightsLogger(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_InsightsLogger *cxx_object = new com_facebook_InsightsLogger(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_LegacyHelper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_LegacyHelper *cxx_object = new com_facebook_LegacyHelper(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_LoggingBehavior(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (com_facebook_LoggingBehavior::REQUESTS == cxx_value)
			{
				enum_string = "REQUESTS";
				break;
			}
			if (com_facebook_LoggingBehavior::INCLUDE_ACCESS_TOKENS == cxx_value)
			{
				enum_string = "INCLUDE_ACCESS_TOKENS";
				break;
			}
			if (com_facebook_LoggingBehavior::INCLUDE_RAW_RESPONSES == cxx_value)
			{
				enum_string = "INCLUDE_RAW_RESPONSES";
				break;
			}
			if (com_facebook_LoggingBehavior::CACHE == cxx_value)
			{
				enum_string = "CACHE";
				break;
			}
			if (com_facebook_LoggingBehavior::DEVELOPER_ERRORS == cxx_value)
			{
				enum_string = "DEVELOPER_ERRORS";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("com/facebook/LoggingBehavior"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("REQUESTS", enum_string) == 0)
				{
					cxx_value = com_facebook_LoggingBehavior::REQUESTS;
					break;
				}
				if (strcmp("INCLUDE_ACCESS_TOKENS", enum_string) == 0)
				{
					cxx_value = com_facebook_LoggingBehavior::INCLUDE_ACCESS_TOKENS;
					break;
				}
				if (strcmp("INCLUDE_RAW_RESPONSES", enum_string) == 0)
				{
					cxx_value = com_facebook_LoggingBehavior::INCLUDE_RAW_RESPONSES;
					break;
				}
				if (strcmp("CACHE", enum_string) == 0)
				{
					cxx_value = com_facebook_LoggingBehavior::CACHE;
					break;
				}
				if (strcmp("DEVELOPER_ERRORS", enum_string) == 0)
				{
					cxx_value = com_facebook_LoggingBehavior::DEVELOPER_ERRORS;
					break;
				}
		} 
		while (0);		
	}
}
void convert_com_facebook_LoginActivity_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_LoginActivity_1 *cxx_object = new com_facebook_LoginActivity_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_LoginActivity_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_LoginActivity_2 *cxx_object = new com_facebook_LoginActivity_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_LoginActivity(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_LoginActivity *cxx_object = new com_facebook_LoginActivity(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_NativeProtocol(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_NativeProtocol *cxx_object = new com_facebook_NativeProtocol(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_NonCachingTokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_NonCachingTokenCachingStrategy *cxx_object = new com_facebook_NonCachingTokenCachingStrategy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Request_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Request_1 *cxx_object = new com_facebook_Request_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Request_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Request_2 *cxx_object = new com_facebook_Request_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Request_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Request_3 *cxx_object = new com_facebook_Request_3(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Request_4(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Request_4 *cxx_object = new com_facebook_Request_4(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Request_5(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Request_5 *cxx_object = new com_facebook_Request_5(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Request_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Request_Callback *cxx_object = new com_facebook_Request_Callback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Request_GraphPlaceListCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Request_GraphPlaceListCallback *cxx_object = new com_facebook_Request_GraphPlaceListCallback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Request_GraphUserCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Request_GraphUserCallback *cxx_object = new com_facebook_Request_GraphUserCallback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Request_GraphUserListCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Request_GraphUserListCallback *cxx_object = new com_facebook_Request_GraphUserListCallback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Request_KeyValueSerializer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Request_KeyValueSerializer *cxx_object = new com_facebook_Request_KeyValueSerializer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Request(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Request *cxx_object = new com_facebook_Request(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_RequestAsyncTask(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_RequestAsyncTask *cxx_object = new com_facebook_RequestAsyncTask(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_RequestBatch_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_RequestBatch_Callback *cxx_object = new com_facebook_RequestBatch_Callback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_RequestBatch(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_RequestBatch *cxx_object = new com_facebook_RequestBatch(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Response_PagedResults(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Response_PagedResults *cxx_object = new com_facebook_Response_PagedResults(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Response_PagingDirection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (com_facebook_Response_PagingDirection::NEXT == cxx_value)
			{
				enum_string = "NEXT";
				break;
			}
			if (com_facebook_Response_PagingDirection::PREVIOUS == cxx_value)
			{
				enum_string = "PREVIOUS";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("com/facebook/Response$PagingDirection"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("NEXT", enum_string) == 0)
				{
					cxx_value = com_facebook_Response_PagingDirection::NEXT;
					break;
				}
				if (strcmp("PREVIOUS", enum_string) == 0)
				{
					cxx_value = com_facebook_Response_PagingDirection::PREVIOUS;
					break;
				}
		} 
		while (0);		
	}
}
void convert_com_facebook_Response_PagingInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Response_PagingInfo *cxx_object = new com_facebook_Response_PagingInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Response(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Response *cxx_object = new com_facebook_Response(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_1 *cxx_object = new com_facebook_Session_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_2 *cxx_object = new com_facebook_Session_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_3_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_3_1 *cxx_object = new com_facebook_Session_3_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_3 *cxx_object = new com_facebook_Session_3(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_AuthorizationRequest_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_AuthorizationRequest_1 *cxx_object = new com_facebook_Session_AuthorizationRequest_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_AuthorizationRequest_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_AuthorizationRequest_2 *cxx_object = new com_facebook_Session_AuthorizationRequest_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_AuthorizationRequest_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_AuthorizationRequest_3 *cxx_object = new com_facebook_Session_AuthorizationRequest_3(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_AuthorizationRequest_4(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_AuthorizationRequest_4 *cxx_object = new com_facebook_Session_AuthorizationRequest_4(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_AuthorizationRequest_AuthRequestSerializationProxyV1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_AuthorizationRequest_AuthRequestSerializationProxyV1 *cxx_object = new com_facebook_Session_AuthorizationRequest_AuthRequestSerializationProxyV1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_AuthorizationRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_AuthorizationRequest *cxx_object = new com_facebook_Session_AuthorizationRequest(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_AutoPublishAsyncTask(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_AutoPublishAsyncTask *cxx_object = new com_facebook_Session_AutoPublishAsyncTask(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_Builder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_Builder *cxx_object = new com_facebook_Session_Builder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_NewPermissionsRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_NewPermissionsRequest *cxx_object = new com_facebook_Session_NewPermissionsRequest(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_OpenRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_OpenRequest *cxx_object = new com_facebook_Session_OpenRequest(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_SerializationProxyV1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_SerializationProxyV1 *cxx_object = new com_facebook_Session_SerializationProxyV1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_StartActivityDelegate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_StartActivityDelegate *cxx_object = new com_facebook_Session_StartActivityDelegate(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_StatusCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_StatusCallback *cxx_object = new com_facebook_Session_StatusCallback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_TokenRefreshRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_TokenRefreshRequest *cxx_object = new com_facebook_Session_TokenRefreshRequest(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session_TokenRefreshRequestHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session_TokenRefreshRequestHandler *cxx_object = new com_facebook_Session_TokenRefreshRequestHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Session(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Session *cxx_object = new com_facebook_Session(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_SessionDefaultAudience(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (com_facebook_SessionDefaultAudience::NONE == cxx_value)
			{
				enum_string = "NONE";
				break;
			}
			if (com_facebook_SessionDefaultAudience::ONLY_ME == cxx_value)
			{
				enum_string = "ONLY_ME";
				break;
			}
			if (com_facebook_SessionDefaultAudience::FRIENDS == cxx_value)
			{
				enum_string = "FRIENDS";
				break;
			}
			if (com_facebook_SessionDefaultAudience::EVERYONE == cxx_value)
			{
				enum_string = "EVERYONE";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("com/facebook/SessionDefaultAudience"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("NONE", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionDefaultAudience::NONE;
					break;
				}
				if (strcmp("ONLY_ME", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionDefaultAudience::ONLY_ME;
					break;
				}
				if (strcmp("FRIENDS", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionDefaultAudience::FRIENDS;
					break;
				}
				if (strcmp("EVERYONE", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionDefaultAudience::EVERYONE;
					break;
				}
		} 
		while (0);		
	}
}
void convert_com_facebook_SessionLoginBehavior(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (com_facebook_SessionLoginBehavior::SSO_WITH_FALLBACK == cxx_value)
			{
				enum_string = "SSO_WITH_FALLBACK";
				break;
			}
			if (com_facebook_SessionLoginBehavior::SSO_ONLY == cxx_value)
			{
				enum_string = "SSO_ONLY";
				break;
			}
			if (com_facebook_SessionLoginBehavior::SUPPRESS_SSO == cxx_value)
			{
				enum_string = "SUPPRESS_SSO";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("com/facebook/SessionLoginBehavior"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("SSO_WITH_FALLBACK", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionLoginBehavior::SSO_WITH_FALLBACK;
					break;
				}
				if (strcmp("SSO_ONLY", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionLoginBehavior::SSO_ONLY;
					break;
				}
				if (strcmp("SUPPRESS_SSO", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionLoginBehavior::SUPPRESS_SSO;
					break;
				}
		} 
		while (0);		
	}
}
void convert_com_facebook_SessionState_Category(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (com_facebook_SessionState_Category::CREATED_CATEGORY == cxx_value)
			{
				enum_string = "CREATED_CATEGORY";
				break;
			}
			if (com_facebook_SessionState_Category::OPENED_CATEGORY == cxx_value)
			{
				enum_string = "OPENED_CATEGORY";
				break;
			}
			if (com_facebook_SessionState_Category::CLOSED_CATEGORY == cxx_value)
			{
				enum_string = "CLOSED_CATEGORY";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("com/facebook/SessionState$Category"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("CREATED_CATEGORY", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionState_Category::CREATED_CATEGORY;
					break;
				}
				if (strcmp("OPENED_CATEGORY", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionState_Category::OPENED_CATEGORY;
					break;
				}
				if (strcmp("CLOSED_CATEGORY", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionState_Category::CLOSED_CATEGORY;
					break;
				}
		} 
		while (0);		
	}
}
void convert_com_facebook_SessionState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (com_facebook_SessionState::CREATED == cxx_value)
			{
				enum_string = "CREATED";
				break;
			}
			if (com_facebook_SessionState::CREATED_TOKEN_LOADED == cxx_value)
			{
				enum_string = "CREATED_TOKEN_LOADED";
				break;
			}
			if (com_facebook_SessionState::OPENING == cxx_value)
			{
				enum_string = "OPENING";
				break;
			}
			if (com_facebook_SessionState::OPENED == cxx_value)
			{
				enum_string = "OPENED";
				break;
			}
			if (com_facebook_SessionState::OPENED_TOKEN_UPDATED == cxx_value)
			{
				enum_string = "OPENED_TOKEN_UPDATED";
				break;
			}
			if (com_facebook_SessionState::CLOSED_LOGIN_FAILED == cxx_value)
			{
				enum_string = "CLOSED_LOGIN_FAILED";
				break;
			}
			if (com_facebook_SessionState::CLOSED == cxx_value)
			{
				enum_string = "CLOSED";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("com/facebook/SessionState"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("CREATED", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionState::CREATED;
					break;
				}
				if (strcmp("CREATED_TOKEN_LOADED", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionState::CREATED_TOKEN_LOADED;
					break;
				}
				if (strcmp("OPENING", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionState::OPENING;
					break;
				}
				if (strcmp("OPENED", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionState::OPENED;
					break;
				}
				if (strcmp("OPENED_TOKEN_UPDATED", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionState::OPENED_TOKEN_UPDATED;
					break;
				}
				if (strcmp("CLOSED_LOGIN_FAILED", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionState::CLOSED_LOGIN_FAILED;
					break;
				}
				if (strcmp("CLOSED", enum_string) == 0)
				{
					cxx_value = com_facebook_SessionState::CLOSED;
					break;
				}
		} 
		while (0);		
	}
}
void convert_com_facebook_Settings_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Settings_1 *cxx_object = new com_facebook_Settings_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Settings_2_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Settings_2_1 *cxx_object = new com_facebook_Settings_2_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Settings_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Settings_2 *cxx_object = new com_facebook_Settings_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_Settings(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_Settings *cxx_object = new com_facebook_Settings(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_SharedPreferencesTokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_SharedPreferencesTokenCachingStrategy *cxx_object = new com_facebook_SharedPreferencesTokenCachingStrategy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_TestSession_FqlResponse(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_TestSession_FqlResponse *cxx_object = new com_facebook_TestSession_FqlResponse(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_TestSession_FqlResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_TestSession_FqlResult *cxx_object = new com_facebook_TestSession_FqlResult(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_TestSession_Mode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (com_facebook_TestSession_Mode::PRIVATE == cxx_value)
			{
				enum_string = "PRIVATE";
				break;
			}
			if (com_facebook_TestSession_Mode::SHARED == cxx_value)
			{
				enum_string = "SHARED";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("com/facebook/TestSession$Mode"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("PRIVATE", enum_string) == 0)
				{
					cxx_value = com_facebook_TestSession_Mode::PRIVATE;
					break;
				}
				if (strcmp("SHARED", enum_string) == 0)
				{
					cxx_value = com_facebook_TestSession_Mode::SHARED;
					break;
				}
		} 
		while (0);		
	}
}
void convert_com_facebook_TestSession_TestAccount(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_TestSession_TestAccount *cxx_object = new com_facebook_TestSession_TestAccount(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_TestSession_TestTokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_TestSession_TestTokenCachingStrategy *cxx_object = new com_facebook_TestSession_TestTokenCachingStrategy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_TestSession_UserAccount(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_TestSession_UserAccount *cxx_object = new com_facebook_TestSession_UserAccount(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_TestSession(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_TestSession *cxx_object = new com_facebook_TestSession(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_TokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_TokenCachingStrategy *cxx_object = new com_facebook_TokenCachingStrategy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver *cxx_object = new com_facebook_UiLifecycleHelper_ActiveSessionBroadcastReceiver(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_UiLifecycleHelper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_UiLifecycleHelper *cxx_object = new com_facebook_UiLifecycleHelper(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_AsyncFacebookRunner_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_AsyncFacebookRunner_1 *cxx_object = new com_facebook_android_AsyncFacebookRunner_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_AsyncFacebookRunner_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_AsyncFacebookRunner_2 *cxx_object = new com_facebook_android_AsyncFacebookRunner_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_AsyncFacebookRunner_RequestListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_AsyncFacebookRunner_RequestListener *cxx_object = new com_facebook_android_AsyncFacebookRunner_RequestListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_AsyncFacebookRunner(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_AsyncFacebookRunner *cxx_object = new com_facebook_android_AsyncFacebookRunner(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_DialogError(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_DialogError *cxx_object = new com_facebook_android_DialogError(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_Facebook_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_Facebook_1 *cxx_object = new com_facebook_android_Facebook_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_Facebook_DialogListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_Facebook_DialogListener *cxx_object = new com_facebook_android_Facebook_DialogListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_Facebook_ServiceListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_Facebook_ServiceListener *cxx_object = new com_facebook_android_Facebook_ServiceListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_Facebook_SetterTokenCachingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_Facebook_SetterTokenCachingStrategy *cxx_object = new com_facebook_android_Facebook_SetterTokenCachingStrategy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_Facebook_TokenRefreshConnectionHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_Facebook_TokenRefreshConnectionHandler *cxx_object = new com_facebook_android_Facebook_TokenRefreshConnectionHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_Facebook_TokenRefreshServiceConnection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_Facebook_TokenRefreshServiceConnection *cxx_object = new com_facebook_android_Facebook_TokenRefreshServiceConnection(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_Facebook(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_Facebook *cxx_object = new com_facebook_android_Facebook(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_FacebookError(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_FacebookError *cxx_object = new com_facebook_android_FacebookError(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_FbDialog_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_FbDialog_1 *cxx_object = new com_facebook_android_FbDialog_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_FbDialog(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_FbDialog *cxx_object = new com_facebook_android_FbDialog(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_android_Util(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_android_Util *cxx_object = new com_facebook_android_Util(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_GraphLocation(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_GraphLocation *cxx_object = new com_facebook_model_GraphLocation(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_GraphMultiResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_GraphMultiResult *cxx_object = new com_facebook_model_GraphMultiResult(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_GraphObject_Factory_GraphObjectListImpl(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_GraphObject_Factory_GraphObjectListImpl *cxx_object = new com_facebook_model_GraphObject_Factory_GraphObjectListImpl(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_GraphObject_Factory_GraphObjectProxy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_GraphObject_Factory_GraphObjectProxy *cxx_object = new com_facebook_model_GraphObject_Factory_GraphObjectProxy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_GraphObject_Factory_ProxyBase(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_GraphObject_Factory_ProxyBase *cxx_object = new com_facebook_model_GraphObject_Factory_ProxyBase(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_GraphObject_Factory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_GraphObject_Factory *cxx_object = new com_facebook_model_GraphObject_Factory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_GraphObject(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_GraphObject *cxx_object = new com_facebook_model_GraphObject(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_GraphObjectList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_GraphObjectList *cxx_object = new com_facebook_model_GraphObjectList(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_GraphPlace(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_GraphPlace *cxx_object = new com_facebook_model_GraphPlace(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_GraphUser(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_GraphUser *cxx_object = new com_facebook_model_GraphUser(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_JsonUtil_JSONObjectEntry(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_JsonUtil_JSONObjectEntry *cxx_object = new com_facebook_model_JsonUtil_JSONObjectEntry(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_JsonUtil(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_JsonUtil *cxx_object = new com_facebook_model_JsonUtil(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_OpenGraphAction(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_OpenGraphAction *cxx_object = new com_facebook_model_OpenGraphAction(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_model_PropertyName(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_model_PropertyName *cxx_object = new com_facebook_model_PropertyName(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback *cxx_object = new com_facebook_widget_FacebookFragment_DefaultSessionStatusCallback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_FacebookFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_FacebookFragment *cxx_object = new com_facebook_widget_FacebookFragment(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_FriendPickerFragment_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_FriendPickerFragment_1 *cxx_object = new com_facebook_widget_FriendPickerFragment_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_FriendPickerFragment_ImmediateLoadingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_FriendPickerFragment_ImmediateLoadingStrategy *cxx_object = new com_facebook_widget_FriendPickerFragment_ImmediateLoadingStrategy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_FriendPickerFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_FriendPickerFragment *cxx_object = new com_facebook_widget_FriendPickerFragment(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectAdapter_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectAdapter_1 *cxx_object = new com_facebook_widget_GraphObjectAdapter_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectAdapter_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectAdapter_2 *cxx_object = new com_facebook_widget_GraphObjectAdapter_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectAdapter_DataNeededListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectAdapter_DataNeededListener *cxx_object = new com_facebook_widget_GraphObjectAdapter_DataNeededListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectAdapter_Filter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectAdapter_Filter *cxx_object = new com_facebook_widget_GraphObjectAdapter_Filter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectAdapter_ItemPicture(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectAdapter_ItemPicture *cxx_object = new com_facebook_widget_GraphObjectAdapter_ItemPicture(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectAdapter_ItemPictureData(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectAdapter_ItemPictureData *cxx_object = new com_facebook_widget_GraphObjectAdapter_ItemPictureData(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectAdapter_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectAdapter_OnErrorListener *cxx_object = new com_facebook_widget_GraphObjectAdapter_OnErrorListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type::GRAPH_OBJECT == cxx_value)
			{
				enum_string = "GRAPH_OBJECT";
				break;
			}
			if (com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type::SECTION_HEADER == cxx_value)
			{
				enum_string = "SECTION_HEADER";
				break;
			}
			if (com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type::ACTIVITY_CIRCLE == cxx_value)
			{
				enum_string = "ACTIVITY_CIRCLE";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("com/facebook/widget/GraphObjectAdapter$SectionAndItem$Type"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("GRAPH_OBJECT", enum_string) == 0)
				{
					cxx_value = com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type::GRAPH_OBJECT;
					break;
				}
				if (strcmp("SECTION_HEADER", enum_string) == 0)
				{
					cxx_value = com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type::SECTION_HEADER;
					break;
				}
				if (strcmp("ACTIVITY_CIRCLE", enum_string) == 0)
				{
					cxx_value = com_facebook_widget_GraphObjectAdapter_SectionAndItem_Type::ACTIVITY_CIRCLE;
					break;
				}
		} 
		while (0);		
	}
}
void convert_com_facebook_widget_GraphObjectAdapter_SectionAndItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectAdapter_SectionAndItem *cxx_object = new com_facebook_widget_GraphObjectAdapter_SectionAndItem(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectAdapter *cxx_object = new com_facebook_widget_GraphObjectAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectCursor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectCursor *cxx_object = new com_facebook_widget_GraphObjectCursor(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectPagingLoader_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectPagingLoader_1 *cxx_object = new com_facebook_widget_GraphObjectPagingLoader_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectPagingLoader_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectPagingLoader_2 *cxx_object = new com_facebook_widget_GraphObjectPagingLoader_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectPagingLoader_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectPagingLoader_3 *cxx_object = new com_facebook_widget_GraphObjectPagingLoader_3(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectPagingLoader_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectPagingLoader_OnErrorListener *cxx_object = new com_facebook_widget_GraphObjectPagingLoader_OnErrorListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectPagingLoader_PagedResults(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectPagingLoader_PagedResults *cxx_object = new com_facebook_widget_GraphObjectPagingLoader_PagedResults(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_GraphObjectPagingLoader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_GraphObjectPagingLoader *cxx_object = new com_facebook_widget_GraphObjectPagingLoader(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ImageDownloader_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ImageDownloader_1 *cxx_object = new com_facebook_widget_ImageDownloader_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ImageDownloader_CacheReadWorkItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ImageDownloader_CacheReadWorkItem *cxx_object = new com_facebook_widget_ImageDownloader_CacheReadWorkItem(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ImageDownloader_DownloadImageWorkItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ImageDownloader_DownloadImageWorkItem *cxx_object = new com_facebook_widget_ImageDownloader_DownloadImageWorkItem(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ImageDownloader_DownloaderContext(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ImageDownloader_DownloaderContext *cxx_object = new com_facebook_widget_ImageDownloader_DownloaderContext(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ImageDownloader_RequestKey(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ImageDownloader_RequestKey *cxx_object = new com_facebook_widget_ImageDownloader_RequestKey(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ImageDownloader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ImageDownloader *cxx_object = new com_facebook_widget_ImageDownloader(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ImageRequest_Builder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ImageRequest_Builder *cxx_object = new com_facebook_widget_ImageRequest_Builder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ImageRequest_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ImageRequest_Callback *cxx_object = new com_facebook_widget_ImageRequest_Callback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ImageRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ImageRequest *cxx_object = new com_facebook_widget_ImageRequest(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ImageResponse(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ImageResponse *cxx_object = new com_facebook_widget_ImageResponse(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ImageResponseCache_BufferedHttpInputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ImageResponseCache_BufferedHttpInputStream *cxx_object = new com_facebook_widget_ImageResponseCache_BufferedHttpInputStream(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ImageResponseCache(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ImageResponseCache *cxx_object = new com_facebook_widget_ImageResponseCache(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_LoginButton_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_LoginButton_1 *cxx_object = new com_facebook_widget_LoginButton_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_LoginButton_LoginButtonCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_LoginButton_LoginButtonCallback *cxx_object = new com_facebook_widget_LoginButton_LoginButtonCallback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_LoginButton_LoginButtonProperties(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_LoginButton_LoginButtonProperties *cxx_object = new com_facebook_widget_LoginButton_LoginButtonProperties(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_LoginButton_LoginClickListener_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_LoginButton_LoginClickListener_1 *cxx_object = new com_facebook_widget_LoginButton_LoginClickListener_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_LoginButton_LoginClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_LoginButton_LoginClickListener *cxx_object = new com_facebook_widget_LoginButton_LoginClickListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_LoginButton_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_LoginButton_OnErrorListener *cxx_object = new com_facebook_widget_LoginButton_OnErrorListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_LoginButton_UserInfoChangedCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_LoginButton_UserInfoChangedCallback *cxx_object = new com_facebook_widget_LoginButton_UserInfoChangedCallback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_LoginButton(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_LoginButton *cxx_object = new com_facebook_widget_LoginButton(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_1 *cxx_object = new com_facebook_widget_PickerFragment_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_2 *cxx_object = new com_facebook_widget_PickerFragment_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_3 *cxx_object = new com_facebook_widget_PickerFragment_3(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_4(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_4 *cxx_object = new com_facebook_widget_PickerFragment_4(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_5(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_5 *cxx_object = new com_facebook_widget_PickerFragment_5(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_6(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_6 *cxx_object = new com_facebook_widget_PickerFragment_6(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_GraphObjectFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_GraphObjectFilter *cxx_object = new com_facebook_widget_PickerFragment_GraphObjectFilter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_LoadingStrategy_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_LoadingStrategy_1 *cxx_object = new com_facebook_widget_PickerFragment_LoadingStrategy_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_LoadingStrategy_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_LoadingStrategy_2 *cxx_object = new com_facebook_widget_PickerFragment_LoadingStrategy_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_LoadingStrategy_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_LoadingStrategy_3 *cxx_object = new com_facebook_widget_PickerFragment_LoadingStrategy_3(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_LoadingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_LoadingStrategy *cxx_object = new com_facebook_widget_PickerFragment_LoadingStrategy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_MultiSelectionStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_MultiSelectionStrategy *cxx_object = new com_facebook_widget_PickerFragment_MultiSelectionStrategy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_OnDataChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_OnDataChangedListener *cxx_object = new com_facebook_widget_PickerFragment_OnDataChangedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_OnDoneButtonClickedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_OnDoneButtonClickedListener *cxx_object = new com_facebook_widget_PickerFragment_OnDoneButtonClickedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_OnErrorListener *cxx_object = new com_facebook_widget_PickerFragment_OnErrorListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_OnSelectionChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_OnSelectionChangedListener *cxx_object = new com_facebook_widget_PickerFragment_OnSelectionChangedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_PickerFragmentAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_PickerFragmentAdapter *cxx_object = new com_facebook_widget_PickerFragment_PickerFragmentAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_SelectionStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_SelectionStrategy *cxx_object = new com_facebook_widget_PickerFragment_SelectionStrategy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment_SingleSelectionStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment_SingleSelectionStrategy *cxx_object = new com_facebook_widget_PickerFragment_SingleSelectionStrategy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PickerFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PickerFragment *cxx_object = new com_facebook_widget_PickerFragment(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PlacePickerFragment_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PlacePickerFragment_1 *cxx_object = new com_facebook_widget_PlacePickerFragment_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PlacePickerFragment_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PlacePickerFragment_2 *cxx_object = new com_facebook_widget_PlacePickerFragment_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PlacePickerFragment_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PlacePickerFragment_3 *cxx_object = new com_facebook_widget_PlacePickerFragment_3(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy_1 *cxx_object = new com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy *cxx_object = new com_facebook_widget_PlacePickerFragment_AsNeededLoadingStrategy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PlacePickerFragment_SearchTextWatcher(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PlacePickerFragment_SearchTextWatcher *cxx_object = new com_facebook_widget_PlacePickerFragment_SearchTextWatcher(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_PlacePickerFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_PlacePickerFragment *cxx_object = new com_facebook_widget_PlacePickerFragment(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ProfilePictureView_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ProfilePictureView_1 *cxx_object = new com_facebook_widget_ProfilePictureView_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ProfilePictureView_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ProfilePictureView_OnErrorListener *cxx_object = new com_facebook_widget_ProfilePictureView_OnErrorListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_ProfilePictureView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_ProfilePictureView *cxx_object = new com_facebook_widget_ProfilePictureView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_SimpleGraphObjectCursor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_SimpleGraphObjectCursor *cxx_object = new com_facebook_widget_SimpleGraphObjectCursor(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_UrlRedirectCache(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_UrlRedirectCache *cxx_object = new com_facebook_widget_UrlRedirectCache(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_UserSettingsFragment_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_UserSettingsFragment_1 *cxx_object = new com_facebook_widget_UserSettingsFragment_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_UserSettingsFragment_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_UserSettingsFragment_2 *cxx_object = new com_facebook_widget_UserSettingsFragment_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_UserSettingsFragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_UserSettingsFragment *cxx_object = new com_facebook_widget_UserSettingsFragment(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WebDialog_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WebDialog_1 *cxx_object = new com_facebook_widget_WebDialog_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WebDialog_2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WebDialog_2 *cxx_object = new com_facebook_widget_WebDialog_2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WebDialog_3(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WebDialog_3 *cxx_object = new com_facebook_widget_WebDialog_3(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WebDialog_Builder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WebDialog_Builder *cxx_object = new com_facebook_widget_WebDialog_Builder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WebDialog_BuilderBase(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WebDialog_BuilderBase *cxx_object = new com_facebook_widget_WebDialog_BuilderBase(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WebDialog_DialogWebViewClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WebDialog_DialogWebViewClient *cxx_object = new com_facebook_widget_WebDialog_DialogWebViewClient(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WebDialog_FeedDialogBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WebDialog_FeedDialogBuilder *cxx_object = new com_facebook_widget_WebDialog_FeedDialogBuilder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WebDialog_OnCompleteListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WebDialog_OnCompleteListener *cxx_object = new com_facebook_widget_WebDialog_OnCompleteListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WebDialog_RequestsDialogBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WebDialog_RequestsDialogBuilder *cxx_object = new com_facebook_widget_WebDialog_RequestsDialogBuilder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WebDialog(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WebDialog *cxx_object = new com_facebook_widget_WebDialog(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WorkQueue_1(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WorkQueue_1 *cxx_object = new com_facebook_widget_WorkQueue_1(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WorkQueue_WorkItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WorkQueue_WorkItem *cxx_object = new com_facebook_widget_WorkQueue_WorkItem(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WorkQueue_WorkNode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WorkQueue_WorkNode *cxx_object = new com_facebook_widget_WorkQueue_WorkNode(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_com_facebook_widget_WorkQueue(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		java_value = (long) ctx->findProxyComponent(cxx_value);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		Proxy proxy;
		proxy.address = (long) java_value;
		com_facebook_widget_WorkQueue *cxx_object = new com_facebook_widget_WorkQueue(proxy);
		cxx_value = (long) cxx_object;
	}
}

