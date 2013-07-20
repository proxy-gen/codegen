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
	virtual ~android_content_res_Resources();
	 bool getBoolean(int& arg0);
	 void getValue(int& arg0,android_util_TypedValue& arg1,bool& arg2,java_lang_String& arg3);
	 int getInteger(int& arg0);
	 java_lang_String *  getString(int& arg0,std::vector<long>& arg1);
	 int getIdentifier(java_lang_String& arg0);
	 std::vector<long> getStringArray(int& arg0);
	 std::vector<int> getIntArray(int& arg0);
	 java_lang_CharSequence *  getText(int& arg0,java_lang_CharSequence& arg1);
	 java_lang_String *  getResourceName(int& arg0);
	static android_content_res_Resources *  getSystem();
	 java_lang_CharSequence *  getQuantityText(int& arg0);
	 java_lang_String *  getQuantityString(int& arg0,std::vector<long>& arg1);
	 std::vector<long> getTextArray(int& arg0);
	 android_content_res_TypedArray *  obtainTypedArray(int& arg0);
	 float getDimension(int& arg0);
	 int getDimensionPixelOffset(int& arg0);
	 int getDimensionPixelSize(int& arg0);
	 float getFraction(int& arg0);
	 android_graphics_drawable_Drawable *  getDrawable(int& arg0);
	 android_graphics_drawable_Drawable *  getDrawableForDensity(int& arg0);
	 android_graphics_Movie *  getMovie(int& arg0);
	 int getColor(int& arg0);
	 android_content_res_ColorStateList *  getColorStateList(int& arg0);
	 android_content_res_XmlResourceParser *  getLayout(int& arg0);
	 android_content_res_XmlResourceParser *  getAnimation(int& arg0);
	 android_content_res_XmlResourceParser *  getXml(int& arg0);
	 java_io_InputStream *  openRawResource(int& arg0,android_util_TypedValue& arg1);
	 android_content_res_AssetFileDescriptor *  openRawResourceFd(int& arg0);
	 void getValueForDensity(int& arg0,android_util_TypedValue& arg1,bool& arg2);
	 android_content_res_Resources_Theme *  newTheme();
	 android_content_res_TypedArray *  obtainAttributes(android_util_AttributeSet& arg0,std::vector<int>& arg1);
	 void updateConfiguration(android_content_res_Configuration& arg0,android_util_DisplayMetrics& arg1);
	 android_util_DisplayMetrics *  getDisplayMetrics();
	 android_content_res_Configuration *  getConfiguration();
	 java_lang_String *  getResourcePackageName(int& arg0);
	 java_lang_String *  getResourceTypeName(int& arg0);
	 java_lang_String *  getResourceEntryName(int& arg0);
	 void parseBundleExtras(android_content_res_XmlResourceParser& arg0,android_os_Bundle& arg1);
	 void parseBundleExtra(java_lang_String& arg0,android_util_AttributeSet& arg1,android_os_Bundle& arg2);
	 android_content_res_AssetManager *  getAssets();
	 void flushLayoutCache();
	 void finishPreloading();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_Resources