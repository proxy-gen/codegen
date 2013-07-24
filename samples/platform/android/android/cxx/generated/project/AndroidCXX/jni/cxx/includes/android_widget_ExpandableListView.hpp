/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

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

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

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

	android_widget_ExpandableListView(const android_widget_ExpandableListView& cc);
	android_widget_ExpandableListView(void * proxy);
	// Public Constructors
	android_widget_ExpandableListView(AndroidCXX::android_content_Context& arg0);
	android_widget_ExpandableListView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1,int& arg2);
	android_widget_ExpandableListView(AndroidCXX::android_content_Context& arg0,AndroidCXX::android_util_AttributeSet& arg1);
	// TODO: remove
	// 
	// android_widget_ExpandableListView();
	// 
	// Default Destructor
	virtual ~android_widget_ExpandableListView();
	// Functions
	 AndroidCXX::android_os_Parcelable onSaveInstanceState();
	 void onRestoreInstanceState(AndroidCXX::android_os_Parcelable& arg0);
	 void onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent& arg0);
	 void onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo& arg0);
	 void setAdapter(AndroidCXX::android_widget_ExpandableListAdapter& arg0);
	 void setAdapter(AndroidCXX::android_widget_ListAdapter& arg0);
	 bool performItemClick(AndroidCXX::android_view_View& arg0,int& arg1,long& arg2);
	 void setOnItemClickListener(AndroidCXX::android_widget_AdapterView_OnItemClickListener& arg0);
	 AndroidCXX::android_widget_ListAdapter getAdapter();
	 void setChildDivider(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 AndroidCXX::android_widget_ExpandableListAdapter getExpandableListAdapter();
	 bool expandGroup(int& arg0);
	 bool expandGroup(int& arg0,bool& arg1);
	 bool collapseGroup(int& arg0);
	 void setOnGroupCollapseListener(AndroidCXX::android_widget_ExpandableListView_OnGroupCollapseListener& arg0);
	 void setOnGroupExpandListener(AndroidCXX::android_widget_ExpandableListView_OnGroupExpandListener& arg0);
	 void setOnGroupClickListener(AndroidCXX::android_widget_ExpandableListView_OnGroupClickListener& arg0);
	 void setOnChildClickListener(AndroidCXX::android_widget_ExpandableListView_OnChildClickListener& arg0);
	 long getExpandableListPosition(int& arg0);
	 int getFlatListPosition(long& arg0);
	 long getSelectedPosition();
	 long getSelectedId();
	 void setSelectedGroup(int& arg0);
	 bool setSelectedChild(int& arg0,int& arg1,bool& arg2);
	 bool isGroupExpanded(int& arg0);
	static int getPackedPositionType(long& arg0);
	static int getPackedPositionGroup(long& arg0);
	static int getPackedPositionChild(long& arg0);
	static long getPackedPositionForChild(int& arg0,int& arg1);
	static long getPackedPositionForGroup(int& arg0);
	 void setChildIndicator(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 void setChildIndicatorBounds(int& arg0,int& arg1);
	 void setGroupIndicator(AndroidCXX::android_graphics_drawable_Drawable& arg0);
	 void setIndicatorBounds(int& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ExpandableListView