/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#ifndef _android_content_SharedPreferences_OnSharedPreferenceChangeListener
#define _android_content_SharedPreferences_OnSharedPreferenceChangeListener
//
// Scroll Down 
//


#include <android_content_SharedPreferences.hpp>

#include <java_lang_String.hpp>

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

class android_content_SharedPreferences;

class java_lang_String;

class android_content_SharedPreferences_OnSharedPreferenceChangeListener
{
public:

	android_content_SharedPreferences_OnSharedPreferenceChangeListener(const android_content_SharedPreferences_OnSharedPreferenceChangeListener& cc);
	android_content_SharedPreferences_OnSharedPreferenceChangeListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_SharedPreferences_OnSharedPreferenceChangeListener();
	// Functions
	 void onSharedPreferenceChanged(AndroidCXX::android_content_SharedPreferences const& arg0,AndroidCXX::java_lang_String const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_SharedPreferences_OnSharedPreferenceChangeListener