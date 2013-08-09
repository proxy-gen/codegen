/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 









// Generated Code 

#ifndef _android_view_WindowManager
#define _android_view_WindowManager
//
// Scroll Down 
//


#include <android_view_Display.hpp>

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

class android_view_Display;

class android_view_View;

class android_view_WindowManager
{
public:

	android_view_WindowManager(const android_view_WindowManager& cc);
	android_view_WindowManager(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_WindowManager();
	// Functions
	 AndroidCXX::android_view_Display getDefaultDisplay();
	 void removeViewImmediate(AndroidCXX::android_view_View const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_WindowManager