/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		
 			
 			
 			
		


#ifndef _android_widget_ResourceCursorTreeAdapter
#define _android_widget_ResourceCursorTreeAdapter




#include <android_view_ViewGroup.hpp>
#include <android_view_View.hpp>
#include <android_database_Cursor.hpp>
#include <android_content_Context.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_ResourceCursorTreeAdapter
{
public:
 android_view_View newGroupView(android_content_Context& arg0,android_database_Cursor& arg1,bool& arg2,android_view_ViewGroup& arg3);
 android_view_View newChildView(android_content_Context& arg0,android_database_Cursor& arg1,bool& arg2,android_view_ViewGroup& arg3);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ResourceCursorTreeAdapter