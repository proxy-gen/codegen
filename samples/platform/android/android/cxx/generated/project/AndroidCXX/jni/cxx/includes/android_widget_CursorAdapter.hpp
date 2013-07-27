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
	android_widget_CursorAdapter(Proxy proxy);
	// Public Constructors
	android_widget_CursorAdapter(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1,bool const& arg2);
	android_widget_CursorAdapter(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1,int const& arg2);
	android_widget_CursorAdapter(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_CursorAdapter();
	// Functions
	 AndroidCXX::android_view_View getView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2);
	 AndroidCXX::android_widget_Filter getFilter();
	 AndroidCXX::java_lang_Object getItem(int const& arg0);
	 long getItemId(int const& arg0);
	 int getCount();
	 AndroidCXX::android_view_View getDropDownView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2);
	 bool hasStableIds();
	 AndroidCXX::java_lang_CharSequence convertToString(AndroidCXX::android_database_Cursor const& arg0);
	 AndroidCXX::android_database_Cursor getCursor();
	 AndroidCXX::android_view_View newView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1,AndroidCXX::android_view_ViewGroup const& arg2);
	 AndroidCXX::android_view_View newDropDownView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1,AndroidCXX::android_view_ViewGroup const& arg2);
	 void bindView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_content_Context const& arg1,AndroidCXX::android_database_Cursor const& arg2);
	 void changeCursor(AndroidCXX::android_database_Cursor const& arg0);
	 AndroidCXX::android_database_Cursor swapCursor(AndroidCXX::android_database_Cursor const& arg0);
	 AndroidCXX::android_database_Cursor runQueryOnBackgroundThread(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::android_widget_FilterQueryProvider getFilterQueryProvider();
	 void setFilterQueryProvider(AndroidCXX::android_widget_FilterQueryProvider const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CursorAdapter