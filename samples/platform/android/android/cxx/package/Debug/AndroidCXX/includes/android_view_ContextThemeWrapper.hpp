/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
	
	


 		 












// Generated Code 

#ifndef _android_view_ContextThemeWrapper
#define _android_view_ContextThemeWrapper
//
// Scroll Down 
//


#include <android_content_res_Configuration.hpp>

#include <android_content_res_Resources.hpp>

#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <android_content_res_Resources_Theme.hpp>

#include <android_content_Context.hpp>


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

class android_content_res_Configuration;

class android_content_res_Resources;

class java_lang_String;


class android_content_res_Resources_Theme;

class android_content_Context;

class android_view_ContextThemeWrapper : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	android_view_ContextThemeWrapper();
	android_view_ContextThemeWrapper(AndroidCXX::android_content_Context const& arg0,int const& arg1);
	android_view_ContextThemeWrapper(const android_view_ContextThemeWrapper& cc);
	android_view_ContextThemeWrapper(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ContextThemeWrapper();
	// Functions
	virtual void  applyOverrideConfiguration(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual AndroidCXX::android_content_res_Resources * getResources() ;
	virtual AndroidCXX::java_lang_Object * getSystemService(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_res_Resources_Theme * getTheme() ;
	virtual void  setTheme(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ContextThemeWrapper