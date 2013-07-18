/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		
		
 			
 			
		
 			
 			
		


#ifndef _android_graphics_Typeface
#define _android_graphics_Typeface











#include <android_content_res_AssetManager.hpp>
#include <java_io_File.hpp>
#include <java_lang_Object.hpp>
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

class android_graphics_Typeface
{
public:
 bool equals(java_lang_Object& arg0);
 int hashCode();
static android_graphics_Typeface create(java_lang_String& arg0,int& arg1,android_graphics_Typeface& arg2);
 int getStyle();
 bool isBold();
 bool isItalic();
static android_graphics_Typeface defaultFromStyle(int& arg0);
static android_graphics_Typeface createFromAsset(android_content_res_AssetManager& arg0,java_lang_String& arg1);
static android_graphics_Typeface createFromFile(java_lang_String& arg0,java_io_File& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Typeface