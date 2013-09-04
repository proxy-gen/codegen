/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_content_res_ColorStateList.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <java_lang_String.hpp>

#include <android_content_res_Resources.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_util_TypedValue.hpp>


#include <java_lang_Object.hpp>

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

class android_content_res_ColorStateList;

class android_graphics_drawable_Drawable;

class java_lang_String;

class android_content_res_Resources;

class java_lang_CharSequence;

class android_util_TypedValue;

class android_content_res_TypedArray : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_content_res_TypedArray(const android_content_res_TypedArray& cc);
	android_content_res_TypedArray(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_res_TypedArray();
	// Functions
	virtual bool  getBoolean(int const& arg0,bool const& arg1) ;
	virtual int  getColor(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_res_ColorStateList * getColorStateList(int const& arg0) ;
	virtual float  getDimension(int const& arg0,float const& arg1) ;
	virtual int  getDimensionPixelOffset(int const& arg0,int const& arg1) ;
	virtual int  getDimensionPixelSize(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getDrawable(int const& arg0) ;
	virtual float  getFloat(int const& arg0,float const& arg1) ;
	virtual float  getFraction(int const& arg0,int const& arg1,int const& arg2,float const& arg3) ;
	virtual int  getIndexCount() ;
	virtual int  getIndex(int const& arg0) ;
	virtual int  getInt(int const& arg0,int const& arg1) ;
	virtual int  getInteger(int const& arg0,int const& arg1) ;
	virtual int  getLayoutDimension(int const& arg0,int const& arg1) ;
	virtual int  getLayoutDimension(int const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_String * getNonResourceString(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getPositionDescription() ;
	virtual int  getResourceId(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_res_Resources * getResources() ;
	virtual AndroidCXX::java_lang_String * getString(int const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_CharSequence>  getTextArray(int const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * getText(int const& arg0) ;
	virtual bool  getValue(int const& arg0,AndroidCXX::android_util_TypedValue const& arg1) ;
	virtual bool  hasValue(int const& arg0) ;
	virtual int  length() ;
	virtual AndroidCXX::android_util_TypedValue * peekValue(int const& arg0) ;
	virtual void  recycle() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_TypedArray