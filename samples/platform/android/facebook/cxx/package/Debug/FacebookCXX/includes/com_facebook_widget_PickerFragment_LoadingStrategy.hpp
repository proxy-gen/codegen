/*
 * Header (Instance CXX)
 * Author: codegen
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

class com_facebook_widget_GraphObjectAdapter;

class com_facebook_model_GraphObject;

class com_facebook_Request;

class com_facebook_widget_PickerFragment_LoadingStrategy : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_widget_PickerFragment_LoadingStrategy(const com_facebook_widget_PickerFragment_LoadingStrategy& cc);
	com_facebook_widget_PickerFragment_LoadingStrategy(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_PickerFragment_LoadingStrategy();
	// Functions
	virtual void  attach(FacebookCXX::com_facebook_widget_GraphObjectAdapter const& arg0) ;
	virtual void  clearResults() ;
	virtual void  detach() ;
	virtual bool  isDataPresentOrLoading() ;
	virtual void  startLoading(FacebookCXX::com_facebook_Request const& arg0) ;

protected:
	com_facebook_widget_PickerFragment_LoadingStrategy();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_PickerFragment_LoadingStrategy