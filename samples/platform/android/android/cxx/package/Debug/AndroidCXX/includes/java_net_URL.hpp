/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	
	
	
	
	
	
	
	
	
	
 		 
	
 		 
	
	
 	
	
 		 
	
 		 


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 

































// Generated Code 

#ifndef _java_net_URL
#define _java_net_URL
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_io_InputStream.hpp>

#include <java_net_URI.hpp>

#include <java_net_Proxy.hpp>

#include <java_net_URLConnection.hpp>

#include <java_lang_Class.hpp>

#include <java_net_URLStreamHandlerFactory.hpp>

#include <java_net_URLStreamHandler.hpp>


#include <java_io_Serializable.hpp>

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

class java_lang_Object;

class java_lang_String;

class java_io_InputStream;

class java_net_URI;


class java_net_Proxy;

class java_net_URLConnection;

class java_lang_Class;

class java_net_URLStreamHandlerFactory;

class java_net_URLStreamHandler;

class java_net_URL : public java_io_Serializable
{
public:

	// Public ConstrucXXX
	java_net_URL(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2,AndroidCXX::java_lang_String const& arg3);
	java_net_URL(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2);
	java_net_URL(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2,AndroidCXX::java_lang_String const& arg3,AndroidCXX::java_net_URLStreamHandler const& arg4);
	java_net_URL(AndroidCXX::java_lang_String const& arg0);
	java_net_URL(AndroidCXX::java_net_URL const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_net_URL(AndroidCXX::java_net_URL const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_net_URLStreamHandler const& arg2);
	java_net_URL(const java_net_URL& cc);
	java_net_URL(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_URL();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_io_InputStream * openStream() ;
	virtual AndroidCXX::java_lang_String * getPath() ;
	virtual AndroidCXX::java_net_URI * toURI() ;
	virtual AndroidCXX::java_lang_String * getAuthority() ;
	virtual AndroidCXX::java_lang_String * getQuery() ;
	virtual AndroidCXX::java_lang_String * getUserInfo() ;
	virtual int  getPort() ;
	virtual int  getDefaultPort() ;
	virtual AndroidCXX::java_lang_String * getProtocol() ;
	virtual AndroidCXX::java_lang_String * getHost() ;
	virtual AndroidCXX::java_lang_String * getFile() ;
	virtual AndroidCXX::java_lang_String * getRef() ;
	virtual bool  sameFile(AndroidCXX::java_net_URL const& arg0) ;
	virtual AndroidCXX::java_lang_String * toExternalForm() ;
	virtual AndroidCXX::java_net_URLConnection * openConnection(AndroidCXX::java_net_Proxy const& arg0) ;
	virtual AndroidCXX::java_net_URLConnection * openConnection() ;
	virtual AndroidCXX::java_lang_Object * getContent(std::vector<java_lang_Class> const& arg0) ;
	virtual AndroidCXX::java_lang_Object * getContent() ;
	static void  setURLStreamHandlerFactory(AndroidCXX::java_net_URLStreamHandlerFactory const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URL