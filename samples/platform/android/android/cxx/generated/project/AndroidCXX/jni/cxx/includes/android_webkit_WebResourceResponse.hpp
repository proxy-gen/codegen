/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
 			
		
 			
 			


#ifndef _android_webkit_WebResourceResponse
#define _android_webkit_WebResourceResponse








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

class android_webkit_WebResourceResponse
{
public:
 java_lang_String getEncoding();
 java_io_InputStream getData();
 void setData(java_io_InputStream& arg0);
 java_lang_String getMimeType();
 void setMimeType(java_lang_String& arg0);
 void setEncoding(java_lang_String& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebResourceResponse