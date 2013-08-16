/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_lang_Object.hpp>

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

class java_io_InputStream;

class java_lang_String;

class java_security_Permission;

class java_net_HttpURLConnection : public java_lang_Object
{
public:

	java_net_HttpURLConnection(const java_net_HttpURLConnection& cc);
	java_net_HttpURLConnection(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_HttpURLConnection();
	// Functions
	virtual void  disconnect() ;
	virtual AndroidCXX::java_io_InputStream * getErrorStream() ;
	static bool  getFollowRedirects() ;
	virtual AndroidCXX::java_lang_String * getHeaderField(int const& arg0) ;
	virtual long  getHeaderFieldDate(AndroidCXX::java_lang_String const& arg0,long const& arg1) ;
	virtual AndroidCXX::java_lang_String * getHeaderFieldKey(int const& arg0) ;
	virtual bool  getInstanceFollowRedirects() ;
	virtual AndroidCXX::java_security_Permission * getPermission() ;
	virtual AndroidCXX::java_lang_String * getRequestMethod() ;
	virtual int  getResponseCode() ;
	virtual AndroidCXX::java_lang_String * getResponseMessage() ;
	virtual void  setChunkedStreamingMode(int const& arg0) ;
	virtual void  setFixedLengthStreamingMode(int const& arg0) ;
	static void  setFollowRedirects(bool const& arg0) ;
	virtual void  setInstanceFollowRedirects(bool const& arg0) ;
	virtual void  setRequestMethod(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  usingProxy() ;

protected:
	java_net_HttpURLConnection();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_HttpURLConnection