/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
	
	
	
 		 
 		 
	
 		 
	
	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
	
 		 
	
	
 		 


 		 
 		 
 		 
 		 
 		 
 		 

























// Generated Code 

#ifndef _android_widget_CursorAdapter
#define _android_widget_CursorAdapter
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_widget_Filter.hpp>

#include <java_lang_Object.hpp>

#include <android_database_Cursor.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_content_Context.hpp>

#include <android_widget_FilterQueryProvider.hpp>

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

class android_view_ViewGroup;

class android_widget_Filter;

class java_lang_Object;

class android_database_Cursor;

class java_lang_CharSequence;

class android_content_Context;

class android_widget_FilterQueryProvider;

class android_widget_CursorAdapter
{
public:

	android_widget_CursorAdapter(const android_widget_CursorAdapter& cc);
	android_widget_CursorAdapter(void * proxy);
	// Public Constructors
	android_widget_CursorAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,bool& arg2);
	android_widget_CursorAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,int& arg2);
	android_widget_CursorAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1);
	// TODO: remove
	// 
	// android_widget_CursorAdapter();
	// 
	// Default Destructor
	virtual ~android_widget_CursorAdapter();
	// Functions
	 AndroidCXX::android_view_View getView(int& arg0,AndroidCXX::android_view_View& arg1,AndroidCXX::android_view_ViewGroup& arg2);
	 AndroidCXX::android_widget_Filter getFilter();
	 AndroidCXX::java_lang_Object getItem(int& arg0);
	 long getItemId(int& arg0);
	 int getCount();
	 AndroidCXX::android_view_View getDropDownView(int& arg0,AndroidCXX::android_view_View& arg1,AndroidCXX::android_view_ViewGroup& arg2);
	 bool hasStableIds();
	 AndroidCXX::java_lang_CharSequence convertToString(AndroidCXX::android_database_Cursor& arg0);
	 AndroidCXX::android_database_Cursor getCursor();
	 AndroidCXX::android_view_View newView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,AndroidCXX::android_view_ViewGroup& arg2);
	 AndroidCXX::android_view_View newDropDownView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_database_Cursor& arg1,AndroidCXX::android_view_ViewGroup& arg2);
	 void bindView(AndroidCXX::android_view_View& arg0,AndroidCXX::android_content_Context& arg1,AndroidCXX::android_database_Cursor& arg2);
	 void changeCursor(AndroidCXX::android_database_Cursor& arg0);
	 AndroidCXX::android_database_Cursor swapCursor(AndroidCXX::android_database_Cursor& arg0);
	 AndroidCXX::android_database_Cursor runQueryOnBackgroundThread(AndroidCXX::java_lang_CharSequence& arg0);
	 AndroidCXX::android_widget_FilterQueryProvider getFilterQueryProvider();
	 void setFilterQueryProvider(AndroidCXX::android_widget_FilterQueryProvider& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CursorAdapter