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

// Forward Declarations





class com_facebook_Session;



class com_facebook_widget_PickerFragment_OnErrorListener;

class com_facebook_widget_PickerFragment_GraphObjectFilter;

class com_facebook_model_GraphObject;



class com_facebook_widget_PickerFragment_OnDataChangedListener;

class com_facebook_widget_PickerFragment_OnSelectionChangedListener;

class com_facebook_widget_PickerFragment_OnDoneButtonClickedListener;


class com_facebook_widget_PickerFragment
{
public:

	com_facebook_widget_PickerFragment(const com_facebook_widget_PickerFragment& cc);
	com_facebook_widget_PickerFragment(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_PickerFragment();
	// Functions
	 void onCreate(AndroidCXX::android_os_Bundle const& arg0);
	 void onSaveInstanceState(AndroidCXX::android_os_Bundle const& arg0);
	 AndroidCXX::android_view_View onCreateView(AndroidCXX::android_view_LayoutInflater const& arg0,AndroidCXX::android_view_ViewGroup const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 FacebookCXX::com_facebook_Session getSession();
	 void setSession(FacebookCXX::com_facebook_Session const& arg0);
	 void setArguments(AndroidCXX::android_os_Bundle const& arg0);
	 void onInflate(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 void onActivityCreated(AndroidCXX::android_os_Bundle const& arg0);
	 void onDetach();
	 void loadData(bool const& arg0);
	 FacebookCXX::com_facebook_widget_PickerFragment_OnErrorListener getOnErrorListener();
	 void setOnErrorListener(FacebookCXX::com_facebook_widget_PickerFragment_OnErrorListener const& arg0);
	 FacebookCXX::com_facebook_widget_PickerFragment_GraphObjectFilter getFilter();
	 void setFilter(FacebookCXX::com_facebook_widget_PickerFragment_GraphObjectFilter const& arg0);
	 void setSettingsFromBundle(AndroidCXX::android_os_Bundle const& arg0);
	 bool getShowPictures();
	 void setShowPictures(bool const& arg0);
	 void setExtraFields(AndroidCXX::java_util_Collection const& arg0);
	 FacebookCXX::com_facebook_widget_PickerFragment_OnDataChangedListener getOnDataChangedListener();
	 void setOnDataChangedListener(FacebookCXX::com_facebook_widget_PickerFragment_OnDataChangedListener const& arg0);
	 FacebookCXX::com_facebook_widget_PickerFragment_OnSelectionChangedListener getOnSelectionChangedListener();
	 void setOnSelectionChangedListener(FacebookCXX::com_facebook_widget_PickerFragment_OnSelectionChangedListener const& arg0);
	 FacebookCXX::com_facebook_widget_PickerFragment_OnDoneButtonClickedListener getOnDoneButtonClickedListener();
	 void setOnDoneButtonClickedListener(FacebookCXX::com_facebook_widget_PickerFragment_OnDoneButtonClickedListener const& arg0);
	 AndroidCXX::java_util_Set getExtraFields();
	 void setShowTitleBar(bool const& arg0);
	 bool getShowTitleBar();
	 void setTitleText(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getTitleText();
	 void setDoneButtonText(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getDoneButtonText();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PickerFragment