/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
	
 		 
 		 
 		 
	


 		 
 		 
 		 
 		 
 		 
 		 












// Generated Code 

#ifndef _android_widget_ResourceCursorAdapter
#define _android_widget_ResourceCursorAdapter
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

class android_widget_ResourceCursorAdapter
{
public:

	android_widget_ResourceCursorAdapter(const android_widget_ResourceCursorAdapter& cc);
	android_widget_ResourceCursorAdapter(void * proxy);
	// Public Constructors
	android_widget_ResourceCursorAdapter(AndroidCXX::android_content_Context& arg0,int& arg1,AndroidCXX::android_database_Cursor& arg2);
	android_widget_ResourceCursorAdapter(AndroidCXX::android_content_Context& arg0,int& arg1,AndroidCXX::android_database_Cursor& arg2,bool& arg3);
	android_widget_ResourceCursorAdapter(AndroidCXX::android_content_Context& arg0,int& arg1,AndroidCXX::android_database_Cursor& arg2,int& arg3);
	android_widget_ResourceCursorAdapter();
	// Default Destructor
	virtual ~android_widget_ResourceCursorAdapter();
	// Functions
	 void setDropDownViewResource(int& arg0);
	 AndroidCXX::android_view_View newView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,AndroidCXX::android_view_ViewGroup& arg2);
	 AndroidCXX::android_view_View newDropDownView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,AndroidCXX::android_view_ViewGroup& arg2);
	 void setViewResource(int& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ResourceCursorAdapter