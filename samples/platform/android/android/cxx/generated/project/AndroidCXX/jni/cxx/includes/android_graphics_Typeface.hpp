/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	
 		 
	
	
 		 
 		 
	
 		 
	
 		 
	


















// Generated Code 

#ifndef _android_graphics_Typeface
#define _android_graphics_Typeface
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>


#include <android_content_res_AssetManager.hpp>

#include <java_io_File.hpp>

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

class java_lang_Object;

class java_lang_String;

class android_graphics_Typeface;

class android_content_res_AssetManager;

class java_io_File;

class android_graphics_Typeface
{
public:

	android_graphics_Typeface(const android_graphics_Typeface& cc);
	android_graphics_Typeface(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_graphics_Typeface();
	// 
	// Default Destructor
	virtual ~android_graphics_Typeface();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 int hashCode();
	static AndroidCXX::android_graphics_Typeface create(AndroidCXX::java_lang_String& arg0,int& arg1);
	static AndroidCXX::android_graphics_Typeface create(AndroidCXX::android_graphics_Typeface& arg0,int& arg1);
	 int getStyle();
	 bool isBold();
	 bool isItalic();
	static AndroidCXX::android_graphics_Typeface defaultFromStyle(int& arg0);
	static AndroidCXX::android_graphics_Typeface createFromAsset(AndroidCXX::android_content_res_AssetManager& arg0,AndroidCXX::java_lang_String& arg1);
	static AndroidCXX::android_graphics_Typeface createFromFile(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::android_graphics_Typeface createFromFile(AndroidCXX::java_io_File& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Typeface