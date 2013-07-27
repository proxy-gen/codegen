/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
	
 	
	
 		 
 		 
 		 
 		 
 	
 		 
 	
 		 
	
	
	
	
	
 	
	
 		 
	
 	
 		 
	
	
	
	
	
	
	
	
 		 
	
	
	
 		 
	
 		 
 	
	
 		 
 		 
	
	
	
	
	
 		 
 		 
 		 
 		 
 		 
	


 		 
 		 
 		 





















































// Generated Code 

#ifndef _android_content_res_Resources
#define _android_content_res_Resources
//
// Scroll Down 
//


#include <android_util_TypedValue.hpp>

#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_CharSequence.hpp>


#include <android_content_res_TypedArray.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_graphics_Movie.hpp>

#include <android_content_res_ColorStateList.hpp>

#include <android_content_res_XmlResourceParser.hpp>

#include <java_io_InputStream.hpp>

#include <android_content_res_AssetFileDescriptor.hpp>

#include <android_content_res_Resources_Theme.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_content_res_Configuration.hpp>

#include <android_util_DisplayMetrics.hpp>

#include <android_os_Bundle.hpp>

#include <android_content_res_AssetManager.hpp>

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

class android_util_TypedValue;

class java_lang_String;

class java_lang_Object;

class java_lang_CharSequence;

class android_content_res_Resources;

class android_content_res_TypedArray;

class android_graphics_drawable_Drawable;

class android_graphics_Movie;

class android_content_res_ColorStateList;

class android_content_res_XmlResourceParser;

class java_io_InputStream;

class android_content_res_AssetFileDescriptor;

class android_content_res_Resources_Theme;

class android_util_AttributeSet;

class android_content_res_Configuration;

class android_util_DisplayMetrics;

class android_os_Bundle;

class android_content_res_AssetManager;

class android_content_res_Resources
{
public:

	android_content_res_Resources(const android_content_res_Resources& cc);
	android_content_res_Resources(Proxy proxy);
	// Public Constructors
	android_content_res_Resources(AndroidCXX::android_content_res_AssetManager const& arg0,AndroidCXX::android_util_DisplayMetrics const& arg1,AndroidCXX::android_content_res_Configuration const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_res_Resources();
	// Functions
	 bool getBoolean(int const& arg0);
	 void getValue(int const& arg0,AndroidCXX::android_util_TypedValue const& arg1,bool const& arg2);
	 void getValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_util_TypedValue const& arg1,bool const& arg2);
	 int getInteger(int const& arg0);
	 AndroidCXX::java_lang_String getString(int const& arg0);
	 AndroidCXX::java_lang_String getString(int const& arg0,std::vector<AndroidCXX::java_lang_Object > const& arg1);
	 int getIdentifier(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2);
	 std::vector<AndroidCXX::java_lang_String > getStringArray(int const& arg0);
	 std::vector<int> getIntArray(int const& arg0);
	 AndroidCXX::java_lang_CharSequence getText(int const& arg0,AndroidCXX::java_lang_CharSequence const& arg1);
	 AndroidCXX::java_lang_CharSequence getText(int const& arg0);
	 AndroidCXX::java_lang_String getResourceName(int const& arg0);
	static AndroidCXX::android_content_res_Resources getSystem();
	 AndroidCXX::java_lang_CharSequence getQuantityText(int const& arg0,int const& arg1);
	 AndroidCXX::java_lang_String getQuantityString(int const& arg0,int const& arg1,std::vector<AndroidCXX::java_lang_Object > const& arg2);
	 AndroidCXX::java_lang_String getQuantityString(int const& arg0,int const& arg1);
	 std::vector<AndroidCXX::java_lang_CharSequence > getTextArray(int const& arg0);
	 AndroidCXX::android_content_res_TypedArray obtainTypedArray(int const& arg0);
	 float getDimension(int const& arg0);
	 int getDimensionPixelOffset(int const& arg0);
	 int getDimensionPixelSize(int const& arg0);
	 float getFraction(int const& arg0,int const& arg1,int const& arg2);
	 AndroidCXX::android_graphics_drawable_Drawable getDrawable(int const& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getDrawableForDensity(int const& arg0,int const& arg1);
	 AndroidCXX::android_graphics_Movie getMovie(int const& arg0);
	 int getColor(int const& arg0);
	 AndroidCXX::android_content_res_ColorStateList getColorStateList(int const& arg0);
	 AndroidCXX::android_content_res_XmlResourceParser getLayout(int const& arg0);
	 AndroidCXX::android_content_res_XmlResourceParser getAnimation(int const& arg0);
	 AndroidCXX::android_content_res_XmlResourceParser getXml(int const& arg0);
	 AndroidCXX::java_io_InputStream openRawResource(int const& arg0,AndroidCXX::android_util_TypedValue const& arg1);
	 AndroidCXX::java_io_InputStream openRawResource(int const& arg0);
	 AndroidCXX::android_content_res_AssetFileDescriptor openRawResourceFd(int const& arg0);
	 void getValueForDensity(int const& arg0,int const& arg1,AndroidCXX::android_util_TypedValue const& arg2,bool const& arg3);
	 AndroidCXX::android_content_res_Resources_Theme newTheme();
	 AndroidCXX::android_content_res_TypedArray obtainAttributes(AndroidCXX::android_util_AttributeSet const& arg0,std::vector<int> const& arg1);
	 void updateConfiguration(AndroidCXX::android_content_res_Configuration const& arg0,AndroidCXX::android_util_DisplayMetrics const& arg1);
	 AndroidCXX::android_util_DisplayMetrics getDisplayMetrics();
	 AndroidCXX::android_content_res_Configuration getConfiguration();
	 AndroidCXX::java_lang_String getResourcePackageName(int const& arg0);
	 AndroidCXX::java_lang_String getResourceTypeName(int const& arg0);
	 AndroidCXX::java_lang_String getResourceEntryName(int const& arg0);
	 void parseBundleExtras(AndroidCXX::android_content_res_XmlResourceParser const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void parseBundleExtra(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 AndroidCXX::android_content_res_AssetManager getAssets();
	 void flushLayoutCache();
	 void finishPreloading();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_Resources