/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		
 			
 			
 			
		


#ifndef _android_widget_ResourceCursorAdapter
#define _android_widget_ResourceCursorAdapter






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

class android_widget_ResourceCursorAdapter
{
public:
 void setDropDownViewResource(int& arg0);
 android_view_View newView(android_content_Context& arg0,android_database_Cursor& arg1,android_view_ViewGroup& arg2);
 android_view_View newDropDownView(android_content_Context& arg0,android_database_Cursor& arg1,android_view_ViewGroup& arg2);
 void setViewResource(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ResourceCursorAdapter