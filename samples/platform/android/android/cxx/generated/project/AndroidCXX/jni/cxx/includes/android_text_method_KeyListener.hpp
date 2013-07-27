/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 












// Generated Code 

#ifndef _android_text_method_KeyListener
#define _android_text_method_KeyListener
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_text_Editable.hpp>

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

class android_view_View;

class android_text_Editable;

class android_view_KeyEvent;

class android_text_method_KeyListener
{
public:

	android_text_method_KeyListener(const android_text_method_KeyListener& cc);
	android_text_method_KeyListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_method_KeyListener();
	// Functions
	 bool onKeyDown(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_text_Editable const& arg1,int const& arg2,AndroidCXX::android_view_KeyEvent const& arg3);
	 bool onKeyUp(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_text_Editable const& arg1,int const& arg2,AndroidCXX::android_view_KeyEvent const& arg3);
	 int getInputType();
	 bool onKeyOther(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_text_Editable const& arg1,AndroidCXX::android_view_KeyEvent const& arg2);
	 void clearMetaKeyState(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_text_Editable const& arg1,int const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_method_KeyListener