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


using namespace AndroidCXX;

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
	java_net_URLConnection(void * proxy);
	// Public Constructors
	// Default Destructor
	virtual ~java_net_URLConnection();
	// Functions
	 java_lang_String *  toString();
	 java_net_URL *  getURL();
	 java_lang_Object *  getContent(std::vector<java_lang_Class >& arg0);
	 java_lang_Object *  getContent();
	 java_io_InputStream *  getInputStream();
	 java_security_Permission *  getPermission();
	 void connect();
	 void setRequestProperty(java_lang_String& arg0,java_lang_String& arg1);
	 long getDate();
	 java_lang_String *  getContentType();
	 int getContentLength();
	 java_lang_String *  getHeaderField(java_lang_String& arg0);
	 java_lang_String *  getHeaderField(int& arg0);
	 java_lang_String *  getHeaderFieldKey(int& arg0);
	 long getLastModified();
	static java_net_FileNameMap *  getFileNameMap();
	 void addRequestProperty(java_lang_String& arg0,java_lang_String& arg1);
	 java_lang_String *  getRequestProperty(java_lang_String& arg0);
	 java_util_Map *  getRequestProperties();
	static java_lang_String *  guessContentTypeFromStream(java_io_InputStream& arg0);
	static java_lang_String *  guessContentTypeFromName(java_lang_String& arg0);
	static void setFileNameMap(java_net_FileNameMap& arg0);
	 void setConnectTimeout(int& arg0);
	 int getConnectTimeout();
	 void setReadTimeout(int& arg0);
	 int getReadTimeout();
	 java_lang_String *  getContentEncoding();
	 long getExpiration();
	 java_util_Map *  getHeaderFields();
	 int getHeaderFieldInt(java_lang_String& arg0,int& arg1);
	 long getHeaderFieldDate(java_lang_String& arg0,long& arg1);
	 java_io_OutputStream *  getOutputStream();
	 void setDoInput(bool& arg0);
	 bool getDoInput();
	 void setDoOutput(bool& arg0);
	 bool getDoOutput();
	 void setAllowUserInteraction(bool& arg0);
	 bool getAllowUserInteraction();
	static void setDefaultAllowUserInteraction(bool& arg0);
	static bool getDefaultAllowUserInteraction();
	 void setUseCaches(bool& arg0);
	 bool getUseCaches();
	 void setIfModifiedSince(long& arg0);
	 long getIfModifiedSince();
	 bool getDefaultUseCaches();
	 void setDefaultUseCaches(bool& arg0);
	static void setDefaultRequestProperty(java_lang_String& arg0,java_lang_String& arg1);
	static java_lang_String *  getDefaultRequestProperty(java_lang_String& arg0);
	static void setContentHandlerFactory(java_net_ContentHandlerFactory& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URLConnection