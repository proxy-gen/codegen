/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		
 			
		


#ifndef _android_view_ContextMenu
#define _android_view_ContextMenu






#include <android_view_View.hpp>
#include <java_lang_CharSequence.hpp>
#include <android_graphics_drawable_Drawable.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_ContextMenu
{
public:
	android_view_ContextMenu setHeaderTitle(int& arg0,java_lang_CharSequence& arg1);
	android_view_ContextMenu setHeaderIcon(int& arg0,android_graphics_drawable_Drawable& arg1);
	android_view_ContextMenu setHeaderView(android_view_View& arg0);
	void clearHeader();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ContextMenu