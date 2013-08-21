/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
	








// Generated Code 

#ifndef _android_view_LayoutInflater_Factory2
#define _android_view_LayoutInflater_Factory2
//
// Scroll Down 
//



#include <android_view_LayoutInflater_Factory.hpp>

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

class android_view_View;

class java_lang_String;

class android_content_Context;

class android_util_AttributeSet;

class android_view_LayoutInflater_Factory2 : public AndroidCXX::android_view_LayoutInflater_Factory
{
public:

	android_view_LayoutInflater_Factory2(const android_view_LayoutInflater_Factory2& cc);
	android_view_LayoutInflater_Factory2(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_LayoutInflater_Factory2();
	// Functions
	virtual AndroidCXX::android_view_View * onCreateView(AndroidCXX::android_view_View const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_Context const& arg2,AndroidCXX::android_util_AttributeSet const& arg3) ;

protected:
	android_view_LayoutInflater_Factory2();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_LayoutInflater_Factory2