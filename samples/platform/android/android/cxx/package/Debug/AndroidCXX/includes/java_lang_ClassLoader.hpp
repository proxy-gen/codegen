/*
 * Header (Instance CXX)
 * Author: codegen
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


class java_lang_String;

class java_net_URL;

class java_io_InputStream;

class java_util_Enumeration;

class java_lang_Class;

class java_lang_Object;

class java_lang_ClassLoader 
{
public:

	java_lang_ClassLoader(const java_lang_ClassLoader& cc);
	java_lang_ClassLoader(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_ClassLoader();
	// Functions
	virtual void  clearAssertionStatus() ;
	virtual AndroidCXX::java_lang_ClassLoader * getParent() ;
	virtual AndroidCXX::java_net_URL * getResource(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_io_InputStream * getResourceAsStream(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_Enumeration * getResources(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::java_lang_ClassLoader * getSystemClassLoader() ;
	static AndroidCXX::java_net_URL * getSystemResource(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::java_io_InputStream * getSystemResourceAsStream(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::java_util_Enumeration * getSystemResources(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_Class * loadClass(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setClassAssertionStatus(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual void  setDefaultAssertionStatus(bool const& arg0) ;
	virtual void  setPackageAssertionStatus(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;

protected:
	java_lang_ClassLoader();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_ClassLoader