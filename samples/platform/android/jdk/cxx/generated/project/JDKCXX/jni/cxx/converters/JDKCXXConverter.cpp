/*
 * Implementation (Proxy Converter CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



#include <JDKCXXConverter.hpp>

#define LOG_TAG "JDKCXXConverter"
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)

// Proxy Converter Types
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

