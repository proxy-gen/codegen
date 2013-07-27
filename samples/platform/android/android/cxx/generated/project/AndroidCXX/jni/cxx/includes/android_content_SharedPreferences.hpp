/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
	
 	
 		 
 		 
 		 
 		 
 	
	
 	
 		 
 		 
	
 		 
 		 


















// Generated Code 

#ifndef _android_content_SharedPreferences
#define _android_content_SharedPreferences
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_util_Map.hpp>

#include <java_lang_Object.hpp>

#include <java_util_Set.hpp>

#include <android_content_SharedPreferences_Editor.hpp>

#include <android_content_SharedPreferences_OnSharedPreferenceChangeListener.hpp>

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

class java_util_Map;

class java_lang_Object;

class java_util_Set;

class android_content_SharedPreferences_Editor;

class android_content_SharedPreferences_OnSharedPreferenceChangeListener;

class android_content_SharedPreferences
{
public:

	android_content_SharedPreferences(const android_content_SharedPreferences& cc);
	android_content_SharedPreferences(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_SharedPreferences();
	// Functions
	 bool getBoolean(AndroidCXX::java_lang_String const& arg0,bool const& arg1);
	 int getInt(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 long getLong(AndroidCXX::java_lang_String const& arg0,long const& arg1);
	 float getFloat(AndroidCXX::java_lang_String const& arg0,float const& arg1);
	 bool contains(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getString(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 AndroidCXX::java_util_Map getAll();
	 AndroidCXX::java_util_Set getStringSet(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_Set const& arg1);
	 AndroidCXX::android_content_SharedPreferences_Editor edit();
	 void registerOnSharedPreferenceChangeListener(AndroidCXX::android_content_SharedPreferences_OnSharedPreferenceChangeListener const& arg0);
	 void unregisterOnSharedPreferenceChangeListener(AndroidCXX::android_content_SharedPreferences_OnSharedPreferenceChangeListener const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_SharedPreferences