/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 		 
 		 
	
	
 		 
 		 
 		 
 		 


 		 
 	
 		 
 	
 		 
 		 
 		 
























// Generated Code 

#ifndef _android_widget_HeaderViewListAdapter
#define _android_widget_HeaderViewListAdapter
//
// Scroll Down 
//


#include <android_widget_Filter.hpp>

#include <java_lang_Object.hpp>

#include <android_view_View.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_widget_ListAdapter.hpp>

#include <android_database_DataSetObserver.hpp>

#include <java_util_ArrayList.hpp>

#include <android_widget_ListView_FixedViewInfo.hpp>


#include <android_widget_Filterable.hpp>

#include <android_widget_WrapperListAdapter.hpp>

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

class java_lang_Object;

class android_view_View;

class android_view_ViewGroup;

class android_widget_ListAdapter;

class android_database_DataSetObserver;

class java_util_ArrayList;

class android_widget_ListView_FixedViewInfo;

class android_widget_HeaderViewListAdapter : public android_widget_Filterable,public android_widget_WrapperListAdapter
{
public:

	// Public ConstrucXXX
	android_widget_HeaderViewListAdapter(AndroidCXX::java_util_ArrayList const& arg0,AndroidCXX::java_util_ArrayList const& arg1,AndroidCXX::android_widget_ListAdapter const& arg2);
	android_widget_HeaderViewListAdapter(const android_widget_HeaderViewListAdapter& cc);
	android_widget_HeaderViewListAdapter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_HeaderViewListAdapter();
	// Functions
	virtual bool  areAllItemsEnabled() ;
	virtual int  getCount() ;
	virtual AndroidCXX::android_widget_Filter * getFilter() ;
	virtual int  getFootersCount() ;
	virtual int  getHeadersCount() ;
	virtual AndroidCXX::java_lang_Object * getItem(int const& arg0) ;
	virtual long  getItemId(int const& arg0) ;
	virtual int  getItemViewType(int const& arg0) ;
	virtual AndroidCXX::android_view_View * getView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2) ;
	virtual int  getViewTypeCount() ;
	virtual AndroidCXX::android_widget_ListAdapter * getWrappedAdapter() ;
	virtual bool  hasStableIds() ;
	virtual bool  isEmpty() ;
	virtual bool  isEnabled(int const& arg0) ;
	virtual void  registerDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0) ;
	virtual bool  removeFooter(AndroidCXX::android_view_View const& arg0) ;
	virtual bool  removeHeader(AndroidCXX::android_view_View const& arg0) ;
	virtual void  unregisterDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_HeaderViewListAdapter