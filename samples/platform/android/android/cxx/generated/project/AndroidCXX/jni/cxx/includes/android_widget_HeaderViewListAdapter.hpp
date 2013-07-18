/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
		
		
		
 			
 			
		
 			
 			


#ifndef _android_widget_HeaderViewListAdapter
#define _android_widget_HeaderViewListAdapter




















#include <android_widget_ListAdapter.hpp>
#include <java_lang_Object.hpp>
#include <android_widget_Filter.hpp>
#include <android_view_ViewGroup.hpp>
#include <android_view_View.hpp>
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

class android_widget_HeaderViewListAdapter
{
public:
 bool isEmpty();
 android_view_View getView(int& arg0,android_view_View& arg1,android_view_ViewGroup& arg2);
 bool isEnabled(int& arg0);
 android_widget_Filter getFilter();
 java_lang_Object getItem(int& arg0);
 long getItemId(int& arg0);
 int getCount();
 void registerDataSetObserver(android_database_DataSetObserver& arg0);
 void unregisterDataSetObserver(android_database_DataSetObserver& arg0);
 bool hasStableIds();
 int getItemViewType(int& arg0);
 int getViewTypeCount();
 bool areAllItemsEnabled();
 android_widget_ListAdapter getWrappedAdapter();
 int getHeadersCount();
 int getFootersCount();
 bool removeHeader(android_view_View& arg0);
 bool removeFooter(android_view_View& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_HeaderViewListAdapter