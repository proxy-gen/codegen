/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
 		 
 		 
 		 
	


 		 
 		 
 		 
 		 
 		 
 		 










// Generated Code 

#ifndef _android_widget_ResourceCursorTreeAdapter
#define _android_widget_ResourceCursorTreeAdapter
//
// Scroll Down 
//


#include <android_content_Context.hpp>

#include <android_database_Cursor.hpp>

#include <android_view_ViewGroup.hpp>

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

class android_content_Context;

class android_database_Cursor;

class android_view_ViewGroup;

class android_view_View;

class android_widget_ResourceCursorTreeAdapter
{
public:

	android_widget_ResourceCursorTreeAdapter(const android_widget_ResourceCursorTreeAdapter& cc);
	android_widget_ResourceCursorTreeAdapter(void * proxy);
	// Public Constructors
	android_widget_ResourceCursorTreeAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,int& arg2,int& arg3,int& arg4,int& arg5);
	android_widget_ResourceCursorTreeAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,int& arg2,int& arg3,int& arg4);
	android_widget_ResourceCursorTreeAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,int& arg2,int& arg3);
	android_widget_ResourceCursorTreeAdapter();
	// Default Destructor
	virtual ~android_widget_ResourceCursorTreeAdapter();
	// Functions
	 AndroidCXX::android_view_View newGroupView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,bool& arg2,AndroidCXX::android_view_ViewGroup& arg3);
	 AndroidCXX::android_view_View newChildView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,bool& arg2,AndroidCXX::android_view_ViewGroup& arg3);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ResourceCursorTreeAdapter