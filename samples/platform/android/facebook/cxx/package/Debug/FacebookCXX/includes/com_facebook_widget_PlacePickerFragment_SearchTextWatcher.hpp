/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_text_Editable.hpp>

#include <java_lang_CharSequence.hpp>


#include <android_text_TextWatcher.hpp>

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



class com_facebook_widget_PlacePickerFragment_SearchTextWatcher : public AndroidCXX::android_text_TextWatcher
{
public:

	// Public ConstrucXXX
	com_facebook_widget_PlacePickerFragment_SearchTextWatcher(const com_facebook_widget_PlacePickerFragment_SearchTextWatcher& cc);
	com_facebook_widget_PlacePickerFragment_SearchTextWatcher(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_PlacePickerFragment_SearchTextWatcher();
	// Functions
	virtual void  afterTextChanged(AndroidCXX::android_text_Editable const& arg0) ;
	virtual void  beforeTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual void  onTextChanged(AndroidCXX::java_lang_CharSequence const& arg0,int const& arg1,int const& arg2,int const& arg3) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PlacePickerFragment_SearchTextWatcher