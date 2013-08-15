/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
	


 		 
 		 
 		 
 		 
 		 
 		 
 		 






















































// Generated Code 

#ifndef _android_widget_ListPopupWindow
#define _android_widget_ListPopupWindow
//
// Scroll Down 
//


#include <android_view_KeyEvent.hpp>

#include <android_graphics_drawable_Drawable.hpp>

#include <android_view_View.hpp>

#include <android_widget_ListAdapter.hpp>

#include <android_widget_AdapterView_OnItemClickListener.hpp>

#include <android_widget_AdapterView_OnItemSelectedListener.hpp>

#include <java_lang_Object.hpp>

#include <android_widget_PopupWindow_OnDismissListener.hpp>

#include <android_widget_ListView.hpp>

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

class android_view_KeyEvent;

class android_graphics_drawable_Drawable;

class android_view_View;

class android_widget_ListAdapter;

class android_widget_AdapterView_OnItemClickListener;

class android_widget_AdapterView_OnItemSelectedListener;

class java_lang_Object;

class android_widget_PopupWindow_OnDismissListener;

class android_widget_ListView;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_ListPopupWindow 
{
public:

	// Public ConstrucXXX
	android_widget_ListPopupWindow(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_ListPopupWindow(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2,int const& arg3);
	android_widget_ListPopupWindow(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_ListPopupWindow(AndroidCXX::android_content_Context const& arg0);
	android_widget_ListPopupWindow(const android_widget_ListPopupWindow& cc);
	android_widget_ListPopupWindow(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ListPopupWindow();
	// Functions
	virtual void  show() ;
	virtual bool  onKeyPreIme(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual int  getWidth() ;
	virtual int  getHeight() ;
	virtual void  setBackgroundDrawable(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual AndroidCXX::android_graphics_drawable_Drawable * getBackground() ;
	virtual void  setSelection(int const& arg0) ;
	virtual void  setAnchorView(AndroidCXX::android_view_View const& arg0) ;
	virtual bool  isShowing() ;
	virtual void  setHeight(int const& arg0) ;
	virtual void  setWidth(int const& arg0) ;
	virtual void  setSoftInputMode(int const& arg0) ;
	virtual void  setAdapter(AndroidCXX::android_widget_ListAdapter const& arg0) ;
	virtual AndroidCXX::android_view_View * getSelectedView() ;
	virtual void  setOnItemClickListener(AndroidCXX::android_widget_AdapterView_OnItemClickListener const& arg0) ;
	virtual bool  performItemClick(int const& arg0) ;
	virtual void  setOnItemSelectedListener(AndroidCXX::android_widget_AdapterView_OnItemSelectedListener const& arg0) ;
	virtual int  getSelectedItemPosition() ;
	virtual long  getSelectedItemId() ;
	virtual AndroidCXX::java_lang_Object * getSelectedItem() ;
	virtual void  dismiss() ;
	virtual int  getAnimationStyle() ;
	virtual void  setAnimationStyle(int const& arg0) ;
	virtual int  getInputMethodMode() ;
	virtual void  setInputMethodMode(int const& arg0) ;
	virtual int  getSoftInputMode() ;
	virtual void  setOnDismissListener(AndroidCXX::android_widget_PopupWindow_OnDismissListener const& arg0) ;
	virtual void  clearListSelection() ;
	virtual void  setPromptPosition(int const& arg0) ;
	virtual int  getPromptPosition() ;
	virtual void  setModal(bool const& arg0) ;
	virtual bool  isModal() ;
	virtual void  setListSelector(AndroidCXX::android_graphics_drawable_Drawable const& arg0) ;
	virtual AndroidCXX::android_view_View * getAnchorView() ;
	virtual int  getHorizontalOffset() ;
	virtual void  setHorizontalOffset(int const& arg0) ;
	virtual int  getVerticalOffset() ;
	virtual void  setVerticalOffset(int const& arg0) ;
	virtual void  setContentWidth(int const& arg0) ;
	virtual void  setPromptView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  postShow() ;
	virtual bool  isInputMethodNotNeeded() ;
	virtual AndroidCXX::android_widget_ListView * getListView() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ListPopupWindow