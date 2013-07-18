/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
		
		
		
 			
		
 			
		
		
		
 			
 			
		
		
 			
		
 			
		
 			
		
		
 			
 			
		
 			
 			
		
 			


#ifndef _java_net_URLConnection
#define _java_net_URLConnection

















































#include <java_lang_Object.hpp>
#include <java_util_Map.hpp>
#include <java_net_FileNameMap.hpp>
#include <java_io_OutputStream.hpp>
#include <java_net_URL.hpp>
#include <java_security_Permission.hpp>
#include <java_net_ContentHandlerFactory.hpp>
#include <java_io_InputStream.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class java_net_URLConnection
{
public:
 java_lang_String toString();
 java_net_URL getURL();
 java_lang_Object getContent(std::vector<long>& arg0);
 java_io_InputStream getInputStream();
 java_security_Permission getPermission();
 void connect();
 void setRequestProperty(java_lang_String& arg0);
 long getDate();
 java_lang_String getContentType();
 int getContentLength();
 java_lang_String getHeaderField(java_lang_String& arg0,int& arg1);
 java_lang_String getHeaderFieldKey(int& arg0);
 long getLastModified();
static java_net_FileNameMap getFileNameMap();
 void addRequestProperty(java_lang_String& arg0);
 java_lang_String getRequestProperty(java_lang_String& arg0);
 java_util_Map getRequestProperties();
static java_lang_String guessContentTypeFromStream(java_io_InputStream& arg0);
static java_lang_String guessContentTypeFromName(java_lang_String& arg0);
static void setFileNameMap(java_net_FileNameMap& arg0);
 void setConnectTimeout(int& arg0);
 int getConnectTimeout();
 void setReadTimeout(int& arg0);
 int getReadTimeout();
 java_lang_String getContentEncoding();
 long getExpiration();
 java_util_Map getHeaderFields();
 int getHeaderFieldInt(java_lang_String& arg0,int& arg1);
 long getHeaderFieldDate(java_lang_String& arg0,long& arg1);
 java_io_OutputStream getOutputStream();
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
static void setDefaultRequestProperty(java_lang_String& arg0);
static java_lang_String getDefaultRequestProperty(java_lang_String& arg0);
static void setContentHandlerFactory(java_net_ContentHandlerFactory& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URLConnection