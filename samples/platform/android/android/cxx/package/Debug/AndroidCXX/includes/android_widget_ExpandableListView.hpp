/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 













































// Generated Code 

#ifndef _android_widget_ExpandableListView
#define _android_widget_ExpandableListView
//
// Scroll Down 
//


#include <android_os_Parcelable.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_widget_ExpandableListAdapter.hpp>

#include <android_widget_ListAdapter.hpp>

#include <android_view_View.hpp>

#include <android_widget_AdapterView_OnItemClickListener.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_widget_ExpandableListView_OnGroupCollapseListener.hpp>

#include <android_widget_ExpandableListView_OnGroupExpandListener.hpp>

#include <android_widget_ExpandableListView_OnGroupClickListener.hpp>

#include <android_widget_ExpandableListView_OnChildClickListener.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


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

class android_os_Parcelable;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_accessibility_AccessibilityEvent;

class android_widget_ExpandableListAdapter;

class android_widget_ListAdapter;

class android_view_View;

class android_widget_AdapterView_OnItemClickListener;

class android_graphics_drawable_Drawable;

class android_widget_ExpandableListView_OnGroupCollapseListener;

class android_widget_ExpandableListView_OnGroupExpandListener;

class android_widget_ExpandableListView_OnGroupClickListener;

class android_widget_ExpandableListView_OnChildClickListener;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ExpandableListView 
{
public:

	// Public ConstrucXXX
	android_widget_ExpandableListView(AndroidCXX::android_content_Context const& arg0);
	android_widget_ExpandableListView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_ExpandableListView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_ExpandableListView(const android_widget_ExpandableListView& cc);
	android_widget_ExpandableListView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ExpandableListView();
	// Functions
	virtual AndroidCXX::android_os_Parcelable * onSaveInstanceState() ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onRtlPropertiesChanged(int const& arg0) ;
	virtual void  onRestoreInstanceState(AndroidCXX::android_os_Parcelable const& arg0) ;
	virtual void  setAdapter(AndroidCXX::android_widget_ExpandableListAdapter const& arg0) ;
	virtual void  setAdapter(AndroidCXX::android_widget_ListAdapter const& arg0) ;
	virtual bool  performItemClick(AndroidCXX::android_view_View const& arg0,int const& arg1,long const& arg2) ;
	virtual void  setOnItemClickListener(AndroidCXX::android_widget_AdapterView_OnItemClickListener const& arg0) ;
	virtual AndroidCXX::android_widget_ListAdapter * getAdapter() ;
	virtual void  setChildDivider(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual AndroidCXX::android_widget_ExpandableListAdapter * getExpandableListAdapter() ;
	virtual bool  expandGroup(int const& arg0) ;
	virtual bool  expandGroup(int const& arg0,bool const& arg1) ;
	virtual bool  collapseGroup(int const& arg0) ;
	virtual void  setOnGroupCollapseListener(AndroidCXX::android_widget_ExpandableListView_OnGroupCollapseListener const& arg0) ;
	virtual void  setOnGroupExpandListener(AndroidCXX::android_widget_ExpandableListView_OnGroupExpandListener const& arg0) ;
	virtual void  setOnGroupClickListener(AndroidCXX::android_widget_ExpandableListView_OnGroupClickListener const& arg0) ;
	virtual void  setOnChildClickListener(AndroidCXX::android_widget_ExpandableListView_OnChildClickListener const& arg0) ;
	virtual long  getExpandableListPosition(int const& arg0) ;
	virtual int  getFlatListPosition(long const& arg0) ;
	virtual long  getSelectedPosition() ;
	virtual long  getSelectedId() ;
	virtual void  setSelectedGroup(int const& arg0) ;
	virtual bool  setSelectedChild(int const& arg0,int const& arg1,bool const& arg2) ;
	virtual bool  isGroupExpanded(int const& arg0) ;
	static int  getPackedPositionType(long const& arg0) ;
	static int  getPackedPositionGroup(long const& arg0) ;
	static int  getPackedPositionChild(long const& arg0) ;
	static long  getPackedPositionForChild(int const& arg0,int const& arg1) ;
	static long  getPackedPositionForGroup(int const& arg0) ;
	virtual void  setChildIndicator(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setChildIndicatorBounds(int const& arg0,int const& arg1) ;
	virtual void  setChildIndicatorBoundsRelative(int const& arg0,int const& arg1) ;
	virtual void  setGroupIndicator(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual void  setIndicatorBounds(int const& arg0,int const& arg1) ;
	virtual void  setIndicatorBoundsRelative(int const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ExpandableListView