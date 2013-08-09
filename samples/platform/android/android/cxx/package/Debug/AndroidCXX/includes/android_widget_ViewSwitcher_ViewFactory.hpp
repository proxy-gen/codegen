/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	








// Generated Code 

#ifndef _android_widget_ViewSwitcher_ViewFactory
#define _android_widget_ViewSwitcher_ViewFactory
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

class android_widget_ViewSwitcher_ViewFactory
{
public:

	android_widget_ViewSwitcher_ViewFactory(const android_widget_ViewSwitcher_ViewFactory& cc);
	android_widget_ViewSwitcher_ViewFactory(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ViewSwitcher_ViewFactory();
	// Functions
	 AndroidCXX::android_view_View makeView();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ViewSwitcher_ViewFactory