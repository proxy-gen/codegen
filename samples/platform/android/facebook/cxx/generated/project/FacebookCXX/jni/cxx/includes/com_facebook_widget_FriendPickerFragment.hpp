/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_app_Activity.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_os_Bundle.hpp>

#include <java_lang_String.hpp>

#include <java_util_List.hpp>

#include <com_facebook_model_GraphUser.hpp>

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

class com_facebook_widget_FriendPickerFragment
{
public:

	com_facebook_widget_FriendPickerFragment(const com_facebook_widget_FriendPickerFragment& cc);
	com_facebook_widget_FriendPickerFragment(void * proxy);
	// Public Constructors
	com_facebook_widget_FriendPickerFragment(AndroidCXX::android_os_Bundle& arg0);
	com_facebook_widget_FriendPickerFragment();
	// TODO: remove
	// 
	// Default Destructor
	virtual ~com_facebook_widget_FriendPickerFragment();
	// Functions
	 void onInflate(AndroidCXX::android_app_Activity& arg0,AndroidCXX::android_util_AttributeSet& arg1,AndroidCXX::android_os_Bundle& arg2);
	 AndroidCXX::java_lang_String getUserId();
	 void setUserId(AndroidCXX::java_lang_String& arg0);
	 bool getMultiSelect();
	 void setMultiSelect(bool& arg0);
	 AndroidCXX::java_util_List getSelection();
	 void setSettingsFromBundle(AndroidCXX::android_os_Bundle& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_FriendPickerFragment