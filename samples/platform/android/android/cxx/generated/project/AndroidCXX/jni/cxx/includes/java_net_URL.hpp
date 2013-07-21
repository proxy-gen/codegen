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


using namespace AndroidCXX;

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
	java_net_URL(void * proxy);
	// Public Constructors
	java_net_URL(java_lang_String& arg0,java_lang_String& arg1,int& arg2,java_lang_String& arg3);
	java_net_URL(java_lang_String& arg0,java_lang_String& arg1,java_lang_String& arg2);
	java_net_URL(java_lang_String& arg0,java_lang_String& arg1,int& arg2,java_lang_String& arg3,java_net_URLStreamHandler& arg4);
	java_net_URL(java_lang_String& arg0);
	java_net_URL(java_net_URL& arg0,java_lang_String& arg1);
	java_net_URL(java_net_URL& arg0,java_lang_String& arg1,java_net_URLStreamHandler& arg2);
	// Default Destructor
	virtual ~java_net_URL();
	// Functions
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 java_io_InputStream *  openStream();
	 java_lang_String *  getPath();
	 java_net_URI *  toURI();
	 java_lang_String *  getAuthority();
	 java_lang_String *  getQuery();
	 java_lang_String *  getUserInfo();
	 int getPort();
	 int getDefaultPort();
	 java_lang_String *  getProtocol();
	 java_lang_String *  getHost();
	 java_lang_String *  getFile();
	 java_lang_String *  getRef();
	 bool sameFile(java_net_URL& arg0);
	 java_lang_String *  toExternalForm();
	 java_net_URLConnection *  openConnection(java_net_Proxy& arg0);
	 java_net_URLConnection *  openConnection();
	 java_lang_Object *  getContent(std::vector<java_lang_Class >& arg0);
	 java_lang_Object *  getContent();
	static void setURLStreamHandlerFactory(java_net_URLStreamHandlerFactory& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URL