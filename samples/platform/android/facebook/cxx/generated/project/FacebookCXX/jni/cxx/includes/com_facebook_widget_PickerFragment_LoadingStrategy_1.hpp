/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 	
 		 
 	
 		 
 		 
 	
 		 
 	
 		 
 		 
 	
 		 
 		 
 	
 		 
 	
 		 










// Generated Code 

#ifndef _com_facebook_widget_PickerFragment_LoadingStrategy_1
#define _com_facebook_widget_PickerFragment_LoadingStrategy_1
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>

#include <android_support_v4_content_Loader.hpp>

#include <com_facebook_widget_SimpleGraphObjectCursor.hpp>

#include <com_facebook_model_GraphObject.hpp>

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



class com_facebook_widget_SimpleGraphObjectCursor;

class com_facebook_model_GraphObject;

class com_facebook_widget_PickerFragment_LoadingStrategy_1
{
public:

	com_facebook_widget_PickerFragment_LoadingStrategy_1(const com_facebook_widget_PickerFragment_LoadingStrategy_1& cc);
	com_facebook_widget_PickerFragment_LoadingStrategy_1(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_PickerFragment_LoadingStrategy_1();
	// Functions
	 AndroidCXX::android_support_v4_content_Loader onCreateLoader(int const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void onLoadFinished(AndroidCXX::android_support_v4_content_Loader const& arg0,FacebookCXX::com_facebook_widget_SimpleGraphObjectCursor const& arg1);
	 void onLoaderReset(AndroidCXX::android_support_v4_content_Loader const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PickerFragment_LoadingStrategy_1