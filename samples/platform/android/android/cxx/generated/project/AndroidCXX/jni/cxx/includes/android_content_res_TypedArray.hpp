/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
		
		
		
		
		
		
		
 			
		

// Generated Code 

#ifndef _android_content_res_TypedArray
#define _android_content_res_TypedArray
//
// Scroll Down 
//






























#include <java_lang_String.hpp>

#include <android_util_TypedValue.hpp>

#include <android_content_res_Resources.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_content_res_ColorStateList.hpp>

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

class android_util_TypedValue;

class android_content_res_Resources;

class java_lang_CharSequence;

class android_graphics_drawable_Drawable;

class android_content_res_ColorStateList;

class android_content_res_TypedArray
{
public:
 java_lang_String toString();
 bool getBoolean(int& arg0,bool& arg1);
 int getInt(int& arg0);
 float getFloat(int& arg0,float& arg1);
 int length();
 bool getValue(int& arg0,android_util_TypedValue& arg1);
 android_content_res_Resources getResources();
 int getInteger(int& arg0);
 java_lang_String getString(int& arg0);
 int getIndex(int& arg0);
 void recycle();
 java_lang_CharSequence getText(int& arg0);
 std::vector<long> getTextArray(int& arg0);
 float getDimension(int& arg0,float& arg1);
 int getDimensionPixelOffset(int& arg0);
 int getDimensionPixelSize(int& arg0);
 float getFraction(int& arg0,float& arg1);
 android_graphics_drawable_Drawable getDrawable(int& arg0);
 int getColor(int& arg0);
 android_content_res_ColorStateList getColorStateList(int& arg0);
 int getResourceId(int& arg0);
 java_lang_String getPositionDescription();
 int getIndexCount();
 java_lang_String getNonResourceString(int& arg0);
 int getLayoutDimension(int& arg0,java_lang_String& arg1);
 bool hasValue(int& arg0);
 android_util_TypedValue peekValue(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_TypedArray