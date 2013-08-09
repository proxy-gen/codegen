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
	android_widget_CursorTreeAdapter(Proxy proxy);
	// Public Constructors
	android_widget_CursorTreeAdapter(AndroidCXX::android_database_Cursor const& arg0,AndroidCXX::android_content_Context const& arg1);
	android_widget_CursorTreeAdapter(AndroidCXX::android_database_Cursor const& arg0,AndroidCXX::android_content_Context const& arg1,bool const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_CursorTreeAdapter();
	// Functions
	 AndroidCXX::android_widget_Filter getFilter();
	 long getGroupId(int const& arg0);
	 AndroidCXX::android_database_Cursor getChild(int const& arg0,int const& arg1);
	 bool hasStableIds();
	 int getGroupCount();
	 int getChildrenCount(int const& arg0);
	 AndroidCXX::android_database_Cursor getGroup(int const& arg0);
	 long getChildId(int const& arg0,int const& arg1);
	 AndroidCXX::android_view_View getGroupView(int const& arg0,bool const& arg1,AndroidCXX::android_view_View const& arg2,AndroidCXX::android_view_ViewGroup const& arg3);
	 AndroidCXX::android_view_View getChildView(int const& arg0,int const& arg1,bool const& arg2,AndroidCXX::android_view_View const& arg3,AndroidCXX::android_view_ViewGroup const& arg4);
	 bool isChildSelectable(int const& arg0,int const& arg1);
	 void onGroupCollapsed(int const& arg0);
	 AndroidCXX::java_lang_String convertToString(AndroidCXX::android_database_Cursor const& arg0);
	 void notifyDataSetChanged();
	 void notifyDataSetChanged(bool const& arg0);
	 void notifyDataSetInvalidated();
	 AndroidCXX::android_database_Cursor getCursor();
	 void changeCursor(AndroidCXX::android_database_Cursor const& arg0);
	 AndroidCXX::android_database_Cursor runQueryOnBackgroundThread(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::android_widget_FilterQueryProvider getFilterQueryProvider();
	 void setFilterQueryProvider(AndroidCXX::android_widget_FilterQueryProvider const& arg0);
	 void setGroupCursor(AndroidCXX::android_database_Cursor const& arg0);
	 void setChildrenCursor(int const& arg0,AndroidCXX::android_database_Cursor const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CursorTreeAdapter