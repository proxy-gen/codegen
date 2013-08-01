/*
 * Implementation (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



#include <AndroidCXXConverter.hpp>

#define LOG_TAG "AndroidCXXConverter"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

// Proxy Converter Types
void convert_java_math_BigDecimal(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_math_BigDecimal *cxx_object = new java_math_BigDecimal(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_String(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_String *cxx_object = new java_lang_String(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_Proxy_Type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (java_net_Proxy_Type::DIRECT == cxx_value)
			{
				enum_string = "DIRECT";
				break;
			}
			if (java_net_Proxy_Type::HTTP == cxx_value)
			{
				enum_string = "HTTP";
				break;
			}
			if (java_net_Proxy_Type::SOCKS == cxx_value)
			{
				enum_string = "SOCKS";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("java/net/Proxy$Type"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("DIRECT", enum_string) == 0)
				{
					cxx_value = java_net_Proxy_Type::DIRECT;
					break;
				}
				if (strcmp("HTTP", enum_string) == 0)
				{
					cxx_value = java_net_Proxy_Type::HTTP;
					break;
				}
				if (strcmp("SOCKS", enum_string) == 0)
				{
					cxx_value = java_net_Proxy_Type::SOCKS;
					break;
				}
		} 
		while (0);		
	}
}
void convert_org_json_JSONObject(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		org_json_JSONObject *cxx_object = new org_json_JSONObject(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_org_json_JSONArray(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		org_json_JSONArray *cxx_object = new org_json_JSONArray(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Error(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Error *cxx_object = new java_lang_Error(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_concurrent_Executor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_concurrent_Executor *cxx_object = new java_util_concurrent_Executor(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_BufferedOutputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_BufferedOutputStream *cxx_object = new java_io_BufferedOutputStream(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_FileNotFoundException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_FileNotFoundException *cxx_object = new java_io_FileNotFoundException(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_IOException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_IOException *cxx_object = new java_io_IOException(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_Closeable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_Closeable *cxx_object = new java_io_Closeable(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_HttpURLConnection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_HttpURLConnection *cxx_object = new java_net_HttpURLConnection(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_MalformedURLException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_MalformedURLException *cxx_object = new java_net_MalformedURLException(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Currency(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_Currency *cxx_object = new java_util_Currency(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_location_Location(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_location_Location *cxx_object = new android_location_Location(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_net_http_SslError(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_net_http_SslError *cxx_object = new android_net_http_SslError(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_Parcel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_Parcel *cxx_object = new android_os_Parcel(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_support_v4_app_Fragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_support_v4_app_Fragment *cxx_object = new android_support_v4_app_Fragment(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_WebView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_WebView *cxx_object = new android_webkit_WebView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_SslErrorHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_SslErrorHandler *cxx_object = new android_webkit_SslErrorHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AbsListView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AbsListView *cxx_object = new android_widget_AbsListView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AbsListView_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AbsListView_LayoutParams *cxx_object = new android_widget_AbsListView_LayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AbsListView_MultiChoiceModeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AbsListView_MultiChoiceModeListener *cxx_object = new android_widget_AbsListView_MultiChoiceModeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AbsListView_OnScrollListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AbsListView_OnScrollListener *cxx_object = new android_widget_AbsListView_OnScrollListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AbsListView_RecyclerListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AbsListView_RecyclerListener *cxx_object = new android_widget_AbsListView_RecyclerListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AbsListView_SelectionBoundsAdjuster(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AbsListView_SelectionBoundsAdjuster *cxx_object = new android_widget_AbsListView_SelectionBoundsAdjuster(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Adapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Adapter *cxx_object = new android_widget_Adapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AdapterView_OnItemClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AdapterView_OnItemClickListener *cxx_object = new android_widget_AdapterView_OnItemClickListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AdapterView_OnItemLongClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AdapterView_OnItemLongClickListener *cxx_object = new android_widget_AdapterView_OnItemLongClickListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AdapterView_OnItemSelectedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AdapterView_OnItemSelectedListener *cxx_object = new android_widget_AdapterView_OnItemSelectedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Advanceable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Advanceable *cxx_object = new android_widget_Advanceable(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AutoCompleteTextView_OnDismissListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AutoCompleteTextView_OnDismissListener *cxx_object = new android_widget_AutoCompleteTextView_OnDismissListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AutoCompleteTextView_Validator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AutoCompleteTextView_Validator *cxx_object = new android_widget_AutoCompleteTextView_Validator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_CalendarView_OnDateChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_CalendarView_OnDateChangeListener *cxx_object = new android_widget_CalendarView_OnDateChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Checkable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Checkable *cxx_object = new android_widget_Checkable(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Chronometer_OnChronometerTickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Chronometer_OnChronometerTickListener *cxx_object = new android_widget_Chronometer_OnChronometerTickListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_CompoundButton_OnCheckedChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_CompoundButton_OnCheckedChangeListener *cxx_object = new android_widget_CompoundButton_OnCheckedChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_DatePicker_OnDateChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_DatePicker_OnDateChangedListener *cxx_object = new android_widget_DatePicker_OnDateChangedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ExpandableListAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ExpandableListAdapter *cxx_object = new android_widget_ExpandableListAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ExpandableListView_OnChildClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ExpandableListView_OnChildClickListener *cxx_object = new android_widget_ExpandableListView_OnChildClickListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ExpandableListView_OnGroupClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ExpandableListView_OnGroupClickListener *cxx_object = new android_widget_ExpandableListView_OnGroupClickListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ExpandableListView_OnGroupCollapseListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ExpandableListView_OnGroupCollapseListener *cxx_object = new android_widget_ExpandableListView_OnGroupCollapseListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ExpandableListView_OnGroupExpandListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ExpandableListView_OnGroupExpandListener *cxx_object = new android_widget_ExpandableListView_OnGroupExpandListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Filter_FilterListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Filter_FilterListener *cxx_object = new android_widget_Filter_FilterListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Filterable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Filterable *cxx_object = new android_widget_Filterable(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_FilterQueryProvider(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_FilterQueryProvider *cxx_object = new android_widget_FilterQueryProvider(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_HeterogeneousExpandableList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_HeterogeneousExpandableList *cxx_object = new android_widget_HeterogeneousExpandableList(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ListAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ListAdapter *cxx_object = new android_widget_ListAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_MediaController_MediaPlayerControl(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_MediaController_MediaPlayerControl *cxx_object = new android_widget_MediaController_MediaPlayerControl(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_MultiAutoCompleteTextView_Tokenizer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_MultiAutoCompleteTextView_Tokenizer *cxx_object = new android_widget_MultiAutoCompleteTextView_Tokenizer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_NumberPicker_Formatter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_NumberPicker_Formatter *cxx_object = new android_widget_NumberPicker_Formatter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_NumberPicker_OnScrollListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_NumberPicker_OnScrollListener *cxx_object = new android_widget_NumberPicker_OnScrollListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_NumberPicker_OnValueChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_NumberPicker_OnValueChangeListener *cxx_object = new android_widget_NumberPicker_OnValueChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_PopupMenu_OnDismissListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_PopupMenu_OnDismissListener *cxx_object = new android_widget_PopupMenu_OnDismissListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_PopupMenu_OnMenuItemClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_PopupMenu_OnMenuItemClickListener *cxx_object = new android_widget_PopupMenu_OnMenuItemClickListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_PopupWindow_OnDismissListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_PopupWindow_OnDismissListener *cxx_object = new android_widget_PopupWindow_OnDismissListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_RadioGroup_OnCheckedChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_RadioGroup_OnCheckedChangeListener *cxx_object = new android_widget_RadioGroup_OnCheckedChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_RatingBar_OnRatingBarChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_RatingBar_OnRatingBarChangeListener *cxx_object = new android_widget_RatingBar_OnRatingBarChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_RemoteViewsService_RemoteViewsFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_RemoteViewsService_RemoteViewsFactory *cxx_object = new android_widget_RemoteViewsService_RemoteViewsFactory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SearchView_OnCloseListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SearchView_OnCloseListener *cxx_object = new android_widget_SearchView_OnCloseListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SearchView_OnQueryTextListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SearchView_OnQueryTextListener *cxx_object = new android_widget_SearchView_OnQueryTextListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SearchView_OnSuggestionListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SearchView_OnSuggestionListener *cxx_object = new android_widget_SearchView_OnSuggestionListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SectionIndexer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SectionIndexer *cxx_object = new android_widget_SectionIndexer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SeekBar_OnSeekBarChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SeekBar_OnSeekBarChangeListener *cxx_object = new android_widget_SeekBar_OnSeekBarChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ShareActionProvider_OnShareTargetSelectedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ShareActionProvider_OnShareTargetSelectedListener *cxx_object = new android_widget_ShareActionProvider_OnShareTargetSelectedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SimpleAdapter_ViewBinder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SimpleAdapter_ViewBinder *cxx_object = new android_widget_SimpleAdapter_ViewBinder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SimpleCursorAdapter_CursorToStringConverter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SimpleCursorAdapter_CursorToStringConverter *cxx_object = new android_widget_SimpleCursorAdapter_CursorToStringConverter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SimpleCursorAdapter_ViewBinder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SimpleCursorAdapter_ViewBinder *cxx_object = new android_widget_SimpleCursorAdapter_ViewBinder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SimpleCursorTreeAdapter_ViewBinder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SimpleCursorTreeAdapter_ViewBinder *cxx_object = new android_widget_SimpleCursorTreeAdapter_ViewBinder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SlidingDrawer_OnDrawerCloseListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SlidingDrawer_OnDrawerCloseListener *cxx_object = new android_widget_SlidingDrawer_OnDrawerCloseListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SlidingDrawer_OnDrawerOpenListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SlidingDrawer_OnDrawerOpenListener *cxx_object = new android_widget_SlidingDrawer_OnDrawerOpenListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SlidingDrawer_OnDrawerScrollListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SlidingDrawer_OnDrawerScrollListener *cxx_object = new android_widget_SlidingDrawer_OnDrawerScrollListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SpinnerAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SpinnerAdapter *cxx_object = new android_widget_SpinnerAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TabHost_OnTabChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TabHost_OnTabChangeListener *cxx_object = new android_widget_TabHost_OnTabChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TabHost_TabContentFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TabHost_TabContentFactory *cxx_object = new android_widget_TabHost_TabContentFactory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TextView_OnEditorActionListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TextView_OnEditorActionListener *cxx_object = new android_widget_TextView_OnEditorActionListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TimePicker_OnTimeChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TimePicker_OnTimeChangedListener *cxx_object = new android_widget_TimePicker_OnTimeChangedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ViewSwitcher_ViewFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ViewSwitcher_ViewFactory *cxx_object = new android_widget_ViewSwitcher_ViewFactory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_WrapperListAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_WrapperListAdapter *cxx_object = new android_widget_WrapperListAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ZoomButtonsController_OnZoomListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ZoomButtonsController_OnZoomListener *cxx_object = new android_widget_ZoomButtonsController_OnZoomListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AbsoluteLayout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AbsoluteLayout *cxx_object = new android_widget_AbsoluteLayout(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AbsoluteLayout_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AbsoluteLayout_LayoutParams *cxx_object = new android_widget_AbsoluteLayout_LayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AbsSeekBar(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AbsSeekBar *cxx_object = new android_widget_AbsSeekBar(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AbsSpinner(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AbsSpinner *cxx_object = new android_widget_AbsSpinner(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AdapterView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AdapterView *cxx_object = new android_widget_AdapterView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AdapterView_AdapterContextMenuInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AdapterView_AdapterContextMenuInfo *cxx_object = new android_widget_AdapterView_AdapterContextMenuInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AdapterViewAnimator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AdapterViewAnimator *cxx_object = new android_widget_AdapterViewAnimator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AdapterViewFlipper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AdapterViewFlipper *cxx_object = new android_widget_AdapterViewFlipper(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AlphabetIndexer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AlphabetIndexer *cxx_object = new android_widget_AlphabetIndexer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AnalogClock(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AnalogClock *cxx_object = new android_widget_AnalogClock(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ArrayAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ArrayAdapter *cxx_object = new android_widget_ArrayAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_AutoCompleteTextView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_AutoCompleteTextView *cxx_object = new android_widget_AutoCompleteTextView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_BaseAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_BaseAdapter *cxx_object = new android_widget_BaseAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_BaseExpandableListAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_BaseExpandableListAdapter *cxx_object = new android_widget_BaseExpandableListAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Button(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Button *cxx_object = new android_widget_Button(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_CalendarView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_CalendarView *cxx_object = new android_widget_CalendarView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_CheckBox(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_CheckBox *cxx_object = new android_widget_CheckBox(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_CheckedTextView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_CheckedTextView *cxx_object = new android_widget_CheckedTextView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Chronometer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Chronometer *cxx_object = new android_widget_Chronometer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_CompoundButton(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_CompoundButton *cxx_object = new android_widget_CompoundButton(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_CursorAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_CursorAdapter *cxx_object = new android_widget_CursorAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_CursorTreeAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_CursorTreeAdapter *cxx_object = new android_widget_CursorTreeAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_DatePicker(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_DatePicker *cxx_object = new android_widget_DatePicker(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_DialerFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_DialerFilter *cxx_object = new android_widget_DialerFilter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_DigitalClock(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_DigitalClock *cxx_object = new android_widget_DigitalClock(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_EdgeEffect(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_EdgeEffect *cxx_object = new android_widget_EdgeEffect(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_EditText(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_EditText *cxx_object = new android_widget_EditText(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ExpandableListView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ExpandableListView *cxx_object = new android_widget_ExpandableListView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ExpandableListView_ExpandableListContextMenuInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ExpandableListView_ExpandableListContextMenuInfo *cxx_object = new android_widget_ExpandableListView_ExpandableListContextMenuInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Filter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Filter *cxx_object = new android_widget_Filter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Filter_FilterResults(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Filter_FilterResults *cxx_object = new android_widget_Filter_FilterResults(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_FrameLayout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_FrameLayout *cxx_object = new android_widget_FrameLayout(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_FrameLayout_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_FrameLayout_LayoutParams *cxx_object = new android_widget_FrameLayout_LayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Gallery(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Gallery *cxx_object = new android_widget_Gallery(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Gallery_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Gallery_LayoutParams *cxx_object = new android_widget_Gallery_LayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_GridLayout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_GridLayout *cxx_object = new android_widget_GridLayout(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_GridLayout_Alignment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_GridLayout_Alignment *cxx_object = new android_widget_GridLayout_Alignment(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_GridLayout_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_GridLayout_LayoutParams *cxx_object = new android_widget_GridLayout_LayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_GridLayout_Spec(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_GridLayout_Spec *cxx_object = new android_widget_GridLayout_Spec(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_GridView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_GridView *cxx_object = new android_widget_GridView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_HeaderViewListAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_HeaderViewListAdapter *cxx_object = new android_widget_HeaderViewListAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_HorizontalScrollView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_HorizontalScrollView *cxx_object = new android_widget_HorizontalScrollView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ImageButton(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ImageButton *cxx_object = new android_widget_ImageButton(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ImageSwitcher(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ImageSwitcher *cxx_object = new android_widget_ImageSwitcher(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ImageView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ImageView *cxx_object = new android_widget_ImageView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_LinearLayout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_LinearLayout *cxx_object = new android_widget_LinearLayout(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_LinearLayout_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_LinearLayout_LayoutParams *cxx_object = new android_widget_LinearLayout_LayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ListPopupWindow(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ListPopupWindow *cxx_object = new android_widget_ListPopupWindow(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ListView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ListView *cxx_object = new android_widget_ListView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ListView_FixedViewInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ListView_FixedViewInfo *cxx_object = new android_widget_ListView_FixedViewInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_MediaController(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_MediaController *cxx_object = new android_widget_MediaController(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_MultiAutoCompleteTextView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_MultiAutoCompleteTextView *cxx_object = new android_widget_MultiAutoCompleteTextView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_MultiAutoCompleteTextView_CommaTokenizer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_MultiAutoCompleteTextView_CommaTokenizer *cxx_object = new android_widget_MultiAutoCompleteTextView_CommaTokenizer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_NumberPicker(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_NumberPicker *cxx_object = new android_widget_NumberPicker(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_OverScroller(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_OverScroller *cxx_object = new android_widget_OverScroller(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_PopupMenu(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_PopupMenu *cxx_object = new android_widget_PopupMenu(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_PopupWindow(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_PopupWindow *cxx_object = new android_widget_PopupWindow(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ProgressBar(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ProgressBar *cxx_object = new android_widget_ProgressBar(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_QuickContactBadge(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_QuickContactBadge *cxx_object = new android_widget_QuickContactBadge(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_RadioButton(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_RadioButton *cxx_object = new android_widget_RadioButton(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_RadioGroup(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_RadioGroup *cxx_object = new android_widget_RadioGroup(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_RadioGroup_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_RadioGroup_LayoutParams *cxx_object = new android_widget_RadioGroup_LayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_RatingBar(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_RatingBar *cxx_object = new android_widget_RatingBar(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_RelativeLayout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_RelativeLayout *cxx_object = new android_widget_RelativeLayout(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_RelativeLayout_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_RelativeLayout_LayoutParams *cxx_object = new android_widget_RelativeLayout_LayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_RemoteViews(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_RemoteViews *cxx_object = new android_widget_RemoteViews(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_RemoteViewsService(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_RemoteViewsService *cxx_object = new android_widget_RemoteViewsService(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ResourceCursorAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ResourceCursorAdapter *cxx_object = new android_widget_ResourceCursorAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ResourceCursorTreeAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ResourceCursorTreeAdapter *cxx_object = new android_widget_ResourceCursorTreeAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Scroller(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Scroller *cxx_object = new android_widget_Scroller(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ScrollView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ScrollView *cxx_object = new android_widget_ScrollView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SearchView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SearchView *cxx_object = new android_widget_SearchView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SeekBar(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SeekBar *cxx_object = new android_widget_SeekBar(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ShareActionProvider(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ShareActionProvider *cxx_object = new android_widget_ShareActionProvider(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SimpleAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SimpleAdapter *cxx_object = new android_widget_SimpleAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SimpleCursorAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SimpleCursorAdapter *cxx_object = new android_widget_SimpleCursorAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SimpleCursorTreeAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SimpleCursorTreeAdapter *cxx_object = new android_widget_SimpleCursorTreeAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SimpleExpandableListAdapter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SimpleExpandableListAdapter *cxx_object = new android_widget_SimpleExpandableListAdapter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_SlidingDrawer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_SlidingDrawer *cxx_object = new android_widget_SlidingDrawer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Space(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Space *cxx_object = new android_widget_Space(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Spinner(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Spinner *cxx_object = new android_widget_Spinner(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_StackView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_StackView *cxx_object = new android_widget_StackView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Switch(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Switch *cxx_object = new android_widget_Switch(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TabHost(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TabHost *cxx_object = new android_widget_TabHost(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TabHost_TabSpec(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TabHost_TabSpec *cxx_object = new android_widget_TabHost_TabSpec(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TableLayout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TableLayout *cxx_object = new android_widget_TableLayout(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TableLayout_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TableLayout_LayoutParams *cxx_object = new android_widget_TableLayout_LayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TableRow(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TableRow *cxx_object = new android_widget_TableRow(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TableRow_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TableRow_LayoutParams *cxx_object = new android_widget_TableRow_LayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TabWidget(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TabWidget *cxx_object = new android_widget_TabWidget(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TextClock(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TextClock *cxx_object = new android_widget_TextClock(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TextSwitcher(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TextSwitcher *cxx_object = new android_widget_TextSwitcher(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TextView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TextView *cxx_object = new android_widget_TextView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TextView_SavedState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TextView_SavedState *cxx_object = new android_widget_TextView_SavedState(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TimePicker(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TimePicker *cxx_object = new android_widget_TimePicker(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_Toast(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_Toast *cxx_object = new android_widget_Toast(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ToggleButton(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ToggleButton *cxx_object = new android_widget_ToggleButton(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_TwoLineListItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_TwoLineListItem *cxx_object = new android_widget_TwoLineListItem(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_VideoView(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_VideoView *cxx_object = new android_widget_VideoView(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ViewAnimator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ViewAnimator *cxx_object = new android_widget_ViewAnimator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ViewFlipper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ViewFlipper *cxx_object = new android_widget_ViewFlipper(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ViewSwitcher(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ViewSwitcher *cxx_object = new android_widget_ViewSwitcher(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ZoomButton(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ZoomButton *cxx_object = new android_widget_ZoomButton(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ZoomButtonsController(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ZoomButtonsController *cxx_object = new android_widget_ZoomButtonsController(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ZoomControls(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_ZoomControls *cxx_object = new android_widget_ZoomControls(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_widget_ImageView_ScaleType(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_widget_ImageView_ScaleType::CENTER == cxx_value)
			{
				enum_string = "CENTER";
				break;
			}
			if (android_widget_ImageView_ScaleType::CENTER_CROP == cxx_value)
			{
				enum_string = "CENTER_CROP";
				break;
			}
			if (android_widget_ImageView_ScaleType::CENTER_INSIDE == cxx_value)
			{
				enum_string = "CENTER_INSIDE";
				break;
			}
			if (android_widget_ImageView_ScaleType::FIT_CENTER == cxx_value)
			{
				enum_string = "FIT_CENTER";
				break;
			}
			if (android_widget_ImageView_ScaleType::FIT_END == cxx_value)
			{
				enum_string = "FIT_END";
				break;
			}
			if (android_widget_ImageView_ScaleType::FIT_START == cxx_value)
			{
				enum_string = "FIT_START";
				break;
			}
			if (android_widget_ImageView_ScaleType::FIT_XY == cxx_value)
			{
				enum_string = "FIT_XY";
				break;
			}
			if (android_widget_ImageView_ScaleType::MATRIX == cxx_value)
			{
				enum_string = "MATRIX";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/widget/ImageView$ScaleType"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("CENTER", enum_string) == 0)
				{
					cxx_value = android_widget_ImageView_ScaleType::CENTER;
					break;
				}
				if (strcmp("CENTER_CROP", enum_string) == 0)
				{
					cxx_value = android_widget_ImageView_ScaleType::CENTER_CROP;
					break;
				}
				if (strcmp("CENTER_INSIDE", enum_string) == 0)
				{
					cxx_value = android_widget_ImageView_ScaleType::CENTER_INSIDE;
					break;
				}
				if (strcmp("FIT_CENTER", enum_string) == 0)
				{
					cxx_value = android_widget_ImageView_ScaleType::FIT_CENTER;
					break;
				}
				if (strcmp("FIT_END", enum_string) == 0)
				{
					cxx_value = android_widget_ImageView_ScaleType::FIT_END;
					break;
				}
				if (strcmp("FIT_START", enum_string) == 0)
				{
					cxx_value = android_widget_ImageView_ScaleType::FIT_START;
					break;
				}
				if (strcmp("FIT_XY", enum_string) == 0)
				{
					cxx_value = android_widget_ImageView_ScaleType::FIT_XY;
					break;
				}
				if (strcmp("MATRIX", enum_string) == 0)
				{
					cxx_value = android_widget_ImageView_ScaleType::MATRIX;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_widget_TextView_BufferType(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_widget_TextView_BufferType::EDITABLE == cxx_value)
			{
				enum_string = "EDITABLE";
				break;
			}
			if (android_widget_TextView_BufferType::NORMAL == cxx_value)
			{
				enum_string = "NORMAL";
				break;
			}
			if (android_widget_TextView_BufferType::SPANNABLE == cxx_value)
			{
				enum_string = "SPANNABLE";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/widget/TextView$BufferType"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("EDITABLE", enum_string) == 0)
				{
					cxx_value = android_widget_TextView_BufferType::EDITABLE;
					break;
				}
				if (strcmp("NORMAL", enum_string) == 0)
				{
					cxx_value = android_widget_TextView_BufferType::NORMAL;
					break;
				}
				if (strcmp("SPANNABLE", enum_string) == 0)
				{
					cxx_value = android_widget_TextView_BufferType::SPANNABLE;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_widget_RemoteViews_ActionException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_widget_RemoteViews_ActionException *cxx_object = new android_widget_RemoteViews_ActionException(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_math_MathContext(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_math_MathContext *cxx_object = new java_math_MathContext(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_math_RoundingMode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (java_math_RoundingMode::UP == cxx_value)
			{
				enum_string = "UP";
				break;
			}
			if (java_math_RoundingMode::DOWN == cxx_value)
			{
				enum_string = "DOWN";
				break;
			}
			if (java_math_RoundingMode::CEILING == cxx_value)
			{
				enum_string = "CEILING";
				break;
			}
			if (java_math_RoundingMode::FLOOR == cxx_value)
			{
				enum_string = "FLOOR";
				break;
			}
			if (java_math_RoundingMode::HALF_UP == cxx_value)
			{
				enum_string = "HALF_UP";
				break;
			}
			if (java_math_RoundingMode::HALF_DOWN == cxx_value)
			{
				enum_string = "HALF_DOWN";
				break;
			}
			if (java_math_RoundingMode::HALF_EVEN == cxx_value)
			{
				enum_string = "HALF_EVEN";
				break;
			}
			if (java_math_RoundingMode::UNNECESSARY == cxx_value)
			{
				enum_string = "UNNECESSARY";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("java/math/RoundingMode"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("UP", enum_string) == 0)
				{
					cxx_value = java_math_RoundingMode::UP;
					break;
				}
				if (strcmp("DOWN", enum_string) == 0)
				{
					cxx_value = java_math_RoundingMode::DOWN;
					break;
				}
				if (strcmp("CEILING", enum_string) == 0)
				{
					cxx_value = java_math_RoundingMode::CEILING;
					break;
				}
				if (strcmp("FLOOR", enum_string) == 0)
				{
					cxx_value = java_math_RoundingMode::FLOOR;
					break;
				}
				if (strcmp("HALF_UP", enum_string) == 0)
				{
					cxx_value = java_math_RoundingMode::HALF_UP;
					break;
				}
				if (strcmp("HALF_DOWN", enum_string) == 0)
				{
					cxx_value = java_math_RoundingMode::HALF_DOWN;
					break;
				}
				if (strcmp("HALF_EVEN", enum_string) == 0)
				{
					cxx_value = java_math_RoundingMode::HALF_EVEN;
					break;
				}
				if (strcmp("UNNECESSARY", enum_string) == 0)
				{
					cxx_value = java_math_RoundingMode::UNNECESSARY;
					break;
				}
		} 
		while (0);		
	}
}
void convert_java_nio_charset_Charset(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_charset_Charset *cxx_object = new java_nio_charset_Charset(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Object(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Object *cxx_object = new java_lang_Object(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Class(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Class *cxx_object = new java_lang_Class(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_ClassLoader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_ClassLoader *cxx_object = new java_lang_ClassLoader(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_InputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_InputStream *cxx_object = new java_io_InputStream(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_URL(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_URL *cxx_object = new java_net_URL(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_URLStreamHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_URLStreamHandler *cxx_object = new java_net_URLStreamHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_URI(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_URI *cxx_object = new java_net_URI(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_Proxy(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_Proxy *cxx_object = new java_net_Proxy(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_SocketAddress(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_SocketAddress *cxx_object = new java_net_SocketAddress(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_URLConnection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_URLConnection *cxx_object = new java_net_URLConnection(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_Permission(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_security_Permission *cxx_object = new java_security_Permission(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_PermissionCollection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_security_PermissionCollection *cxx_object = new java_security_PermissionCollection(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Enumeration(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_Enumeration *cxx_object = new java_util_Enumeration(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_FileNameMap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_FileNameMap *cxx_object = new java_net_FileNameMap(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Map(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_Map *cxx_object = new java_util_Map(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Collection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_Collection *cxx_object = new java_util_Collection(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Iterator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_Iterator *cxx_object = new java_util_Iterator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Set(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_Set *cxx_object = new java_util_Set(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Map_Entry(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_Map_Entry *cxx_object = new java_util_Map_Entry(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_List(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_List *cxx_object = new java_util_List(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_ListIterator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_ListIterator *cxx_object = new java_util_ListIterator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_OutputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_OutputStream *cxx_object = new java_io_OutputStream(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_ContentHandlerFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_ContentHandlerFactory *cxx_object = new java_net_ContentHandlerFactory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_ContentHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_ContentHandler *cxx_object = new java_net_ContentHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_URLStreamHandlerFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_URLStreamHandlerFactory *cxx_object = new java_net_URLStreamHandlerFactory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_reflect_TypeVariable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_reflect_TypeVariable *cxx_object = new java_lang_reflect_TypeVariable(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_reflect_Type(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_reflect_Type *cxx_object = new java_lang_reflect_Type(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_reflect_GenericDeclaration(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_reflect_GenericDeclaration *cxx_object = new java_lang_reflect_GenericDeclaration(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Package(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Package *cxx_object = new java_lang_Package(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_annotation_Annotation(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_annotation_Annotation *cxx_object = new java_lang_annotation_Annotation(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_reflect_Method(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_reflect_Method *cxx_object = new java_lang_reflect_Method(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_reflect_Constructor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_reflect_Constructor *cxx_object = new java_lang_reflect_Constructor(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_reflect_Field(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_reflect_Field *cxx_object = new java_lang_reflect_Field(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_ProtectionDomain(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_security_ProtectionDomain *cxx_object = new java_security_ProtectionDomain(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_CodeSource(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_security_CodeSource *cxx_object = new java_security_CodeSource(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_CodeSigner(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_security_CodeSigner *cxx_object = new java_security_CodeSigner(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_cert_CertPath(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_security_cert_CertPath *cxx_object = new java_security_cert_CertPath(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_cert_Certificate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_security_cert_Certificate *cxx_object = new java_security_cert_Certificate(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_PublicKey(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_security_PublicKey *cxx_object = new java_security_PublicKey(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_Timestamp(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_security_Timestamp *cxx_object = new java_security_Timestamp(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Date(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_Date *cxx_object = new java_util_Date(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_Principal(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_security_Principal *cxx_object = new java_security_Principal(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_ByteBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_ByteBuffer *cxx_object = new java_nio_ByteBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_ByteOrder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_ByteOrder *cxx_object = new java_nio_ByteOrder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_CharBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_CharBuffer *cxx_object = new java_nio_CharBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_CharSequence(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_CharSequence *cxx_object = new java_lang_CharSequence(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_ShortBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_ShortBuffer *cxx_object = new java_nio_ShortBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_IntBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_IntBuffer *cxx_object = new java_nio_IntBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_LongBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_LongBuffer *cxx_object = new java_nio_LongBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_FloatBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_FloatBuffer *cxx_object = new java_nio_FloatBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_DoubleBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_DoubleBuffer *cxx_object = new java_nio_DoubleBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_SortedMap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_SortedMap *cxx_object = new java_util_SortedMap(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Comparator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_Comparator *cxx_object = new java_util_Comparator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Locale(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_Locale *cxx_object = new java_util_Locale(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_charset_CharsetDecoder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_charset_CharsetDecoder *cxx_object = new java_nio_charset_CharsetDecoder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_charset_CoderResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_charset_CoderResult *cxx_object = new java_nio_charset_CoderResult(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_charset_CodingErrorAction(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_charset_CodingErrorAction *cxx_object = new java_nio_charset_CodingErrorAction(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_charset_CharsetEncoder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_charset_CharsetEncoder *cxx_object = new java_nio_charset_CharsetEncoder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_StringBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_StringBuffer *cxx_object = new java_lang_StringBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_StringBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_StringBuilder *cxx_object = new java_lang_StringBuilder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_math_BigInteger(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_math_BigInteger *cxx_object = new java_math_BigInteger(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_Random(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_Random *cxx_object = new java_util_Random(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_org_json_JSONTokener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		org_json_JSONTokener *cxx_object = new org_json_JSONTokener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_org_json_JSONException(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		org_json_JSONException *cxx_object = new org_json_JSONException(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Number(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Number *cxx_object = new java_lang_Number(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Throwable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Throwable *cxx_object = new java_lang_Throwable(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_PrintStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_PrintStream *cxx_object = new java_io_PrintStream(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_File(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_File *cxx_object = new java_io_File(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_FilenameFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_FilenameFilter *cxx_object = new java_io_FilenameFilter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_FileFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_FileFilter *cxx_object = new java_io_FileFilter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_PrintWriter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_PrintWriter *cxx_object = new java_io_PrintWriter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_Writer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_Writer *cxx_object = new java_io_Writer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_StackTraceElement(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_StackTraceElement *cxx_object = new java_lang_StackTraceElement(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Runnable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Runnable *cxx_object = new java_lang_Runnable(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_Bundle(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_Bundle *cxx_object = new android_os_Bundle(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Byte(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Byte *cxx_object = new java_lang_Byte(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_ParcelFileDescriptor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_ParcelFileDescriptor *cxx_object = new android_os_ParcelFileDescriptor(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_FileDescriptor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_FileDescriptor *cxx_object = new java_io_FileDescriptor(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_Socket(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_Socket *cxx_object = new java_net_Socket(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_InetAddress(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_InetAddress *cxx_object = new java_net_InetAddress(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_NetworkInterface(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_NetworkInterface *cxx_object = new java_net_NetworkInterface(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_InterfaceAddress(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_InterfaceAddress *cxx_object = new java_net_InterfaceAddress(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_channels_SocketChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_channels_SocketChannel *cxx_object = new java_nio_channels_SocketChannel(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_SocketImplFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_SocketImplFactory *cxx_object = new java_net_SocketImplFactory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_SocketImpl(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_SocketImpl *cxx_object = new java_net_SocketImpl(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_DatagramSocket(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_DatagramSocket *cxx_object = new java_net_DatagramSocket(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_DatagramPacket(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_DatagramPacket *cxx_object = new java_net_DatagramPacket(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_channels_DatagramChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_channels_DatagramChannel *cxx_object = new java_nio_channels_DatagramChannel(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_DatagramSocketImplFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_DatagramSocketImplFactory *cxx_object = new java_net_DatagramSocketImplFactory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_net_DatagramSocketImpl(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_net_DatagramSocketImpl *cxx_object = new java_net_DatagramSocketImpl(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_Parcelable_Creator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_Parcelable_Creator *cxx_object = new android_os_Parcelable_Creator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_IBinder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_IBinder *cxx_object = new android_os_IBinder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_IInterface(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_IInterface *cxx_object = new android_os_IInterface(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_IBinder_DeathRecipient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_IBinder_DeathRecipient *cxx_object = new android_os_IBinder_DeathRecipient(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_util_SparseArray(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_util_SparseArray *cxx_object = new android_util_SparseArray(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_util_SparseBooleanArray(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_util_SparseBooleanArray *cxx_object = new android_util_SparseBooleanArray(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_Parcelable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_Parcelable *cxx_object = new android_os_Parcelable(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_Serializable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_Serializable *cxx_object = new java_io_Serializable(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Exception(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Exception *cxx_object = new java_lang_Exception(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_HashMap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_HashMap *cxx_object = new java_util_HashMap(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_util_ArrayList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_util_ArrayList *cxx_object = new java_util_ArrayList(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Integer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Integer *cxx_object = new java_lang_Integer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_util_Printer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_util_Printer *cxx_object = new android_util_Printer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_net_http_SslCertificate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_net_http_SslCertificate *cxx_object = new android_net_http_SslCertificate(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_security_cert_X509Certificate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_security_cert_X509Certificate *cxx_object = new java_security_cert_X509Certificate(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_javax_security_auth_x500_X500Principal(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		javax_security_auth_x500_X500Principal *cxx_object = new javax_security_auth_x500_X500Principal(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_net_http_SslCertificate_DName(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_net_http_SslCertificate_DName *cxx_object = new android_net_http_SslCertificate_DName(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_res_Resources(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_res_Resources *cxx_object = new android_content_res_Resources(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_res_AssetManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_res_AssetManager *cxx_object = new android_content_res_AssetManager(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_res_AssetFileDescriptor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_res_AssetFileDescriptor *cxx_object = new android_content_res_AssetFileDescriptor(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_FileInputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_FileInputStream *cxx_object = new java_io_FileInputStream(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_channels_FileChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_channels_FileChannel *cxx_object = new java_nio_channels_FileChannel(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_channels_FileLock(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_channels_FileLock *cxx_object = new java_nio_channels_FileLock(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_channels_FileChannel_MapMode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_channels_FileChannel_MapMode *cxx_object = new java_nio_channels_FileChannel_MapMode(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_MappedByteBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_MappedByteBuffer *cxx_object = new java_nio_MappedByteBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_channels_WritableByteChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_channels_WritableByteChannel *cxx_object = new java_nio_channels_WritableByteChannel(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_nio_channels_ReadableByteChannel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_channels_ReadableByteChannel *cxx_object = new java_nio_channels_ReadableByteChannel(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_FileOutputStream(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_FileOutputStream *cxx_object = new java_io_FileOutputStream(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_res_XmlResourceParser(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_res_XmlResourceParser *cxx_object = new android_content_res_XmlResourceParser(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_util_DisplayMetrics(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_util_DisplayMetrics *cxx_object = new android_util_DisplayMetrics(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_res_Configuration(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_res_Configuration *cxx_object = new android_content_res_Configuration(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_util_TypedValue(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_util_TypedValue *cxx_object = new android_util_TypedValue(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_res_TypedArray(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_res_TypedArray *cxx_object = new android_content_res_TypedArray(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_drawable_Drawable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_drawable_Drawable *cxx_object = new android_graphics_drawable_Drawable(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_org_xmlpull_v1_XmlPullParser(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		org_xmlpull_v1_XmlPullParser *cxx_object = new org_xmlpull_v1_XmlPullParser(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_io_Reader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_io_Reader *cxx_object = new java_io_Reader(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_util_AttributeSet(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_util_AttributeSet *cxx_object = new android_util_AttributeSet(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Rect(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Rect *cxx_object = new android_graphics_Rect(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Canvas(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Canvas *cxx_object = new android_graphics_Canvas(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Bitmap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Bitmap *cxx_object = new android_graphics_Bitmap(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Bitmap_Config(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_graphics_Bitmap_Config::ALPHA_8 == cxx_value)
			{
				enum_string = "ALPHA_8";
				break;
			}
			if (android_graphics_Bitmap_Config::ARGB_4444 == cxx_value)
			{
				enum_string = "ARGB_4444";
				break;
			}
			if (android_graphics_Bitmap_Config::ARGB_8888 == cxx_value)
			{
				enum_string = "ARGB_8888";
				break;
			}
			if (android_graphics_Bitmap_Config::RGB_565 == cxx_value)
			{
				enum_string = "RGB_565";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/graphics/Bitmap$Config"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("ALPHA_8", enum_string) == 0)
				{
					cxx_value = android_graphics_Bitmap_Config::ALPHA_8;
					break;
				}
				if (strcmp("ARGB_4444", enum_string) == 0)
				{
					cxx_value = android_graphics_Bitmap_Config::ARGB_4444;
					break;
				}
				if (strcmp("ARGB_8888", enum_string) == 0)
				{
					cxx_value = android_graphics_Bitmap_Config::ARGB_8888;
					break;
				}
				if (strcmp("RGB_565", enum_string) == 0)
				{
					cxx_value = android_graphics_Bitmap_Config::RGB_565;
					break;
				}
		} 
		while (0);		
	}
}
void convert_java_nio_Buffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_nio_Buffer *cxx_object = new java_nio_Buffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Matrix(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Matrix *cxx_object = new android_graphics_Matrix(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_RectF(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_RectF *cxx_object = new android_graphics_RectF(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Matrix_ScaleToFit(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_graphics_Matrix_ScaleToFit::CENTER == cxx_value)
			{
				enum_string = "CENTER";
				break;
			}
			if (android_graphics_Matrix_ScaleToFit::END == cxx_value)
			{
				enum_string = "END";
				break;
			}
			if (android_graphics_Matrix_ScaleToFit::FILL == cxx_value)
			{
				enum_string = "FILL";
				break;
			}
			if (android_graphics_Matrix_ScaleToFit::START == cxx_value)
			{
				enum_string = "START";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/graphics/Matrix$ScaleToFit"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("CENTER", enum_string) == 0)
				{
					cxx_value = android_graphics_Matrix_ScaleToFit::CENTER;
					break;
				}
				if (strcmp("END", enum_string) == 0)
				{
					cxx_value = android_graphics_Matrix_ScaleToFit::END;
					break;
				}
				if (strcmp("FILL", enum_string) == 0)
				{
					cxx_value = android_graphics_Matrix_ScaleToFit::FILL;
					break;
				}
				if (strcmp("START", enum_string) == 0)
				{
					cxx_value = android_graphics_Matrix_ScaleToFit::START;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_graphics_Bitmap_CompressFormat(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_graphics_Bitmap_CompressFormat::JPEG == cxx_value)
			{
				enum_string = "JPEG";
				break;
			}
			if (android_graphics_Bitmap_CompressFormat::PNG == cxx_value)
			{
				enum_string = "PNG";
				break;
			}
			if (android_graphics_Bitmap_CompressFormat::WEBP == cxx_value)
			{
				enum_string = "WEBP";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/graphics/Bitmap$CompressFormat"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("JPEG", enum_string) == 0)
				{
					cxx_value = android_graphics_Bitmap_CompressFormat::JPEG;
					break;
				}
				if (strcmp("PNG", enum_string) == 0)
				{
					cxx_value = android_graphics_Bitmap_CompressFormat::PNG;
					break;
				}
				if (strcmp("WEBP", enum_string) == 0)
				{
					cxx_value = android_graphics_Bitmap_CompressFormat::WEBP;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_graphics_Paint(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Paint *cxx_object = new android_graphics_Paint(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_ColorFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_ColorFilter *cxx_object = new android_graphics_ColorFilter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Paint_Style(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_graphics_Paint_Style::FILL == cxx_value)
			{
				enum_string = "FILL";
				break;
			}
			if (android_graphics_Paint_Style::FILL_AND_STROKE == cxx_value)
			{
				enum_string = "FILL_AND_STROKE";
				break;
			}
			if (android_graphics_Paint_Style::STROKE == cxx_value)
			{
				enum_string = "STROKE";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/graphics/Paint$Style"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("FILL", enum_string) == 0)
				{
					cxx_value = android_graphics_Paint_Style::FILL;
					break;
				}
				if (strcmp("FILL_AND_STROKE", enum_string) == 0)
				{
					cxx_value = android_graphics_Paint_Style::FILL_AND_STROKE;
					break;
				}
				if (strcmp("STROKE", enum_string) == 0)
				{
					cxx_value = android_graphics_Paint_Style::STROKE;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_graphics_Paint_Cap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_graphics_Paint_Cap::BUTT == cxx_value)
			{
				enum_string = "BUTT";
				break;
			}
			if (android_graphics_Paint_Cap::ROUND == cxx_value)
			{
				enum_string = "ROUND";
				break;
			}
			if (android_graphics_Paint_Cap::SQUARE == cxx_value)
			{
				enum_string = "SQUARE";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/graphics/Paint$Cap"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("BUTT", enum_string) == 0)
				{
					cxx_value = android_graphics_Paint_Cap::BUTT;
					break;
				}
				if (strcmp("ROUND", enum_string) == 0)
				{
					cxx_value = android_graphics_Paint_Cap::ROUND;
					break;
				}
				if (strcmp("SQUARE", enum_string) == 0)
				{
					cxx_value = android_graphics_Paint_Cap::SQUARE;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_graphics_Paint_Join(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_graphics_Paint_Join::BEVEL == cxx_value)
			{
				enum_string = "BEVEL";
				break;
			}
			if (android_graphics_Paint_Join::MITER == cxx_value)
			{
				enum_string = "MITER";
				break;
			}
			if (android_graphics_Paint_Join::ROUND == cxx_value)
			{
				enum_string = "ROUND";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/graphics/Paint$Join"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("BEVEL", enum_string) == 0)
				{
					cxx_value = android_graphics_Paint_Join::BEVEL;
					break;
				}
				if (strcmp("MITER", enum_string) == 0)
				{
					cxx_value = android_graphics_Paint_Join::MITER;
					break;
				}
				if (strcmp("ROUND", enum_string) == 0)
				{
					cxx_value = android_graphics_Paint_Join::ROUND;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_graphics_Path(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Path *cxx_object = new android_graphics_Path(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Path_FillType(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_graphics_Path_FillType::EVEN_ODD == cxx_value)
			{
				enum_string = "EVEN_ODD";
				break;
			}
			if (android_graphics_Path_FillType::INVERSE_EVEN_ODD == cxx_value)
			{
				enum_string = "INVERSE_EVEN_ODD";
				break;
			}
			if (android_graphics_Path_FillType::INVERSE_WINDING == cxx_value)
			{
				enum_string = "INVERSE_WINDING";
				break;
			}
			if (android_graphics_Path_FillType::WINDING == cxx_value)
			{
				enum_string = "WINDING";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/graphics/Path$FillType"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("EVEN_ODD", enum_string) == 0)
				{
					cxx_value = android_graphics_Path_FillType::EVEN_ODD;
					break;
				}
				if (strcmp("INVERSE_EVEN_ODD", enum_string) == 0)
				{
					cxx_value = android_graphics_Path_FillType::INVERSE_EVEN_ODD;
					break;
				}
				if (strcmp("INVERSE_WINDING", enum_string) == 0)
				{
					cxx_value = android_graphics_Path_FillType::INVERSE_WINDING;
					break;
				}
				if (strcmp("WINDING", enum_string) == 0)
				{
					cxx_value = android_graphics_Path_FillType::WINDING;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_graphics_Path_Direction(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_graphics_Path_Direction::CCW == cxx_value)
			{
				enum_string = "CCW";
				break;
			}
			if (android_graphics_Path_Direction::CW == cxx_value)
			{
				enum_string = "CW";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/graphics/Path$Direction"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("CCW", enum_string) == 0)
				{
					cxx_value = android_graphics_Path_Direction::CCW;
					break;
				}
				if (strcmp("CW", enum_string) == 0)
				{
					cxx_value = android_graphics_Path_Direction::CW;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_graphics_Shader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Shader *cxx_object = new android_graphics_Shader(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Xfermode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Xfermode *cxx_object = new android_graphics_Xfermode(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_PathEffect(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_PathEffect *cxx_object = new android_graphics_PathEffect(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_MaskFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_MaskFilter *cxx_object = new android_graphics_MaskFilter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Typeface(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Typeface *cxx_object = new android_graphics_Typeface(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Rasterizer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Rasterizer *cxx_object = new android_graphics_Rasterizer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Paint_Align(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_graphics_Paint_Align::CENTER == cxx_value)
			{
				enum_string = "CENTER";
				break;
			}
			if (android_graphics_Paint_Align::LEFT == cxx_value)
			{
				enum_string = "LEFT";
				break;
			}
			if (android_graphics_Paint_Align::RIGHT == cxx_value)
			{
				enum_string = "RIGHT";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/graphics/Paint$Align"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("CENTER", enum_string) == 0)
				{
					cxx_value = android_graphics_Paint_Align::CENTER;
					break;
				}
				if (strcmp("LEFT", enum_string) == 0)
				{
					cxx_value = android_graphics_Paint_Align::LEFT;
					break;
				}
				if (strcmp("RIGHT", enum_string) == 0)
				{
					cxx_value = android_graphics_Paint_Align::RIGHT;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_graphics_Paint_FontMetrics(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Paint_FontMetrics *cxx_object = new android_graphics_Paint_FontMetrics(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Paint_FontMetricsInt(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Paint_FontMetricsInt *cxx_object = new android_graphics_Paint_FontMetricsInt(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Region_Op(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_graphics_Region_Op::DIFFERENCE == cxx_value)
			{
				enum_string = "DIFFERENCE";
				break;
			}
			if (android_graphics_Region_Op::INTERSECT == cxx_value)
			{
				enum_string = "INTERSECT";
				break;
			}
			if (android_graphics_Region_Op::REPLACE == cxx_value)
			{
				enum_string = "REPLACE";
				break;
			}
			if (android_graphics_Region_Op::REVERSE_DIFFERENCE == cxx_value)
			{
				enum_string = "REVERSE_DIFFERENCE";
				break;
			}
			if (android_graphics_Region_Op::UNION == cxx_value)
			{
				enum_string = "UNION";
				break;
			}
			if (android_graphics_Region_Op::XOR == cxx_value)
			{
				enum_string = "XOR";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/graphics/Region$Op"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("DIFFERENCE", enum_string) == 0)
				{
					cxx_value = android_graphics_Region_Op::DIFFERENCE;
					break;
				}
				if (strcmp("INTERSECT", enum_string) == 0)
				{
					cxx_value = android_graphics_Region_Op::INTERSECT;
					break;
				}
				if (strcmp("REPLACE", enum_string) == 0)
				{
					cxx_value = android_graphics_Region_Op::REPLACE;
					break;
				}
				if (strcmp("REVERSE_DIFFERENCE", enum_string) == 0)
				{
					cxx_value = android_graphics_Region_Op::REVERSE_DIFFERENCE;
					break;
				}
				if (strcmp("UNION", enum_string) == 0)
				{
					cxx_value = android_graphics_Region_Op::UNION;
					break;
				}
				if (strcmp("XOR", enum_string) == 0)
				{
					cxx_value = android_graphics_Region_Op::XOR;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_graphics_Region(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Region *cxx_object = new android_graphics_Region(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_DrawFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_DrawFilter *cxx_object = new android_graphics_DrawFilter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Canvas_EdgeType(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_graphics_Canvas_EdgeType::AA == cxx_value)
			{
				enum_string = "AA";
				break;
			}
			if (android_graphics_Canvas_EdgeType::BW == cxx_value)
			{
				enum_string = "BW";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/graphics/Canvas$EdgeType"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("AA", enum_string) == 0)
				{
					cxx_value = android_graphics_Canvas_EdgeType::AA;
					break;
				}
				if (strcmp("BW", enum_string) == 0)
				{
					cxx_value = android_graphics_Canvas_EdgeType::BW;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_graphics_PorterDuff_Mode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_graphics_PorterDuff_Mode::ADD == cxx_value)
			{
				enum_string = "ADD";
				break;
			}
			if (android_graphics_PorterDuff_Mode::CLEAR == cxx_value)
			{
				enum_string = "CLEAR";
				break;
			}
			if (android_graphics_PorterDuff_Mode::DARKEN == cxx_value)
			{
				enum_string = "DARKEN";
				break;
			}
			if (android_graphics_PorterDuff_Mode::DST == cxx_value)
			{
				enum_string = "DST";
				break;
			}
			if (android_graphics_PorterDuff_Mode::DST_ATOP == cxx_value)
			{
				enum_string = "DST_ATOP";
				break;
			}
			if (android_graphics_PorterDuff_Mode::DST_IN == cxx_value)
			{
				enum_string = "DST_IN";
				break;
			}
			if (android_graphics_PorterDuff_Mode::DST_OUT == cxx_value)
			{
				enum_string = "DST_OUT";
				break;
			}
			if (android_graphics_PorterDuff_Mode::DST_OVER == cxx_value)
			{
				enum_string = "DST_OVER";
				break;
			}
			if (android_graphics_PorterDuff_Mode::LIGHTEN == cxx_value)
			{
				enum_string = "LIGHTEN";
				break;
			}
			if (android_graphics_PorterDuff_Mode::MULTIPLY == cxx_value)
			{
				enum_string = "MULTIPLY";
				break;
			}
			if (android_graphics_PorterDuff_Mode::OVERLAY == cxx_value)
			{
				enum_string = "OVERLAY";
				break;
			}
			if (android_graphics_PorterDuff_Mode::SCREEN == cxx_value)
			{
				enum_string = "SCREEN";
				break;
			}
			if (android_graphics_PorterDuff_Mode::SRC == cxx_value)
			{
				enum_string = "SRC";
				break;
			}
			if (android_graphics_PorterDuff_Mode::SRC_ATOP == cxx_value)
			{
				enum_string = "SRC_ATOP";
				break;
			}
			if (android_graphics_PorterDuff_Mode::SRC_IN == cxx_value)
			{
				enum_string = "SRC_IN";
				break;
			}
			if (android_graphics_PorterDuff_Mode::SRC_OUT == cxx_value)
			{
				enum_string = "SRC_OUT";
				break;
			}
			if (android_graphics_PorterDuff_Mode::SRC_OVER == cxx_value)
			{
				enum_string = "SRC_OVER";
				break;
			}
			if (android_graphics_PorterDuff_Mode::XOR == cxx_value)
			{
				enum_string = "XOR";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/graphics/PorterDuff$Mode"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("ADD", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::ADD;
					break;
				}
				if (strcmp("CLEAR", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::CLEAR;
					break;
				}
				if (strcmp("DARKEN", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::DARKEN;
					break;
				}
				if (strcmp("DST", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::DST;
					break;
				}
				if (strcmp("DST_ATOP", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::DST_ATOP;
					break;
				}
				if (strcmp("DST_IN", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::DST_IN;
					break;
				}
				if (strcmp("DST_OUT", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::DST_OUT;
					break;
				}
				if (strcmp("DST_OVER", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::DST_OVER;
					break;
				}
				if (strcmp("LIGHTEN", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::LIGHTEN;
					break;
				}
				if (strcmp("MULTIPLY", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::MULTIPLY;
					break;
				}
				if (strcmp("OVERLAY", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::OVERLAY;
					break;
				}
				if (strcmp("SCREEN", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::SCREEN;
					break;
				}
				if (strcmp("SRC", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::SRC;
					break;
				}
				if (strcmp("SRC_ATOP", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::SRC_ATOP;
					break;
				}
				if (strcmp("SRC_IN", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::SRC_IN;
					break;
				}
				if (strcmp("SRC_OUT", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::SRC_OUT;
					break;
				}
				if (strcmp("SRC_OVER", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::SRC_OVER;
					break;
				}
				if (strcmp("XOR", enum_string) == 0)
				{
					cxx_value = android_graphics_PorterDuff_Mode::XOR;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_graphics_Canvas_VertexMode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_graphics_Canvas_VertexMode::TRIANGLES == cxx_value)
			{
				enum_string = "TRIANGLES";
				break;
			}
			if (android_graphics_Canvas_VertexMode::TRIANGLE_FAN == cxx_value)
			{
				enum_string = "TRIANGLE_FAN";
				break;
			}
			if (android_graphics_Canvas_VertexMode::TRIANGLE_STRIP == cxx_value)
			{
				enum_string = "TRIANGLE_STRIP";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/graphics/Canvas$VertexMode"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("TRIANGLES", enum_string) == 0)
				{
					cxx_value = android_graphics_Canvas_VertexMode::TRIANGLES;
					break;
				}
				if (strcmp("TRIANGLE_FAN", enum_string) == 0)
				{
					cxx_value = android_graphics_Canvas_VertexMode::TRIANGLE_FAN;
					break;
				}
				if (strcmp("TRIANGLE_STRIP", enum_string) == 0)
				{
					cxx_value = android_graphics_Canvas_VertexMode::TRIANGLE_STRIP;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_graphics_Picture(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Picture *cxx_object = new android_graphics_Picture(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_drawable_Drawable_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_drawable_Drawable_Callback *cxx_object = new android_graphics_drawable_Drawable_Callback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_BitmapFactory_Options(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_BitmapFactory_Options *cxx_object = new android_graphics_BitmapFactory_Options(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_drawable_Drawable_ConstantState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_drawable_Drawable_ConstantState *cxx_object = new android_graphics_drawable_Drawable_ConstantState(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_res_ColorStateList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_res_ColorStateList *cxx_object = new android_content_res_ColorStateList(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Movie(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Movie *cxx_object = new android_graphics_Movie(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_res_Resources_Theme(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_res_Resources_Theme *cxx_object = new android_content_res_Resources_Theme(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_Context(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_Context *cxx_object = new android_content_Context(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_Intent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_Intent *cxx_object = new android_content_Intent(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_net_Uri(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_net_Uri *cxx_object = new android_net_Uri(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ComponentName(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ComponentName *cxx_object = new android_content_ComponentName(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ContentResolver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ContentResolver *cxx_object = new android_content_ContentResolver(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ContentValues(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ContentValues *cxx_object = new android_content_ContentValues(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Short(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Short *cxx_object = new java_lang_Short(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Long(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Long *cxx_object = new java_lang_Long(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Float(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Float *cxx_object = new java_lang_Float(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Double(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Double *cxx_object = new java_lang_Double(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Boolean(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Boolean *cxx_object = new java_lang_Boolean(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_CancellationSignal(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_CancellationSignal *cxx_object = new android_os_CancellationSignal(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_CancellationSignal_OnCancelListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_CancellationSignal_OnCancelListener *cxx_object = new android_os_CancellationSignal_OnCancelListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_database_Cursor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_database_Cursor *cxx_object = new android_database_Cursor(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_database_ContentObserver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_database_ContentObserver *cxx_object = new android_database_ContentObserver(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_Handler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_Handler *cxx_object = new android_os_Handler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_Looper(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_Looper *cxx_object = new android_os_Looper(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_MessageQueue(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_MessageQueue *cxx_object = new android_os_MessageQueue(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_MessageQueue_IdleHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_MessageQueue_IdleHandler *cxx_object = new android_os_MessageQueue_IdleHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Thread(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Thread *cxx_object = new java_lang_Thread(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_ThreadGroup(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_ThreadGroup *cxx_object = new java_lang_ThreadGroup(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_java_lang_Thread_State(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (java_lang_Thread_State::NEW == cxx_value)
			{
				enum_string = "NEW";
				break;
			}
			if (java_lang_Thread_State::RUNNABLE == cxx_value)
			{
				enum_string = "RUNNABLE";
				break;
			}
			if (java_lang_Thread_State::BLOCKED == cxx_value)
			{
				enum_string = "BLOCKED";
				break;
			}
			if (java_lang_Thread_State::WAITING == cxx_value)
			{
				enum_string = "WAITING";
				break;
			}
			if (java_lang_Thread_State::TIMED_WAITING == cxx_value)
			{
				enum_string = "TIMED_WAITING";
				break;
			}
			if (java_lang_Thread_State::TERMINATED == cxx_value)
			{
				enum_string = "TERMINATED";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("java/lang/Thread$State"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("NEW", enum_string) == 0)
				{
					cxx_value = java_lang_Thread_State::NEW;
					break;
				}
				if (strcmp("RUNNABLE", enum_string) == 0)
				{
					cxx_value = java_lang_Thread_State::RUNNABLE;
					break;
				}
				if (strcmp("BLOCKED", enum_string) == 0)
				{
					cxx_value = java_lang_Thread_State::BLOCKED;
					break;
				}
				if (strcmp("WAITING", enum_string) == 0)
				{
					cxx_value = java_lang_Thread_State::WAITING;
					break;
				}
				if (strcmp("TIMED_WAITING", enum_string) == 0)
				{
					cxx_value = java_lang_Thread_State::TIMED_WAITING;
					break;
				}
				if (strcmp("TERMINATED", enum_string) == 0)
				{
					cxx_value = java_lang_Thread_State::TERMINATED;
					break;
				}
		} 
		while (0);		
	}
}
void convert_java_lang_Thread_UncaughtExceptionHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		java_lang_Thread_UncaughtExceptionHandler *cxx_object = new java_lang_Thread_UncaughtExceptionHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_Handler_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_Handler_Callback *cxx_object = new android_os_Handler_Callback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_Message(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_Message *cxx_object = new android_os_Message(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_Messenger(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_Messenger *cxx_object = new android_os_Messenger(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_database_CharArrayBuffer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_database_CharArrayBuffer *cxx_object = new android_database_CharArrayBuffer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_database_DataSetObserver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_database_DataSetObserver *cxx_object = new android_database_DataSetObserver(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ContentProviderOperation(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ContentProviderOperation *cxx_object = new android_content_ContentProviderOperation(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ContentProviderOperation_Builder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ContentProviderOperation_Builder *cxx_object = new android_content_ContentProviderOperation_Builder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ContentProvider(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ContentProvider *cxx_object = new android_content_ContentProvider(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ContentProviderResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ContentProviderResult *cxx_object = new android_content_ContentProviderResult(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_PathPermission(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_PathPermission *cxx_object = new android_content_pm_PathPermission(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ContentProvider_PipeDataWriter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ContentProvider_PipeDataWriter *cxx_object = new android_content_ContentProvider_PipeDataWriter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_ProviderInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_ProviderInfo *cxx_object = new android_content_pm_ProviderInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_PatternMatcher(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_PatternMatcher *cxx_object = new android_os_PatternMatcher(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ContentProviderClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ContentProviderClient *cxx_object = new android_content_ContentProviderClient(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_accounts_Account(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_accounts_Account *cxx_object = new android_accounts_Account(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_SyncAdapterType(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_SyncAdapterType *cxx_object = new android_content_SyncAdapterType(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_PeriodicSync(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_PeriodicSync *cxx_object = new android_content_PeriodicSync(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_SyncInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_SyncInfo *cxx_object = new android_content_SyncInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_SyncStatusObserver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_SyncStatusObserver *cxx_object = new android_content_SyncStatusObserver(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ClipData(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ClipData *cxx_object = new android_content_ClipData(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ClipData_Item(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ClipData_Item *cxx_object = new android_content_ClipData_Item(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ClipDescription(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ClipDescription *cxx_object = new android_content_ClipDescription(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_PackageManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_PackageManager *cxx_object = new android_content_pm_PackageManager(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_PackageInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_PackageInfo *cxx_object = new android_content_pm_PackageInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_ApplicationInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_ApplicationInfo *cxx_object = new android_content_pm_ApplicationInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_ActivityInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_ActivityInfo *cxx_object = new android_content_pm_ActivityInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_ServiceInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_ServiceInfo *cxx_object = new android_content_pm_ServiceInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_InstrumentationInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_InstrumentationInfo *cxx_object = new android_content_pm_InstrumentationInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_PermissionInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_PermissionInfo *cxx_object = new android_content_pm_PermissionInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_Signature(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_Signature *cxx_object = new android_content_pm_Signature(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_ConfigurationInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_ConfigurationInfo *cxx_object = new android_content_pm_ConfigurationInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_FeatureInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_FeatureInfo *cxx_object = new android_content_pm_FeatureInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_ResolveInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_ResolveInfo *cxx_object = new android_content_pm_ResolveInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_IntentFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_IntentFilter *cxx_object = new android_content_IntentFilter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_IntentFilter_AuthorityEntry(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_IntentFilter_AuthorityEntry *cxx_object = new android_content_IntentFilter_AuthorityEntry(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_org_xmlpull_v1_XmlSerializer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		org_xmlpull_v1_XmlSerializer *cxx_object = new org_xmlpull_v1_XmlSerializer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_pm_PermissionGroupInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_pm_PermissionGroupInfo *cxx_object = new android_content_pm_PermissionGroupInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ComponentCallbacks(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ComponentCallbacks *cxx_object = new android_content_ComponentCallbacks(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_SharedPreferences(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_SharedPreferences *cxx_object = new android_content_SharedPreferences(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_SharedPreferences_Editor(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_SharedPreferences_Editor *cxx_object = new android_content_SharedPreferences_Editor(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_SharedPreferences_OnSharedPreferenceChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_SharedPreferences_OnSharedPreferenceChangeListener *cxx_object = new android_content_SharedPreferences_OnSharedPreferenceChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_database_sqlite_SQLiteDatabase_CursorFactory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_database_sqlite_SQLiteDatabase_CursorFactory *cxx_object = new android_database_sqlite_SQLiteDatabase_CursorFactory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_database_sqlite_SQLiteDatabase(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_database_sqlite_SQLiteDatabase *cxx_object = new android_database_sqlite_SQLiteDatabase(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_database_DatabaseErrorHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_database_DatabaseErrorHandler *cxx_object = new android_database_DatabaseErrorHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_database_sqlite_SQLiteTransactionListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_database_sqlite_SQLiteTransactionListener *cxx_object = new android_database_sqlite_SQLiteTransactionListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_database_sqlite_SQLiteStatement(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_database_sqlite_SQLiteStatement *cxx_object = new android_database_sqlite_SQLiteStatement(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_util_Pair(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_util_Pair *cxx_object = new android_util_Pair(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_database_sqlite_SQLiteCursorDriver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_database_sqlite_SQLiteCursorDriver *cxx_object = new android_database_sqlite_SQLiteCursorDriver(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_database_sqlite_SQLiteQuery(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_database_sqlite_SQLiteQuery *cxx_object = new android_database_sqlite_SQLiteQuery(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_IntentSender(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_IntentSender *cxx_object = new android_content_IntentSender(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_IntentSender_OnFinished(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_IntentSender_OnFinished *cxx_object = new android_content_IntentSender_OnFinished(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_UserHandle(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_UserHandle *cxx_object = new android_os_UserHandle(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_BroadcastReceiver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_BroadcastReceiver *cxx_object = new android_content_BroadcastReceiver(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_BroadcastReceiver_PendingResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_BroadcastReceiver_PendingResult *cxx_object = new android_content_BroadcastReceiver_PendingResult(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_ServiceConnection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_ServiceConnection *cxx_object = new android_content_ServiceConnection(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_Display(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_Display *cxx_object = new android_view_Display(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_Point(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_Point *cxx_object = new android_graphics_Point(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_support_v4_app_Fragment_SavedState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_support_v4_app_Fragment_SavedState *cxx_object = new android_support_v4_app_Fragment_SavedState(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_support_v4_app_FragmentActivity(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_support_v4_app_FragmentActivity *cxx_object = new android_support_v4_app_FragmentActivity(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View *cxx_object = new android_view_View(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ViewParent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ViewParent *cxx_object = new android_view_ViewParent(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ActionMode_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ActionMode_Callback *cxx_object = new android_view_ActionMode_Callback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ActionMode(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ActionMode *cxx_object = new android_view_ActionMode(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_MenuInflater(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_MenuInflater *cxx_object = new android_view_MenuInflater(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_Menu(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_Menu *cxx_object = new android_view_Menu(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_MenuItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_MenuItem *cxx_object = new android_view_MenuItem(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_SubMenu(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_SubMenu *cxx_object = new android_view_SubMenu(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_MenuItem_OnMenuItemClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_MenuItem_OnMenuItemClickListener *cxx_object = new android_view_MenuItem_OnMenuItemClickListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ContextMenu_ContextMenuInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ContextMenu_ContextMenuInfo *cxx_object = new android_view_ContextMenu_ContextMenuInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ActionProvider(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ActionProvider *cxx_object = new android_view_ActionProvider(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ActionProvider_VisibilityListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ActionProvider_VisibilityListener *cxx_object = new android_view_ActionProvider_VisibilityListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_MenuItem_OnActionExpandListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_MenuItem_OnActionExpandListener *cxx_object = new android_view_MenuItem_OnActionExpandListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_KeyEvent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_KeyEvent *cxx_object = new android_view_KeyEvent(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_KeyEvent_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_KeyEvent_Callback *cxx_object = new android_view_KeyEvent_Callback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_KeyEvent_DispatcherState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_KeyEvent_DispatcherState *cxx_object = new android_view_KeyEvent_DispatcherState(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_KeyCharacterMap(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_KeyCharacterMap *cxx_object = new android_view_KeyCharacterMap(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_KeyCharacterMap_KeyData(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_KeyCharacterMap_KeyData *cxx_object = new android_view_KeyCharacterMap_KeyData(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_accessibility_AccessibilityEvent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_accessibility_AccessibilityEvent *cxx_object = new android_view_accessibility_AccessibilityEvent(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_accessibility_AccessibilityRecord(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_accessibility_AccessibilityRecord *cxx_object = new android_view_accessibility_AccessibilityRecord(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_accessibility_AccessibilityNodeInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_accessibility_AccessibilityNodeInfo *cxx_object = new android_view_accessibility_AccessibilityNodeInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ContextMenu(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ContextMenu *cxx_object = new android_view_ContextMenu(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ViewGroup(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ViewGroup *cxx_object = new android_view_ViewGroup(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ViewGroup_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ViewGroup_LayoutParams *cxx_object = new android_view_ViewGroup_LayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_animation_LayoutAnimationController_AnimationParameters(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_animation_LayoutAnimationController_AnimationParameters *cxx_object = new android_view_animation_LayoutAnimationController_AnimationParameters(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_MotionEvent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_MotionEvent *cxx_object = new android_view_MotionEvent(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_MotionEvent_PointerCoords(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_MotionEvent_PointerCoords *cxx_object = new android_view_MotionEvent_PointerCoords(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_MotionEvent_PointerProperties(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_MotionEvent_PointerProperties *cxx_object = new android_view_MotionEvent_PointerProperties(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_DragEvent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_DragEvent *cxx_object = new android_view_DragEvent(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ViewGroup_OnHierarchyChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ViewGroup_OnHierarchyChangeListener *cxx_object = new android_view_ViewGroup_OnHierarchyChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_animation_LayoutTransition(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_animation_LayoutTransition *cxx_object = new android_animation_LayoutTransition(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_animation_TimeInterpolator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_animation_TimeInterpolator *cxx_object = new android_animation_TimeInterpolator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_animation_Animator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_animation_Animator *cxx_object = new android_animation_Animator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_animation_Animator_AnimatorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_animation_Animator_AnimatorListener *cxx_object = new android_animation_Animator_AnimatorListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_animation_LayoutTransition_TransitionListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_animation_LayoutTransition_TransitionListener *cxx_object = new android_animation_LayoutTransition_TransitionListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_animation_LayoutAnimationController(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_animation_LayoutAnimationController *cxx_object = new android_view_animation_LayoutAnimationController(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_animation_Animation(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_animation_Animation *cxx_object = new android_view_animation_Animation(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_animation_Interpolator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_animation_Interpolator *cxx_object = new android_view_animation_Interpolator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_animation_Animation_AnimationListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_animation_Animation_AnimationListener *cxx_object = new android_view_animation_Animation_AnimationListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_animation_Transformation(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_animation_Transformation *cxx_object = new android_view_animation_Transformation(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_OnCreateContextMenuListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_OnCreateContextMenuListener *cxx_object = new android_view_View_OnCreateContextMenuListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ViewPropertyAnimator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ViewPropertyAnimator *cxx_object = new android_view_ViewPropertyAnimator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_OnFocusChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_OnFocusChangeListener *cxx_object = new android_view_View_OnFocusChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_OnLayoutChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_OnLayoutChangeListener *cxx_object = new android_view_View_OnLayoutChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_OnAttachStateChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_OnAttachStateChangeListener *cxx_object = new android_view_View_OnAttachStateChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_OnClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_OnClickListener *cxx_object = new android_view_View_OnClickListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_OnLongClickListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_OnLongClickListener *cxx_object = new android_view_View_OnLongClickListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_OnKeyListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_OnKeyListener *cxx_object = new android_view_View_OnKeyListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_OnTouchListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_OnTouchListener *cxx_object = new android_view_View_OnTouchListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_OnGenericMotionListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_OnGenericMotionListener *cxx_object = new android_view_View_OnGenericMotionListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_OnHoverListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_OnHoverListener *cxx_object = new android_view_View_OnHoverListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_OnDragListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_OnDragListener *cxx_object = new android_view_View_OnDragListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_AccessibilityDelegate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_AccessibilityDelegate *cxx_object = new android_view_View_AccessibilityDelegate(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_accessibility_AccessibilityNodeProvider(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_accessibility_AccessibilityNodeProvider *cxx_object = new android_view_accessibility_AccessibilityNodeProvider(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_inputmethod_EditorInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_inputmethod_EditorInfo *cxx_object = new android_view_inputmethod_EditorInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_inputmethod_InputConnection(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_inputmethod_InputConnection *cxx_object = new android_view_inputmethod_InputConnection(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_inputmethod_ExtractedTextRequest(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_inputmethod_ExtractedTextRequest *cxx_object = new android_view_inputmethod_ExtractedTextRequest(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_inputmethod_ExtractedText(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_inputmethod_ExtractedText *cxx_object = new android_view_inputmethod_ExtractedText(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_inputmethod_CompletionInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_inputmethod_CompletionInfo *cxx_object = new android_view_inputmethod_CompletionInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_inputmethod_CorrectionInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_inputmethod_CorrectionInfo *cxx_object = new android_view_inputmethod_CorrectionInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_TouchDelegate(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_TouchDelegate *cxx_object = new android_view_TouchDelegate(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ViewTreeObserver(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ViewTreeObserver *cxx_object = new android_view_ViewTreeObserver(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ViewTreeObserver_OnGlobalFocusChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ViewTreeObserver_OnGlobalFocusChangeListener *cxx_object = new android_view_ViewTreeObserver_OnGlobalFocusChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ViewTreeObserver_OnGlobalLayoutListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ViewTreeObserver_OnGlobalLayoutListener *cxx_object = new android_view_ViewTreeObserver_OnGlobalLayoutListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ViewTreeObserver_OnPreDrawListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ViewTreeObserver_OnPreDrawListener *cxx_object = new android_view_ViewTreeObserver_OnPreDrawListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ViewTreeObserver_OnDrawListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ViewTreeObserver_OnDrawListener *cxx_object = new android_view_ViewTreeObserver_OnDrawListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ViewTreeObserver_OnScrollChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ViewTreeObserver_OnScrollChangedListener *cxx_object = new android_view_ViewTreeObserver_OnScrollChangedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ViewTreeObserver_OnTouchModeChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ViewTreeObserver_OnTouchModeChangeListener *cxx_object = new android_view_ViewTreeObserver_OnTouchModeChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_OnSystemUiVisibilityChangeListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_OnSystemUiVisibilityChangeListener *cxx_object = new android_view_View_OnSystemUiVisibilityChangeListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_View_DragShadowBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_View_DragShadowBuilder *cxx_object = new android_view_View_DragShadowBuilder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_util_Property(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_util_Property *cxx_object = new android_util_Property(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_support_v4_app_FragmentManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_support_v4_app_FragmentManager *cxx_object = new android_support_v4_app_FragmentManager(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_support_v4_app_FragmentTransaction(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_support_v4_app_FragmentTransaction *cxx_object = new android_support_v4_app_FragmentTransaction(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_support_v4_app_FragmentManager_BackStackEntry(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_support_v4_app_FragmentManager_BackStackEntry *cxx_object = new android_support_v4_app_FragmentManager_BackStackEntry(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_support_v4_app_FragmentManager_OnBackStackChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_support_v4_app_FragmentManager_OnBackStackChangedListener *cxx_object = new android_support_v4_app_FragmentManager_OnBackStackChangedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_support_v4_app_LoaderManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_support_v4_app_LoaderManager *cxx_object = new android_support_v4_app_LoaderManager(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_support_v4_content_Loader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_support_v4_content_Loader *cxx_object = new android_support_v4_content_Loader(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_support_v4_content_Loader_OnLoadCompleteListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_support_v4_content_Loader_OnLoadCompleteListener *cxx_object = new android_support_v4_content_Loader_OnLoadCompleteListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_support_v4_app_LoaderManager_LoaderCallbacks(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_support_v4_app_LoaderManager_LoaderCallbacks *cxx_object = new android_support_v4_app_LoaderManager_LoaderCallbacks(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_LayoutInflater(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_LayoutInflater *cxx_object = new android_view_LayoutInflater(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_LayoutInflater_Factory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_LayoutInflater_Factory *cxx_object = new android_view_LayoutInflater_Factory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_LayoutInflater_Factory2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_LayoutInflater_Factory2 *cxx_object = new android_view_LayoutInflater_Factory2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_LayoutInflater_Filter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_LayoutInflater_Filter *cxx_object = new android_view_LayoutInflater_Filter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_Activity(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_Activity *cxx_object = new android_app_Activity(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_FragmentManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_FragmentManager *cxx_object = new android_app_FragmentManager(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_Fragment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_Fragment *cxx_object = new android_app_Fragment(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_Fragment_SavedState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_Fragment_SavedState *cxx_object = new android_app_Fragment_SavedState(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_os_Parcelable_ClassLoaderCreator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_os_Parcelable_ClassLoaderCreator *cxx_object = new android_os_Parcelable_ClassLoaderCreator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_LoaderManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_LoaderManager *cxx_object = new android_app_LoaderManager(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_Loader(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_Loader *cxx_object = new android_content_Loader(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_Loader_OnLoadCompleteListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_Loader_OnLoadCompleteListener *cxx_object = new android_content_Loader_OnLoadCompleteListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_Loader_OnLoadCanceledListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_Loader_OnLoadCanceledListener *cxx_object = new android_content_Loader_OnLoadCanceledListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_LoaderManager_LoaderCallbacks(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_LoaderManager_LoaderCallbacks *cxx_object = new android_app_LoaderManager_LoaderCallbacks(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_FragmentTransaction(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_FragmentTransaction *cxx_object = new android_app_FragmentTransaction(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_FragmentManager_BackStackEntry(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_FragmentManager_BackStackEntry *cxx_object = new android_app_FragmentManager_BackStackEntry(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_FragmentManager_OnBackStackChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_FragmentManager_OnBackStackChangedListener *cxx_object = new android_app_FragmentManager_OnBackStackChangedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_Window(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_Window *cxx_object = new android_view_Window(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_WindowManager_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_WindowManager_LayoutParams *cxx_object = new android_view_WindowManager_LayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_WindowManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_WindowManager *cxx_object = new android_view_WindowManager(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_Window_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_Window_Callback *cxx_object = new android_view_Window_Callback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_SurfaceHolder_Callback2(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_SurfaceHolder_Callback2 *cxx_object = new android_view_SurfaceHolder_Callback2(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_SurfaceHolder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_SurfaceHolder *cxx_object = new android_view_SurfaceHolder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_SurfaceHolder_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_SurfaceHolder_Callback *cxx_object = new android_view_SurfaceHolder_Callback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_Surface(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_Surface *cxx_object = new android_view_Surface(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_SurfaceTexture(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_SurfaceTexture *cxx_object = new android_graphics_SurfaceTexture(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_graphics_SurfaceTexture_OnFrameAvailableListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_graphics_SurfaceTexture_OnFrameAvailableListener *cxx_object = new android_graphics_SurfaceTexture_OnFrameAvailableListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_InputQueue_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_InputQueue_Callback *cxx_object = new android_view_InputQueue_Callback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_InputQueue(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_InputQueue *cxx_object = new android_view_InputQueue(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_Application(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_Application *cxx_object = new android_app_Application(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_Application_ActivityLifecycleCallbacks(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_Application_ActivityLifecycleCallbacks *cxx_object = new android_app_Application_ActivityLifecycleCallbacks(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_ActionBar(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_ActionBar *cxx_object = new android_app_ActionBar(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_ActionBar_LayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_ActionBar_LayoutParams *cxx_object = new android_app_ActionBar_LayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_ActionBar_OnNavigationListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_ActionBar_OnNavigationListener *cxx_object = new android_app_ActionBar_OnNavigationListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_ActionBar_Tab(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_ActionBar_Tab *cxx_object = new android_app_ActionBar_Tab(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_ActionBar_TabListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_ActionBar_TabListener *cxx_object = new android_app_ActionBar_TabListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_ActionBar_OnMenuVisibilityListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_ActionBar_OnMenuVisibilityListener *cxx_object = new android_app_ActionBar_OnMenuVisibilityListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_TaskStackBuilder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_TaskStackBuilder *cxx_object = new android_app_TaskStackBuilder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_PendingIntent(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_PendingIntent *cxx_object = new android_app_PendingIntent(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_PendingIntent_OnFinished(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_PendingIntent_OnFinished *cxx_object = new android_app_PendingIntent_OnFinished(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_WebBackForwardList(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_WebBackForwardList *cxx_object = new android_webkit_WebBackForwardList(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_WebHistoryItem(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_WebHistoryItem *cxx_object = new android_webkit_WebHistoryItem(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_ValueCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_ValueCallback *cxx_object = new android_webkit_ValueCallback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_WebView_HitTestResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_WebView_HitTestResult *cxx_object = new android_webkit_WebView_HitTestResult(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_WebView_FindListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_WebView_FindListener *cxx_object = new android_webkit_WebView_FindListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_WebViewClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_WebViewClient *cxx_object = new android_webkit_WebViewClient(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_WebResourceResponse(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_WebResourceResponse *cxx_object = new android_webkit_WebResourceResponse(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_HttpAuthHandler(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_HttpAuthHandler *cxx_object = new android_webkit_HttpAuthHandler(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_DownloadListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_DownloadListener *cxx_object = new android_webkit_DownloadListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_WebChromeClient(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_WebChromeClient *cxx_object = new android_webkit_WebChromeClient(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_WebChromeClient_CustomViewCallback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_WebChromeClient_CustomViewCallback *cxx_object = new android_webkit_WebChromeClient_CustomViewCallback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_JsResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_JsResult *cxx_object = new android_webkit_JsResult(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_JsPromptResult(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_JsPromptResult *cxx_object = new android_webkit_JsPromptResult(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_WebStorage_QuotaUpdater(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_WebStorage_QuotaUpdater *cxx_object = new android_webkit_WebStorage_QuotaUpdater(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_GeolocationPermissions_Callback(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_GeolocationPermissions_Callback *cxx_object = new android_webkit_GeolocationPermissions_Callback(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_ConsoleMessage(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_ConsoleMessage *cxx_object = new android_webkit_ConsoleMessage(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_ConsoleMessage_MessageLevel(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_webkit_ConsoleMessage_MessageLevel::DEBUG == cxx_value)
			{
				enum_string = "DEBUG";
				break;
			}
			if (android_webkit_ConsoleMessage_MessageLevel::ERROR == cxx_value)
			{
				enum_string = "ERROR";
				break;
			}
			if (android_webkit_ConsoleMessage_MessageLevel::LOG == cxx_value)
			{
				enum_string = "LOG";
				break;
			}
			if (android_webkit_ConsoleMessage_MessageLevel::TIP == cxx_value)
			{
				enum_string = "TIP";
				break;
			}
			if (android_webkit_ConsoleMessage_MessageLevel::WARNING == cxx_value)
			{
				enum_string = "WARNING";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/webkit/ConsoleMessage$MessageLevel"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("DEBUG", enum_string) == 0)
				{
					cxx_value = android_webkit_ConsoleMessage_MessageLevel::DEBUG;
					break;
				}
				if (strcmp("ERROR", enum_string) == 0)
				{
					cxx_value = android_webkit_ConsoleMessage_MessageLevel::ERROR;
					break;
				}
				if (strcmp("LOG", enum_string) == 0)
				{
					cxx_value = android_webkit_ConsoleMessage_MessageLevel::LOG;
					break;
				}
				if (strcmp("TIP", enum_string) == 0)
				{
					cxx_value = android_webkit_ConsoleMessage_MessageLevel::TIP;
					break;
				}
				if (strcmp("WARNING", enum_string) == 0)
				{
					cxx_value = android_webkit_ConsoleMessage_MessageLevel::WARNING;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_webkit_WebView_PictureListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_WebView_PictureListener *cxx_object = new android_webkit_WebView_PictureListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_WebSettings(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_webkit_WebSettings *cxx_object = new android_webkit_WebSettings(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_webkit_WebSettings_TextSize(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_webkit_WebSettings_TextSize::LARGER == cxx_value)
			{
				enum_string = "LARGER";
				break;
			}
			if (android_webkit_WebSettings_TextSize::LARGEST == cxx_value)
			{
				enum_string = "LARGEST";
				break;
			}
			if (android_webkit_WebSettings_TextSize::NORMAL == cxx_value)
			{
				enum_string = "NORMAL";
				break;
			}
			if (android_webkit_WebSettings_TextSize::SMALLER == cxx_value)
			{
				enum_string = "SMALLER";
				break;
			}
			if (android_webkit_WebSettings_TextSize::SMALLEST == cxx_value)
			{
				enum_string = "SMALLEST";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/webkit/WebSettings$TextSize"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("LARGER", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_TextSize::LARGER;
					break;
				}
				if (strcmp("LARGEST", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_TextSize::LARGEST;
					break;
				}
				if (strcmp("NORMAL", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_TextSize::NORMAL;
					break;
				}
				if (strcmp("SMALLER", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_TextSize::SMALLER;
					break;
				}
				if (strcmp("SMALLEST", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_TextSize::SMALLEST;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_webkit_WebSettings_ZoomDensity(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_webkit_WebSettings_ZoomDensity::CLOSE == cxx_value)
			{
				enum_string = "CLOSE";
				break;
			}
			if (android_webkit_WebSettings_ZoomDensity::FAR == cxx_value)
			{
				enum_string = "FAR";
				break;
			}
			if (android_webkit_WebSettings_ZoomDensity::MEDIUM == cxx_value)
			{
				enum_string = "MEDIUM";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/webkit/WebSettings$ZoomDensity"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("CLOSE", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_ZoomDensity::CLOSE;
					break;
				}
				if (strcmp("FAR", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_ZoomDensity::FAR;
					break;
				}
				if (strcmp("MEDIUM", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_ZoomDensity::MEDIUM;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_webkit_WebSettings_LayoutAlgorithm(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_webkit_WebSettings_LayoutAlgorithm::NARROW_COLUMNS == cxx_value)
			{
				enum_string = "NARROW_COLUMNS";
				break;
			}
			if (android_webkit_WebSettings_LayoutAlgorithm::NORMAL == cxx_value)
			{
				enum_string = "NORMAL";
				break;
			}
			if (android_webkit_WebSettings_LayoutAlgorithm::SINGLE_COLUMN == cxx_value)
			{
				enum_string = "SINGLE_COLUMN";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/webkit/WebSettings$LayoutAlgorithm"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("NARROW_COLUMNS", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_LayoutAlgorithm::NARROW_COLUMNS;
					break;
				}
				if (strcmp("NORMAL", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_LayoutAlgorithm::NORMAL;
					break;
				}
				if (strcmp("SINGLE_COLUMN", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_LayoutAlgorithm::SINGLE_COLUMN;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_webkit_WebSettings_PluginState(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_webkit_WebSettings_PluginState::OFF == cxx_value)
			{
				enum_string = "OFF";
				break;
			}
			if (android_webkit_WebSettings_PluginState::ON == cxx_value)
			{
				enum_string = "ON";
				break;
			}
			if (android_webkit_WebSettings_PluginState::ON_DEMAND == cxx_value)
			{
				enum_string = "ON_DEMAND";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/webkit/WebSettings$PluginState"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("OFF", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_PluginState::OFF;
					break;
				}
				if (strcmp("ON", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_PluginState::ON;
					break;
				}
				if (strcmp("ON_DEMAND", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_PluginState::ON_DEMAND;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_webkit_WebSettings_RenderPriority(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_webkit_WebSettings_RenderPriority::HIGH == cxx_value)
			{
				enum_string = "HIGH";
				break;
			}
			if (android_webkit_WebSettings_RenderPriority::LOW == cxx_value)
			{
				enum_string = "LOW";
				break;
			}
			if (android_webkit_WebSettings_RenderPriority::NORMAL == cxx_value)
			{
				enum_string = "NORMAL";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/webkit/WebSettings$RenderPriority"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("HIGH", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_RenderPriority::HIGH;
					break;
				}
				if (strcmp("LOW", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_RenderPriority::LOW;
					break;
				}
				if (strcmp("NORMAL", enum_string) == 0)
				{
					cxx_value = android_webkit_WebSettings_RenderPriority::NORMAL;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_text_Editable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_Editable *cxx_object = new android_text_Editable(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_text_InputFilter(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_InputFilter *cxx_object = new android_text_InputFilter(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_text_Spanned(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_Spanned *cxx_object = new android_text_Spanned(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_view_ViewGroup_MarginLayoutParams(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_view_ViewGroup_MarginLayoutParams *cxx_object = new android_view_ViewGroup_MarginLayoutParams(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_text_Layout(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_Layout *cxx_object = new android_text_Layout(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_text_TextPaint(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_TextPaint *cxx_object = new android_text_TextPaint(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_text_Layout_Alignment(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_text_Layout_Alignment::ALIGN_CENTER == cxx_value)
			{
				enum_string = "ALIGN_CENTER";
				break;
			}
			if (android_text_Layout_Alignment::ALIGN_NORMAL == cxx_value)
			{
				enum_string = "ALIGN_NORMAL";
				break;
			}
			if (android_text_Layout_Alignment::ALIGN_OPPOSITE == cxx_value)
			{
				enum_string = "ALIGN_OPPOSITE";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/text/Layout$Alignment"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("ALIGN_CENTER", enum_string) == 0)
				{
					cxx_value = android_text_Layout_Alignment::ALIGN_CENTER;
					break;
				}
				if (strcmp("ALIGN_NORMAL", enum_string) == 0)
				{
					cxx_value = android_text_Layout_Alignment::ALIGN_NORMAL;
					break;
				}
				if (strcmp("ALIGN_OPPOSITE", enum_string) == 0)
				{
					cxx_value = android_text_Layout_Alignment::ALIGN_OPPOSITE;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_text_Layout_Directions(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_Layout_Directions *cxx_object = new android_text_Layout_Directions(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_text_method_KeyListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_method_KeyListener *cxx_object = new android_text_method_KeyListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_text_method_MovementMethod(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_method_MovementMethod *cxx_object = new android_text_method_MovementMethod(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_text_Spannable(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_Spannable *cxx_object = new android_text_Spannable(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_text_method_TransformationMethod(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_method_TransformationMethod *cxx_object = new android_text_method_TransformationMethod(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_text_style_URLSpan(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_style_URLSpan *cxx_object = new android_text_style_URLSpan(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_text_Editable_Factory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_Editable_Factory *cxx_object = new android_text_Editable_Factory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_text_Spannable_Factory(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_Spannable_Factory *cxx_object = new android_text_Spannable_Factory(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_text_TextUtils_TruncateAt(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
{
	CXXContext *ctx = CXXContext::sharedInstance();
	JNIContext *jni = JNIContext::sharedInstance();

	if (converter_type == CONVERT_TO_JAVA)
	{
		const char * enum_string = 0;
		do
		{
			if (android_text_TextUtils_TruncateAt::START == cxx_value)
			{
				enum_string = "START";
				break;
			}
			if (android_text_TextUtils_TruncateAt::MIDDLE == cxx_value)
			{
				enum_string = "MIDDLE";
				break;
			}
			if (android_text_TextUtils_TruncateAt::END == cxx_value)
			{
				enum_string = "END";
				break;
			}
			if (android_text_TextUtils_TruncateAt::MARQUEE == cxx_value)
			{
				enum_string = "MARQUEE";
				break;
			}
			if (android_text_TextUtils_TruncateAt::END_SMALL == cxx_value)
			{
				enum_string = "END_SMALL";
				break;
			}
		}
		while(0);
		java_value = (long) jni->toJEnum(jni->getClassRef("android/text/TextUtils$TruncateAt"), enum_string);
	}
	else if (converter_type == CONVERT_TO_CXX)
	{
		jstring jenum = jni->toCXXEnumString((jobject) java_value);
		const char * enum_string = jni->getUTFString(jenum).c_str();
		cxx_value = 0;
		do
		{
				if (strcmp("START", enum_string) == 0)
				{
					cxx_value = android_text_TextUtils_TruncateAt::START;
					break;
				}
				if (strcmp("MIDDLE", enum_string) == 0)
				{
					cxx_value = android_text_TextUtils_TruncateAt::MIDDLE;
					break;
				}
				if (strcmp("END", enum_string) == 0)
				{
					cxx_value = android_text_TextUtils_TruncateAt::END;
					break;
				}
				if (strcmp("MARQUEE", enum_string) == 0)
				{
					cxx_value = android_text_TextUtils_TruncateAt::MARQUEE;
					break;
				}
				if (strcmp("END_SMALL", enum_string) == 0)
				{
					cxx_value = android_text_TextUtils_TruncateAt::END_SMALL;
					break;
				}
		} 
		while (0);		
	}
}
void convert_android_text_TextWatcher(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_text_TextWatcher *cxx_object = new android_text_TextWatcher(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_animation_ObjectAnimator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_animation_ObjectAnimator *cxx_object = new android_animation_ObjectAnimator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_animation_TypeEvaluator(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_animation_TypeEvaluator *cxx_object = new android_animation_TypeEvaluator(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_animation_PropertyValuesHolder(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_animation_PropertyValuesHolder *cxx_object = new android_animation_PropertyValuesHolder(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_animation_Keyframe(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_animation_Keyframe *cxx_object = new android_animation_Keyframe(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_SearchableInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_SearchableInfo *cxx_object = new android_app_SearchableInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_content_DialogInterface(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_content_DialogInterface *cxx_object = new android_content_DialogInterface(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_app_LocalActivityManager(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_app_LocalActivityManager *cxx_object = new android_app_LocalActivityManager(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_media_MediaPlayer_OnPreparedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_media_MediaPlayer_OnPreparedListener *cxx_object = new android_media_MediaPlayer_OnPreparedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_media_MediaPlayer(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_media_MediaPlayer *cxx_object = new android_media_MediaPlayer(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_media_MediaPlayer_OnCompletionListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_media_MediaPlayer_OnCompletionListener *cxx_object = new android_media_MediaPlayer_OnCompletionListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_media_MediaPlayer_OnErrorListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_media_MediaPlayer_OnErrorListener *cxx_object = new android_media_MediaPlayer_OnErrorListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_media_MediaPlayer_OnInfoListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_media_MediaPlayer_OnInfoListener *cxx_object = new android_media_MediaPlayer_OnInfoListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_media_MediaPlayer_TrackInfo(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_media_MediaPlayer_TrackInfo *cxx_object = new android_media_MediaPlayer_TrackInfo(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_media_MediaPlayer_OnBufferingUpdateListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_media_MediaPlayer_OnBufferingUpdateListener *cxx_object = new android_media_MediaPlayer_OnBufferingUpdateListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_media_MediaPlayer_OnSeekCompleteListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_media_MediaPlayer_OnSeekCompleteListener *cxx_object = new android_media_MediaPlayer_OnSeekCompleteListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_media_MediaPlayer_OnVideoSizeChangedListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_media_MediaPlayer_OnVideoSizeChangedListener *cxx_object = new android_media_MediaPlayer_OnVideoSizeChangedListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_media_MediaPlayer_OnTimedTextListener(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_media_MediaPlayer_OnTimedTextListener *cxx_object = new android_media_MediaPlayer_OnTimedTextListener(proxy);
		cxx_value = (long) cxx_object;
	}
}
void convert_android_media_TimedText(long& java_value, long& cxx_value, const CXXTypeHierarchy cxx_type_hierarchy, const converter_t& converter_type, std::stack<long>& converter_stack)
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
		android_media_TimedText *cxx_object = new android_media_TimedText(proxy);
		cxx_value = (long) cxx_object;
	}
}

