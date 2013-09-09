/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//


 		 
 	
 		 
 		 








// Generated Code 

#ifndef _com_facebook_Request_GraphPlaceListCallback
#define _com_facebook_Request_GraphPlaceListCallback
//
// Scroll Down 
//


#include <java_util_List.hpp>


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


class com_facebook_Response;

class com_facebook_model_GraphPlace;

class com_facebook_Request_GraphPlaceListCallback : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_Request_GraphPlaceListCallback(const com_facebook_Request_GraphPlaceListCallback& cc);
	com_facebook_Request_GraphPlaceListCallback(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Request_GraphPlaceListCallback();
	// Functions
	virtual void  onCompleted(AndroidCXX::java_util_List const& arg0,FacebookCXX::com_facebook_Response const& arg1) ;

protected:
	void setCXXCallbackPtr(void * callbackPtr);
	com_facebook_Request_GraphPlaceListCallback();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Request_GraphPlaceListCallback