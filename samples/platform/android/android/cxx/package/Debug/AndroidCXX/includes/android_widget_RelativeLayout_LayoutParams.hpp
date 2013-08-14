/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 	


 		 
 		 
 		 
 		 















// Generated Code 

#ifndef _android_widget_RelativeLayout_LayoutParams
#define _android_widget_RelativeLayout_LayoutParams
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_ViewGroup_MarginLayoutParams.hpp>


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

class android_content_Context;

class android_util_AttributeSet;

class android_view_ViewGroup_LayoutParams;

class android_view_ViewGroup_MarginLayoutParams;

class android_widget_RelativeLayout_LayoutParams : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_RelativeLayout_LayoutParams(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_RelativeLayout_LayoutParams(int const& arg0,int const& arg1);
	android_widget_RelativeLayout_LayoutParams(AndroidCXX::android_view_ViewGroup_LayoutParams const& arg0);
	android_widget_RelativeLayout_LayoutParams(AndroidCXX::android_view_ViewGroup_MarginLayoutParams const& arg0);
	android_widget_RelativeLayout_LayoutParams(const android_widget_RelativeLayout_LayoutParams& cc);
	android_widget_RelativeLayout_LayoutParams(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_RelativeLayout_LayoutParams();
	// Functions
	virtual AndroidCXX::java_lang_String * debug(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  resolveLayoutDirection(int const& arg0) ;
	virtual void  addRule(int const& arg0,int const& arg1) ;
	virtual void  addRule(int const& arg0) ;
	virtual void  removeRule(int const& arg0) ;
	virtual std::vector<int>  getRules() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RelativeLayout_LayoutParams