/*
 * Header (Instance CXX)
 * Author: codegen
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


class android_content_res_AssetManager;

class java_io_File;

class android_graphics_Typeface 
{
public:

	// Public ConstrucXXX
	android_graphics_Typeface(const android_graphics_Typeface& cc);
	android_graphics_Typeface(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_graphics_Typeface();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  hashCode() ;
	static AndroidCXX::android_graphics_Typeface * create(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	static AndroidCXX::android_graphics_Typeface * create(AndroidCXX::android_graphics_Typeface const& arg0,int const& arg1) ;
	virtual int  getStyle() ;
	virtual bool  isBold() ;
	virtual bool  isItalic() ;
	static AndroidCXX::android_graphics_Typeface * defaultFromStyle(int const& arg0) ;
	static AndroidCXX::android_graphics_Typeface * createFromAsset(AndroidCXX::android_content_res_AssetManager const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	static AndroidCXX::android_graphics_Typeface * createFromFile(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::android_graphics_Typeface * createFromFile(AndroidCXX::java_io_File const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_graphics_Typeface