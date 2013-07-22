/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//





 		 
 		 
 		 
 		 


















// Generated Code 

#ifndef _android_view_ViewGroup_MarginLayoutParams
#define _android_view_ViewGroup_MarginLayoutParams
//
// Scroll Down 
//



#include <android_view_ViewGroup_LayoutParams.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_view_ViewGroup_MarginLayoutParams;

class android_view_ViewGroup_LayoutParams;

class android_content_Context;

class android_util_AttributeSet;

class android_view_ViewGroup_MarginLayoutParams
{
public:

	android_view_ViewGroup_MarginLayoutParams(const android_view_ViewGroup_MarginLayoutParams& cc);
	android_view_ViewGroup_MarginLayoutParams(void * proxy);
	// Public Constructors
	android_view_ViewGroup_MarginLayoutParams(int& arg0,int& arg1);
	android_view_ViewGroup_MarginLayoutParams(AndroidCXX::android_view_ViewGroup_MarginLayoutParams& arg0);
	android_view_ViewGroup_MarginLayoutParams(AndroidCXX::android_view_ViewGroup_LayoutParams& arg0);
	android_view_ViewGroup_MarginLayoutParams(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	android_view_ViewGroup_MarginLayoutParams();
	// Default Destructor
	virtual ~android_view_ViewGroup_MarginLayoutParams();
	// Functions
	 void setLayoutDirection(int& arg0);
	 int getLayoutDirection();
	 void resolveLayoutDirection(int& arg0);
	 void setMargins(int& arg0,int& arg1,int& arg2,int& arg3);
	 void setMarginStart(int& arg0);
	 int getMarginStart();
	 void setMarginEnd(int& arg0);
	 int getMarginEnd();
	 bool isMarginRelative();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewGroup_MarginLayoutParams