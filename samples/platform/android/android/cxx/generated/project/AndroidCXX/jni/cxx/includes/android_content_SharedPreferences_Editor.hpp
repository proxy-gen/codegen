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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;


class java_util_Set;

class android_content_SharedPreferences_Editor
{
public:
 android_content_SharedPreferences_Editor putBoolean(java_lang_String& arg0,bool& arg1);
 android_content_SharedPreferences_Editor putInt(java_lang_String& arg0,int& arg1);
 android_content_SharedPreferences_Editor putLong(java_lang_String& arg0,long& arg1);
 android_content_SharedPreferences_Editor putFloat(java_lang_String& arg0,float& arg1);
 android_content_SharedPreferences_Editor clear();
 android_content_SharedPreferences_Editor remove(java_lang_String& arg0);
 android_content_SharedPreferences_Editor putString(java_lang_String& arg0);
 void apply();
 android_content_SharedPreferences_Editor putStringSet(java_lang_String& arg0,java_util_Set& arg1);
 bool commit();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_SharedPreferences_Editor