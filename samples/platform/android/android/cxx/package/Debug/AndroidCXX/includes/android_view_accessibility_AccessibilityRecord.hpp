/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
 		 
	
 		 
	
	
 	
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 






















































// Generated Code 

#ifndef _android_view_accessibility_AccessibilityRecord
#define _android_view_accessibility_AccessibilityRecord
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <java_util_List.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <android_view_View.hpp>

#include <android_os_Parcelable.hpp>


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

class java_lang_String;

class java_lang_CharSequence;


class java_util_List;

class android_view_accessibility_AccessibilityNodeInfo;

class android_view_View;

class android_os_Parcelable;

class android_view_accessibility_AccessibilityRecord 
{
public:

	// Public ConstrucXXX
	android_view_accessibility_AccessibilityRecord(const android_view_accessibility_AccessibilityRecord& cc);
	android_view_accessibility_AccessibilityRecord(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_accessibility_AccessibilityRecord();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual AndroidCXX::java_lang_CharSequence * getClassName() ;
	virtual bool  isEnabled() ;
	virtual AndroidCXX::java_lang_CharSequence * getContentDescription() ;
	virtual void  setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual void  setScrollX(int const& arg0) ;
	virtual void  setScrollY(int const& arg0) ;
	virtual int  getScrollX() ;
	virtual int  getScrollY() ;
	virtual int  getWindowId() ;
	static AndroidCXX::android_view_accessibility_AccessibilityRecord * obtain() ;
	static AndroidCXX::android_view_accessibility_AccessibilityRecord * obtain(AndroidCXX::android_view_accessibility_AccessibilityRecord const& arg0) ;
	virtual void  recycle() ;
	virtual int  getItemCount() ;
	virtual AndroidCXX::java_util_List * getText() ;
	virtual void  setClassName(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * getSource() ;
	virtual void  setSource(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  setSource(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setChecked(bool const& arg0) ;
	virtual bool  isChecked() ;
	virtual bool  isPassword() ;
	virtual void  setPassword(bool const& arg0) ;
	virtual bool  isFullScreen() ;
	virtual void  setFullScreen(bool const& arg0) ;
	virtual bool  isScrollable() ;
	virtual void  setScrollable(bool const& arg0) ;
	virtual void  setItemCount(int const& arg0) ;
	virtual int  getCurrentItemIndex() ;
	virtual void  setCurrentItemIndex(int const& arg0) ;
	virtual int  getFromIndex() ;
	virtual void  setFromIndex(int const& arg0) ;
	virtual int  getToIndex() ;
	virtual void  setToIndex(int const& arg0) ;
	virtual int  getMaxScrollX() ;
	virtual void  setMaxScrollX(int const& arg0) ;
	virtual int  getMaxScrollY() ;
	virtual void  setMaxScrollY(int const& arg0) ;
	virtual int  getAddedCount() ;
	virtual void  setAddedCount(int const& arg0) ;
	virtual int  getRemovedCount() ;
	virtual void  setRemovedCount(int const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * getBeforeText() ;
	virtual void  setBeforeText(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::android_os_Parcelable * getParcelableData() ;
	virtual void  setParcelableData(AndroidCXX::android_os_Parcelable const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityRecord