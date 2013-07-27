/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	


 		 
 		 
 		 
 		 
 		 










// Generated Code 

#ifndef _android_widget_AbsoluteLayout
#define _android_widget_AbsoluteLayout
//
// Scroll Down 
//


#include <android_util_AttributeSet.hpp>

#include <android_view_ViewGroup_LayoutParams.hpp>

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

class android_util_AttributeSet;

class android_view_ViewGroup_LayoutParams;

class android_content_Context;

class android_widget_AbsoluteLayout
{
public:

	android_widget_AbsoluteLayout(const android_widget_AbsoluteLayout& cc);
	android_widget_AbsoluteLayout(Proxy proxy);
	// Public Constructors
	android_widget_AbsoluteLayout(AndroidCXX::android_content_Context const& arg0);
	android_widget_AbsoluteLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_AbsoluteLayout(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AbsoluteLayout();
	// Functions
	 AndroidCXX::android_view_ViewGroup_LayoutParams generateLayoutParams(AndroidCXX::android_util_AttributeSet const& arg0);
	 bool shouldDelayChildPressedState();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsoluteLayout