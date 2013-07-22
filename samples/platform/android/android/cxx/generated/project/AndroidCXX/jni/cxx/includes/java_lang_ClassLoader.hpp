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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

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
	 AndroidCXX::java_lang_Class loadClass(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::java_lang_ClassLoader getSystemClassLoader();
	 AndroidCXX::java_io_InputStream getResourceAsStream(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_net_URL getResource(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::java_io_InputStream getSystemResourceAsStream(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::java_net_URL getSystemResource(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_util_Enumeration getResources(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::java_util_Enumeration getSystemResources(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_ClassLoader getParent();
	 void setDefaultAssertionStatus(bool& arg0);
	 void setPackageAssertionStatus(AndroidCXX::java_lang_String& arg0,bool& arg1);
	 void setClassAssertionStatus(AndroidCXX::java_lang_String& arg0,bool& arg1);
	 void clearAssertionStatus();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_ClassLoader