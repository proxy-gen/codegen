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
	android_widget_SimpleCursorTreeAdapter(Proxy proxy);
	// Public Constructors
	android_widget_SimpleCursorTreeAdapter(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1,int const& arg2,int const& arg3,std::vector<AndroidCXX::java_lang_String > const& arg4,std::vector<int> const& arg5,int const& arg6,std::vector<AndroidCXX::java_lang_String > const& arg7,std::vector<int> const& arg8);
	android_widget_SimpleCursorTreeAdapter(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1,int const& arg2,std::vector<AndroidCXX::java_lang_String > const& arg3,std::vector<int> const& arg4,int const& arg5,std::vector<AndroidCXX::java_lang_String > const& arg6,std::vector<int> const& arg7);
	android_widget_SimpleCursorTreeAdapter(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1,int const& arg2,int const& arg3,std::vector<AndroidCXX::java_lang_String > const& arg4,std::vector<int> const& arg5,int const& arg6,int const& arg7,std::vector<AndroidCXX::java_lang_String > const& arg8,std::vector<int> const& arg9);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SimpleCursorTreeAdapter();
	// Functions
	 AndroidCXX::android_widget_SimpleCursorTreeAdapter_ViewBinder getViewBinder();
	 void setViewBinder(AndroidCXX::android_widget_SimpleCursorTreeAdapter_ViewBinder const& arg0);
	 void setViewText(AndroidCXX::android_widget_TextView const& arg0,AndroidCXX::java_lang_String const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleCursorTreeAdapter