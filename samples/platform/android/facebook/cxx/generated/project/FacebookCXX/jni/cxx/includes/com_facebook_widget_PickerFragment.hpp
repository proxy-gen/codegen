/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
	
	
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 	
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
	
 		 
	
 		 
	
 		 
	
 	
 		 
 		 
	
 		 
	






































// Generated Code 

#ifndef _com_facebook_widget_PickerFragment
#define _com_facebook_widget_PickerFragment
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>

#include <android_view_LayoutInflater.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_view_View.hpp>

#include <com_facebook_Session.hpp>

#include <android_app_Activity.hpp>

#include <android_util_AttributeSet.hpp>

#include <com_facebook_widget_PickerFragment_OnErrorListener.hpp>

#include <com_facebook_widget_PickerFragment_GraphObjectFilter.hpp>

#include <com_facebook_model_GraphObject.hpp>

#include <java_util_Collection.hpp>

#include <java_lang_String.hpp>

#include <com_facebook_widget_PickerFragment_OnDataChangedListener.hpp>

#include <com_facebook_widget_PickerFragment_OnSelectionChangedListener.hpp>

#include <com_facebook_widget_PickerFragment_OnDoneButtonClickedListener.hpp>

#include <java_util_Set.hpp>

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

class android_os_Bundle;

class android_view_LayoutInflater;

class android_view_ViewGroup;

class android_view_View;

class com_facebook_Session;

class android_app_Activity;

class android_util_AttributeSet;

class com_facebook_widget_PickerFragment_OnErrorListener;

class com_facebook_widget_PickerFragment_GraphObjectFilter;

class com_facebook_model_GraphObject;

class java_util_Collection;

class java_lang_String;

class com_facebook_widget_PickerFragment_OnDataChangedListener;

class com_facebook_widget_PickerFragment_OnSelectionChangedListener;

class com_facebook_widget_PickerFragment_OnDoneButtonClickedListener;

class java_util_Set;

class com_facebook_widget_PickerFragment
{
public:

	com_facebook_widget_PickerFragment(const com_facebook_widget_PickerFragment& cc);
	com_facebook_widget_PickerFragment(void * proxy);
	// Public Constructors
	com_facebook_widget_PickerFragment();
	// Default Destructor
	virtual ~com_facebook_widget_PickerFragment();
	// Functions
	 void onCreate(FacebookCXX::android_os_Bundle& arg0);
	 void onSaveInstanceState(FacebookCXX::android_os_Bundle& arg0);
	 FacebookCXX::android_view_View onCreateView(FacebookCXX::android_view_LayoutInflater& arg0,FacebookCXX::android_view_ViewGroup& arg1,FacebookCXX::android_os_Bundle& arg2);
	 FacebookCXX::com_facebook_Session getSession();
	 void setSession(FacebookCXX::com_facebook_Session& arg0);
	 void setArguments(FacebookCXX::android_os_Bundle& arg0);
	 void onInflate(FacebookCXX::android_app_Activity& arg0,FacebookCXX::android_util_AttributeSet& arg1,FacebookCXX::android_os_Bundle& arg2);
	 void onActivityCreated(FacebookCXX::android_os_Bundle& arg0);
	 void onDetach();
	 void loadData(bool& arg0);
	 FacebookCXX::com_facebook_widget_PickerFragment_OnErrorListener getOnErrorListener();
	 void setOnErrorListener(FacebookCXX::com_facebook_widget_PickerFragment_OnErrorListener& arg0);
	 FacebookCXX::com_facebook_widget_PickerFragment_GraphObjectFilter getFilter();
	 void setFilter(FacebookCXX::com_facebook_widget_PickerFragment_GraphObjectFilter& arg0);
	 void setSettingsFromBundle(FacebookCXX::android_os_Bundle& arg0);
	 bool getShowPictures();
	 void setShowPictures(bool& arg0);
	 void setExtraFields(FacebookCXX::java_util_Collection& arg0);
	 FacebookCXX::com_facebook_widget_PickerFragment_OnDataChangedListener getOnDataChangedListener();
	 void setOnDataChangedListener(FacebookCXX::com_facebook_widget_PickerFragment_OnDataChangedListener& arg0);
	 FacebookCXX::com_facebook_widget_PickerFragment_OnSelectionChangedListener getOnSelectionChangedListener();
	 void setOnSelectionChangedListener(FacebookCXX::com_facebook_widget_PickerFragment_OnSelectionChangedListener& arg0);
	 FacebookCXX::com_facebook_widget_PickerFragment_OnDoneButtonClickedListener getOnDoneButtonClickedListener();
	 void setOnDoneButtonClickedListener(FacebookCXX::com_facebook_widget_PickerFragment_OnDoneButtonClickedListener& arg0);
	 FacebookCXX::java_util_Set getExtraFields();
	 void setShowTitleBar(bool& arg0);
	 bool getShowTitleBar();
	 void setTitleText(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::java_lang_String getTitleText();
	 void setDoneButtonText(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::java_lang_String getDoneButtonText();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PickerFragment