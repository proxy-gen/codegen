/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <android_widget_ExpandableListAdapter.hpp>

#include <android_widget_HeterogeneousExpandableList.hpp>

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

class android_widget_BaseExpandableListAdapter : public AndroidCXX::android_widget_ExpandableListAdapter,public AndroidCXX::android_widget_HeterogeneousExpandableList
{
public:

	android_widget_BaseExpandableListAdapter(const android_widget_BaseExpandableListAdapter& cc);
	android_widget_BaseExpandableListAdapter(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_BaseExpandableListAdapter();
	// Functions
	virtual bool  areAllItemsEnabled() ;
	virtual int  getChildTypeCount() ;
	virtual int  getChildType(int const& arg0,int const& arg1) ;
	virtual long  getCombinedChildId(long const& arg0,long const& arg1) ;
	virtual long  getCombinedGroupId(long const& arg0) ;
	virtual int  getGroupTypeCount() ;
	virtual int  getGroupType(int const& arg0) ;
	virtual bool  isEmpty() ;
	virtual void  notifyDataSetChanged() ;
	virtual void  notifyDataSetInvalidated() ;
	virtual void  onGroupCollapsed(int const& arg0) ;
	virtual void  onGroupExpanded(int const& arg0) ;
	virtual void  registerDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0) ;
	virtual void  unregisterDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0) ;

protected:
	android_widget_BaseExpandableListAdapter();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_BaseExpandableListAdapter