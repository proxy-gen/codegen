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

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class java_lang_CharSequence;

class android_widget_TextClock
{
public:
	android_widget_TextClock(const android_widget_TextClock& cc);
	android_widget_TextClock(void * proxy);
	virtual ~android_widget_TextClock();
	 java_lang_String *  getTimeZone();
	 void setTimeZone(java_lang_String& arg0);
	 java_lang_CharSequence *  getFormat12Hour();
	 void setFormat12Hour(java_lang_CharSequence& arg0);
	 java_lang_CharSequence *  getFormat24Hour();
	 void setFormat24Hour(java_lang_CharSequence& arg0);
	 bool is24HourModeEnabled();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextClock