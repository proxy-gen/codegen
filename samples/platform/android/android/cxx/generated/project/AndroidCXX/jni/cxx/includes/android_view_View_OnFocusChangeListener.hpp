/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#ifndef _android_view_View_OnFocusChangeListener
#define _android_view_View_OnFocusChangeListener
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

class android_view_View_OnFocusChangeListener
{
public:

	android_view_View_OnFocusChangeListener(const android_view_View_OnFocusChangeListener& cc);
	android_view_View_OnFocusChangeListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_View_OnFocusChangeListener();
	// Functions
	 void onFocusChange(AndroidCXX::android_view_View const& arg0,bool const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_OnFocusChangeListener