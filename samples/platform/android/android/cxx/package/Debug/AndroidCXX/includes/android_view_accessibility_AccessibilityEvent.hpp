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


#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_os_Parcel.hpp>

#include <android_view_accessibility_AccessibilityRecord.hpp>


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

class android_os_Parcel;


class android_view_accessibility_AccessibilityRecord;

class android_view_accessibility_AccessibilityEvent : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_view_accessibility_AccessibilityEvent(const android_view_accessibility_AccessibilityEvent& cc);
	android_view_accessibility_AccessibilityEvent(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_accessibility_AccessibilityEvent();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual AndroidCXX::java_lang_CharSequence * getPackageName() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	static AndroidCXX::android_view_accessibility_AccessibilityEvent * obtain(int const& arg0) ;
	static AndroidCXX::android_view_accessibility_AccessibilityEvent * obtain() ;
	static AndroidCXX::android_view_accessibility_AccessibilityEvent * obtain(AndroidCXX::android_view_accessibility_AccessibilityEvent const& arg0) ;
	virtual void  recycle() ;
	virtual int  getAction() ;
	virtual long  getEventTime() ;
	virtual void  setAction(int const& arg0) ;
	virtual void  setPackageName(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual int  getRecordCount() ;
	virtual void  appendRecord(AndroidCXX::android_view_accessibility_AccessibilityRecord const& arg0) ;
	virtual AndroidCXX::android_view_accessibility_AccessibilityRecord * getRecord(int const& arg0) ;
	virtual int  getEventType() ;
	virtual void  setEventType(int const& arg0) ;
	virtual void  setEventTime(long const& arg0) ;
	virtual void  setMovementGranularity(int const& arg0) ;
	virtual int  getMovementGranularity() ;
	virtual void  initFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;
	static AndroidCXX::java_lang_String * eventTypeToString(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_accessibility_AccessibilityEvent