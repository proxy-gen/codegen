/*
 * Header (Instance CXX)
 * Author: codegen
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
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TextView_OnEditorActionListener();
	// Functions
	virtual bool  onEditorAction(AndroidCXX::android_widget_TextView const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2) ;

protected:
	android_widget_TextView_OnEditorActionListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextView_OnEditorActionListener