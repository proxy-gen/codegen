/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
		
		
 			
		
		
		

// Generated Code 

#ifndef _java_net_HttpURLConnection
#define _java_net_HttpURLConnection
//
// Scroll Down 
//




















#include <java_security_Permission.hpp>

#include <java_lang_String.hpp>

#include <java_io_InputStream.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_security_Permission;

class java_lang_String;

class java_io_InputStream;

class java_net_HttpURLConnection
{
public:
 java_security_Permission getPermission();
 void setRequestMethod(java_lang_String& arg0);
 int getResponseCode();
 java_lang_String getHeaderField(int& arg0);
 java_lang_String getHeaderFieldKey(int& arg0);
 long getHeaderFieldDate(java_lang_String& arg0,long& arg1);
 void setFixedLengthStreamingMode(int& arg0);
 void setChunkedStreamingMode(int& arg0);
static void setFollowRedirects(bool& arg0);
static bool getFollowRedirects();
 void setInstanceFollowRedirects(bool& arg0);
 bool getInstanceFollowRedirects();
 java_lang_String getRequestMethod();
 java_lang_String getResponseMessage();
 void disconnect();
 bool usingProxy();
 java_io_InputStream getErrorStream();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_HttpURLConnection