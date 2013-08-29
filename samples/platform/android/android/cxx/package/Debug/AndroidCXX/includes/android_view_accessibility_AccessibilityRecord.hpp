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


#include <java_lang_CharSequence.hpp>

#include <android_os_Parcelable.hpp>

#include <android_view_accessibility_AccessibilityNodeInfo.hpp>

#include <java_util_List.hpp>

#include <android_view_View.hpp>

#include <java_lang_String.hpp>


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

class java_lang_CharSequence;

class android_os_Parcelable;

class android_view_accessibility_AccessibilityNodeInfo;

class java_util_List;


class android_view_View;

class java_lang_String;

class android_view_accessibility_AccessibilityRecord 
{
public:

	// Public Constructor
	android_view_accessibility_AccessibilityRecord(const android_view_accessibility_AccessibilityRecord& cc);
	android_view_accessibility_AccessibilityRecord(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_accessibility_AccessibilityRecord();
	// Functions
	virtual int  getAddedCount() ;
	virtual AndroidCXX::java_lang_CharSequence * getBeforeText() ;
	virtual AndroidCXX::java_lang_CharSequence * getClassName() ;
	virtual AndroidCXX::java_lang_CharSequence * getContentDescription() ;
	virtual int  getCurrentItemIndex() ;
	virtual int  getFromIndex() ;
	virtual int  getItemCount() ;
	virtual int  getMaxScrollX() ;
	virtual int  getMaxScrollY() ;
	virtual AndroidCXX::android_os_Parcelable * getParcelableData() ;
	virtual int  getRemovedCount() ;
	virtual int  getScrollX() ;
	virtual int  getScrollY() ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityNodeInfo * getSource() ;
	virtual AndroidCXX::java_util_List * getText() ;
	virtual int  getToIndex() ;
	virtual int  getWindowId() ;
	virtual bool  isChecked() ;
	virtual bool  isEnabled() ;
	virtual bool  isFullScreen() ;
	virtual bool  isPassword() ;
	virtual bool  isScrollable() ;
	static AndroidCXX::android_view_accessibility_AccessibilityRecord * obtain(AndroidCXX::android_view_accessibility_AccessibilityRecord const& arg0) ;
	static AndroidCXX::android_view_accessibility_AccessibilityRecord * obtain() ;
	virtual void  recycle() ;
	virtual void  setAddedCount(int const& arg0) ;
	virtual void  setBeforeText(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setChecked(bool const& arg0) ;
	virtual void  setClassName(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setContentDescription(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setCurrentItemIndex(int const& arg0) ;
	virtual void  setEnabled(bool const& arg0) ;
	virtual void  setFromIndex(int const& arg0) ;
	virtual void  setFullScreen(bool const& arg0) ;
	virtual void  setItemCount(int const& arg0) ;
	virtual void  setMaxScrollX(int const& arg0) ;
	virtual void  setMaxScrollY(int const& arg0) ;
	virtual void  setParcelableData(AndroidCXX::android_os_Parcelable const& arg0) ;
	virtual void  setPassword(bool const& arg0) ;
	virtual void  setRemovedCount(int const& arg0) ;
	virtual void  setScrollX(int const& arg0) ;
	virtual void  setScrollY(int const& arg0) ;
	virtual void  setScrollable(bool const& arg0) ;
	virtual void  setSource(AndroidCXX::android_view_View const& arg0,int const& arg1) ;
	virtual void  setSource(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setToIndex(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityRecord