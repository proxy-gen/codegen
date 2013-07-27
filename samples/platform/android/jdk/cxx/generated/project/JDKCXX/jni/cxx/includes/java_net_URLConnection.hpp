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

namespace JDKCXX {

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
	 JDKCXX::java_lang_String toString();
	 JDKCXX::java_net_URL getURL();
	 JDKCXX::java_lang_Object getContent(std::vector<JDKCXX::java_lang_Class > const& arg0);
	 JDKCXX::java_lang_Object getContent();
	 JDKCXX::java_io_InputStream getInputStream();
	 JDKCXX::java_security_Permission getPermission();
	 void connect();
	 void setRequestProperty(JDKCXX::java_lang_String const& arg0,JDKCXX::java_lang_String const& arg1);
	 long getDate();
	 JDKCXX::java_lang_String getContentType();
	 int getContentLength();
	 JDKCXX::java_lang_String getHeaderField(JDKCXX::java_lang_String const& arg0);
	 JDKCXX::java_lang_String getHeaderField(int const& arg0);
	 JDKCXX::java_lang_String getHeaderFieldKey(int const& arg0);
	 long getLastModified();
	static JDKCXX::java_net_FileNameMap getFileNameMap();
	 void addRequestProperty(JDKCXX::java_lang_String const& arg0,JDKCXX::java_lang_String const& arg1);
	 JDKCXX::java_lang_String getRequestProperty(JDKCXX::java_lang_String const& arg0);
	 JDKCXX::java_util_Map getRequestProperties();
	static JDKCXX::java_lang_String guessContentTypeFromStream(JDKCXX::java_io_InputStream const& arg0);
	static JDKCXX::java_lang_String guessContentTypeFromName(JDKCXX::java_lang_String const& arg0);
	static void setFileNameMap(JDKCXX::java_net_FileNameMap const& arg0);
	 void setConnectTimeout(int const& arg0);
	 int getConnectTimeout();
	 void setReadTimeout(int const& arg0);
	 int getReadTimeout();
	 JDKCXX::java_lang_String getContentEncoding();
	 long getExpiration();
	 JDKCXX::java_util_Map getHeaderFields();
	 int getHeaderFieldInt(JDKCXX::java_lang_String const& arg0,int const& arg1);
	 long getHeaderFieldDate(JDKCXX::java_lang_String const& arg0,long const& arg1);
	 JDKCXX::java_io_OutputStream getOutputStream();
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
	static void setDefaultRequestProperty(JDKCXX::java_lang_String const& arg0,JDKCXX::java_lang_String const& arg1);
	static JDKCXX::java_lang_String getDefaultRequestProperty(JDKCXX::java_lang_String const& arg0);
	static void setContentHandlerFactory(JDKCXX::java_net_ContentHandlerFactory const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URLConnection