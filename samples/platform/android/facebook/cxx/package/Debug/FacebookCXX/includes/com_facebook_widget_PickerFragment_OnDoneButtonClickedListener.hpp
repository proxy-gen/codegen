/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 








// Generated Code 

#ifndef _com_facebook_widget_PickerFragment_OnDoneButtonClickedListener
#define _com_facebook_widget_PickerFragment_OnDoneButtonClickedListener
//
// Scroll Down 
//


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

namespace FacebookCXX {

// Forward Declarations

class com_facebook_widget_PickerFragment;


class com_facebook_widget_PickerFragment_OnDoneButtonClickedListener : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_widget_PickerFragment_OnDoneButtonClickedListener(const com_facebook_widget_PickerFragment_OnDoneButtonClickedListener& cc);
	com_facebook_widget_PickerFragment_OnDoneButtonClickedListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_PickerFragment_OnDoneButtonClickedListener();
	// Functions
	virtual void  onDoneButtonClicked(FacebookCXX::com_facebook_widget_PickerFragment const& arg0) ;

protected:
	com_facebook_widget_PickerFragment_OnDoneButtonClickedListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PickerFragment_OnDoneButtonClickedListener