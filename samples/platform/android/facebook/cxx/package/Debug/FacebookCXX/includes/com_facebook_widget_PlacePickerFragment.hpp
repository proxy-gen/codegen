/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <java_lang_String.hpp>

#include <com_facebook_model_GraphPlace.hpp>

#include <android_os_Bundle.hpp>

#include <android_app_Activity.hpp>

#include <android_util_AttributeSet.hpp>


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



class com_facebook_model_GraphPlace;




class com_facebook_widget_PlacePickerFragment : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	com_facebook_widget_PlacePickerFragment();
	com_facebook_widget_PlacePickerFragment(AndroidCXX::android_os_Bundle const& arg0);
	com_facebook_widget_PlacePickerFragment(const com_facebook_widget_PlacePickerFragment& cc);
	com_facebook_widget_PlacePickerFragment(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_PlacePickerFragment();
	// Functions
	virtual AndroidCXX::android_location_Location * getLocation() ;
	virtual int  getRadiusInMeters() ;
	virtual int  getResultsLimit() ;
	virtual AndroidCXX::java_lang_String * getSearchText() ;
	virtual FacebookCXX::com_facebook_model_GraphPlace * getSelection() ;
	virtual void  onActivityCreated(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  onAttach(AndroidCXX::android_app_Activity const& arg0) ;
	virtual void  onDetach() ;
	virtual void  onInflate(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  onSearchBoxTextChanged(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual void  setLocation(AndroidCXX::android_location_Location const& arg0) ;
	virtual void  setRadiusInMeters(int const& arg0) ;
	virtual void  setResultsLimit(int const& arg0) ;
	virtual void  setSearchText(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setSettingsFromBundle(AndroidCXX::android_os_Bundle const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PlacePickerFragment