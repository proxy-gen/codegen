/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 


 		 
 		 
 		 
 		 
 		 
 		 
 		 














// Generated Code 

#ifndef _android_widget_GridLayout_LayoutParams
#define _android_widget_GridLayout_LayoutParams
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_view_ViewGroup_MarginLayoutParams.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_widget_GridLayout_Spec.hpp>


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


class android_content_Context;

class android_util_AttributeSet;


class android_view_ViewGroup_MarginLayoutParams;

class android_view_ViewGroup_LayoutParams;

class android_widget_GridLayout_Spec;

class android_widget_GridLayout_LayoutParams : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_GridLayout_LayoutParams();
	android_widget_GridLayout_LayoutParams(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_GridLayout_LayoutParams(AndroidCXX::android_widget_GridLayout_LayoutParams const& arg0);
	android_widget_GridLayout_LayoutParams(AndroidCXX::android_view_ViewGroup_MarginLayoutParams const& arg0);
	android_widget_GridLayout_LayoutParams(AndroidCXX::android_view_ViewGroup_LayoutParams const& arg0);
	android_widget_GridLayout_LayoutParams(AndroidCXX::android_widget_GridLayout_Spec const& arg0,AndroidCXX::android_widget_GridLayout_Spec const& arg1);
	android_widget_GridLayout_LayoutParams(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_GridLayout_LayoutParams();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  hashCode() ;
	virtual void  setGravity(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_GridLayout_LayoutParams