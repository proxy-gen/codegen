/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 


 		 
 		 
 	
 	
 	
 	
 		 
 		 
 		 
 		 
 	
 	
 	
 	
 		 
 		 
 		 
 		 
 	
 	
 	
 	
 		 
 		 











// Generated Code 

#ifndef _android_widget_SimpleCursorTreeAdapter
#define _android_widget_SimpleCursorTreeAdapter
//
// Scroll Down 
//


#include <android_widget_SimpleCursorTreeAdapter_ViewBinder.hpp>

#include <android_widget_TextView.hpp>

#include <java_lang_String.hpp>

#include <android_content_Context.hpp>

#include <android_database_Cursor.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_widget_SimpleCursorTreeAdapter_ViewBinder;

class android_widget_TextView;

class java_lang_String;

class android_content_Context;

class android_database_Cursor;

class android_widget_SimpleCursorTreeAdapter
{
public:

	android_widget_SimpleCursorTreeAdapter(const android_widget_SimpleCursorTreeAdapter& cc);
	android_widget_SimpleCursorTreeAdapter(void * proxy);
	// Public Constructors
	android_widget_SimpleCursorTreeAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,int& arg2,int& arg3,std::vector<java_lang_String >& arg4,std::vector<int>& arg5,int& arg6,std::vector<java_lang_String >& arg7,std::vector<int>& arg8);
	android_widget_SimpleCursorTreeAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,int& arg2,std::vector<java_lang_String >& arg3,std::vector<int>& arg4,int& arg5,std::vector<java_lang_String >& arg6,std::vector<int>& arg7);
	android_widget_SimpleCursorTreeAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,int& arg2,int& arg3,std::vector<java_lang_String >& arg4,std::vector<int>& arg5,int& arg6,int& arg7,std::vector<java_lang_String >& arg8,std::vector<int>& arg9);
	android_widget_SimpleCursorTreeAdapter();
	// Default Destructor
	virtual ~android_widget_SimpleCursorTreeAdapter();
	// Functions
	 AndroidCXX::android_widget_SimpleCursorTreeAdapter_ViewBinder getViewBinder();
	 void setViewBinder(AndroidCXX::android_widget_SimpleCursorTreeAdapter_ViewBinder& arg0);
	 void setViewText(AndroidCXX::android_widget_TextView& arg0,AndroidCXX::java_lang_String& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleCursorTreeAdapter