/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
 		 
 		 
 		 


 		 
 		 
 		 
 		 
 		 















// Generated Code 

#ifndef _android_widget_TextClock
#define _android_widget_TextClock
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>

#include <java_lang_String.hpp>

#include <android_content_Context.hpp>

#include <android_util_AttributeSet.hpp>


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

class java_lang_CharSequence;

class java_lang_String;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_TextClock : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_TextClock(AndroidCXX::android_content_Context const& arg0);
	android_widget_TextClock(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_TextClock(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	android_widget_TextClock(const android_widget_TextClock& cc);
	android_widget_TextClock(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TextClock();
	// Functions
	virtual AndroidCXX::java_lang_CharSequence * getFormat12Hour() ;
	virtual AndroidCXX::java_lang_CharSequence * getFormat24Hour() ;
	virtual AndroidCXX::java_lang_String * getTimeZone() ;
	virtual bool  is24HourModeEnabled() ;
	virtual void  setFormat12Hour(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setFormat24Hour(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setTimeZone(AndroidCXX::java_lang_String const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextClock