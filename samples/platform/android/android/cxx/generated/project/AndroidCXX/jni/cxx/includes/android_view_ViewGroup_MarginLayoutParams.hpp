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

// Forward Declarations

class android_view_ViewGroup_MarginLayoutParams;

class android_view_ViewGroup_LayoutParams;

class android_content_Context;

class android_util_AttributeSet;

class android_view_ViewGroup_MarginLayoutParams
{
public:

	android_view_ViewGroup_MarginLayoutParams(Proxy proxy);
	// Public Constructors
	android_view_ViewGroup_MarginLayoutParams(int const& arg0,int const& arg1);
	android_view_ViewGroup_MarginLayoutParams(AndroidCXX::android_view_ViewGroup_MarginLayoutParams const& arg0);
	android_view_ViewGroup_MarginLayoutParams(AndroidCXX::android_view_ViewGroup_LayoutParams const& arg0);
	android_view_ViewGroup_MarginLayoutParams(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewGroup_MarginLayoutParams();
	// Functions
	 void setLayoutDirection(int const& arg0);
	 int getLayoutDirection();
	 void resolveLayoutDirection(int const& arg0);
	 void setMargins(int const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void setMarginStart(int const& arg0);
	 int getMarginStart();
	 void setMarginEnd(int const& arg0);
	 int getMarginEnd();
	 bool isMarginRelative();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewGroup_MarginLayoutParams