/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
 	
	
 		 
	
	
	
 		 
 		 
	
 		 
	
	
	
	
 		 
 		 
 		 
	
	
 	
 		 
 	
 		 
 		 
 		 
	
 		 
	
 		 
	
	
 	
 		 
 	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
























































// Generated Code 

#ifndef _java_net_URLConnection
#define _java_net_URLConnection
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_net_URL.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_Class.hpp>

#include <java_io_InputStream.hpp>

#include <java_security_Permission.hpp>

#include <java_net_FileNameMap.hpp>

#include <java_util_Map.hpp>

#include <java_util_List.hpp>

#include <java_io_OutputStream.hpp>

#include <java_net_ContentHandlerFactory.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class java_net_URL;

class java_lang_Object;

class java_lang_Class;

class java_io_InputStream;

class java_security_Permission;

class java_net_FileNameMap;

class java_util_Map;

class java_util_List;

class java_io_OutputStream;

class java_net_ContentHandlerFactory;

class java_net_URLConnection
{
public:

	java_net_URLConnection(const java_net_URLConnection& cc);
	java_net_URLConnection(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_URLConnection();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_net_URL getURL();
	 AndroidCXX::java_lang_Object getContent(std::vector<AndroidCXX::java_lang_Class > const& arg0);
	 AndroidCXX::java_lang_Object getContent();
	 AndroidCXX::java_io_InputStream getInputStream();
	 AndroidCXX::java_security_Permission getPermission();
	 void connect();
	 void setRequestProperty(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 long getDate();
	 AndroidCXX::java_lang_String getContentType();
	 int getContentLength();
	 AndroidCXX::java_lang_String getHeaderField(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getHeaderField(int const& arg0);
	 AndroidCXX::java_lang_String getHeaderFieldKey(int const& arg0);
	 long getLastModified();
	static AndroidCXX::java_net_FileNameMap getFileNameMap();
	 void addRequestProperty(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 AndroidCXX::java_lang_String getRequestProperty(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_Map getRequestProperties();
	static AndroidCXX::java_lang_String guessContentTypeFromStream(AndroidCXX::java_io_InputStream const& arg0);
	static AndroidCXX::java_lang_String guessContentTypeFromName(AndroidCXX::java_lang_String const& arg0);
	static void setFileNameMap(AndroidCXX::java_net_FileNameMap const& arg0);
	 void setConnectTimeout(int const& arg0);
	 int getConnectTimeout();
	 void setReadTimeout(int const& arg0);
	 int getReadTimeout();
	 AndroidCXX::java_lang_String getContentEncoding();
	 long getExpiration();
	 AndroidCXX::java_util_Map getHeaderFields();
	 int getHeaderFieldInt(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 long getHeaderFieldDate(AndroidCXX::java_lang_String const& arg0,long const& arg1);
	 AndroidCXX::java_io_OutputStream getOutputStream();
	 void setDoInput(bool const& arg0);
	 bool getDoInput();
	 void setDoOutput(bool const& arg0);
	 bool getDoOutput();
	 void setAllowUserInteraction(bool const& arg0);
	 bool getAllowUserInteraction();
	static void setDefaultAllowUserInteraction(bool const& arg0);
	static bool getDefaultAllowUserInteraction();
	 void setUseCaches(bool const& arg0);
	 bool getUseCaches();
	 void setIfModifiedSince(long const& arg0);
	 long getIfModifiedSince();
	 bool getDefaultUseCaches();
	 void setDefaultUseCaches(bool const& arg0);
	static void setDefaultRequestProperty(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	static AndroidCXX::java_lang_String getDefaultRequestProperty(AndroidCXX::java_lang_String const& arg0);
	static void setContentHandlerFactory(AndroidCXX::java_net_ContentHandlerFactory const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URLConnection