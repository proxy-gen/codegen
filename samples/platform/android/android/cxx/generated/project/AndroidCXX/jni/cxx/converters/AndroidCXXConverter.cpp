/*
 * Implementation (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



#include <AndroidCXXConverter.hpp>

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
		java_math_BigDecimal *cxx_object = new java_math_BigDecimal((void *) java_value);
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
		java_lang_String *cxx_object = new java_lang_String((void *) java_value);
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
			if (JAVA_NET_PROXY_TYPE::DIRECT == cxx_value)
			{
				enum_string = "DIRECT";
				break;
			}
			if (JAVA_NET_PROXY_TYPE::HTTP == cxx_value)
			{
				enum_string = "HTTP";
				break;
			}
			if (JAVA_NET_PROXY_TYPE::SOCKS == cxx_value)
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
					cxx_value = JAVA_NET_PROXY_TYPE::DIRECT;
					break;
				}
				if (strcmp("HTTP", enum_string) == 0)
				{
					cxx_value = JAVA_NET_PROXY_TYPE::HTTP;
					break;
				}
				if (strcmp("SOCKS", enum_string) == 0)
				{
					cxx_value = JAVA_NET_PROXY_TYPE::SOCKS;
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
		org_json_JSONObject *cxx_object = new org_json_JSONObject((void *) java_value);
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
		org_json_JSONArray *cxx_object = new org_json_JSONArray((void *) java_value);
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
		java_lang_Error *cxx_object = new java_lang_Error((void *) java_value);
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
		java_util_concurrent_Executor *cxx_object = new java_util_concurrent_Executor((void *) java_value);
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
		java_io_BufferedOutputStream *cxx_object = new java_io_BufferedOutputStream((void *) java_value);
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
		java_io_FileNotFoundException *cxx_object = new java_io_FileNotFoundException((void *) java_value);
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
		java_io_IOException *cxx_object = new java_io_IOException((void *) java_value);
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
		java_io_Closeable *cxx_object = new java_io_Closeable((void *) java_value);
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
		java_net_HttpURLConnection *cxx_object = new java_net_HttpURLConnection((void *) java_value);
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
		java_net_MalformedURLException *cxx_object = new java_net_MalformedURLException((void *) java_value);
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
		java_util_Currency *cxx_object = new java_util_Currency((void *) java_value);
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
		android_location_Location *cxx_object = new android_location_Location((void *) java_value);
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
		android_net_http_SslError *cxx_object = new android_net_http_SslError((void *) java_value);
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
		android_os_Parcel *cxx_object = new android_os_Parcel((void *) java_value);
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
		android_support_v4_app_Fragment *cxx_object = new android_support_v4_app_Fragment((void *) java_value);
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
		android_webkit_WebView *cxx_object = new android_webkit_WebView((void *) java_value);
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
		android_webkit_SslErrorHandler *cxx_object = new android_webkit_SslErrorHandler((void *) java_value);
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
		android_widget_AbsListView *cxx_object = new android_widget_AbsListView((void *) java_value);
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
		android_widget_AbsListView_LayoutParams *cxx_object = new android_widget_AbsListView_LayoutParams((void *) java_value);
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
		android_widget_AbsListView_MultiChoiceModeListener *cxx_object = new android_widget_AbsListView_MultiChoiceModeListener((void *) java_value);
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
		android_widget_AbsListView_OnScrollListener *cxx_object = new android_widget_AbsListView_OnScrollListener((void *) java_value);
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
		android_widget_AbsListView_RecyclerListener *cxx_object = new android_widget_AbsListView_RecyclerListener((void *) java_value);
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
		android_widget_AbsListView_SelectionBoundsAdjuster *cxx_object = new android_widget_AbsListView_SelectionBoundsAdjuster((void *) java_value);
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
		android_widget_Adapter *cxx_object = new android_widget_Adapter((void *) java_value);
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
		android_widget_AdapterView_OnItemClickListener *cxx_object = new android_widget_AdapterView_OnItemClickListener((void *) java_value);
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
		android_widget_AdapterView_OnItemLongClickListener *cxx_object = new android_widget_AdapterView_OnItemLongClickListener((void *) java_value);
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
		android_widget_AdapterView_OnItemSelectedListener *cxx_object = new android_widget_AdapterView_OnItemSelectedListener((void *) java_value);
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
		android_widget_Advanceable *cxx_object = new android_widget_Advanceable((void *) java_value);
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
		android_widget_AutoCompleteTextView_OnDismissListener *cxx_object = new android_widget_AutoCompleteTextView_OnDismissListener((void *) java_value);
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
		android_widget_AutoCompleteTextView_Validator *cxx_object = new android_widget_AutoCompleteTextView_Validator((void *) java_value);
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
		android_widget_CalendarView_OnDateChangeListener *cxx_object = new android_widget_CalendarView_OnDateChangeListener((void *) java_value);
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
		android_widget_Checkable *cxx_object = new android_widget_Checkable((void *) java_value);
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
		android_widget_Chronometer_OnChronometerTickListener *cxx_object = new android_widget_Chronometer_OnChronometerTickListener((void *) java_value);
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
		android_widget_CompoundButton_OnCheckedChangeListener *cxx_object = new android_widget_CompoundButton_OnCheckedChangeListener((void *) java_value);
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
		android_widget_DatePicker_OnDateChangedListener *cxx_object = new android_widget_DatePicker_OnDateChangedListener((void *) java_value);
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
		android_widget_ExpandableListAdapter *cxx_object = new android_widget_ExpandableListAdapter((void *) java_value);
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
		android_widget_ExpandableListView_OnChildClickListener *cxx_object = new android_widget_ExpandableListView_OnChildClickListener((void *) java_value);
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
		android_widget_ExpandableListView_OnGroupClickListener *cxx_object = new android_widget_ExpandableListView_OnGroupClickListener((void *) java_value);
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
		android_widget_ExpandableListView_OnGroupCollapseListener *cxx_object = new android_widget_ExpandableListView_OnGroupCollapseListener((void *) java_value);
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
		android_widget_ExpandableListView_OnGroupExpandListener *cxx_object = new android_widget_ExpandableListView_OnGroupExpandListener((void *) java_value);
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
		android_widget_Filter_FilterListener *cxx_object = new android_widget_Filter_FilterListener((void *) java_value);
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
		android_widget_Filterable *cxx_object = new android_widget_Filterable((void *) java_value);
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
		android_widget_FilterQueryProvider *cxx_object = new android_widget_FilterQueryProvider((void *) java_value);
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
		android_widget_HeterogeneousExpandableList *cxx_object = new android_widget_HeterogeneousExpandableList((void *) java_value);
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
		android_widget_ListAdapter *cxx_object = new android_widget_ListAdapter((void *) java_value);
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
		android_widget_MediaController_MediaPlayerControl *cxx_object = new android_widget_MediaController_MediaPlayerControl((void *) java_value);
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
		android_widget_MultiAutoCompleteTextView_Tokenizer *cxx_object = new android_widget_MultiAutoCompleteTextView_Tokenizer((void *) java_value);
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
		android_widget_NumberPicker_Formatter *cxx_object = new android_widget_NumberPicker_Formatter((void *) java_value);
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
		android_widget_NumberPicker_OnScrollListener *cxx_object = new android_widget_NumberPicker_OnScrollListener((void *) java_value);
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
		android_widget_NumberPicker_OnValueChangeListener *cxx_object = new android_widget_NumberPicker_OnValueChangeListener((void *) java_value);
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
		android_widget_PopupMenu_OnDismissListener *cxx_object = new android_widget_PopupMenu_OnDismissListener((void *) java_value);
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
		android_widget_PopupMenu_OnMenuItemClickListener *cxx_object = new android_widget_PopupMenu_OnMenuItemClickListener((void *) java_value);
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
		android_widget_PopupWindow_OnDismissListener *cxx_object = new android_widget_PopupWindow_OnDismissListener((void *) java_value);
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
		android_widget_RadioGroup_OnCheckedChangeListener *cxx_object = new android_widget_RadioGroup_OnCheckedChangeListener((void *) java_value);
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
		android_widget_RatingBar_OnRatingBarChangeListener *cxx_object = new android_widget_RatingBar_OnRatingBarChangeListener((void *) java_value);
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
		android_widget_RemoteViewsService_RemoteViewsFactory *cxx_object = new android_widget_RemoteViewsService_RemoteViewsFactory((void *) java_value);
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
		android_widget_SearchView_OnCloseListener *cxx_object = new android_widget_SearchView_OnCloseListener((void *) java_value);
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
		android_widget_SearchView_OnQueryTextListener *cxx_object = new android_widget_SearchView_OnQueryTextListener((void *) java_value);
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
		android_widget_SearchView_OnSuggestionListener *cxx_object = new android_widget_SearchView_OnSuggestionListener((void *) java_value);
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
		android_widget_SectionIndexer *cxx_object = new android_widget_SectionIndexer((void *) java_value);
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
		android_widget_SeekBar_OnSeekBarChangeListener *cxx_object = new android_widget_SeekBar_OnSeekBarChangeListener((void *) java_value);
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
		android_widget_ShareActionProvider_OnShareTargetSelectedListener *cxx_object = new android_widget_ShareActionProvider_OnShareTargetSelectedListener((void *) java_value);
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
		android_widget_SimpleAdapter_ViewBinder *cxx_object = new android_widget_SimpleAdapter_ViewBinder((void *) java_value);
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
		android_widget_SimpleCursorAdapter_CursorToStringConverter *cxx_object = new android_widget_SimpleCursorAdapter_CursorToStringConverter((void *) java_value);
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
		android_widget_SimpleCursorAdapter_ViewBinder *cxx_object = new android_widget_SimpleCursorAdapter_ViewBinder((void *) java_value);
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
		android_widget_SimpleCursorTreeAdapter_ViewBinder *cxx_object = new android_widget_SimpleCursorTreeAdapter_ViewBinder((void *) java_value);
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
		android_widget_SlidingDrawer_OnDrawerCloseListener *cxx_object = new android_widget_SlidingDrawer_OnDrawerCloseListener((void *) java_value);
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
		android_widget_SlidingDrawer_OnDrawerOpenListener *cxx_object = new android_widget_SlidingDrawer_OnDrawerOpenListener((void *) java_value);
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
		android_widget_SlidingDrawer_OnDrawerScrollListener *cxx_object = new android_widget_SlidingDrawer_OnDrawerScrollListener((void *) java_value);
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
		android_widget_SpinnerAdapter *cxx_object = new android_widget_SpinnerAdapter((void *) java_value);
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
		android_widget_TabHost_OnTabChangeListener *cxx_object = new android_widget_TabHost_OnTabChangeListener((void *) java_value);
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
		android_widget_TabHost_TabContentFactory *cxx_object = new android_widget_TabHost_TabContentFactory((void *) java_value);
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
		android_widget_TextView_OnEditorActionListener *cxx_object = new android_widget_TextView_OnEditorActionListener((void *) java_value);
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
		android_widget_TimePicker_OnTimeChangedListener *cxx_object = new android_widget_TimePicker_OnTimeChangedListener((void *) java_value);
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
		android_widget_ViewSwitcher_ViewFactory *cxx_object = new android_widget_ViewSwitcher_ViewFactory((void *) java_value);
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
		android_widget_WrapperListAdapter *cxx_object = new android_widget_WrapperListAdapter((void *) java_value);
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
		android_widget_ZoomButtonsController_OnZoomListener *cxx_object = new android_widget_ZoomButtonsController_OnZoomListener((void *) java_value);
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
		android_widget_AbsoluteLayout *cxx_object = new android_widget_AbsoluteLayout((void *) java_value);
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
		android_widget_AbsoluteLayout_LayoutParams *cxx_object = new android_widget_AbsoluteLayout_LayoutParams((void *) java_value);
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
		android_widget_AbsSeekBar *cxx_object = new android_widget_AbsSeekBar((void *) java_value);
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
		android_widget_AbsSpinner *cxx_object = new android_widget_AbsSpinner((void *) java_value);
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
		android_widget_AdapterView *cxx_object = new android_widget_AdapterView((void *) java_value);
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
		android_widget_AdapterView_AdapterContextMenuInfo *cxx_object = new android_widget_AdapterView_AdapterContextMenuInfo((void *) java_value);
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
		android_widget_AdapterViewAnimator *cxx_object = new android_widget_AdapterViewAnimator((void *) java_value);
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
		android_widget_AdapterViewFlipper *cxx_object = new android_widget_AdapterViewFlipper((void *) java_value);
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
		android_widget_AlphabetIndexer *cxx_object = new android_widget_AlphabetIndexer((void *) java_value);
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
		android_widget_AnalogClock *cxx_object = new android_widget_AnalogClock((void *) java_value);
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
		android_widget_ArrayAdapter *cxx_object = new android_widget_ArrayAdapter((void *) java_value);
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
		android_widget_AutoCompleteTextView *cxx_object = new android_widget_AutoCompleteTextView((void *) java_value);
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
		android_widget_BaseAdapter *cxx_object = new android_widget_BaseAdapter((void *) java_value);
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
		android_widget_BaseExpandableListAdapter *cxx_object = new android_widget_BaseExpandableListAdapter((void *) java_value);
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
		android_widget_Button *cxx_object = new android_widget_Button((void *) java_value);
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
		android_widget_CalendarView *cxx_object = new android_widget_CalendarView((void *) java_value);
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
		android_widget_CheckBox *cxx_object = new android_widget_CheckBox((void *) java_value);
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
		android_widget_CheckedTextView *cxx_object = new android_widget_CheckedTextView((void *) java_value);
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
		android_widget_Chronometer *cxx_object = new android_widget_Chronometer((void *) java_value);
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
		android_widget_CompoundButton *cxx_object = new android_widget_CompoundButton((void *) java_value);
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
		android_widget_CursorAdapter *cxx_object = new android_widget_CursorAdapter((void *) java_value);
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
		android_widget_CursorTreeAdapter *cxx_object = new android_widget_CursorTreeAdapter((void *) java_value);
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
		android_widget_DatePicker *cxx_object = new android_widget_DatePicker((void *) java_value);
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
		android_widget_DialerFilter *cxx_object = new android_widget_DialerFilter((void *) java_value);
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
		android_widget_DigitalClock *cxx_object = new android_widget_DigitalClock((void *) java_value);
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
		android_widget_EdgeEffect *cxx_object = new android_widget_EdgeEffect((void *) java_value);
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
		android_widget_EditText *cxx_object = new android_widget_EditText((void *) java_value);
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
		android_widget_ExpandableListView *cxx_object = new android_widget_ExpandableListView((void *) java_value);
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
		android_widget_ExpandableListView_ExpandableListContextMenuInfo *cxx_object = new android_widget_ExpandableListView_ExpandableListContextMenuInfo((void *) java_value);
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
		android_widget_Filter *cxx_object = new android_widget_Filter((void *) java_value);
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
		android_widget_Filter_FilterResults *cxx_object = new android_widget_Filter_FilterResults((void *) java_value);
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
		android_widget_FrameLayout *cxx_object = new android_widget_FrameLayout((void *) java_value);
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
		android_widget_FrameLayout_LayoutParams *cxx_object = new android_widget_FrameLayout_LayoutParams((void *) java_value);
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
		android_widget_Gallery *cxx_object = new android_widget_Gallery((void *) java_value);
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
		android_widget_Gallery_LayoutParams *cxx_object = new android_widget_Gallery_LayoutParams((void *) java_value);
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
		android_widget_GridLayout *cxx_object = new android_widget_GridLayout((void *) java_value);
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
		android_widget_GridLayout_Alignment *cxx_object = new android_widget_GridLayout_Alignment((void *) java_value);
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
		android_widget_GridLayout_LayoutParams *cxx_object = new android_widget_GridLayout_LayoutParams((void *) java_value);
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
		android_widget_GridLayout_Spec *cxx_object = new android_widget_GridLayout_Spec((void *) java_value);
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
		android_widget_GridView *cxx_object = new android_widget_GridView((void *) java_value);
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
		android_widget_HeaderViewListAdapter *cxx_object = new android_widget_HeaderViewListAdapter((void *) java_value);
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
		android_widget_HorizontalScrollView *cxx_object = new android_widget_HorizontalScrollView((void *) java_value);
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
		android_widget_ImageButton *cxx_object = new android_widget_ImageButton((void *) java_value);
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
		android_widget_ImageSwitcher *cxx_object = new android_widget_ImageSwitcher((void *) java_value);
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
		android_widget_ImageView *cxx_object = new android_widget_ImageView((void *) java_value);
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
		android_widget_LinearLayout *cxx_object = new android_widget_LinearLayout((void *) java_value);
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
		android_widget_LinearLayout_LayoutParams *cxx_object = new android_widget_LinearLayout_LayoutParams((void *) java_value);
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
		android_widget_ListPopupWindow *cxx_object = new android_widget_ListPopupWindow((void *) java_value);
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
		android_widget_ListView *cxx_object = new android_widget_ListView((void *) java_value);
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
		android_widget_ListView_FixedViewInfo *cxx_object = new android_widget_ListView_FixedViewInfo((void *) java_value);
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
		android_widget_MediaController *cxx_object = new android_widget_MediaController((void *) java_value);
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
		android_widget_MultiAutoCompleteTextView *cxx_object = new android_widget_MultiAutoCompleteTextView((void *) java_value);
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
		android_widget_MultiAutoCompleteTextView_CommaTokenizer *cxx_object = new android_widget_MultiAutoCompleteTextView_CommaTokenizer((void *) java_value);
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
		android_widget_NumberPicker *cxx_object = new android_widget_NumberPicker((void *) java_value);
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
		android_widget_OverScroller *cxx_object = new android_widget_OverScroller((void *) java_value);
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
		android_widget_PopupMenu *cxx_object = new android_widget_PopupMenu((void *) java_value);
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
		android_widget_PopupWindow *cxx_object = new android_widget_PopupWindow((void *) java_value);
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
		android_widget_ProgressBar *cxx_object = new android_widget_ProgressBar((void *) java_value);
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
		android_widget_QuickContactBadge *cxx_object = new android_widget_QuickContactBadge((void *) java_value);
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
		android_widget_RadioButton *cxx_object = new android_widget_RadioButton((void *) java_value);
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
		android_widget_RadioGroup *cxx_object = new android_widget_RadioGroup((void *) java_value);
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
		android_widget_RadioGroup_LayoutParams *cxx_object = new android_widget_RadioGroup_LayoutParams((void *) java_value);
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
		android_widget_RatingBar *cxx_object = new android_widget_RatingBar((void *) java_value);
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
		android_widget_RelativeLayout *cxx_object = new android_widget_RelativeLayout((void *) java_value);
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
		android_widget_RelativeLayout_LayoutParams *cxx_object = new android_widget_RelativeLayout_LayoutParams((void *) java_value);
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
		android_widget_RemoteViews *cxx_object = new android_widget_RemoteViews((void *) java_value);
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
		android_widget_RemoteViewsService *cxx_object = new android_widget_RemoteViewsService((void *) java_value);
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
		android_widget_ResourceCursorAdapter *cxx_object = new android_widget_ResourceCursorAdapter((void *) java_value);
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
		android_widget_ResourceCursorTreeAdapter *cxx_object = new android_widget_ResourceCursorTreeAdapter((void *) java_value);
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
		android_widget_Scroller *cxx_object = new android_widget_Scroller((void *) java_value);
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
		android_widget_ScrollView *cxx_object = new android_widget_ScrollView((void *) java_value);
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
		android_widget_SearchView *cxx_object = new android_widget_SearchView((void *) java_value);
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
		android_widget_SeekBar *cxx_object = new android_widget_SeekBar((void *) java_value);
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
		android_widget_ShareActionProvider *cxx_object = new android_widget_ShareActionProvider((void *) java_value);
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
		android_widget_SimpleAdapter *cxx_object = new android_widget_SimpleAdapter((void *) java_value);
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
		android_widget_SimpleCursorAdapter *cxx_object = new android_widget_SimpleCursorAdapter((void *) java_value);
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
		android_widget_SimpleCursorTreeAdapter *cxx_object = new android_widget_SimpleCursorTreeAdapter((void *) java_value);
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
		android_widget_SimpleExpandableListAdapter *cxx_object = new android_widget_SimpleExpandableListAdapter((void *) java_value);
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
		android_widget_SlidingDrawer *cxx_object = new android_widget_SlidingDrawer((void *) java_value);
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
		android_widget_Space *cxx_object = new android_widget_Space((void *) java_value);
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
		android_widget_Spinner *cxx_object = new android_widget_Spinner((void *) java_value);
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
		android_widget_StackView *cxx_object = new android_widget_StackView((void *) java_value);
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
		android_widget_Switch *cxx_object = new android_widget_Switch((void *) java_value);
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
		android_widget_TabHost *cxx_object = new android_widget_TabHost((void *) java_value);
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
		android_widget_TabHost_TabSpec *cxx_object = new android_widget_TabHost_TabSpec((void *) java_value);
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
		android_widget_TableLayout *cxx_object = new android_widget_TableLayout((void *) java_value);
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
		android_widget_TableLayout_LayoutParams *cxx_object = new android_widget_TableLayout_LayoutParams((void *) java_value);
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
		android_widget_TableRow *cxx_object = new android_widget_TableRow((void *) java_value);
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
		android_widget_TableRow_LayoutParams *cxx_object = new android_widget_TableRow_LayoutParams((void *) java_value);
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
		android_widget_TabWidget *cxx_object = new android_widget_TabWidget((void *) java_value);
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
		android_widget_TextClock *cxx_object = new android_widget_TextClock((void *) java_value);
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
		android_widget_TextSwitcher *cxx_object = new android_widget_TextSwitcher((void *) java_value);
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
		android_widget_TextView *cxx_object = new android_widget_TextView((void *) java_value);
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
		android_widget_TextView_SavedState *cxx_object = new android_widget_TextView_SavedState((void *) java_value);
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
		android_widget_TimePicker *cxx_object = new android_widget_TimePicker((void *) java_value);
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
		android_widget_Toast *cxx_object = new android_widget_Toast((void *) java_value);
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
		android_widget_ToggleButton *cxx_object = new android_widget_ToggleButton((void *) java_value);
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
		android_widget_TwoLineListItem *cxx_object = new android_widget_TwoLineListItem((void *) java_value);
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
		android_widget_VideoView *cxx_object = new android_widget_VideoView((void *) java_value);
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
		android_widget_ViewAnimator *cxx_object = new android_widget_ViewAnimator((void *) java_value);
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
		android_widget_ViewFlipper *cxx_object = new android_widget_ViewFlipper((void *) java_value);
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
		android_widget_ViewSwitcher *cxx_object = new android_widget_ViewSwitcher((void *) java_value);
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
		android_widget_ZoomButton *cxx_object = new android_widget_ZoomButton((void *) java_value);
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
		android_widget_ZoomButtonsController *cxx_object = new android_widget_ZoomButtonsController((void *) java_value);
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
		android_widget_ZoomControls *cxx_object = new android_widget_ZoomControls((void *) java_value);
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
			if (ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::CENTER == cxx_value)
			{
				enum_string = "CENTER";
				break;
			}
			if (ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::CENTER_CROP == cxx_value)
			{
				enum_string = "CENTER_CROP";
				break;
			}
			if (ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::CENTER_INSIDE == cxx_value)
			{
				enum_string = "CENTER_INSIDE";
				break;
			}
			if (ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::FIT_CENTER == cxx_value)
			{
				enum_string = "FIT_CENTER";
				break;
			}
			if (ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::FIT_END == cxx_value)
			{
				enum_string = "FIT_END";
				break;
			}
			if (ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::FIT_START == cxx_value)
			{
				enum_string = "FIT_START";
				break;
			}
			if (ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::FIT_XY == cxx_value)
			{
				enum_string = "FIT_XY";
				break;
			}
			if (ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::MATRIX == cxx_value)
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
					cxx_value = ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::CENTER;
					break;
				}
				if (strcmp("CENTER_CROP", enum_string) == 0)
				{
					cxx_value = ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::CENTER_CROP;
					break;
				}
				if (strcmp("CENTER_INSIDE", enum_string) == 0)
				{
					cxx_value = ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::CENTER_INSIDE;
					break;
				}
				if (strcmp("FIT_CENTER", enum_string) == 0)
				{
					cxx_value = ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::FIT_CENTER;
					break;
				}
				if (strcmp("FIT_END", enum_string) == 0)
				{
					cxx_value = ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::FIT_END;
					break;
				}
				if (strcmp("FIT_START", enum_string) == 0)
				{
					cxx_value = ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::FIT_START;
					break;
				}
				if (strcmp("FIT_XY", enum_string) == 0)
				{
					cxx_value = ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::FIT_XY;
					break;
				}
				if (strcmp("MATRIX", enum_string) == 0)
				{
					cxx_value = ANDROID_WIDGET_IMAGEVIEW_SCALETYPE::MATRIX;
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
			if (ANDROID_WIDGET_TEXTVIEW_BUFFERTYPE::EDITABLE == cxx_value)
			{
				enum_string = "EDITABLE";
				break;
			}
			if (ANDROID_WIDGET_TEXTVIEW_BUFFERTYPE::NORMAL == cxx_value)
			{
				enum_string = "NORMAL";
				break;
			}
			if (ANDROID_WIDGET_TEXTVIEW_BUFFERTYPE::SPANNABLE == cxx_value)
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
					cxx_value = ANDROID_WIDGET_TEXTVIEW_BUFFERTYPE::EDITABLE;
					break;
				}
				if (strcmp("NORMAL", enum_string) == 0)
				{
					cxx_value = ANDROID_WIDGET_TEXTVIEW_BUFFERTYPE::NORMAL;
					break;
				}
				if (strcmp("SPANNABLE", enum_string) == 0)
				{
					cxx_value = ANDROID_WIDGET_TEXTVIEW_BUFFERTYPE::SPANNABLE;
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
		android_widget_RemoteViews_ActionException *cxx_object = new android_widget_RemoteViews_ActionException((void *) java_value);
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
		java_math_MathContext *cxx_object = new java_math_MathContext((void *) java_value);
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
			if (JAVA_MATH_ROUNDINGMODE::UP == cxx_value)
			{
				enum_string = "UP";
				break;
			}
			if (JAVA_MATH_ROUNDINGMODE::DOWN == cxx_value)
			{
				enum_string = "DOWN";
				break;
			}
			if (JAVA_MATH_ROUNDINGMODE::CEILING == cxx_value)
			{
				enum_string = "CEILING";
				break;
			}
			if (JAVA_MATH_ROUNDINGMODE::FLOOR == cxx_value)
			{
				enum_string = "FLOOR";
				break;
			}
			if (JAVA_MATH_ROUNDINGMODE::HALF_UP == cxx_value)
			{
				enum_string = "HALF_UP";
				break;
			}
			if (JAVA_MATH_ROUNDINGMODE::HALF_DOWN == cxx_value)
			{
				enum_string = "HALF_DOWN";
				break;
			}
			if (JAVA_MATH_ROUNDINGMODE::HALF_EVEN == cxx_value)
			{
				enum_string = "HALF_EVEN";
				break;
			}
			if (JAVA_MATH_ROUNDINGMODE::UNNECESSARY == cxx_value)
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
					cxx_value = JAVA_MATH_ROUNDINGMODE::UP;
					break;
				}
				if (strcmp("DOWN", enum_string) == 0)
				{
					cxx_value = JAVA_MATH_ROUNDINGMODE::DOWN;
					break;
				}
				if (strcmp("CEILING", enum_string) == 0)
				{
					cxx_value = JAVA_MATH_ROUNDINGMODE::CEILING;
					break;
				}
				if (strcmp("FLOOR", enum_string) == 0)
				{
					cxx_value = JAVA_MATH_ROUNDINGMODE::FLOOR;
					break;
				}
				if (strcmp("HALF_UP", enum_string) == 0)
				{
					cxx_value = JAVA_MATH_ROUNDINGMODE::HALF_UP;
					break;
				}
				if (strcmp("HALF_DOWN", enum_string) == 0)
				{
					cxx_value = JAVA_MATH_ROUNDINGMODE::HALF_DOWN;
					break;
				}
				if (strcmp("HALF_EVEN", enum_string) == 0)
				{
					cxx_value = JAVA_MATH_ROUNDINGMODE::HALF_EVEN;
					break;
				}
				if (strcmp("UNNECESSARY", enum_string) == 0)
				{
					cxx_value = JAVA_MATH_ROUNDINGMODE::UNNECESSARY;
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
		java_nio_charset_Charset *cxx_object = new java_nio_charset_Charset((void *) java_value);
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
		java_lang_Object *cxx_object = new java_lang_Object((void *) java_value);
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
		java_lang_Class *cxx_object = new java_lang_Class((void *) java_value);
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
		java_lang_ClassLoader *cxx_object = new java_lang_ClassLoader((void *) java_value);
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
		java_io_InputStream *cxx_object = new java_io_InputStream((void *) java_value);
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
		java_net_URL *cxx_object = new java_net_URL((void *) java_value);
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
		java_net_URLStreamHandler *cxx_object = new java_net_URLStreamHandler((void *) java_value);
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
		java_net_URI *cxx_object = new java_net_URI((void *) java_value);
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
		java_net_Proxy *cxx_object = new java_net_Proxy((void *) java_value);
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
		java_net_SocketAddress *cxx_object = new java_net_SocketAddress((void *) java_value);
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
		java_net_URLConnection *cxx_object = new java_net_URLConnection((void *) java_value);
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
		java_security_Permission *cxx_object = new java_security_Permission((void *) java_value);
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
		java_security_PermissionCollection *cxx_object = new java_security_PermissionCollection((void *) java_value);
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
		java_util_Enumeration *cxx_object = new java_util_Enumeration((void *) java_value);
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
		java_net_FileNameMap *cxx_object = new java_net_FileNameMap((void *) java_value);
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
		java_util_Map *cxx_object = new java_util_Map((void *) java_value);
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
		java_util_Collection *cxx_object = new java_util_Collection((void *) java_value);
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
		java_util_Iterator *cxx_object = new java_util_Iterator((void *) java_value);
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
		java_util_Set *cxx_object = new java_util_Set((void *) java_value);
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
		java_util_Map_Entry *cxx_object = new java_util_Map_Entry((void *) java_value);
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
		java_util_List *cxx_object = new java_util_List((void *) java_value);
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
		java_util_ListIterator *cxx_object = new java_util_ListIterator((void *) java_value);
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
		java_io_OutputStream *cxx_object = new java_io_OutputStream((void *) java_value);
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
		java_net_ContentHandlerFactory *cxx_object = new java_net_ContentHandlerFactory((void *) java_value);
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
		java_net_ContentHandler *cxx_object = new java_net_ContentHandler((void *) java_value);
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
		java_net_URLStreamHandlerFactory *cxx_object = new java_net_URLStreamHandlerFactory((void *) java_value);
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
		java_lang_reflect_TypeVariable *cxx_object = new java_lang_reflect_TypeVariable((void *) java_value);
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
		java_lang_reflect_Type *cxx_object = new java_lang_reflect_Type((void *) java_value);
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
		java_lang_reflect_GenericDeclaration *cxx_object = new java_lang_reflect_GenericDeclaration((void *) java_value);
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
		java_lang_Package *cxx_object = new java_lang_Package((void *) java_value);
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
		java_lang_annotation_Annotation *cxx_object = new java_lang_annotation_Annotation((void *) java_value);
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
		java_lang_reflect_Method *cxx_object = new java_lang_reflect_Method((void *) java_value);
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
		java_lang_reflect_Constructor *cxx_object = new java_lang_reflect_Constructor((void *) java_value);
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
		java_lang_reflect_Field *cxx_object = new java_lang_reflect_Field((void *) java_value);
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
		java_security_ProtectionDomain *cxx_object = new java_security_ProtectionDomain((void *) java_value);
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
		java_security_CodeSource *cxx_object = new java_security_CodeSource((void *) java_value);
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
		java_security_CodeSigner *cxx_object = new java_security_CodeSigner((void *) java_value);
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
		java_security_cert_CertPath *cxx_object = new java_security_cert_CertPath((void *) java_value);
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
		java_security_cert_Certificate *cxx_object = new java_security_cert_Certificate((void *) java_value);
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
		java_security_PublicKey *cxx_object = new java_security_PublicKey((void *) java_value);
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
		java_security_Timestamp *cxx_object = new java_security_Timestamp((void *) java_value);
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
		java_util_Date *cxx_object = new java_util_Date((void *) java_value);
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
		java_security_Principal *cxx_object = new java_security_Principal((void *) java_value);
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
		java_nio_ByteBuffer *cxx_object = new java_nio_ByteBuffer((void *) java_value);
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
		java_nio_ByteOrder *cxx_object = new java_nio_ByteOrder((void *) java_value);
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
		java_nio_CharBuffer *cxx_object = new java_nio_CharBuffer((void *) java_value);
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
		java_lang_CharSequence *cxx_object = new java_lang_CharSequence((void *) java_value);
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
		java_nio_ShortBuffer *cxx_object = new java_nio_ShortBuffer((void *) java_value);
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
		java_nio_IntBuffer *cxx_object = new java_nio_IntBuffer((void *) java_value);
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
		java_nio_LongBuffer *cxx_object = new java_nio_LongBuffer((void *) java_value);
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
		java_nio_FloatBuffer *cxx_object = new java_nio_FloatBuffer((void *) java_value);
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
		java_nio_DoubleBuffer *cxx_object = new java_nio_DoubleBuffer((void *) java_value);
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
		java_util_SortedMap *cxx_object = new java_util_SortedMap((void *) java_value);
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
		java_util_Comparator *cxx_object = new java_util_Comparator((void *) java_value);
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
		java_util_Locale *cxx_object = new java_util_Locale((void *) java_value);
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
		java_nio_charset_CharsetDecoder *cxx_object = new java_nio_charset_CharsetDecoder((void *) java_value);
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
		java_nio_charset_CoderResult *cxx_object = new java_nio_charset_CoderResult((void *) java_value);
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
		java_nio_charset_CodingErrorAction *cxx_object = new java_nio_charset_CodingErrorAction((void *) java_value);
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
		java_nio_charset_CharsetEncoder *cxx_object = new java_nio_charset_CharsetEncoder((void *) java_value);
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
		java_lang_StringBuffer *cxx_object = new java_lang_StringBuffer((void *) java_value);
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
		java_lang_StringBuilder *cxx_object = new java_lang_StringBuilder((void *) java_value);
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
		java_math_BigInteger *cxx_object = new java_math_BigInteger((void *) java_value);
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
		java_util_Random *cxx_object = new java_util_Random((void *) java_value);
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
		org_json_JSONTokener *cxx_object = new org_json_JSONTokener((void *) java_value);
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
		org_json_JSONException *cxx_object = new org_json_JSONException((void *) java_value);
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
		java_lang_Number *cxx_object = new java_lang_Number((void *) java_value);
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
		java_lang_Throwable *cxx_object = new java_lang_Throwable((void *) java_value);
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
		java_io_PrintStream *cxx_object = new java_io_PrintStream((void *) java_value);
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
		java_io_File *cxx_object = new java_io_File((void *) java_value);
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
		java_io_FilenameFilter *cxx_object = new java_io_FilenameFilter((void *) java_value);
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
		java_io_FileFilter *cxx_object = new java_io_FileFilter((void *) java_value);
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
		java_io_PrintWriter *cxx_object = new java_io_PrintWriter((void *) java_value);
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
		java_io_Writer *cxx_object = new java_io_Writer((void *) java_value);
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
		java_lang_StackTraceElement *cxx_object = new java_lang_StackTraceElement((void *) java_value);
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
		java_lang_Runnable *cxx_object = new java_lang_Runnable((void *) java_value);
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
		android_os_Bundle *cxx_object = new android_os_Bundle((void *) java_value);
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
		java_lang_Byte *cxx_object = new java_lang_Byte((void *) java_value);
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
		android_os_ParcelFileDescriptor *cxx_object = new android_os_ParcelFileDescriptor((void *) java_value);
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
		java_io_FileDescriptor *cxx_object = new java_io_FileDescriptor((void *) java_value);
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
		java_net_Socket *cxx_object = new java_net_Socket((void *) java_value);
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
		java_net_InetAddress *cxx_object = new java_net_InetAddress((void *) java_value);
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
		java_net_NetworkInterface *cxx_object = new java_net_NetworkInterface((void *) java_value);
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
		java_net_InterfaceAddress *cxx_object = new java_net_InterfaceAddress((void *) java_value);
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
		java_nio_channels_SocketChannel *cxx_object = new java_nio_channels_SocketChannel((void *) java_value);
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
		java_net_SocketImplFactory *cxx_object = new java_net_SocketImplFactory((void *) java_value);
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
		java_net_SocketImpl *cxx_object = new java_net_SocketImpl((void *) java_value);
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
		java_net_DatagramSocket *cxx_object = new java_net_DatagramSocket((void *) java_value);
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
		java_net_DatagramPacket *cxx_object = new java_net_DatagramPacket((void *) java_value);
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
		java_nio_channels_DatagramChannel *cxx_object = new java_nio_channels_DatagramChannel((void *) java_value);
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
		java_net_DatagramSocketImplFactory *cxx_object = new java_net_DatagramSocketImplFactory((void *) java_value);
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
		java_net_DatagramSocketImpl *cxx_object = new java_net_DatagramSocketImpl((void *) java_value);
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
		android_os_Parcelable_Creator *cxx_object = new android_os_Parcelable_Creator((void *) java_value);
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
		android_os_IBinder *cxx_object = new android_os_IBinder((void *) java_value);
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
		android_os_IInterface *cxx_object = new android_os_IInterface((void *) java_value);
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
		android_os_IBinder_DeathRecipient *cxx_object = new android_os_IBinder_DeathRecipient((void *) java_value);
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
		android_util_SparseArray *cxx_object = new android_util_SparseArray((void *) java_value);
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
		android_util_SparseBooleanArray *cxx_object = new android_util_SparseBooleanArray((void *) java_value);
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
		android_os_Parcelable *cxx_object = new android_os_Parcelable((void *) java_value);
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
		java_io_Serializable *cxx_object = new java_io_Serializable((void *) java_value);
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
		java_lang_Exception *cxx_object = new java_lang_Exception((void *) java_value);
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
		java_util_HashMap *cxx_object = new java_util_HashMap((void *) java_value);
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
		java_util_ArrayList *cxx_object = new java_util_ArrayList((void *) java_value);
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
		java_lang_Integer *cxx_object = new java_lang_Integer((void *) java_value);
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
		android_util_Printer *cxx_object = new android_util_Printer((void *) java_value);
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
		android_net_http_SslCertificate *cxx_object = new android_net_http_SslCertificate((void *) java_value);
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
		java_security_cert_X509Certificate *cxx_object = new java_security_cert_X509Certificate((void *) java_value);
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
		javax_security_auth_x500_X500Principal *cxx_object = new javax_security_auth_x500_X500Principal((void *) java_value);
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
		android_net_http_SslCertificate_DName *cxx_object = new android_net_http_SslCertificate_DName((void *) java_value);
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
		android_content_res_Resources *cxx_object = new android_content_res_Resources((void *) java_value);
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
		android_content_res_AssetManager *cxx_object = new android_content_res_AssetManager((void *) java_value);
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
		android_content_res_AssetFileDescriptor *cxx_object = new android_content_res_AssetFileDescriptor((void *) java_value);
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
		java_io_FileInputStream *cxx_object = new java_io_FileInputStream((void *) java_value);
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
		java_nio_channels_FileChannel *cxx_object = new java_nio_channels_FileChannel((void *) java_value);
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
		java_nio_channels_FileLock *cxx_object = new java_nio_channels_FileLock((void *) java_value);
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
		java_nio_channels_FileChannel_MapMode *cxx_object = new java_nio_channels_FileChannel_MapMode((void *) java_value);
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
		java_nio_MappedByteBuffer *cxx_object = new java_nio_MappedByteBuffer((void *) java_value);
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
		java_nio_channels_WritableByteChannel *cxx_object = new java_nio_channels_WritableByteChannel((void *) java_value);
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
		java_nio_channels_ReadableByteChannel *cxx_object = new java_nio_channels_ReadableByteChannel((void *) java_value);
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
		java_io_FileOutputStream *cxx_object = new java_io_FileOutputStream((void *) java_value);
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
		android_content_res_XmlResourceParser *cxx_object = new android_content_res_XmlResourceParser((void *) java_value);
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
		android_util_DisplayMetrics *cxx_object = new android_util_DisplayMetrics((void *) java_value);
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
		android_content_res_Configuration *cxx_object = new android_content_res_Configuration((void *) java_value);
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
		android_util_TypedValue *cxx_object = new android_util_TypedValue((void *) java_value);
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
		android_content_res_TypedArray *cxx_object = new android_content_res_TypedArray((void *) java_value);
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
		android_graphics_drawable_Drawable *cxx_object = new android_graphics_drawable_Drawable((void *) java_value);
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
		org_xmlpull_v1_XmlPullParser *cxx_object = new org_xmlpull_v1_XmlPullParser((void *) java_value);
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
		java_io_Reader *cxx_object = new java_io_Reader((void *) java_value);
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
		android_util_AttributeSet *cxx_object = new android_util_AttributeSet((void *) java_value);
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
		android_graphics_Rect *cxx_object = new android_graphics_Rect((void *) java_value);
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
		android_graphics_Canvas *cxx_object = new android_graphics_Canvas((void *) java_value);
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
		android_graphics_Bitmap *cxx_object = new android_graphics_Bitmap((void *) java_value);
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
			if (ANDROID_GRAPHICS_BITMAP_CONFIG::ALPHA_8 == cxx_value)
			{
				enum_string = "ALPHA_8";
				break;
			}
			if (ANDROID_GRAPHICS_BITMAP_CONFIG::ARGB_4444 == cxx_value)
			{
				enum_string = "ARGB_4444";
				break;
			}
			if (ANDROID_GRAPHICS_BITMAP_CONFIG::ARGB_8888 == cxx_value)
			{
				enum_string = "ARGB_8888";
				break;
			}
			if (ANDROID_GRAPHICS_BITMAP_CONFIG::RGB_565 == cxx_value)
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
					cxx_value = ANDROID_GRAPHICS_BITMAP_CONFIG::ALPHA_8;
					break;
				}
				if (strcmp("ARGB_4444", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_BITMAP_CONFIG::ARGB_4444;
					break;
				}
				if (strcmp("ARGB_8888", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_BITMAP_CONFIG::ARGB_8888;
					break;
				}
				if (strcmp("RGB_565", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_BITMAP_CONFIG::RGB_565;
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
		java_nio_Buffer *cxx_object = new java_nio_Buffer((void *) java_value);
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
		android_graphics_Matrix *cxx_object = new android_graphics_Matrix((void *) java_value);
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
		android_graphics_RectF *cxx_object = new android_graphics_RectF((void *) java_value);
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
			if (ANDROID_GRAPHICS_MATRIX_SCALETOFIT::CENTER == cxx_value)
			{
				enum_string = "CENTER";
				break;
			}
			if (ANDROID_GRAPHICS_MATRIX_SCALETOFIT::END == cxx_value)
			{
				enum_string = "END";
				break;
			}
			if (ANDROID_GRAPHICS_MATRIX_SCALETOFIT::FILL == cxx_value)
			{
				enum_string = "FILL";
				break;
			}
			if (ANDROID_GRAPHICS_MATRIX_SCALETOFIT::START == cxx_value)
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
					cxx_value = ANDROID_GRAPHICS_MATRIX_SCALETOFIT::CENTER;
					break;
				}
				if (strcmp("END", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_MATRIX_SCALETOFIT::END;
					break;
				}
				if (strcmp("FILL", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_MATRIX_SCALETOFIT::FILL;
					break;
				}
				if (strcmp("START", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_MATRIX_SCALETOFIT::START;
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
			if (ANDROID_GRAPHICS_BITMAP_COMPRESSFORMAT::JPEG == cxx_value)
			{
				enum_string = "JPEG";
				break;
			}
			if (ANDROID_GRAPHICS_BITMAP_COMPRESSFORMAT::PNG == cxx_value)
			{
				enum_string = "PNG";
				break;
			}
			if (ANDROID_GRAPHICS_BITMAP_COMPRESSFORMAT::WEBP == cxx_value)
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
					cxx_value = ANDROID_GRAPHICS_BITMAP_COMPRESSFORMAT::JPEG;
					break;
				}
				if (strcmp("PNG", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_BITMAP_COMPRESSFORMAT::PNG;
					break;
				}
				if (strcmp("WEBP", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_BITMAP_COMPRESSFORMAT::WEBP;
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
		android_graphics_Paint *cxx_object = new android_graphics_Paint((void *) java_value);
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
		android_graphics_ColorFilter *cxx_object = new android_graphics_ColorFilter((void *) java_value);
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
			if (ANDROID_GRAPHICS_PAINT_STYLE::FILL == cxx_value)
			{
				enum_string = "FILL";
				break;
			}
			if (ANDROID_GRAPHICS_PAINT_STYLE::FILL_AND_STROKE == cxx_value)
			{
				enum_string = "FILL_AND_STROKE";
				break;
			}
			if (ANDROID_GRAPHICS_PAINT_STYLE::STROKE == cxx_value)
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
					cxx_value = ANDROID_GRAPHICS_PAINT_STYLE::FILL;
					break;
				}
				if (strcmp("FILL_AND_STROKE", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PAINT_STYLE::FILL_AND_STROKE;
					break;
				}
				if (strcmp("STROKE", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PAINT_STYLE::STROKE;
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
			if (ANDROID_GRAPHICS_PAINT_CAP::BUTT == cxx_value)
			{
				enum_string = "BUTT";
				break;
			}
			if (ANDROID_GRAPHICS_PAINT_CAP::ROUND == cxx_value)
			{
				enum_string = "ROUND";
				break;
			}
			if (ANDROID_GRAPHICS_PAINT_CAP::SQUARE == cxx_value)
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
					cxx_value = ANDROID_GRAPHICS_PAINT_CAP::BUTT;
					break;
				}
				if (strcmp("ROUND", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PAINT_CAP::ROUND;
					break;
				}
				if (strcmp("SQUARE", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PAINT_CAP::SQUARE;
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
			if (ANDROID_GRAPHICS_PAINT_JOIN::BEVEL == cxx_value)
			{
				enum_string = "BEVEL";
				break;
			}
			if (ANDROID_GRAPHICS_PAINT_JOIN::MITER == cxx_value)
			{
				enum_string = "MITER";
				break;
			}
			if (ANDROID_GRAPHICS_PAINT_JOIN::ROUND == cxx_value)
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
					cxx_value = ANDROID_GRAPHICS_PAINT_JOIN::BEVEL;
					break;
				}
				if (strcmp("MITER", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PAINT_JOIN::MITER;
					break;
				}
				if (strcmp("ROUND", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PAINT_JOIN::ROUND;
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
		android_graphics_Path *cxx_object = new android_graphics_Path((void *) java_value);
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
			if (ANDROID_GRAPHICS_PATH_FILLTYPE::EVEN_ODD == cxx_value)
			{
				enum_string = "EVEN_ODD";
				break;
			}
			if (ANDROID_GRAPHICS_PATH_FILLTYPE::INVERSE_EVEN_ODD == cxx_value)
			{
				enum_string = "INVERSE_EVEN_ODD";
				break;
			}
			if (ANDROID_GRAPHICS_PATH_FILLTYPE::INVERSE_WINDING == cxx_value)
			{
				enum_string = "INVERSE_WINDING";
				break;
			}
			if (ANDROID_GRAPHICS_PATH_FILLTYPE::WINDING == cxx_value)
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
					cxx_value = ANDROID_GRAPHICS_PATH_FILLTYPE::EVEN_ODD;
					break;
				}
				if (strcmp("INVERSE_EVEN_ODD", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PATH_FILLTYPE::INVERSE_EVEN_ODD;
					break;
				}
				if (strcmp("INVERSE_WINDING", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PATH_FILLTYPE::INVERSE_WINDING;
					break;
				}
				if (strcmp("WINDING", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PATH_FILLTYPE::WINDING;
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
			if (ANDROID_GRAPHICS_PATH_DIRECTION::CCW == cxx_value)
			{
				enum_string = "CCW";
				break;
			}
			if (ANDROID_GRAPHICS_PATH_DIRECTION::CW == cxx_value)
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
					cxx_value = ANDROID_GRAPHICS_PATH_DIRECTION::CCW;
					break;
				}
				if (strcmp("CW", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PATH_DIRECTION::CW;
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
		android_graphics_Shader *cxx_object = new android_graphics_Shader((void *) java_value);
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
		android_graphics_Xfermode *cxx_object = new android_graphics_Xfermode((void *) java_value);
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
		android_graphics_PathEffect *cxx_object = new android_graphics_PathEffect((void *) java_value);
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
		android_graphics_MaskFilter *cxx_object = new android_graphics_MaskFilter((void *) java_value);
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
		android_graphics_Typeface *cxx_object = new android_graphics_Typeface((void *) java_value);
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
		android_graphics_Rasterizer *cxx_object = new android_graphics_Rasterizer((void *) java_value);
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
			if (ANDROID_GRAPHICS_PAINT_ALIGN::CENTER == cxx_value)
			{
				enum_string = "CENTER";
				break;
			}
			if (ANDROID_GRAPHICS_PAINT_ALIGN::LEFT == cxx_value)
			{
				enum_string = "LEFT";
				break;
			}
			if (ANDROID_GRAPHICS_PAINT_ALIGN::RIGHT == cxx_value)
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
					cxx_value = ANDROID_GRAPHICS_PAINT_ALIGN::CENTER;
					break;
				}
				if (strcmp("LEFT", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PAINT_ALIGN::LEFT;
					break;
				}
				if (strcmp("RIGHT", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PAINT_ALIGN::RIGHT;
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
		android_graphics_Paint_FontMetrics *cxx_object = new android_graphics_Paint_FontMetrics((void *) java_value);
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
		android_graphics_Paint_FontMetricsInt *cxx_object = new android_graphics_Paint_FontMetricsInt((void *) java_value);
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
			if (ANDROID_GRAPHICS_REGION_OP::DIFFERENCE == cxx_value)
			{
				enum_string = "DIFFERENCE";
				break;
			}
			if (ANDROID_GRAPHICS_REGION_OP::INTERSECT == cxx_value)
			{
				enum_string = "INTERSECT";
				break;
			}
			if (ANDROID_GRAPHICS_REGION_OP::REPLACE == cxx_value)
			{
				enum_string = "REPLACE";
				break;
			}
			if (ANDROID_GRAPHICS_REGION_OP::REVERSE_DIFFERENCE == cxx_value)
			{
				enum_string = "REVERSE_DIFFERENCE";
				break;
			}
			if (ANDROID_GRAPHICS_REGION_OP::UNION == cxx_value)
			{
				enum_string = "UNION";
				break;
			}
			if (ANDROID_GRAPHICS_REGION_OP::XOR == cxx_value)
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
					cxx_value = ANDROID_GRAPHICS_REGION_OP::DIFFERENCE;
					break;
				}
				if (strcmp("INTERSECT", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_REGION_OP::INTERSECT;
					break;
				}
				if (strcmp("REPLACE", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_REGION_OP::REPLACE;
					break;
				}
				if (strcmp("REVERSE_DIFFERENCE", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_REGION_OP::REVERSE_DIFFERENCE;
					break;
				}
				if (strcmp("UNION", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_REGION_OP::UNION;
					break;
				}
				if (strcmp("XOR", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_REGION_OP::XOR;
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
		android_graphics_Region *cxx_object = new android_graphics_Region((void *) java_value);
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
		android_graphics_DrawFilter *cxx_object = new android_graphics_DrawFilter((void *) java_value);
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
			if (ANDROID_GRAPHICS_CANVAS_EDGETYPE::AA == cxx_value)
			{
				enum_string = "AA";
				break;
			}
			if (ANDROID_GRAPHICS_CANVAS_EDGETYPE::BW == cxx_value)
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
					cxx_value = ANDROID_GRAPHICS_CANVAS_EDGETYPE::AA;
					break;
				}
				if (strcmp("BW", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_CANVAS_EDGETYPE::BW;
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
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::ADD == cxx_value)
			{
				enum_string = "ADD";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::CLEAR == cxx_value)
			{
				enum_string = "CLEAR";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::DARKEN == cxx_value)
			{
				enum_string = "DARKEN";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::DST == cxx_value)
			{
				enum_string = "DST";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::DST_ATOP == cxx_value)
			{
				enum_string = "DST_ATOP";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::DST_IN == cxx_value)
			{
				enum_string = "DST_IN";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::DST_OUT == cxx_value)
			{
				enum_string = "DST_OUT";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::DST_OVER == cxx_value)
			{
				enum_string = "DST_OVER";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::LIGHTEN == cxx_value)
			{
				enum_string = "LIGHTEN";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::MULTIPLY == cxx_value)
			{
				enum_string = "MULTIPLY";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::OVERLAY == cxx_value)
			{
				enum_string = "OVERLAY";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::SCREEN == cxx_value)
			{
				enum_string = "SCREEN";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::SRC == cxx_value)
			{
				enum_string = "SRC";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::SRC_ATOP == cxx_value)
			{
				enum_string = "SRC_ATOP";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::SRC_IN == cxx_value)
			{
				enum_string = "SRC_IN";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::SRC_OUT == cxx_value)
			{
				enum_string = "SRC_OUT";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::SRC_OVER == cxx_value)
			{
				enum_string = "SRC_OVER";
				break;
			}
			if (ANDROID_GRAPHICS_PORTERDUFF_MODE::XOR == cxx_value)
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
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::ADD;
					break;
				}
				if (strcmp("CLEAR", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::CLEAR;
					break;
				}
				if (strcmp("DARKEN", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::DARKEN;
					break;
				}
				if (strcmp("DST", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::DST;
					break;
				}
				if (strcmp("DST_ATOP", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::DST_ATOP;
					break;
				}
				if (strcmp("DST_IN", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::DST_IN;
					break;
				}
				if (strcmp("DST_OUT", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::DST_OUT;
					break;
				}
				if (strcmp("DST_OVER", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::DST_OVER;
					break;
				}
				if (strcmp("LIGHTEN", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::LIGHTEN;
					break;
				}
				if (strcmp("MULTIPLY", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::MULTIPLY;
					break;
				}
				if (strcmp("OVERLAY", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::OVERLAY;
					break;
				}
				if (strcmp("SCREEN", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::SCREEN;
					break;
				}
				if (strcmp("SRC", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::SRC;
					break;
				}
				if (strcmp("SRC_ATOP", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::SRC_ATOP;
					break;
				}
				if (strcmp("SRC_IN", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::SRC_IN;
					break;
				}
				if (strcmp("SRC_OUT", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::SRC_OUT;
					break;
				}
				if (strcmp("SRC_OVER", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::SRC_OVER;
					break;
				}
				if (strcmp("XOR", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_PORTERDUFF_MODE::XOR;
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
			if (ANDROID_GRAPHICS_CANVAS_VERTEXMODE::TRIANGLES == cxx_value)
			{
				enum_string = "TRIANGLES";
				break;
			}
			if (ANDROID_GRAPHICS_CANVAS_VERTEXMODE::TRIANGLE_FAN == cxx_value)
			{
				enum_string = "TRIANGLE_FAN";
				break;
			}
			if (ANDROID_GRAPHICS_CANVAS_VERTEXMODE::TRIANGLE_STRIP == cxx_value)
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
					cxx_value = ANDROID_GRAPHICS_CANVAS_VERTEXMODE::TRIANGLES;
					break;
				}
				if (strcmp("TRIANGLE_FAN", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_CANVAS_VERTEXMODE::TRIANGLE_FAN;
					break;
				}
				if (strcmp("TRIANGLE_STRIP", enum_string) == 0)
				{
					cxx_value = ANDROID_GRAPHICS_CANVAS_VERTEXMODE::TRIANGLE_STRIP;
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
		android_graphics_Picture *cxx_object = new android_graphics_Picture((void *) java_value);
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
		android_graphics_drawable_Drawable_Callback *cxx_object = new android_graphics_drawable_Drawable_Callback((void *) java_value);
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
		android_graphics_BitmapFactory_Options *cxx_object = new android_graphics_BitmapFactory_Options((void *) java_value);
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
		android_graphics_drawable_Drawable_ConstantState *cxx_object = new android_graphics_drawable_Drawable_ConstantState((void *) java_value);
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
		android_content_res_ColorStateList *cxx_object = new android_content_res_ColorStateList((void *) java_value);
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
		android_graphics_Movie *cxx_object = new android_graphics_Movie((void *) java_value);
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
		android_content_res_Resources_Theme *cxx_object = new android_content_res_Resources_Theme((void *) java_value);
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
		android_content_Context *cxx_object = new android_content_Context((void *) java_value);
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
		android_content_Intent *cxx_object = new android_content_Intent((void *) java_value);
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
		android_net_Uri *cxx_object = new android_net_Uri((void *) java_value);
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
		android_content_ComponentName *cxx_object = new android_content_ComponentName((void *) java_value);
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
		android_content_ContentResolver *cxx_object = new android_content_ContentResolver((void *) java_value);
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
		android_content_ContentValues *cxx_object = new android_content_ContentValues((void *) java_value);
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
		java_lang_Short *cxx_object = new java_lang_Short((void *) java_value);
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
		java_lang_Long *cxx_object = new java_lang_Long((void *) java_value);
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
		java_lang_Float *cxx_object = new java_lang_Float((void *) java_value);
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
		java_lang_Double *cxx_object = new java_lang_Double((void *) java_value);
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
		java_lang_Boolean *cxx_object = new java_lang_Boolean((void *) java_value);
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
		android_os_CancellationSignal *cxx_object = new android_os_CancellationSignal((void *) java_value);
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
		android_os_CancellationSignal_OnCancelListener *cxx_object = new android_os_CancellationSignal_OnCancelListener((void *) java_value);
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
		android_database_Cursor *cxx_object = new android_database_Cursor((void *) java_value);
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
		android_database_ContentObserver *cxx_object = new android_database_ContentObserver((void *) java_value);
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
		android_os_Handler *cxx_object = new android_os_Handler((void *) java_value);
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
		android_os_Looper *cxx_object = new android_os_Looper((void *) java_value);
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
		android_os_MessageQueue *cxx_object = new android_os_MessageQueue((void *) java_value);
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
		android_os_MessageQueue_IdleHandler *cxx_object = new android_os_MessageQueue_IdleHandler((void *) java_value);
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
		java_lang_Thread *cxx_object = new java_lang_Thread((void *) java_value);
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
		java_lang_ThreadGroup *cxx_object = new java_lang_ThreadGroup((void *) java_value);
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
			if (JAVA_LANG_THREAD_STATE::NEW == cxx_value)
			{
				enum_string = "NEW";
				break;
			}
			if (JAVA_LANG_THREAD_STATE::RUNNABLE == cxx_value)
			{
				enum_string = "RUNNABLE";
				break;
			}
			if (JAVA_LANG_THREAD_STATE::BLOCKED == cxx_value)
			{
				enum_string = "BLOCKED";
				break;
			}
			if (JAVA_LANG_THREAD_STATE::WAITING == cxx_value)
			{
				enum_string = "WAITING";
				break;
			}
			if (JAVA_LANG_THREAD_STATE::TIMED_WAITING == cxx_value)
			{
				enum_string = "TIMED_WAITING";
				break;
			}
			if (JAVA_LANG_THREAD_STATE::TERMINATED == cxx_value)
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
					cxx_value = JAVA_LANG_THREAD_STATE::NEW;
					break;
				}
				if (strcmp("RUNNABLE", enum_string) == 0)
				{
					cxx_value = JAVA_LANG_THREAD_STATE::RUNNABLE;
					break;
				}
				if (strcmp("BLOCKED", enum_string) == 0)
				{
					cxx_value = JAVA_LANG_THREAD_STATE::BLOCKED;
					break;
				}
				if (strcmp("WAITING", enum_string) == 0)
				{
					cxx_value = JAVA_LANG_THREAD_STATE::WAITING;
					break;
				}
				if (strcmp("TIMED_WAITING", enum_string) == 0)
				{
					cxx_value = JAVA_LANG_THREAD_STATE::TIMED_WAITING;
					break;
				}
				if (strcmp("TERMINATED", enum_string) == 0)
				{
					cxx_value = JAVA_LANG_THREAD_STATE::TERMINATED;
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
		java_lang_Thread_UncaughtExceptionHandler *cxx_object = new java_lang_Thread_UncaughtExceptionHandler((void *) java_value);
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
		android_os_Handler_Callback *cxx_object = new android_os_Handler_Callback((void *) java_value);
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
		android_os_Message *cxx_object = new android_os_Message((void *) java_value);
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
		android_os_Messenger *cxx_object = new android_os_Messenger((void *) java_value);
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
		android_database_CharArrayBuffer *cxx_object = new android_database_CharArrayBuffer((void *) java_value);
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
		android_database_DataSetObserver *cxx_object = new android_database_DataSetObserver((void *) java_value);
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
		android_content_ContentProviderOperation *cxx_object = new android_content_ContentProviderOperation((void *) java_value);
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
		android_content_ContentProviderOperation_Builder *cxx_object = new android_content_ContentProviderOperation_Builder((void *) java_value);
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
		android_content_ContentProvider *cxx_object = new android_content_ContentProvider((void *) java_value);
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
		android_content_ContentProviderResult *cxx_object = new android_content_ContentProviderResult((void *) java_value);
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
		android_content_pm_PathPermission *cxx_object = new android_content_pm_PathPermission((void *) java_value);
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
		android_content_ContentProvider_PipeDataWriter *cxx_object = new android_content_ContentProvider_PipeDataWriter((void *) java_value);
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
		android_content_pm_ProviderInfo *cxx_object = new android_content_pm_ProviderInfo((void *) java_value);
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
		android_os_PatternMatcher *cxx_object = new android_os_PatternMatcher((void *) java_value);
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
		android_content_ContentProviderClient *cxx_object = new android_content_ContentProviderClient((void *) java_value);
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
		android_accounts_Account *cxx_object = new android_accounts_Account((void *) java_value);
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
		android_content_SyncAdapterType *cxx_object = new android_content_SyncAdapterType((void *) java_value);
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
		android_content_PeriodicSync *cxx_object = new android_content_PeriodicSync((void *) java_value);
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
		android_content_SyncInfo *cxx_object = new android_content_SyncInfo((void *) java_value);
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
		android_content_SyncStatusObserver *cxx_object = new android_content_SyncStatusObserver((void *) java_value);
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
		android_content_ClipData *cxx_object = new android_content_ClipData((void *) java_value);
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
		android_content_ClipData_Item *cxx_object = new android_content_ClipData_Item((void *) java_value);
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
		android_content_ClipDescription *cxx_object = new android_content_ClipDescription((void *) java_value);
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
		android_content_pm_PackageManager *cxx_object = new android_content_pm_PackageManager((void *) java_value);
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
		android_content_pm_PackageInfo *cxx_object = new android_content_pm_PackageInfo((void *) java_value);
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
		android_content_pm_ApplicationInfo *cxx_object = new android_content_pm_ApplicationInfo((void *) java_value);
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
		android_content_pm_ActivityInfo *cxx_object = new android_content_pm_ActivityInfo((void *) java_value);
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
		android_content_pm_ServiceInfo *cxx_object = new android_content_pm_ServiceInfo((void *) java_value);
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
		android_content_pm_InstrumentationInfo *cxx_object = new android_content_pm_InstrumentationInfo((void *) java_value);
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
		android_content_pm_PermissionInfo *cxx_object = new android_content_pm_PermissionInfo((void *) java_value);
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
		android_content_pm_Signature *cxx_object = new android_content_pm_Signature((void *) java_value);
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
		android_content_pm_ConfigurationInfo *cxx_object = new android_content_pm_ConfigurationInfo((void *) java_value);
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
		android_content_pm_FeatureInfo *cxx_object = new android_content_pm_FeatureInfo((void *) java_value);
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
		android_content_pm_ResolveInfo *cxx_object = new android_content_pm_ResolveInfo((void *) java_value);
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
		android_content_IntentFilter *cxx_object = new android_content_IntentFilter((void *) java_value);
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
		android_content_IntentFilter_AuthorityEntry *cxx_object = new android_content_IntentFilter_AuthorityEntry((void *) java_value);
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
		org_xmlpull_v1_XmlSerializer *cxx_object = new org_xmlpull_v1_XmlSerializer((void *) java_value);
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
		android_content_pm_PermissionGroupInfo *cxx_object = new android_content_pm_PermissionGroupInfo((void *) java_value);
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
		android_content_ComponentCallbacks *cxx_object = new android_content_ComponentCallbacks((void *) java_value);
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
		android_content_SharedPreferences *cxx_object = new android_content_SharedPreferences((void *) java_value);
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
		android_content_SharedPreferences_Editor *cxx_object = new android_content_SharedPreferences_Editor((void *) java_value);
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
		android_content_SharedPreferences_OnSharedPreferenceChangeListener *cxx_object = new android_content_SharedPreferences_OnSharedPreferenceChangeListener((void *) java_value);
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
		android_database_sqlite_SQLiteDatabase_CursorFactory *cxx_object = new android_database_sqlite_SQLiteDatabase_CursorFactory((void *) java_value);
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
		android_database_sqlite_SQLiteDatabase *cxx_object = new android_database_sqlite_SQLiteDatabase((void *) java_value);
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
		android_database_DatabaseErrorHandler *cxx_object = new android_database_DatabaseErrorHandler((void *) java_value);
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
		android_database_sqlite_SQLiteTransactionListener *cxx_object = new android_database_sqlite_SQLiteTransactionListener((void *) java_value);
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
		android_database_sqlite_SQLiteStatement *cxx_object = new android_database_sqlite_SQLiteStatement((void *) java_value);
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
		android_util_Pair *cxx_object = new android_util_Pair((void *) java_value);
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
		android_database_sqlite_SQLiteCursorDriver *cxx_object = new android_database_sqlite_SQLiteCursorDriver((void *) java_value);
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
		android_database_sqlite_SQLiteQuery *cxx_object = new android_database_sqlite_SQLiteQuery((void *) java_value);
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
		android_content_IntentSender *cxx_object = new android_content_IntentSender((void *) java_value);
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
		android_content_IntentSender_OnFinished *cxx_object = new android_content_IntentSender_OnFinished((void *) java_value);
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
		android_os_UserHandle *cxx_object = new android_os_UserHandle((void *) java_value);
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
		android_content_BroadcastReceiver *cxx_object = new android_content_BroadcastReceiver((void *) java_value);
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
		android_content_BroadcastReceiver_PendingResult *cxx_object = new android_content_BroadcastReceiver_PendingResult((void *) java_value);
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
		android_content_ServiceConnection *cxx_object = new android_content_ServiceConnection((void *) java_value);
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
		android_view_Display *cxx_object = new android_view_Display((void *) java_value);
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
		android_graphics_Point *cxx_object = new android_graphics_Point((void *) java_value);
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
		android_support_v4_app_Fragment_SavedState *cxx_object = new android_support_v4_app_Fragment_SavedState((void *) java_value);
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
		android_support_v4_app_FragmentActivity *cxx_object = new android_support_v4_app_FragmentActivity((void *) java_value);
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
		android_view_View *cxx_object = new android_view_View((void *) java_value);
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
		android_view_ViewParent *cxx_object = new android_view_ViewParent((void *) java_value);
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
		android_view_ActionMode_Callback *cxx_object = new android_view_ActionMode_Callback((void *) java_value);
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
		android_view_ActionMode *cxx_object = new android_view_ActionMode((void *) java_value);
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
		android_view_MenuInflater *cxx_object = new android_view_MenuInflater((void *) java_value);
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
		android_view_Menu *cxx_object = new android_view_Menu((void *) java_value);
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
		android_view_MenuItem *cxx_object = new android_view_MenuItem((void *) java_value);
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
		android_view_SubMenu *cxx_object = new android_view_SubMenu((void *) java_value);
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
		android_view_MenuItem_OnMenuItemClickListener *cxx_object = new android_view_MenuItem_OnMenuItemClickListener((void *) java_value);
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
		android_view_ContextMenu_ContextMenuInfo *cxx_object = new android_view_ContextMenu_ContextMenuInfo((void *) java_value);
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
		android_view_ActionProvider *cxx_object = new android_view_ActionProvider((void *) java_value);
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
		android_view_ActionProvider_VisibilityListener *cxx_object = new android_view_ActionProvider_VisibilityListener((void *) java_value);
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
		android_view_MenuItem_OnActionExpandListener *cxx_object = new android_view_MenuItem_OnActionExpandListener((void *) java_value);
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
		android_view_KeyEvent *cxx_object = new android_view_KeyEvent((void *) java_value);
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
		android_view_KeyEvent_Callback *cxx_object = new android_view_KeyEvent_Callback((void *) java_value);
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
		android_view_KeyEvent_DispatcherState *cxx_object = new android_view_KeyEvent_DispatcherState((void *) java_value);
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
		android_view_KeyCharacterMap *cxx_object = new android_view_KeyCharacterMap((void *) java_value);
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
		android_view_KeyCharacterMap_KeyData *cxx_object = new android_view_KeyCharacterMap_KeyData((void *) java_value);
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
		android_view_accessibility_AccessibilityEvent *cxx_object = new android_view_accessibility_AccessibilityEvent((void *) java_value);
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
		android_view_accessibility_AccessibilityRecord *cxx_object = new android_view_accessibility_AccessibilityRecord((void *) java_value);
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
		android_view_accessibility_AccessibilityNodeInfo *cxx_object = new android_view_accessibility_AccessibilityNodeInfo((void *) java_value);
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
		android_view_ContextMenu *cxx_object = new android_view_ContextMenu((void *) java_value);
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
		android_view_ViewGroup *cxx_object = new android_view_ViewGroup((void *) java_value);
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
		android_view_ViewGroup_LayoutParams *cxx_object = new android_view_ViewGroup_LayoutParams((void *) java_value);
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
		android_view_animation_LayoutAnimationController_AnimationParameters *cxx_object = new android_view_animation_LayoutAnimationController_AnimationParameters((void *) java_value);
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
		android_view_MotionEvent *cxx_object = new android_view_MotionEvent((void *) java_value);
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
		android_view_MotionEvent_PointerCoords *cxx_object = new android_view_MotionEvent_PointerCoords((void *) java_value);
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
		android_view_MotionEvent_PointerProperties *cxx_object = new android_view_MotionEvent_PointerProperties((void *) java_value);
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
		android_view_DragEvent *cxx_object = new android_view_DragEvent((void *) java_value);
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
		android_view_ViewGroup_OnHierarchyChangeListener *cxx_object = new android_view_ViewGroup_OnHierarchyChangeListener((void *) java_value);
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
		android_animation_LayoutTransition *cxx_object = new android_animation_LayoutTransition((void *) java_value);
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
		android_animation_TimeInterpolator *cxx_object = new android_animation_TimeInterpolator((void *) java_value);
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
		android_animation_Animator *cxx_object = new android_animation_Animator((void *) java_value);
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
		android_animation_Animator_AnimatorListener *cxx_object = new android_animation_Animator_AnimatorListener((void *) java_value);
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
		android_animation_LayoutTransition_TransitionListener *cxx_object = new android_animation_LayoutTransition_TransitionListener((void *) java_value);
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
		android_view_animation_LayoutAnimationController *cxx_object = new android_view_animation_LayoutAnimationController((void *) java_value);
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
		android_view_animation_Animation *cxx_object = new android_view_animation_Animation((void *) java_value);
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
		android_view_animation_Interpolator *cxx_object = new android_view_animation_Interpolator((void *) java_value);
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
		android_view_animation_Animation_AnimationListener *cxx_object = new android_view_animation_Animation_AnimationListener((void *) java_value);
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
		android_view_animation_Transformation *cxx_object = new android_view_animation_Transformation((void *) java_value);
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
		android_view_View_OnCreateContextMenuListener *cxx_object = new android_view_View_OnCreateContextMenuListener((void *) java_value);
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
		android_view_ViewPropertyAnimator *cxx_object = new android_view_ViewPropertyAnimator((void *) java_value);
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
		android_view_View_OnFocusChangeListener *cxx_object = new android_view_View_OnFocusChangeListener((void *) java_value);
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
		android_view_View_OnLayoutChangeListener *cxx_object = new android_view_View_OnLayoutChangeListener((void *) java_value);
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
		android_view_View_OnAttachStateChangeListener *cxx_object = new android_view_View_OnAttachStateChangeListener((void *) java_value);
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
		android_view_View_OnClickListener *cxx_object = new android_view_View_OnClickListener((void *) java_value);
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
		android_view_View_OnLongClickListener *cxx_object = new android_view_View_OnLongClickListener((void *) java_value);
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
		android_view_View_OnKeyListener *cxx_object = new android_view_View_OnKeyListener((void *) java_value);
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
		android_view_View_OnTouchListener *cxx_object = new android_view_View_OnTouchListener((void *) java_value);
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
		android_view_View_OnGenericMotionListener *cxx_object = new android_view_View_OnGenericMotionListener((void *) java_value);
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
		android_view_View_OnHoverListener *cxx_object = new android_view_View_OnHoverListener((void *) java_value);
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
		android_view_View_OnDragListener *cxx_object = new android_view_View_OnDragListener((void *) java_value);
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
		android_view_View_AccessibilityDelegate *cxx_object = new android_view_View_AccessibilityDelegate((void *) java_value);
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
		android_view_accessibility_AccessibilityNodeProvider *cxx_object = new android_view_accessibility_AccessibilityNodeProvider((void *) java_value);
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
		android_view_inputmethod_EditorInfo *cxx_object = new android_view_inputmethod_EditorInfo((void *) java_value);
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
		android_view_inputmethod_InputConnection *cxx_object = new android_view_inputmethod_InputConnection((void *) java_value);
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
		android_view_inputmethod_ExtractedTextRequest *cxx_object = new android_view_inputmethod_ExtractedTextRequest((void *) java_value);
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
		android_view_inputmethod_ExtractedText *cxx_object = new android_view_inputmethod_ExtractedText((void *) java_value);
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
		android_view_inputmethod_CompletionInfo *cxx_object = new android_view_inputmethod_CompletionInfo((void *) java_value);
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
		android_view_inputmethod_CorrectionInfo *cxx_object = new android_view_inputmethod_CorrectionInfo((void *) java_value);
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
		android_view_TouchDelegate *cxx_object = new android_view_TouchDelegate((void *) java_value);
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
		android_view_ViewTreeObserver *cxx_object = new android_view_ViewTreeObserver((void *) java_value);
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
		android_view_ViewTreeObserver_OnGlobalFocusChangeListener *cxx_object = new android_view_ViewTreeObserver_OnGlobalFocusChangeListener((void *) java_value);
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
		android_view_ViewTreeObserver_OnGlobalLayoutListener *cxx_object = new android_view_ViewTreeObserver_OnGlobalLayoutListener((void *) java_value);
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
		android_view_ViewTreeObserver_OnPreDrawListener *cxx_object = new android_view_ViewTreeObserver_OnPreDrawListener((void *) java_value);
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
		android_view_ViewTreeObserver_OnDrawListener *cxx_object = new android_view_ViewTreeObserver_OnDrawListener((void *) java_value);
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
		android_view_ViewTreeObserver_OnScrollChangedListener *cxx_object = new android_view_ViewTreeObserver_OnScrollChangedListener((void *) java_value);
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
		android_view_ViewTreeObserver_OnTouchModeChangeListener *cxx_object = new android_view_ViewTreeObserver_OnTouchModeChangeListener((void *) java_value);
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
		android_view_View_OnSystemUiVisibilityChangeListener *cxx_object = new android_view_View_OnSystemUiVisibilityChangeListener((void *) java_value);
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
		android_view_View_DragShadowBuilder *cxx_object = new android_view_View_DragShadowBuilder((void *) java_value);
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
		android_util_Property *cxx_object = new android_util_Property((void *) java_value);
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
		android_support_v4_app_FragmentManager *cxx_object = new android_support_v4_app_FragmentManager((void *) java_value);
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
		android_support_v4_app_FragmentTransaction *cxx_object = new android_support_v4_app_FragmentTransaction((void *) java_value);
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
		android_support_v4_app_FragmentManager_BackStackEntry *cxx_object = new android_support_v4_app_FragmentManager_BackStackEntry((void *) java_value);
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
		android_support_v4_app_FragmentManager_OnBackStackChangedListener *cxx_object = new android_support_v4_app_FragmentManager_OnBackStackChangedListener((void *) java_value);
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
		android_support_v4_app_LoaderManager *cxx_object = new android_support_v4_app_LoaderManager((void *) java_value);
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
		android_support_v4_content_Loader *cxx_object = new android_support_v4_content_Loader((void *) java_value);
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
		android_support_v4_content_Loader_OnLoadCompleteListener *cxx_object = new android_support_v4_content_Loader_OnLoadCompleteListener((void *) java_value);
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
		android_support_v4_app_LoaderManager_LoaderCallbacks *cxx_object = new android_support_v4_app_LoaderManager_LoaderCallbacks((void *) java_value);
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
		android_view_LayoutInflater *cxx_object = new android_view_LayoutInflater((void *) java_value);
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
		android_view_LayoutInflater_Factory *cxx_object = new android_view_LayoutInflater_Factory((void *) java_value);
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
		android_view_LayoutInflater_Factory2 *cxx_object = new android_view_LayoutInflater_Factory2((void *) java_value);
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
		android_view_LayoutInflater_Filter *cxx_object = new android_view_LayoutInflater_Filter((void *) java_value);
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
		android_app_Activity *cxx_object = new android_app_Activity((void *) java_value);
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
		android_app_FragmentManager *cxx_object = new android_app_FragmentManager((void *) java_value);
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
		android_app_Fragment *cxx_object = new android_app_Fragment((void *) java_value);
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
		android_app_Fragment_SavedState *cxx_object = new android_app_Fragment_SavedState((void *) java_value);
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
		android_os_Parcelable_ClassLoaderCreator *cxx_object = new android_os_Parcelable_ClassLoaderCreator((void *) java_value);
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
		android_app_LoaderManager *cxx_object = new android_app_LoaderManager((void *) java_value);
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
		android_content_Loader *cxx_object = new android_content_Loader((void *) java_value);
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
		android_content_Loader_OnLoadCompleteListener *cxx_object = new android_content_Loader_OnLoadCompleteListener((void *) java_value);
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
		android_content_Loader_OnLoadCanceledListener *cxx_object = new android_content_Loader_OnLoadCanceledListener((void *) java_value);
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
		android_app_LoaderManager_LoaderCallbacks *cxx_object = new android_app_LoaderManager_LoaderCallbacks((void *) java_value);
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
		android_app_FragmentTransaction *cxx_object = new android_app_FragmentTransaction((void *) java_value);
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
		android_app_FragmentManager_BackStackEntry *cxx_object = new android_app_FragmentManager_BackStackEntry((void *) java_value);
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
		android_app_FragmentManager_OnBackStackChangedListener *cxx_object = new android_app_FragmentManager_OnBackStackChangedListener((void *) java_value);
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
		android_view_Window *cxx_object = new android_view_Window((void *) java_value);
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
		android_view_WindowManager_LayoutParams *cxx_object = new android_view_WindowManager_LayoutParams((void *) java_value);
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
		android_view_WindowManager *cxx_object = new android_view_WindowManager((void *) java_value);
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
		android_view_Window_Callback *cxx_object = new android_view_Window_Callback((void *) java_value);
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
		android_view_SurfaceHolder_Callback2 *cxx_object = new android_view_SurfaceHolder_Callback2((void *) java_value);
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
		android_view_SurfaceHolder *cxx_object = new android_view_SurfaceHolder((void *) java_value);
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
		android_view_SurfaceHolder_Callback *cxx_object = new android_view_SurfaceHolder_Callback((void *) java_value);
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
		android_view_Surface *cxx_object = new android_view_Surface((void *) java_value);
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
		android_graphics_SurfaceTexture *cxx_object = new android_graphics_SurfaceTexture((void *) java_value);
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
		android_graphics_SurfaceTexture_OnFrameAvailableListener *cxx_object = new android_graphics_SurfaceTexture_OnFrameAvailableListener((void *) java_value);
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
		android_view_InputQueue_Callback *cxx_object = new android_view_InputQueue_Callback((void *) java_value);
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
		android_view_InputQueue *cxx_object = new android_view_InputQueue((void *) java_value);
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
		android_app_Application *cxx_object = new android_app_Application((void *) java_value);
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
		android_app_Application_ActivityLifecycleCallbacks *cxx_object = new android_app_Application_ActivityLifecycleCallbacks((void *) java_value);
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
		android_app_ActionBar *cxx_object = new android_app_ActionBar((void *) java_value);
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
		android_app_ActionBar_LayoutParams *cxx_object = new android_app_ActionBar_LayoutParams((void *) java_value);
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
		android_app_ActionBar_OnNavigationListener *cxx_object = new android_app_ActionBar_OnNavigationListener((void *) java_value);
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
		android_app_ActionBar_Tab *cxx_object = new android_app_ActionBar_Tab((void *) java_value);
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
		android_app_ActionBar_TabListener *cxx_object = new android_app_ActionBar_TabListener((void *) java_value);
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
		android_app_ActionBar_OnMenuVisibilityListener *cxx_object = new android_app_ActionBar_OnMenuVisibilityListener((void *) java_value);
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
		android_app_TaskStackBuilder *cxx_object = new android_app_TaskStackBuilder((void *) java_value);
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
		android_app_PendingIntent *cxx_object = new android_app_PendingIntent((void *) java_value);
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
		android_app_PendingIntent_OnFinished *cxx_object = new android_app_PendingIntent_OnFinished((void *) java_value);
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
		android_webkit_WebBackForwardList *cxx_object = new android_webkit_WebBackForwardList((void *) java_value);
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
		android_webkit_WebHistoryItem *cxx_object = new android_webkit_WebHistoryItem((void *) java_value);
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
		android_webkit_ValueCallback *cxx_object = new android_webkit_ValueCallback((void *) java_value);
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
		android_webkit_WebView_HitTestResult *cxx_object = new android_webkit_WebView_HitTestResult((void *) java_value);
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
		android_webkit_WebView_FindListener *cxx_object = new android_webkit_WebView_FindListener((void *) java_value);
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
		android_webkit_WebViewClient *cxx_object = new android_webkit_WebViewClient((void *) java_value);
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
		android_webkit_WebResourceResponse *cxx_object = new android_webkit_WebResourceResponse((void *) java_value);
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
		android_webkit_HttpAuthHandler *cxx_object = new android_webkit_HttpAuthHandler((void *) java_value);
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
		android_webkit_DownloadListener *cxx_object = new android_webkit_DownloadListener((void *) java_value);
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
		android_webkit_WebChromeClient *cxx_object = new android_webkit_WebChromeClient((void *) java_value);
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
		android_webkit_WebChromeClient_CustomViewCallback *cxx_object = new android_webkit_WebChromeClient_CustomViewCallback((void *) java_value);
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
		android_webkit_JsResult *cxx_object = new android_webkit_JsResult((void *) java_value);
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
		android_webkit_JsPromptResult *cxx_object = new android_webkit_JsPromptResult((void *) java_value);
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
		android_webkit_WebStorage_QuotaUpdater *cxx_object = new android_webkit_WebStorage_QuotaUpdater((void *) java_value);
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
		android_webkit_GeolocationPermissions_Callback *cxx_object = new android_webkit_GeolocationPermissions_Callback((void *) java_value);
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
		android_webkit_ConsoleMessage *cxx_object = new android_webkit_ConsoleMessage((void *) java_value);
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
			if (ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL::DEBUG == cxx_value)
			{
				enum_string = "DEBUG";
				break;
			}
			if (ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL::ERROR == cxx_value)
			{
				enum_string = "ERROR";
				break;
			}
			if (ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL::LOG == cxx_value)
			{
				enum_string = "LOG";
				break;
			}
			if (ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL::TIP == cxx_value)
			{
				enum_string = "TIP";
				break;
			}
			if (ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL::WARNING == cxx_value)
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
					cxx_value = ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL::DEBUG;
					break;
				}
				if (strcmp("ERROR", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL::ERROR;
					break;
				}
				if (strcmp("LOG", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL::LOG;
					break;
				}
				if (strcmp("TIP", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL::TIP;
					break;
				}
				if (strcmp("WARNING", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_CONSOLEMESSAGE_MESSAGELEVEL::WARNING;
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
		android_webkit_WebView_PictureListener *cxx_object = new android_webkit_WebView_PictureListener((void *) java_value);
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
		android_webkit_WebSettings *cxx_object = new android_webkit_WebSettings((void *) java_value);
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
			if (ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE::LARGER == cxx_value)
			{
				enum_string = "LARGER";
				break;
			}
			if (ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE::LARGEST == cxx_value)
			{
				enum_string = "LARGEST";
				break;
			}
			if (ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE::NORMAL == cxx_value)
			{
				enum_string = "NORMAL";
				break;
			}
			if (ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE::SMALLER == cxx_value)
			{
				enum_string = "SMALLER";
				break;
			}
			if (ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE::SMALLEST == cxx_value)
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
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE::LARGER;
					break;
				}
				if (strcmp("LARGEST", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE::LARGEST;
					break;
				}
				if (strcmp("NORMAL", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE::NORMAL;
					break;
				}
				if (strcmp("SMALLER", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE::SMALLER;
					break;
				}
				if (strcmp("SMALLEST", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_TEXTSIZE::SMALLEST;
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
			if (ANDROID_WEBKIT_WEBSETTINGS_ZOOMDENSITY::CLOSE == cxx_value)
			{
				enum_string = "CLOSE";
				break;
			}
			if (ANDROID_WEBKIT_WEBSETTINGS_ZOOMDENSITY::FAR == cxx_value)
			{
				enum_string = "FAR";
				break;
			}
			if (ANDROID_WEBKIT_WEBSETTINGS_ZOOMDENSITY::MEDIUM == cxx_value)
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
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_ZOOMDENSITY::CLOSE;
					break;
				}
				if (strcmp("FAR", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_ZOOMDENSITY::FAR;
					break;
				}
				if (strcmp("MEDIUM", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_ZOOMDENSITY::MEDIUM;
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
			if (ANDROID_WEBKIT_WEBSETTINGS_LAYOUTALGORITHM::NARROW_COLUMNS == cxx_value)
			{
				enum_string = "NARROW_COLUMNS";
				break;
			}
			if (ANDROID_WEBKIT_WEBSETTINGS_LAYOUTALGORITHM::NORMAL == cxx_value)
			{
				enum_string = "NORMAL";
				break;
			}
			if (ANDROID_WEBKIT_WEBSETTINGS_LAYOUTALGORITHM::SINGLE_COLUMN == cxx_value)
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
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_LAYOUTALGORITHM::NARROW_COLUMNS;
					break;
				}
				if (strcmp("NORMAL", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_LAYOUTALGORITHM::NORMAL;
					break;
				}
				if (strcmp("SINGLE_COLUMN", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_LAYOUTALGORITHM::SINGLE_COLUMN;
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
			if (ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE::OFF == cxx_value)
			{
				enum_string = "OFF";
				break;
			}
			if (ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE::ON == cxx_value)
			{
				enum_string = "ON";
				break;
			}
			if (ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE::ON_DEMAND == cxx_value)
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
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE::OFF;
					break;
				}
				if (strcmp("ON", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE::ON;
					break;
				}
				if (strcmp("ON_DEMAND", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_PLUGINSTATE::ON_DEMAND;
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
			if (ANDROID_WEBKIT_WEBSETTINGS_RENDERPRIORITY::HIGH == cxx_value)
			{
				enum_string = "HIGH";
				break;
			}
			if (ANDROID_WEBKIT_WEBSETTINGS_RENDERPRIORITY::LOW == cxx_value)
			{
				enum_string = "LOW";
				break;
			}
			if (ANDROID_WEBKIT_WEBSETTINGS_RENDERPRIORITY::NORMAL == cxx_value)
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
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_RENDERPRIORITY::HIGH;
					break;
				}
				if (strcmp("LOW", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_RENDERPRIORITY::LOW;
					break;
				}
				if (strcmp("NORMAL", enum_string) == 0)
				{
					cxx_value = ANDROID_WEBKIT_WEBSETTINGS_RENDERPRIORITY::NORMAL;
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
		android_text_Editable *cxx_object = new android_text_Editable((void *) java_value);
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
		android_text_InputFilter *cxx_object = new android_text_InputFilter((void *) java_value);
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
		android_text_Spanned *cxx_object = new android_text_Spanned((void *) java_value);
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
		android_view_ViewGroup_MarginLayoutParams *cxx_object = new android_view_ViewGroup_MarginLayoutParams((void *) java_value);
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
		android_text_Layout *cxx_object = new android_text_Layout((void *) java_value);
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
		android_text_TextPaint *cxx_object = new android_text_TextPaint((void *) java_value);
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
			if (ANDROID_TEXT_LAYOUT_ALIGNMENT::ALIGN_CENTER == cxx_value)
			{
				enum_string = "ALIGN_CENTER";
				break;
			}
			if (ANDROID_TEXT_LAYOUT_ALIGNMENT::ALIGN_NORMAL == cxx_value)
			{
				enum_string = "ALIGN_NORMAL";
				break;
			}
			if (ANDROID_TEXT_LAYOUT_ALIGNMENT::ALIGN_OPPOSITE == cxx_value)
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
					cxx_value = ANDROID_TEXT_LAYOUT_ALIGNMENT::ALIGN_CENTER;
					break;
				}
				if (strcmp("ALIGN_NORMAL", enum_string) == 0)
				{
					cxx_value = ANDROID_TEXT_LAYOUT_ALIGNMENT::ALIGN_NORMAL;
					break;
				}
				if (strcmp("ALIGN_OPPOSITE", enum_string) == 0)
				{
					cxx_value = ANDROID_TEXT_LAYOUT_ALIGNMENT::ALIGN_OPPOSITE;
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
		android_text_Layout_Directions *cxx_object = new android_text_Layout_Directions((void *) java_value);
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
		android_text_method_KeyListener *cxx_object = new android_text_method_KeyListener((void *) java_value);
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
		android_text_method_MovementMethod *cxx_object = new android_text_method_MovementMethod((void *) java_value);
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
		android_text_Spannable *cxx_object = new android_text_Spannable((void *) java_value);
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
		android_text_method_TransformationMethod *cxx_object = new android_text_method_TransformationMethod((void *) java_value);
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
		android_text_style_URLSpan *cxx_object = new android_text_style_URLSpan((void *) java_value);
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
		android_text_Editable_Factory *cxx_object = new android_text_Editable_Factory((void *) java_value);
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
		android_text_Spannable_Factory *cxx_object = new android_text_Spannable_Factory((void *) java_value);
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
			if (ANDROID_TEXT_TEXTUTILS_TRUNCATEAT::START == cxx_value)
			{
				enum_string = "START";
				break;
			}
			if (ANDROID_TEXT_TEXTUTILS_TRUNCATEAT::MIDDLE == cxx_value)
			{
				enum_string = "MIDDLE";
				break;
			}
			if (ANDROID_TEXT_TEXTUTILS_TRUNCATEAT::END == cxx_value)
			{
				enum_string = "END";
				break;
			}
			if (ANDROID_TEXT_TEXTUTILS_TRUNCATEAT::MARQUEE == cxx_value)
			{
				enum_string = "MARQUEE";
				break;
			}
			if (ANDROID_TEXT_TEXTUTILS_TRUNCATEAT::END_SMALL == cxx_value)
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
					cxx_value = ANDROID_TEXT_TEXTUTILS_TRUNCATEAT::START;
					break;
				}
				if (strcmp("MIDDLE", enum_string) == 0)
				{
					cxx_value = ANDROID_TEXT_TEXTUTILS_TRUNCATEAT::MIDDLE;
					break;
				}
				if (strcmp("END", enum_string) == 0)
				{
					cxx_value = ANDROID_TEXT_TEXTUTILS_TRUNCATEAT::END;
					break;
				}
				if (strcmp("MARQUEE", enum_string) == 0)
				{
					cxx_value = ANDROID_TEXT_TEXTUTILS_TRUNCATEAT::MARQUEE;
					break;
				}
				if (strcmp("END_SMALL", enum_string) == 0)
				{
					cxx_value = ANDROID_TEXT_TEXTUTILS_TRUNCATEAT::END_SMALL;
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
		android_text_TextWatcher *cxx_object = new android_text_TextWatcher((void *) java_value);
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
		android_animation_ObjectAnimator *cxx_object = new android_animation_ObjectAnimator((void *) java_value);
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
		android_animation_TypeEvaluator *cxx_object = new android_animation_TypeEvaluator((void *) java_value);
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
		android_animation_PropertyValuesHolder *cxx_object = new android_animation_PropertyValuesHolder((void *) java_value);
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
		android_animation_Keyframe *cxx_object = new android_animation_Keyframe((void *) java_value);
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
		android_app_SearchableInfo *cxx_object = new android_app_SearchableInfo((void *) java_value);
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
		android_content_DialogInterface *cxx_object = new android_content_DialogInterface((void *) java_value);
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
		android_app_LocalActivityManager *cxx_object = new android_app_LocalActivityManager((void *) java_value);
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
		android_media_MediaPlayer_OnPreparedListener *cxx_object = new android_media_MediaPlayer_OnPreparedListener((void *) java_value);
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
		android_media_MediaPlayer *cxx_object = new android_media_MediaPlayer((void *) java_value);
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
		android_media_MediaPlayer_OnCompletionListener *cxx_object = new android_media_MediaPlayer_OnCompletionListener((void *) java_value);
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
		android_media_MediaPlayer_OnErrorListener *cxx_object = new android_media_MediaPlayer_OnErrorListener((void *) java_value);
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
		android_media_MediaPlayer_OnInfoListener *cxx_object = new android_media_MediaPlayer_OnInfoListener((void *) java_value);
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
		android_media_MediaPlayer_TrackInfo *cxx_object = new android_media_MediaPlayer_TrackInfo((void *) java_value);
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
		android_media_MediaPlayer_OnBufferingUpdateListener *cxx_object = new android_media_MediaPlayer_OnBufferingUpdateListener((void *) java_value);
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
		android_media_MediaPlayer_OnSeekCompleteListener *cxx_object = new android_media_MediaPlayer_OnSeekCompleteListener((void *) java_value);
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
		android_media_MediaPlayer_OnVideoSizeChangedListener *cxx_object = new android_media_MediaPlayer_OnVideoSizeChangedListener((void *) java_value);
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
		android_media_MediaPlayer_OnTimedTextListener *cxx_object = new android_media_MediaPlayer_OnTimedTextListener((void *) java_value);
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
		android_media_TimedText *cxx_object = new android_media_TimedText((void *) java_value);
		cxx_value = (long) cxx_object;
	}
}

