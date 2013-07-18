/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
		
 			
		
 			
		
 			
		


#ifndef _android_content_res_AssetManager
#define _android_content_res_AssetManager









#include <android_content_res_AssetFileDescriptor.hpp>
#include <java_io_InputStream.hpp>
#include <android_content_res_XmlResourceParser.hpp>
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

class android_content_res_AssetManager
{
public:
 std::vector<long> list(java_lang_String& arg0);
 void close();
 java_io_InputStream open(java_lang_String& arg0,int& arg1);
 android_content_res_AssetFileDescriptor openFd(java_lang_String& arg0);
 android_content_res_AssetFileDescriptor openNonAssetFd(java_lang_String& arg0,int& arg1);
 android_content_res_XmlResourceParser openXmlResourceParser(int& arg0,java_lang_String& arg1);
 std::vector<long> getLocales();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_AssetManager