/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 
 		 
 		 
	
	
 		 
 	
 	
 		 
	
	
 		 


 		 
 		 
 		 






































































// Generated Code 

#ifndef _android_view_KeyEvent
#define _android_view_KeyEvent
//
// Scroll Down 
//


#include <android_view_KeyEvent_Callback.hpp>

#include <android_view_KeyEvent_DispatcherState.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <android_view_KeyCharacterMap.hpp>

#include <android_view_KeyCharacterMap_KeyData.hpp>

#include <android_os_Parcel.hpp>


#include <android_view_InputEvent.hpp>

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


class android_view_KeyEvent_Callback;

class android_view_KeyEvent_DispatcherState;

class java_lang_Object;

class java_lang_String;

class android_view_KeyCharacterMap;

class android_view_KeyCharacterMap_KeyData;

class android_os_Parcel;

class android_view_KeyEvent : public AndroidCXX::android_view_InputEvent
{
public:

	// Public Constructor
	android_view_KeyEvent(AndroidCXX::android_view_KeyEvent const& arg0,Proxy * aProxy = new Proxy());
	android_view_KeyEvent(AndroidCXX::android_view_KeyEvent const& arg0,long const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	android_view_KeyEvent(int const& arg0,int const& arg1,Proxy * aProxy = new Proxy());
	android_view_KeyEvent(long const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2,int const& arg3,Proxy * aProxy = new Proxy());
	android_view_KeyEvent(long const& arg0,long const& arg1,int const& arg2,int const& arg3,int const& arg4,Proxy * aProxy = new Proxy());
	android_view_KeyEvent(long const& arg0,long const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,Proxy * aProxy = new Proxy());
	android_view_KeyEvent(long const& arg0,long const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,int const& arg7,Proxy * aProxy = new Proxy());
	android_view_KeyEvent(long const& arg0,long const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,int const& arg7,int const& arg8,Proxy * aProxy = new Proxy());
	android_view_KeyEvent(long const& arg0,long const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,int const& arg6,int const& arg7,int const& arg8,int const& arg9,Proxy * aProxy = new Proxy());
	android_view_KeyEvent(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_KeyEvent();
	// Functions
	static AndroidCXX::android_view_KeyEvent * changeAction(AndroidCXX::android_view_KeyEvent const& arg0,int const& arg1) ;
	static AndroidCXX::android_view_KeyEvent * changeFlags(AndroidCXX::android_view_KeyEvent const& arg0,int const& arg1) ;
	static AndroidCXX::android_view_KeyEvent * changeTimeRepeat(AndroidCXX::android_view_KeyEvent const& arg0,long const& arg1,int const& arg2,int const& arg3) ;
	static AndroidCXX::android_view_KeyEvent * changeTimeRepeat(AndroidCXX::android_view_KeyEvent const& arg0,long const& arg1,int const& arg2) ;
	virtual bool  dispatch(AndroidCXX::android_view_KeyEvent_Callback const& arg0,AndroidCXX::android_view_KeyEvent_DispatcherState const& arg1,AndroidCXX::java_lang_Object const& arg2) ;
	virtual bool  dispatch(AndroidCXX::android_view_KeyEvent_Callback const& arg0) ;
	virtual int  getAction() ;
	virtual AndroidCXX::java_lang_String * getCharacters() ;
	static int  getDeadChar(int const& arg0,int const& arg1) ;
	virtual int  getDeviceId() ;
	virtual char  getDisplayLabel() ;
	virtual long  getDownTime() ;
	virtual long  getEventTime() ;
	virtual int  getFlags() ;
	virtual AndroidCXX::android_view_KeyCharacterMap * getKeyCharacterMap() ;
	virtual int  getKeyCode() ;
	virtual bool  getKeyData(AndroidCXX::android_view_KeyCharacterMap_KeyData const& arg0) ;
	virtual char  getMatch(std::vector<char> const& arg0,int const& arg1) ;
	virtual char  getMatch(std::vector<char> const& arg0) ;
	static int  getMaxKeyCode() ;
	virtual int  getMetaState() ;
	static int  getModifierMetaStateMask() ;
	virtual int  getModifiers() ;
	virtual char  getNumber() ;
	virtual int  getRepeatCount() ;
	virtual int  getScanCode() ;
	virtual int  getSource() ;
	virtual int  getUnicodeChar(int const& arg0) ;
	virtual int  getUnicodeChar() ;
	virtual bool  hasModifiers(int const& arg0) ;
	virtual bool  hasNoModifiers() ;
	virtual bool  isAltPressed() ;
	virtual bool  isCanceled() ;
	virtual bool  isCapsLockOn() ;
	virtual bool  isCtrlPressed() ;
	virtual bool  isFunctionPressed() ;
	static bool  isGamepadButton(int const& arg0) ;
	virtual bool  isLongPress() ;
	virtual bool  isMetaPressed() ;
	static bool  isModifierKey(int const& arg0) ;
	virtual bool  isNumLockOn() ;
	virtual bool  isPrintingKey() ;
	virtual bool  isScrollLockOn() ;
	virtual bool  isShiftPressed() ;
	virtual bool  isSymPressed() ;
	virtual bool  isSystem() ;
	virtual bool  isTracking() ;
	static int  keyCodeFromString(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::java_lang_String * keyCodeToString(int const& arg0) ;
	static bool  metaStateHasModifiers(int const& arg0,int const& arg1) ;
	static bool  metaStateHasNoModifiers(int const& arg0) ;
	static int  normalizeMetaState(int const& arg0) ;
	virtual void  setSource(int const& arg0) ;
	virtual void  startTracking() ;
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

#endif // _android_view_KeyEvent