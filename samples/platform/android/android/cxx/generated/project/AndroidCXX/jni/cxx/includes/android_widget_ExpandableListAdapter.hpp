/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
	
	
 		 
 		 
	
 		 
 		 
	

// Generated Code 

#ifndef _android_widget_ExpandableListAdapter
#define _android_widget_ExpandableListAdapter
//
// Scroll Down 
//





















#include <android_database_DataSetObserver.hpp>

#include <java_lang_Object.hpp>

#include <android_view_View.hpp>

#include <android_view_ViewGroup.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_database_DataSetObserver;

class java_lang_Object;

class android_view_View;

class android_view_ViewGroup;

class android_widget_ExpandableListAdapter
{
public:
	 bool isEmpty();
	 long getGroupId(int& arg0);
	 void registerDataSetObserver(android_database_DataSetObserver& arg0);
	 void unregisterDataSetObserver(android_database_DataSetObserver& arg0);
	 java_lang_Object *  getChild(int& arg0);
	 bool hasStableIds();
	 bool areAllItemsEnabled();
	 int getGroupCount();
	 int getChildrenCount(int& arg0);
	 java_lang_Object *  getGroup(int& arg0);
	 long getChildId(int& arg0);
	 android_view_View *  getGroupView(int& arg0,bool& arg1,android_view_View& arg2,android_view_ViewGroup& arg3);
	 android_view_View *  getChildView(int& arg0,bool& arg1,android_view_View& arg2,android_view_ViewGroup& arg3);
	 bool isChildSelectable(int& arg0);
	 void onGroupExpanded(int& arg0);
	 void onGroupCollapsed(int& arg0);
	 long getCombinedChildId(long& arg0);
	 long getCombinedGroupId(long& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ExpandableListAdapter