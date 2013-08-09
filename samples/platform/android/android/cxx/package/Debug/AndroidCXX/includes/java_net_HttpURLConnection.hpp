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
#include <CXXTypes.hpp>


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

	java_net_HttpURLConnection(const java_net_HttpURLConnection& cc);
	java_net_HttpURLConnection(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_HttpURLConnection();
	// Functions
	 AndroidCXX::java_security_Permission getPermission();
	 void setRequestMethod(AndroidCXX::java_lang_String const& arg0);
	 int getResponseCode();
	 AndroidCXX::java_lang_String getHeaderField(int const& arg0);
	 AndroidCXX::java_lang_String getHeaderFieldKey(int const& arg0);
	 long getHeaderFieldDate(AndroidCXX::java_lang_String const& arg0,long const& arg1);
	 void setFixedLengthStreamingMode(int const& arg0);
	 void setChunkedStreamingMode(int const& arg0);
	static void setFollowRedirects(bool const& arg0);
	static bool getFollowRedirects();
	 void setInstanceFollowRedirects(bool const& arg0);
	 bool getInstanceFollowRedirects();
	 AndroidCXX::java_lang_String getRequestMethod();
	 AndroidCXX::java_lang_String getResponseMessage();
	 void disconnect();
	 bool usingProxy();
	 AndroidCXX::java_io_InputStream getErrorStream();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_HttpURLConnection