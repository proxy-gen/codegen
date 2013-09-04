/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	
	
 		 
 		 
	
	
	
 		 
	
 		 





























// Generated Code 

#ifndef _android_view_accessibility_AccessibilityEvent
#define _android_view_accessibility_AccessibilityEvent
//
// Scroll Down 
//


#include <android_view_accessibility_AccessibilityRecord.hpp>

#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_os_Parcel.hpp>


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

class android_view_accessibility_AccessibilityRecord;

class java_lang_String;

class java_lang_CharSequence;

class android_os_Parcel;


class android_view_accessibility_AccessibilityEvent : public AndroidCXX::android_os_Parcelable
{
public:

	// Public Constructor
	android_view_accessibility_AccessibilityEvent(const android_view_accessibility_AccessibilityEvent& cc);
	android_view_accessibility_AccessibilityEvent(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_accessibility_AccessibilityEvent();
	// Functions
	virtual void  appendRecord(AndroidCXX::android_view_accessibility_AccessibilityRecord const& arg0) ;
	virtual int  describeContents() ;
	static AndroidCXX::java_lang_String * eventTypeToString(int const& arg0) ;
	virtual int  getAction() ;
	virtual long  getEventTime() ;
	virtual int  getEventType() ;
	virtual int  getMovementGranularity() ;
	virtual AndroidCXX::java_lang_CharSequence * getPackageName() ;
	virtual int  getRecordCount() ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityRecord * getRecord(int const& arg0) ;
	virtual void  initFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;
	static AndroidCXX::android_view_accessibility_AccessibilityEvent * obtain(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	static AndroidCXX::android_view_accessibility_AccessibilityEvent * obtain(int const& arg0) ;
	static AndroidCXX::android_view_accessibility_AccessibilityEvent * obtain() ;
	virtual void  recycle() ;
	virtual void  setAction(int const& arg0) ;
	virtual void  setEventTime(long const& arg0) ;
	virtual void  setEventType(int const& arg0) ;
	virtual void  setMovementGranularity(int const& arg0) ;
	virtual void  setPackageName(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityEvent