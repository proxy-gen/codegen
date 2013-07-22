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
// 
// 
// 
// 

// Forward Declarations

class android_app_Activity;

class android_util_AttributeSet;

class android_os_Bundle;

class java_lang_String;

class java_util_List;

class com_facebook_model_GraphUser;

class com_facebook_widget_FriendPickerFragment
{
public:

	com_facebook_widget_FriendPickerFragment(const com_facebook_widget_FriendPickerFragment& cc);
	com_facebook_widget_FriendPickerFragment(void * proxy);
	// Public Constructors
	com_facebook_widget_FriendPickerFragment(FacebookCXX::android_os_Bundle& arg0);
	com_facebook_widget_FriendPickerFragment();
	// Default Destructor
	virtual ~com_facebook_widget_FriendPickerFragment();
	// Functions
	 void onInflate(FacebookCXX::android_app_Activity& arg0,FacebookCXX::android_util_AttributeSet& arg1,FacebookCXX::android_os_Bundle& arg2);
	 FacebookCXX::java_lang_String getUserId();
	 void setUserId(FacebookCXX::java_lang_String& arg0);
	 bool getMultiSelect();
	 void setMultiSelect(bool& arg0);
	 FacebookCXX::java_util_List getSelection();
	 void setSettingsFromBundle(FacebookCXX::android_os_Bundle& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_FriendPickerFragment