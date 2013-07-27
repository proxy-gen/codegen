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
#include <CXXTypes.hpp>


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

	android_content_res_TypedArray(const android_content_res_TypedArray& cc);
	android_content_res_TypedArray(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_res_TypedArray();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 bool getBoolean(int const& arg0,bool const& arg1);
	 int getInt(int const& arg0,int const& arg1);
	 float getFloat(int const& arg0,float const& arg1);
	 int length();
	 bool getValue(int const& arg0,AndroidCXX::android_util_TypedValue const& arg1);
	 AndroidCXX::android_content_res_Resources getResources();
	 int getInteger(int const& arg0,int const& arg1);
	 AndroidCXX::java_lang_String getString(int const& arg0);
	 int getIndex(int const& arg0);
	 void recycle();
	 AndroidCXX::java_lang_CharSequence getText(int const& arg0);
	 std::vector<AndroidCXX::java_lang_CharSequence > getTextArray(int const& arg0);
	 float getDimension(int const& arg0,float const& arg1);
	 int getDimensionPixelOffset(int const& arg0,int const& arg1);
	 int getDimensionPixelSize(int const& arg0,int const& arg1);
	 float getFraction(int const& arg0,int const& arg1,int const& arg2,float const& arg3);
	 AndroidCXX::android_graphics_drawable_Drawable getDrawable(int const& arg0);
	 int getColor(int const& arg0,int const& arg1);
	 AndroidCXX::android_content_res_ColorStateList getColorStateList(int const& arg0);
	 int getResourceId(int const& arg0,int const& arg1);
	 AndroidCXX::java_lang_String getPositionDescription();
	 int getIndexCount();
	 AndroidCXX::java_lang_String getNonResourceString(int const& arg0);
	 int getLayoutDimension(int const& arg0,int const& arg1);
	 int getLayoutDimension(int const& arg0,AndroidCXX::java_lang_String const& arg1);
	 bool hasValue(int const& arg0);
	 AndroidCXX::android_util_TypedValue peekValue(int const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_TypedArray