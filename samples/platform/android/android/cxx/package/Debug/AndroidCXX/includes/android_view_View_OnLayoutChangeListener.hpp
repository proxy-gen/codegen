/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#ifndef _android_view_View_OnLayoutChangeListener
#define _android_view_View_OnLayoutChangeListener
//
// Scroll Down 
//


#include <android_view_View.hpp>

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

class android_view_View_OnLayoutChangeListener
{
public:

	android_view_View_OnLayoutChangeListener(const android_view_View_OnLayoutChangeListener& cc);
	android_view_View_OnLayoutChangeListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_View_OnLayoutChangeListener();
	// Functions
	 void onLayoutChange(AndroidCXX::android_view_View const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,int const& arg7,int const& arg8);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_OnLayoutChangeListener