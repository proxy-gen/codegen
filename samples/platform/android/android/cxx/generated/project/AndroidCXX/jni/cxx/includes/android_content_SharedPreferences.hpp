/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
		
		
 			
 			
		
		
 			
 			


#ifndef _android_content_SharedPreferences
#define _android_content_SharedPreferences













#include <android_content_SharedPreferences_OnSharedPreferenceChangeListener.hpp>
#include <android_content_SharedPreferences_Editor.hpp>
#include <java_util_Map.hpp>
#include <java_util_Set.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_content_SharedPreferences
{
public:
	bool getBoolean(java_lang_String& arg0,bool& arg1);
	int getInt(java_lang_String& arg0,int& arg1);
	long getLong(java_lang_String& arg0,long& arg1);
	float getFloat(java_lang_String& arg0,float& arg1);
	bool contains(java_lang_String& arg0);
	java_lang_String getString(java_lang_String& arg0);
	java_util_Map getAll();
	java_util_Set getStringSet(java_lang_String& arg0,java_util_Set& arg1);
	android_content_SharedPreferences_Editor edit();
	void registerOnSharedPreferenceChangeListener(android_content_SharedPreferences_OnSharedPreferenceChangeListener& arg0);
	void unregisterOnSharedPreferenceChangeListener(android_content_SharedPreferences_OnSharedPreferenceChangeListener& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_SharedPreferences