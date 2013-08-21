/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
	
	
 		 
 		 
 		 
 		 
 		 
 		 


 		 
 		 
 		 





















// Generated Code 

#ifndef _android_widget_DialerFilter
#define _android_widget_DialerFilter
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_view_KeyEvent.hpp>

#include <android_text_TextWatcher.hpp>

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

class java_lang_String;

class java_lang_CharSequence;

class android_view_KeyEvent;

class android_text_TextWatcher;

class android_content_Context;

class android_util_AttributeSet;

class android_widget_DialerFilter : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_DialerFilter(AndroidCXX::android_content_Context const& arg0);
	android_widget_DialerFilter(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_util_AttributeSet const& arg1);
	android_widget_DialerFilter(const android_widget_DialerFilter& cc);
	android_widget_DialerFilter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_DialerFilter();
	// Functions
	virtual void  append(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  clearText() ;
	virtual AndroidCXX::java_lang_CharSequence * getDigits() ;
	virtual AndroidCXX::java_lang_CharSequence * getFilterText() ;
	virtual AndroidCXX::java_lang_CharSequence * getLetters() ;
	virtual int  getMode() ;
	virtual bool  isQwertyKeyboard() ;
	virtual bool  onKeyDown(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  onKeyUp(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual void  removeFilterWatcher(AndroidCXX::android_text_TextWatcher const& arg0) ;
	virtual void  setDigitsWatcher(AndroidCXX::android_text_TextWatcher const& arg0) ;
	virtual void  setFilterWatcher(AndroidCXX::android_text_TextWatcher const& arg0) ;
	virtual void  setLettersWatcher(AndroidCXX::android_text_TextWatcher const& arg0) ;
	virtual void  setMode(int const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_DialerFilter