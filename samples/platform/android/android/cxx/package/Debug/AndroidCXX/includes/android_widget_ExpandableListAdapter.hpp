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

// Forward Declarations

class android_database_DataSetObserver;

class java_lang_Object;

class android_view_View;

class android_view_ViewGroup;

class android_widget_ExpandableListAdapter
{
public:

	android_widget_ExpandableListAdapter(const android_widget_ExpandableListAdapter& cc);
	android_widget_ExpandableListAdapter(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ExpandableListAdapter();
	// Functions
	 bool isEmpty();
	 long getGroupId(int const& arg0);
	 void registerDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0);
	 void unregisterDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0);
	 AndroidCXX::java_lang_Object getChild(int const& arg0,int const& arg1);
	 bool hasStableIds();
	 bool areAllItemsEnabled();
	 int getGroupCount();
	 int getChildrenCount(int const& arg0);
	 AndroidCXX::java_lang_Object getGroup(int const& arg0);
	 long getChildId(int const& arg0,int const& arg1);
	 AndroidCXX::android_view_View getGroupView(int const& arg0,bool const& arg1,AndroidCXX::android_view_View const& arg2,AndroidCXX::android_view_ViewGroup const& arg3);
	 AndroidCXX::android_view_View getChildView(int const& arg0,int const& arg1,bool const& arg2,AndroidCXX::android_view_View const& arg3,AndroidCXX::android_view_ViewGroup const& arg4);
	 bool isChildSelectable(int const& arg0,int const& arg1);
	 void onGroupExpanded(int const& arg0);
	 void onGroupCollapsed(int const& arg0);
	 long getCombinedChildId(long const& arg0,long const& arg1);
	 long getCombinedGroupId(long const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ExpandableListAdapter