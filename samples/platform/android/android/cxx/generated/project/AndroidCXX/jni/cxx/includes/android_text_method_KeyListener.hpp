/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
 			
 			
 			
 			
 			
 			
 			


#ifndef _android_text_method_KeyListener
#define _android_text_method_KeyListener







#include <android_view_View.hpp>
#include <android_view_KeyEvent.hpp>
#include <android_text_Editable.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_text_method_KeyListener
{
public:
	bool onKeyDown(android_view_View& arg0,android_text_Editable& arg1,int& arg2,android_view_KeyEvent& arg3);
	bool onKeyUp(android_view_View& arg0,android_text_Editable& arg1,int& arg2,android_view_KeyEvent& arg3);
	int getInputType();
	bool onKeyOther(android_view_View& arg0,android_text_Editable& arg1,android_view_KeyEvent& arg2);
	void clearMetaKeyState(android_view_View& arg0,android_text_Editable& arg1,int& arg2);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_method_KeyListener