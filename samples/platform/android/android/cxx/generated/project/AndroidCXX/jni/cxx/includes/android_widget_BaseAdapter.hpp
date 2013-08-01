/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 
	



















// Generated Code 

#ifndef _android_widget_BaseAdapter
#define _android_widget_BaseAdapter
//
// Scroll Down 
//


#include <android_database_DataSetObserver.hpp>

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

class android_view_View;

class android_view_ViewGroup;

class android_widget_BaseAdapter
{
public:

	android_widget_BaseAdapter(const android_widget_BaseAdapter& cc);
	android_widget_BaseAdapter(Proxy proxy);
	// Public Constructors
	android_widget_BaseAdapter();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_BaseAdapter();
	// Functions
	 bool isEmpty();
	 bool isEnabled(int const& arg0);
	 void registerDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0);
	 void unregisterDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0);
	 AndroidCXX::android_view_View getDropDownView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2);
	 bool hasStableIds();
	 int getItemViewType(int const& arg0);
	 int getViewTypeCount();
	 bool areAllItemsEnabled();
	 void notifyDataSetChanged();
	 void notifyDataSetInvalidated();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_BaseAdapter