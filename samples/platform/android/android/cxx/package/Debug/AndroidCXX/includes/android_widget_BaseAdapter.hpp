/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <android_widget_ListAdapter.hpp>

#include <android_widget_SpinnerAdapter.hpp>

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

class android_database_DataSetObserver;

class android_widget_BaseAdapter : public AndroidCXX::android_widget_ListAdapter,public AndroidCXX::android_widget_SpinnerAdapter
{
public:

	android_widget_BaseAdapter(const android_widget_BaseAdapter& cc);
	android_widget_BaseAdapter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_BaseAdapter();
	// Functions
	virtual bool  areAllItemsEnabled() ;
	virtual AndroidCXX::android_view_View * getDropDownView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2) ;
	virtual int  getItemViewType(int const& arg0) ;
	virtual int  getViewTypeCount() ;
	virtual bool  hasStableIds() ;
	virtual bool  isEmpty() ;
	virtual bool  isEnabled(int const& arg0) ;
	virtual void  notifyDataSetChanged() ;
	virtual void  notifyDataSetInvalidated() ;
	virtual void  registerDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0) ;
	virtual void  unregisterDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0) ;

protected:
	android_widget_BaseAdapter();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_BaseAdapter