/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	








// Generated Code 

#ifndef _android_view_LayoutInflater_Factory
#define _android_view_LayoutInflater_Factory
//
// Scroll Down 
//



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

class android_content_Context;

class android_util_AttributeSet;

class android_view_View;

class android_view_LayoutInflater_Factory 
{
public:

	android_view_LayoutInflater_Factory(const android_view_LayoutInflater_Factory& cc);
	android_view_LayoutInflater_Factory(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_LayoutInflater_Factory();
	// Functions
	virtual AndroidCXX::android_view_View * onCreateView(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_content_Context const& arg1,AndroidCXX::android_util_AttributeSet const& arg2) ;

protected:
	android_view_LayoutInflater_Factory();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_LayoutInflater_Factory