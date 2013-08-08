/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

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

class java_lang_String;

class java_lang_CharSequence;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_TextClock
{
public:

	android_widget_TextClock(const android_widget_TextClock& cc);
	android_widget_TextClock(Proxy proxy);
	// Public Constructors
	android_widget_TextClock(AndroidCXX::android_content_Context const& arg0);
	android_widget_TextClock(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_TextClock(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,int const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TextClock();
	// Functions
	 AndroidCXX::java_lang_String getTimeZone();
	 void setTimeZone(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_CharSequence getFormat12Hour();
	 void setFormat12Hour(AndroidCXX::java_lang_CharSequence const& arg0);
	 AndroidCXX::java_lang_CharSequence getFormat24Hour();
	 void setFormat24Hour(AndroidCXX::java_lang_CharSequence const& arg0);
	 bool is24HourModeEnabled();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextClock