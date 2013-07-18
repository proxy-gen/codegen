/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			


#ifndef _android_widget_BaseExpandableListAdapter
#define _android_widget_BaseExpandableListAdapter
















#include <android_database_DataSetObserver.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_BaseExpandableListAdapter
{
public:
 bool isEmpty();
 void registerDataSetObserver(android_database_DataSetObserver& arg0);
 void unregisterDataSetObserver(android_database_DataSetObserver& arg0);
 bool areAllItemsEnabled();
 void onGroupExpanded(int& arg0);
 void onGroupCollapsed(int& arg0);
 long getCombinedChildId(long& arg0);
 long getCombinedGroupId(long& arg0);
 int getGroupType(int& arg0);
 int getChildType(int& arg0);
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