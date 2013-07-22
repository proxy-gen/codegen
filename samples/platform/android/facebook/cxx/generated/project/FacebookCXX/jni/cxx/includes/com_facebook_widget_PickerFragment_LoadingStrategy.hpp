/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 	
 		 
 		 












// Generated Code 

#ifndef _com_facebook_widget_PickerFragment_LoadingStrategy
#define _com_facebook_widget_PickerFragment_LoadingStrategy
//
// Scroll Down 
//


#include <com_facebook_widget_GraphObjectAdapter.hpp>

#include <com_facebook_model_GraphObject.hpp>

#include <com_facebook_Request.hpp>

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

class com_facebook_widget_GraphObjectAdapter;

class com_facebook_model_GraphObject;

class com_facebook_Request;

class com_facebook_widget_PickerFragment_LoadingStrategy
{
public:

	com_facebook_widget_PickerFragment_LoadingStrategy(const com_facebook_widget_PickerFragment_LoadingStrategy& cc);
	com_facebook_widget_PickerFragment_LoadingStrategy(void * proxy);
	// Public Constructors
	com_facebook_widget_PickerFragment_LoadingStrategy();
	// Default Destructor
	virtual ~com_facebook_widget_PickerFragment_LoadingStrategy();
	// Functions
	 void attach(FacebookCXX::com_facebook_widget_GraphObjectAdapter& arg0);
	 void detach();
	 bool isDataPresentOrLoading();
	 void clearResults();
	 void startLoading(FacebookCXX::com_facebook_Request& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PickerFragment_LoadingStrategy