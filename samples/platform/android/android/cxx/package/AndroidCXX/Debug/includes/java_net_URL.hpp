/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class java_net_URL;

class java_net_Proxy;

class java_net_URLConnection;

class java_lang_Class;

class java_net_URLStreamHandlerFactory;

class java_net_URLStreamHandler;

class java_net_URL
{
public:

	java_net_URL(const java_net_URL& cc);
	java_net_URL(Proxy proxy);
	// Public Constructors
	java_net_URL(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2,AndroidCXX::java_lang_String const& arg3);
	java_net_URL(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2);
	java_net_URL(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2,AndroidCXX::java_lang_String const& arg3,AndroidCXX::java_net_URLStreamHandler const& arg4);
	java_net_URL(AndroidCXX::java_lang_String const& arg0);
	java_net_URL(AndroidCXX::java_net_URL const& arg0,AndroidCXX::java_lang_String const& arg1);
	java_net_URL(AndroidCXX::java_net_URL const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_net_URLStreamHandler const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_net_URL();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 AndroidCXX::java_io_InputStream openStream();
	 AndroidCXX::java_lang_String getPath();
	 AndroidCXX::java_net_URI toURI();
	 AndroidCXX::java_lang_String getAuthority();
	 AndroidCXX::java_lang_String getQuery();
	 AndroidCXX::java_lang_String getUserInfo();
	 int getPort();
	 int getDefaultPort();
	 AndroidCXX::java_lang_String getProtocol();
	 AndroidCXX::java_lang_String getHost();
	 AndroidCXX::java_lang_String getFile();
	 AndroidCXX::java_lang_String getRef();
	 bool sameFile(AndroidCXX::java_net_URL const& arg0);
	 AndroidCXX::java_lang_String toExternalForm();
	 AndroidCXX::java_net_URLConnection openConnection(AndroidCXX::java_net_Proxy const& arg0);
	 AndroidCXX::java_net_URLConnection openConnection();
	 AndroidCXX::java_lang_Object getContent(std::vector<AndroidCXX::java_lang_Class > const& arg0);
	 AndroidCXX::java_lang_Object getContent();
	static void setURLStreamHandlerFactory(AndroidCXX::java_net_URLStreamHandlerFactory const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URL