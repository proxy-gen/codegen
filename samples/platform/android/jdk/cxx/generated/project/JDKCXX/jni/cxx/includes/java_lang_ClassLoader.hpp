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

namespace JDKCXX {

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
	// TODO: remove
	// 
	// java_lang_ClassLoader();
	// 
	// Default Destructor
	virtual ~java_lang_ClassLoader();
	// Functions
	 JDKCXX::java_lang_Class loadClass(JDKCXX::java_lang_String& arg0);
	static JDKCXX::java_lang_ClassLoader getSystemClassLoader();
	 JDKCXX::java_io_InputStream getResourceAsStream(JDKCXX::java_lang_String& arg0);
	 JDKCXX::java_net_URL getResource(JDKCXX::java_lang_String& arg0);
	static JDKCXX::java_io_InputStream getSystemResourceAsStream(JDKCXX::java_lang_String& arg0);
	static JDKCXX::java_net_URL getSystemResource(JDKCXX::java_lang_String& arg0);
	 JDKCXX::java_util_Enumeration getResources(JDKCXX::java_lang_String& arg0);
	static JDKCXX::java_util_Enumeration getSystemResources(JDKCXX::java_lang_String& arg0);
	 JDKCXX::java_lang_ClassLoader getParent();
	 void setDefaultAssertionStatus(bool& arg0);
	 void setPackageAssertionStatus(JDKCXX::java_lang_String& arg0,bool& arg1);
	 void setClassAssertionStatus(JDKCXX::java_lang_String& arg0,bool& arg1);
	 void clearAssertionStatus();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_ClassLoader