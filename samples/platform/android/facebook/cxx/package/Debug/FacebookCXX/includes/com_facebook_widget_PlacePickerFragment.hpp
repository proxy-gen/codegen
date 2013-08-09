/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 		 
 		 


 		 






















// Generated Code 

#ifndef _com_facebook_widget_PlacePickerFragment
#define _com_facebook_widget_PlacePickerFragment
//
// Scroll Down 
//


#include <android_location_Location.hpp>

#include <android_app_Activity.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_os_Bundle.hpp>

#include <com_facebook_model_GraphPlace.hpp>

#include <java_lang_String.hpp>

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





class com_facebook_model_GraphPlace;


class com_facebook_widget_PlacePickerFragment
{
public:

	com_facebook_widget_PlacePickerFragment(const com_facebook_widget_PlacePickerFragment& cc);
	com_facebook_widget_PlacePickerFragment(Proxy proxy);
	// Public Constructors
	com_facebook_widget_PlacePickerFragment();
	com_facebook_widget_PlacePickerFragment(AndroidCXX::android_os_Bundle const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_PlacePickerFragment();
	// Functions
	 AndroidCXX::android_location_Location getLocation();
	 void onInflate(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,AndroidCXX::android_os_Bundle const& arg2);
	 void onAttach(AndroidCXX::android_app_Activity const& arg0);
	 void onActivityCreated(AndroidCXX::android_os_Bundle const& arg0);
	 void onDetach();
	 void setLocation(AndroidCXX::android_location_Location const& arg0);
	 FacebookCXX::com_facebook_model_GraphPlace getSelection();
	 void setSettingsFromBundle(AndroidCXX::android_os_Bundle const& arg0);
	 int getRadiusInMeters();
	 void setRadiusInMeters(int const& arg0);
	 int getResultsLimit();
	 void setResultsLimit(int const& arg0);
	 AndroidCXX::java_lang_String getSearchText();
	 void setSearchText(AndroidCXX::java_lang_String const& arg0);
	 void onSearchBoxTextChanged(AndroidCXX::java_lang_String const& arg0,bool const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PlacePickerFragment