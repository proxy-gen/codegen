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

// Forward Declarations

class android_database_DataSetObserver;

class java_lang_Object;

class android_view_View;

class android_view_ViewGroup;

class android_widget_ExpandableListAdapter
{
public:

	android_widget_ExpandableListAdapter(const android_widget_ExpandableListAdapter& cc);
	android_widget_ExpandableListAdapter(void * proxy);
	// Public Constructors
	android_widget_ExpandableListAdapter();
	// Default Destructor
	virtual ~android_widget_ExpandableListAdapter();
	// Functions
	 bool isEmpty();
	 long getGroupId(int& arg0);
	 void registerDataSetObserver(AndroidCXX::android_database_DataSetObserver& arg0);
	 void unregisterDataSetObserver(AndroidCXX::android_database_DataSetObserver& arg0);
	 AndroidCXX::java_lang_Object getChild(int& arg0,int& arg1);
	 bool hasStableIds();
	 bool areAllItemsEnabled();
	 int getGroupCount();
	 int getChildrenCount(int& arg0);
	 AndroidCXX::java_lang_Object getGroup(int& arg0);
	 long getChildId(int& arg0,int& arg1);
	 AndroidCXX::android_view_View getGroupView(int& arg0,bool& arg1,AndroidCXX::android_view_View& arg2,AndroidCXX::android_view_ViewGroup& arg3);
	 AndroidCXX::android_view_View getChildView(int& arg0,int& arg1,bool& arg2,AndroidCXX::android_view_View& arg3,AndroidCXX::android_view_ViewGroup& arg4);
	 bool isChildSelectable(int& arg0,int& arg1);
	 void onGroupExpanded(int& arg0);
	 void onGroupCollapsed(int& arg0);
	 long getCombinedChildId(long& arg0,long& arg1);
	 long getCombinedGroupId(long& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ExpandableListAdapter