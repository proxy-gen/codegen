/*
 * Header (Instance CXX)
 * Author: codegen
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

class java_lang_String;

class java_util_Map;


class java_util_Set;

class android_content_SharedPreferences_Editor;

class android_content_SharedPreferences_OnSharedPreferenceChangeListener;

class android_content_SharedPreferences : public java_lang_Object
{
public:

	android_content_SharedPreferences(const android_content_SharedPreferences& cc);
	android_content_SharedPreferences(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_SharedPreferences();
	// Functions
	virtual bool  getBoolean(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual int  getInt(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual long  getLong(AndroidCXX::java_lang_String const& arg0,long const& arg1) ;
	virtual float  getFloat(AndroidCXX::java_lang_String const& arg0,float const& arg1) ;
	virtual bool  contains(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getString(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_util_Map * getAll() ;
	virtual AndroidCXX::java_util_Set * getStringSet(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_Set const& arg1) ;
	virtual AndroidCXX::android_content_SharedPreferences_Editor * edit() ;
	virtual void  registerOnSharedPreferenceChangeListener(AndroidCXX::android_content_SharedPreferences_OnSharedPreferenceChangeListener const& arg0) ;
	virtual void  unregisterOnSharedPreferenceChangeListener(AndroidCXX::android_content_SharedPreferences_OnSharedPreferenceChangeListener const& arg0) ;

protected:
	android_content_SharedPreferences();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_SharedPreferences