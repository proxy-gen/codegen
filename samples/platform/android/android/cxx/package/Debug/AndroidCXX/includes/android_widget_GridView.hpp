/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 

































// Generated Code 

#ifndef _android_widget_GridView
#define _android_widget_GridView
//
// Scroll Down 
//


#include <android_widget_ListAdapter.hpp>

#include <android_view_accessibility_AccessibilityEvent.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_content_Intent.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


#include <android_widget_AbsListView.hpp>

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

class android_widget_ListAdapter;

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_KeyEvent;

class android_content_Intent;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_GridView : public AndroidCXX::android_widget_AbsListView
{
public:

	// Public Constructor
	android_widget_GridView(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	android_widget_GridView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,Proxy * aProxy = new Proxy());
	android_widget_GridView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	android_widget_GridView(const android_widget_GridView& cc);
	android_widget_GridView(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_GridView();
	// Functions
	virtual AndroidCXX::android_widget_ListAdapter * getAdapter() ;
	virtual int  getColumnWidth() ;
	virtual int  getGravity() ;
	virtual int  getHorizontalSpacing() ;
	virtual int  getNumColumns() ;
	virtual int  getRequestedColumnWidth() ;
	virtual int  getRequestedHorizontalSpacing() ;
	virtual int  getStretchMode() ;
	virtual int  getVerticalSpacing() ;
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyMultiple(int const& arg0,int const& arg1,AndroidCXX::android_view_KeyEvent const& arg2) ;
	virtual bool  onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual void  setAdapter(AndroidCXX::android_widget_ListAdapter const& arg0) ;
	virtual void  setColumnWidth(int const& arg0) ;
	virtual void  setGravity(int const& arg0) ;
	virtual void  setHorizontalSpacing(int const& arg0) ;
	virtual void  setNumColumns(int const& arg0) ;
	virtual void  setRemoteViewsAdapter(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  setSelection(int const& arg0) ;
	virtual void  setStretchMode(int const& arg0) ;
	virtual void  setVerticalSpacing(int const& arg0) ;
	virtual void  smoothScrollByOffset(int const& arg0) ;
	virtual void  smoothScrollToPosition(int const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_GridView