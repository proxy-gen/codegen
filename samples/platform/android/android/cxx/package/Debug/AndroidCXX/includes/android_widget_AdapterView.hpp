/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 		 
	
 		 
 		 
	
 		 
	
	
 		 
 		 
	
	


 		 
 		 
 		 
 		 
 		 












































// Generated Code 

#ifndef _android_widget_AdapterView
#define _android_widget_AdapterView
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

class android_view_accessibility_AccessibilityEvent;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_view_View_OnClickListener;

class android_widget_Adapter;

class android_widget_AdapterView_OnItemClickListener;

class android_widget_AdapterView_OnItemLongClickListener;

class android_widget_AdapterView_OnItemSelectedListener;


class android_content_Context;

class android_util_AttributeSet;

class android_widget_AdapterView : public java_lang_Object
{
public:

	android_widget_AdapterView(const android_widget_AdapterView& cc);
	android_widget_AdapterView(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AdapterView();
	// Functions
	virtual void  onInitializeAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  onInitializeAccessibilityNodeInfo(AndroidCXX::android_view_accessibility_AccessibilityNodeInfo const& arg0) ;
	virtual bool  onRequestSendAccessibilityEvent(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg1) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  addView(AndroidCXX::android_view_View const& arg0,int const& arg1,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg2) ;
	virtual void  removeView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  removeViewAt(int const& arg0) ;
	virtual void  removeAllViews() ;
	virtual void  setOnClickListener(AndroidCXX::android_view_View_OnClickListener const& arg0) ;
	virtual bool  dispatchPopulateAccessibilityEvent(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  setFocusable(bool const& arg0) ;
	virtual void  setFocusableInTouchMode(bool const& arg0) ;
	virtual int  getCount() ;
	virtual void  setSelection(int const& arg0) ;
	virtual AndroidCXX::android_widget_Adapter * getAdapter() ;
	virtual void  setAdapter(AndroidCXX::android_widget_Adapter const& arg0) ;
	virtual AndroidCXX::android_view_View * getSelectedView() ;
	virtual void  setOnItemClickListener(AndroidCXX::android_widget_AdapterView_OnItemClickListener const& arg0) ;
	virtual AndroidCXX::android_widget_AdapterView_OnItemClickListener * getOnItemClickListener() ;
	virtual bool  performItemClick(AndroidCXX::android_view_View const& arg0,int const& arg1,long const& arg2) ;
	virtual void  setOnItemLongClickListener(AndroidCXX::android_widget_AdapterView_OnItemLongClickListener const& arg0) ;
	virtual AndroidCXX::android_widget_AdapterView_OnItemLongClickListener * getOnItemLongClickListener() ;
	virtual void  setOnItemSelectedListener(AndroidCXX::android_widget_AdapterView_OnItemSelectedListener const& arg0) ;
	virtual AndroidCXX::android_widget_AdapterView_OnItemSelectedListener * getOnItemSelectedListener() ;
	virtual int  getSelectedItemPosition() ;
	virtual long  getSelectedItemId() ;
	virtual AndroidCXX::java_lang_Object * getSelectedItem() ;
	virtual int  getPositionForView(AndroidCXX::android_view_View const& arg0) ;
	virtual int  getFirstVisiblePosition() ;
	virtual int  getLastVisiblePosition() ;
	virtual void  setEmptyView(AndroidCXX::android_view_View const& arg0) ;
	virtual AndroidCXX::android_view_View * getEmptyView() ;
	virtual AndroidCXX::java_lang_Object * getItemAtPosition(int const& arg0) ;
	virtual long  getItemIdAtPosition(int const& arg0) ;

protected:
	android_widget_AdapterView();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AdapterView