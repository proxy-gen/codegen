/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
 			
		
 			
		
 			
		
 			
		
 			
		
 			
		
		
 			
 			


#ifndef _java_lang_ClassLoader
#define _java_lang_ClassLoader















#include <java_lang_Class.hpp>
#include <java_util_Enumeration.hpp>
#include <java_net_URL.hpp>
#include <java_io_InputStream.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class java_lang_ClassLoader
{
public:
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