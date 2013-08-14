/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_lang_Object.hpp>

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

class android_widget_ExpandableListAdapter : public java_lang_Object
{
public:

	android_widget_ExpandableListAdapter(const android_widget_ExpandableListAdapter& cc);
	android_widget_ExpandableListAdapter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ExpandableListAdapter();
	// Functions
	virtual bool  isEmpty() ;
	virtual void  registerDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0) ;
	virtual void  unregisterDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0) ;
	virtual bool  hasStableIds() ;
	virtual int  getGroupCount() ;
	virtual int  getChildrenCount(int const& arg0) ;
	virtual AndroidCXX::java_lang_Object * getGroup(int const& arg0) ;
	virtual AndroidCXX::java_lang_Object * getChild(int const& arg0,int const& arg1) ;
	virtual long  getGroupId(int const& arg0) ;
	virtual long  getChildId(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_view_View * getGroupView(int const& arg0,bool const& arg1,AndroidCXX::android_view_View const& arg2,AndroidCXX::android_view_ViewGroup const& arg3) ;
	virtual AndroidCXX::android_view_View * getChildView(int const& arg0,int const& arg1,bool const& arg2,AndroidCXX::android_view_View const& arg3,AndroidCXX::android_view_ViewGroup const& arg4) ;
	virtual bool  isChildSelectable(int const& arg0,int const& arg1) ;
	virtual bool  areAllItemsEnabled() ;
	virtual void  onGroupExpanded(int const& arg0) ;
	virtual void  onGroupCollapsed(int const& arg0) ;
	virtual long  getCombinedChildId(long const& arg0,long const& arg1) ;
	virtual long  getCombinedGroupId(long const& arg0) ;

protected:
	android_widget_ExpandableListAdapter();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ExpandableListAdapter