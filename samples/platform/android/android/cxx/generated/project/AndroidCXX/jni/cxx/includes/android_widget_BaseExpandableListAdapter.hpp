/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 






















// Generated Code 

#ifndef _android_widget_BaseExpandableListAdapter
#define _android_widget_BaseExpandableListAdapter
//
// Scroll Down 
//


#include <android_database_DataSetObserver.hpp>

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

class android_widget_BaseExpandableListAdapter
{
public:

	android_widget_BaseExpandableListAdapter(const android_widget_BaseExpandableListAdapter& cc);
	android_widget_BaseExpandableListAdapter(void * proxy);
	// Public Constructors
	android_widget_BaseExpandableListAdapter();
	// TODO: remove
	// 
	// Default Destructor
	virtual ~android_widget_BaseExpandableListAdapter();
	// Functions
	 bool isEmpty();
	 void registerDataSetObserver(AndroidCXX::android_database_DataSetObserver& arg0);
	 void unregisterDataSetObserver(AndroidCXX::android_database_DataSetObserver& arg0);
	 bool areAllItemsEnabled();
	 void onGroupExpanded(int& arg0);
	 void onGroupCollapsed(int& arg0);
	 long getCombinedChildId(long& arg0,long& arg1);
	 long getCombinedGroupId(long& arg0);
	 int getGroupType(int& arg0);
	 int getChildType(int& arg0,int& arg1);
	 int getGroupTypeCount();
	 int getChildTypeCount();
	 void notifyDataSetChanged();
	 void notifyDataSetInvalidated();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_BaseExpandableListAdapter