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
	android_content_res_Resources(void * proxy);
	// Public Constructors
	android_content_res_Resources(AndroidCXX::android_content_res_AssetManager& arg0,AndroidCXX::android_util_DisplayMetrics& arg1,AndroidCXX::android_content_res_Configuration& arg2);
	android_content_res_Resources();
	// Default Destructor
	virtual ~android_content_res_Resources();
	// Functions
	 bool getBoolean(int& arg0);
	 void getValue(int& arg0,AndroidCXX::android_util_TypedValue& arg1,bool& arg2);
	 void getValue(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_util_TypedValue& arg1,bool& arg2);
	 int getInteger(int& arg0);
	 AndroidCXX::java_lang_String getString(int& arg0);
	 AndroidCXX::java_lang_String getString(int& arg0,std::vector<AndroidCXX::java_lang_Object >& arg1);
	 int getIdentifier(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2);
	 std::vector<AndroidCXX::java_lang_String > getStringArray(int& arg0);
	 std::vector<int> getIntArray(int& arg0);
	 AndroidCXX::java_lang_CharSequence getText(int& arg0,AndroidCXX::java_lang_CharSequence& arg1);
	 AndroidCXX::java_lang_CharSequence getText(int& arg0);
	 AndroidCXX::java_lang_String getResourceName(int& arg0);
	static AndroidCXX::android_content_res_Resources getSystem();
	 AndroidCXX::java_lang_CharSequence getQuantityText(int& arg0,int& arg1);
	 AndroidCXX::java_lang_String getQuantityString(int& arg0,int& arg1,std::vector<AndroidCXX::java_lang_Object >& arg2);
	 AndroidCXX::java_lang_String getQuantityString(int& arg0,int& arg1);
	 std::vector<AndroidCXX::java_lang_CharSequence > getTextArray(int& arg0);
	 AndroidCXX::android_content_res_TypedArray obtainTypedArray(int& arg0);
	 float getDimension(int& arg0);
	 int getDimensionPixelOffset(int& arg0);
	 int getDimensionPixelSize(int& arg0);
	 float getFraction(int& arg0,int& arg1,int& arg2);
	 AndroidCXX::android_graphics_drawable_Drawable getDrawable(int& arg0);
	 AndroidCXX::android_graphics_drawable_Drawable getDrawableForDensity(int& arg0,int& arg1);
	 AndroidCXX::android_graphics_Movie getMovie(int& arg0);
	 int getColor(int& arg0);
	 AndroidCXX::android_content_res_ColorStateList getColorStateList(int& arg0);
	 AndroidCXX::android_content_res_XmlResourceParser getLayout(int& arg0);
	 AndroidCXX::android_content_res_XmlResourceParser getAnimation(int& arg0);
	 AndroidCXX::android_content_res_XmlResourceParser getXml(int& arg0);
	 AndroidCXX::java_io_InputStream openRawResource(int& arg0,AndroidCXX::android_util_TypedValue& arg1);
	 AndroidCXX::java_io_InputStream openRawResource(int& arg0);
	 AndroidCXX::android_content_res_AssetFileDescriptor openRawResourceFd(int& arg0);
	 void getValueForDensity(int& arg0,int& arg1,AndroidCXX::android_util_TypedValue& arg2,bool& arg3);
	 AndroidCXX::android_content_res_Resources_Theme newTheme();
	 AndroidCXX::android_content_res_TypedArray obtainAttributes(AndroidCXX::android_util_AttributeSet& arg0,std::vector<int>& arg1);
	 void updateConfiguration(AndroidCXX::android_content_res_Configuration& arg0,AndroidCXX::android_util_DisplayMetrics& arg1);
	 AndroidCXX::android_util_DisplayMetrics getDisplayMetrics();
	 AndroidCXX::android_content_res_Configuration getConfiguration();
	 AndroidCXX::java_lang_String getResourcePackageName(int& arg0);
	 AndroidCXX::java_lang_String getResourceTypeName(int& arg0);
	 AndroidCXX::java_lang_String getResourceEntryName(int& arg0);
	 void parseBundleExtras(AndroidCXX::android_content_res_XmlResourceParser& arg0,AndroidCXX::android_os_Bundle& arg1);
	 void parseBundleExtra(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_util_AttributeSet& arg1,AndroidCXX::android_os_Bundle& arg2);
	 AndroidCXX::android_content_res_AssetManager getAssets();
	 void flushLayoutCache();
	 void finishPreloading();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_Resources