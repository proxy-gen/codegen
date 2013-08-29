/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_String.hpp>

#include <java_util_Set.hpp>

#include <android_os_Bundle.hpp>

#include <android_view_LayoutInflater.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_view_View.hpp>

#include <android_app_Activity.hpp>

#include <android_util_AttributeSet.hpp>

#include <java_util_Collection.hpp>


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



class com_facebook_widget_PickerFragment_GraphObjectFilter;

class com_facebook_model_GraphObject;

class com_facebook_widget_PickerFragment_OnDataChangedListener;

class com_facebook_widget_PickerFragment_OnDoneButtonClickedListener;

class com_facebook_widget_PickerFragment_OnErrorListener;

class com_facebook_widget_PickerFragment_OnSelectionChangedListener;

class com_facebook_Session;








class com_facebook_widget_PickerFragment : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_widget_PickerFragment(const com_facebook_widget_PickerFragment& cc);
	com_facebook_widget_PickerFragment(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_PickerFragment();
	// Functions
	virtual AndroidCXX::java_lang_String * getDoneButtonText() ;
	virtual AndroidCXX::java_util_Set * getExtraFields() ;
	virtual FacebookCXX::com_facebook_widget_PickerFragment_GraphObjectFilter * getFilter() ;
	virtual FacebookCXX::com_facebook_widget_PickerFragment_OnDataChangedListener * getOnDataChangedListener() ;
	virtual FacebookCXX::com_facebook_widget_PickerFragment_OnDoneButtonClickedListener * getOnDoneButtonClickedListener() ;
	virtual FacebookCXX::com_facebook_widget_PickerFragment_OnErrorListener * getOnErrorListener() ;
	virtual FacebookCXX::com_facebook_widget_PickerFragment_OnSelectionChangedListener * getOnSelectionChangedListener() ;
	virtual FacebookCXX::com_facebook_Session * getSession() ;
	virtual bool  getShowPictures() ;
	virtual bool  getShowTitleBar() ;
	virtual AndroidCXX::java_lang_String * getTitleText() ;
	virtual void  loadData(bool const& arg0) ;
	virtual void  onActivityCreated(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  onCreate(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual AndroidCXX::android_view_View * onCreateView(AndroidCXX::android_view_LayoutInflater const& arg0,AndroidCXX::android_view_ViewGroup const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  onDetach() ;
	virtual void  onInflate(AndroidCXX::android_app_Activity const& arg0,AndroidCXX::android_util_AttributeSet const& arg1,AndroidCXX::android_os_Bundle const& arg2) ;
	virtual void  onSaveInstanceState(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  setArguments(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  setDoneButtonText(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setExtraFields(AndroidCXX::java_util_Collection const& arg0) ;
	virtual void  setFilter(FacebookCXX::com_facebook_widget_PickerFragment_GraphObjectFilter const& arg0) ;
	virtual void  setOnDataChangedListener(FacebookCXX::com_facebook_widget_PickerFragment_OnDataChangedListener const& arg0) ;
	virtual void  setOnDoneButtonClickedListener(FacebookCXX::com_facebook_widget_PickerFragment_OnDoneButtonClickedListener const& arg0) ;
	virtual void  setOnErrorListener(FacebookCXX::com_facebook_widget_PickerFragment_OnErrorListener const& arg0) ;
	virtual void  setOnSelectionChangedListener(FacebookCXX::com_facebook_widget_PickerFragment_OnSelectionChangedListener const& arg0) ;
	virtual void  setSession(FacebookCXX::com_facebook_Session const& arg0) ;
	virtual void  setSettingsFromBundle(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  setShowPictures(bool const& arg0) ;
	virtual void  setShowTitleBar(bool const& arg0) ;
	virtual void  setTitleText(AndroidCXX::java_lang_String const& arg0) ;

protected:
	com_facebook_widget_PickerFragment();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PickerFragment