/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
	
 		 
	
 		 
	
	
 		 
	
 		 
 		 
	
 		 
 		 
 	
	
 		 

















// Generated Code 

#ifndef _android_content_SharedPreferences_Editor
#define _android_content_SharedPreferences_Editor
//
// Scroll Down 
//


#include <java_lang_String.hpp>


#include <java_util_Set.hpp>

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

class android_content_SharedPreferences_Editor;

class java_util_Set;

class android_content_SharedPreferences_Editor
{
public:

	android_content_SharedPreferences_Editor(const android_content_SharedPreferences_Editor& cc);
	android_content_SharedPreferences_Editor(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_content_SharedPreferences_Editor();
	// 
	// Default Destructor
	virtual ~android_content_SharedPreferences_Editor();
	// Functions
	 AndroidCXX::android_content_SharedPreferences_Editor putBoolean(AndroidCXX::java_lang_String& arg0,bool& arg1);
	 AndroidCXX::android_content_SharedPreferences_Editor putInt(AndroidCXX::java_lang_String& arg0,int& arg1);
	 AndroidCXX::android_content_SharedPreferences_Editor putLong(AndroidCXX::java_lang_String& arg0,long& arg1);
	 AndroidCXX::android_content_SharedPreferences_Editor putFloat(AndroidCXX::java_lang_String& arg0,float& arg1);
	 AndroidCXX::android_content_SharedPreferences_Editor clear();
	 AndroidCXX::android_content_SharedPreferences_Editor remove(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::android_content_SharedPreferences_Editor putString(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 void apply();
	 AndroidCXX::android_content_SharedPreferences_Editor putStringSet(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_util_Set& arg1);
	 bool commit();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_SharedPreferences_Editor