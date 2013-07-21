/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 	
 		 
 		 
	
 	
 		 
	
 		 
 		 




















// Generated Code 

#ifndef _java_lang_ClassLoader
#define _java_lang_ClassLoader
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Class.hpp>

#include <java_lang_Object.hpp>


#include <java_io_InputStream.hpp>

#include <java_net_URL.hpp>

#include <java_util_Enumeration.hpp>

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

class java_lang_Class;

class java_lang_Object;

class java_lang_ClassLoader;

class java_io_InputStream;

class java_net_URL;

class java_util_Enumeration;

class java_lang_ClassLoader
{
public:

	java_lang_ClassLoader(const java_lang_ClassLoader& cc);
	java_lang_ClassLoader(void * proxy);
	// Public Constructors
	java_lang_ClassLoader();
	// Default Destructor
	virtual ~java_lang_ClassLoader();
	// Functions
	 java_lang_Class loadClass(java_lang_String& arg0);
	static java_lang_ClassLoader getSystemClassLoader();
	 java_io_InputStream getResourceAsStream(java_lang_String& arg0);
	 java_net_URL getResource(java_lang_String& arg0);
	static java_io_InputStream getSystemResourceAsStream(java_lang_String& arg0);
	static java_net_URL getSystemResource(java_lang_String& arg0);
	 java_util_Enumeration getResources(java_lang_String& arg0);
	static java_util_Enumeration getSystemResources(java_lang_String& arg0);
	 java_lang_ClassLoader getParent();
	 void setDefaultAssertionStatus(bool& arg0);
	 void setPackageAssertionStatus(java_lang_String& arg0,bool& arg1);
	 void setClassAssertionStatus(java_lang_String& arg0,bool& arg1);
	 void clearAssertionStatus();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_ClassLoader