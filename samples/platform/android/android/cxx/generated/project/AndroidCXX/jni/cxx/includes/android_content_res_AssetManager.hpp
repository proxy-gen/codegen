/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
		
 			
		
 			
		
 			
		

// Generated Code 

#ifndef _android_content_res_AssetManager
#define _android_content_res_AssetManager
//
// Scroll Down 
//










#include <java_lang_String.hpp>

#include <java_io_InputStream.hpp>

#include <android_content_res_AssetFileDescriptor.hpp>

#include <android_content_res_XmlResourceParser.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class java_io_InputStream;

class android_content_res_AssetFileDescriptor;

class android_content_res_XmlResourceParser;

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