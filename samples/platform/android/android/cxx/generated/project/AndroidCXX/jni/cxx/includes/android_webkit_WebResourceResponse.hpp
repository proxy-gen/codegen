/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
 		 
	
 		 
 		 


 		 
 		 
 		 












// Generated Code 

#ifndef _android_webkit_WebResourceResponse
#define _android_webkit_WebResourceResponse
//
// Scroll Down 
//


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

class java_lang_String;

class java_io_InputStream;

class android_webkit_WebResourceResponse
{
public:

	android_webkit_WebResourceResponse(const android_webkit_WebResourceResponse& cc);
	android_webkit_WebResourceResponse(void * proxy);
	// Public Constructors
	android_webkit_WebResourceResponse(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_io_InputStream& arg2);
	android_webkit_WebResourceResponse();
	// Default Destructor
	virtual ~android_webkit_WebResourceResponse();
	// Functions
	 AndroidCXX::java_lang_String getEncoding();
	 AndroidCXX::java_io_InputStream getData();
	 void setData(AndroidCXX::java_io_InputStream& arg0);
	 AndroidCXX::java_lang_String getMimeType();
	 void setMimeType(AndroidCXX::java_lang_String& arg0);
	 void setEncoding(AndroidCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebResourceResponse