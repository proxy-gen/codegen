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

// Forward Declarations



class com_facebook_widget_PlacePickerFragment_SearchTextWatcher
{
public:

	com_facebook_widget_PlacePickerFragment_SearchTextWatcher(const com_facebook_widget_PlacePickerFragment_SearchTextWatcher& cc);
	com_facebook_widget_PlacePickerFragment_SearchTextWatcher(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_PlacePickerFragment_SearchTextWatcher();
	// Functions
	 void onTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void beforeTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3);
	 void afterTextChanged(AndroidCXX::android_text_Editable const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PlacePickerFragment_SearchTextWatcher