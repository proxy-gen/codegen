/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#ifndef _android_widget_TextView_OnEditorActionListener
#define _android_widget_TextView_OnEditorActionListener
//
// Scroll Down 
//


#include <android_widget_TextView.hpp>

#include <android_view_KeyEvent.hpp>

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

class android_widget_TextView;

class android_view_KeyEvent;

class android_widget_TextView_OnEditorActionListener
{
public:

	android_widget_TextView_OnEditorActionListener(const android_widget_TextView_OnEditorActionListener& cc);
	android_widget_TextView_OnEditorActionListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TextView_OnEditorActionListener();
	// Functions
	 bool onEditorAction(AndroidCXX::android_widget_TextView const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextView_OnEditorActionListener