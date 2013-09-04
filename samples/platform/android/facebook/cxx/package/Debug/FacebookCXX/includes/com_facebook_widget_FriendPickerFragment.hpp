/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
 		 
	
 		 
 		 
 		 
 		 
 		 


 		 














// Generated Code 

#ifndef _com_facebook_widget_FriendPickerFragment
#define _com_facebook_widget_FriendPickerFragment
//
// Scroll Down 
//


#include <java_util_List.hpp>

#include <com_facebook_model_GraphUser.hpp>

#include <java_lang_String.hpp>

#include <android_app_Activity.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_os_Bundle.hpp>


#include <com_facebook_widget_PickerFragment.hpp>

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


class com_facebook_model_GraphUser;





class com_facebook_widget_FriendPickerFragment : public FacebookCXX::com_facebook_widget_PickerFragment
{
public:

	// Public Constructor
	com_facebook_widget_FriendPickerFragment(Proxy * aProxy = new Proxy());
	com_facebook_widget_FriendPickerFragment(AndroidCXX::android_os_Bundle const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_widget_FriendPickerFragment(const com_facebook_widget_FriendPickerFragment& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_FriendPickerFragment();
	// Functions
	virtual bool  getMultiSelect() ;
	virtual AndroidCXX::java_util_List * getSelection() ;
	virtual AndroidCXX::java_lang_String * getUserId() ;
	virtual void  onInflate(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  setMultiSelect(bool const& arg0) ;
	virtual void  setSettingsFromBundle(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  setUserId(AndroidCXX::java_lang_String const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_FriendPickerFragment