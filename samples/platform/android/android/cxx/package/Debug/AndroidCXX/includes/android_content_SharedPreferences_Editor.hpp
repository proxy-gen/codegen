/*
 * Header (Instance CXX)
 * Author: codegen
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

class java_util_Set;

class android_content_SharedPreferences_Editor : public java_lang_Object
{
public:

	android_content_SharedPreferences_Editor(const android_content_SharedPreferences_Editor& cc);
	android_content_SharedPreferences_Editor(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_SharedPreferences_Editor();
	// Functions
	virtual void  apply() ;
	virtual AndroidCXX::android_content_SharedPreferences_Editor * clear() ;
	virtual bool  commit() ;
	virtual AndroidCXX::android_content_SharedPreferences_Editor * putBoolean(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual AndroidCXX::android_content_SharedPreferences_Editor * putFloat(AndroidCXX::java_lang_String const& arg0,float const& arg1) ;
	virtual AndroidCXX::android_content_SharedPreferences_Editor * putInt(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_SharedPreferences_Editor * putLong(AndroidCXX::java_lang_String const& arg0,long const& arg1) ;
	virtual AndroidCXX::android_content_SharedPreferences_Editor * putString(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_content_SharedPreferences_Editor * putStringSet(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_Set const& arg1) ;
	virtual AndroidCXX::android_content_SharedPreferences_Editor * remove(AndroidCXX::java_lang_String const& arg0) ;

protected:
	android_content_SharedPreferences_Editor();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_SharedPreferences_Editor