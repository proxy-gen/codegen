/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

#include <android_widget_GridLayout_Spec.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

#include <android_view_ViewGroup_MarginLayoutParams.hpp>


#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>

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

class java_lang_Object;

class android_widget_GridLayout_Spec;

class android_view_ViewGroup_LayoutParams;

class android_view_ViewGroup_MarginLayoutParams;

class android_widget_GridLayout_LayoutParams;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_GridLayout_LayoutParams
{
public:

	android_widget_GridLayout_LayoutParams(Proxy proxy);
	// Public Constructors
	android_widget_GridLayout_LayoutParams(AndroidCXX::android_widget_GridLayout_Spec const& arg0,AndroidCXX::android_widget_GridLayout_Spec const& arg1);
	android_widget_GridLayout_LayoutParams();
	android_widget_GridLayout_LayoutParams(AndroidCXX::android_view_ViewGroup_LayoutParams const& arg0);
	android_widget_GridLayout_LayoutParams(AndroidCXX::android_view_ViewGroup_MarginLayoutParams const& arg0);
	android_widget_GridLayout_LayoutParams(AndroidCXX::android_widget_GridLayout_LayoutParams const& arg0);
	android_widget_GridLayout_LayoutParams(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_GridLayout_LayoutParams();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 int hashCode();
	 void setGravity(int const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_GridLayout_LayoutParams