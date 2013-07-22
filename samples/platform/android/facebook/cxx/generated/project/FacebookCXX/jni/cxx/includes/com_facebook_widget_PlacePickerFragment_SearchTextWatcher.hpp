/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 










// Generated Code 

#ifndef _com_facebook_widget_PlacePickerFragment_SearchTextWatcher
#define _com_facebook_widget_PlacePickerFragment_SearchTextWatcher
//
// Scroll Down 
//


#include <java_lang_CharSequence.hpp>

#include <android_text_Editable.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_CharSequence;

class android_text_Editable;

class com_facebook_widget_PlacePickerFragment_SearchTextWatcher
{
public:

	com_facebook_widget_PlacePickerFragment_SearchTextWatcher(const com_facebook_widget_PlacePickerFragment_SearchTextWatcher& cc);
	com_facebook_widget_PlacePickerFragment_SearchTextWatcher(void * proxy);
	// Public Constructors
	com_facebook_widget_PlacePickerFragment_SearchTextWatcher();
	// Default Destructor
	virtual ~com_facebook_widget_PlacePickerFragment_SearchTextWatcher();
	// Functions
	 void onTextChanged(FacebookCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2,int& arg3);
	 void beforeTextChanged(FacebookCXX::java_lang_CharSequence& arg0,int& arg1,int& arg2,int& arg3);
	 void afterTextChanged(FacebookCXX::android_text_Editable& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PlacePickerFragment_SearchTextWatcher