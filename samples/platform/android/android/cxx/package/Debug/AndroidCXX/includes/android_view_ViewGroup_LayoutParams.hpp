/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//




 		 
 		 
 		 









// Generated Code 

#ifndef _android_view_ViewGroup_LayoutParams
#define _android_view_ViewGroup_LayoutParams
//
// Scroll Down 
//


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

class android_content_Context;

class android_util_AttributeSet;

class android_view_ViewGroup_LayoutParams;

class android_view_ViewGroup_LayoutParams
{
public:

	android_view_ViewGroup_LayoutParams(Proxy proxy);
	// Public Constructors
	android_view_ViewGroup_LayoutParams(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_view_ViewGroup_LayoutParams(int const& arg0,int const& arg1);
	android_view_ViewGroup_LayoutParams(AndroidCXX::android_view_ViewGroup_LayoutParams const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewGroup_LayoutParams();
	// Functions
	 void resolveLayoutDirection(int const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewGroup_LayoutParams