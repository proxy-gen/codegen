/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	
 		 
 		 
	
 		 
 		 
	
 		 
	
	
 		 
 		 
	
	
 		 
 		 
 		 


 		 
 		 
 		 
 		 






























// Generated Code 

#ifndef _android_widget_CursorTreeAdapter
#define _android_widget_CursorTreeAdapter
//
// Scroll Down 
//


#include <android_widget_Filter.hpp>

#include <android_database_Cursor.hpp>

#include <android_view_View.hpp>

#include <android_view_ViewGroup.hpp>

#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_widget_FilterQueryProvider.hpp>

#include <android_content_Context.hpp>

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

class android_widget_Filter;

class android_database_Cursor;

class android_view_View;

class android_view_ViewGroup;

class java_lang_String;

class java_lang_CharSequence;

class android_widget_FilterQueryProvider;

class android_content_Context;

class android_widget_CursorTreeAdapter
{
public:

	android_widget_CursorTreeAdapter(const android_widget_CursorTreeAdapter& cc);
	android_widget_CursorTreeAdapter(void * proxy);
	// Public Constructors
	android_widget_CursorTreeAdapter(AndroidCXX::android_database_Cursor& arg0,AndroidCXX::android_content_Context& arg1);
	android_widget_CursorTreeAdapter(AndroidCXX::android_database_Cursor& arg0,AndroidCXX::android_content_Context& arg1,bool& arg2);
	android_widget_CursorTreeAdapter();
	// Default Destructor
	virtual ~android_widget_CursorTreeAdapter();
	// Functions
	 AndroidCXX::android_widget_Filter getFilter();
	 long getGroupId(int& arg0);
	 AndroidCXX::android_database_Cursor getChild(int& arg0,int& arg1);
	 bool hasStableIds();
	 int getGroupCount();
	 int getChildrenCount(int& arg0);
	 AndroidCXX::android_database_Cursor getGroup(int& arg0);
	 long getChildId(int& arg0,int& arg1);
	 AndroidCXX::android_view_View getGroupView(int& arg0,bool& arg1,AndroidCXX::android_view_View& arg2,AndroidCXX::android_view_ViewGroup& arg3);
	 AndroidCXX::android_view_View getChildView(int& arg0,int& arg1,bool& arg2,AndroidCXX::android_view_View& arg3,AndroidCXX::android_view_ViewGroup& arg4);
	 bool isChildSelectable(int& arg0,int& arg1);
	 void onGroupCollapsed(int& arg0);
	 AndroidCXX::java_lang_String convertToString(AndroidCXX::android_database_Cursor& arg0);
	 void notifyDataSetChanged();
	 void notifyDataSetChanged(bool& arg0);
	 void notifyDataSetInvalidated();
	 AndroidCXX::android_database_Cursor getCursor();
	 void changeCursor(AndroidCXX::android_database_Cursor& arg0);
	 AndroidCXX::android_database_Cursor runQueryOnBackgroundThread(AndroidCXX::java_lang_CharSequence& arg0);
	 AndroidCXX::android_widget_FilterQueryProvider getFilterQueryProvider();
	 void setFilterQueryProvider(AndroidCXX::android_widget_FilterQueryProvider& arg0);
	 void setGroupCursor(AndroidCXX::android_database_Cursor& arg0);
	 void setChildrenCursor(int& arg0,AndroidCXX::android_database_Cursor& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CursorTreeAdapter