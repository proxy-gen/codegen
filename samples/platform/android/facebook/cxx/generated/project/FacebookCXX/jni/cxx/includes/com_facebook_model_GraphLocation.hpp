/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
	
 		 
	
 		 
 		 
	
 		 





















// Generated Code 

#ifndef _com_facebook_model_GraphLocation
#define _com_facebook_model_GraphLocation
//
// Scroll Down 
//


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


class com_facebook_model_GraphLocation
{
public:

	com_facebook_model_GraphLocation(const com_facebook_model_GraphLocation& cc);
	com_facebook_model_GraphLocation(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// com_facebook_model_GraphLocation();
	// 
	// Default Destructor
	virtual ~com_facebook_model_GraphLocation();
	// Functions
	 AndroidCXX::java_lang_String getState();
	 void setState(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getCountry();
	 double getLatitude();
	 double getLongitude();
	 void setLatitude(double& arg0);
	 void setLongitude(double& arg0);
	 AndroidCXX::java_lang_String getStreet();
	 void setStreet(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getCity();
	 void setCity(AndroidCXX::java_lang_String& arg0);
	 void setCountry(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getZip();
	 void setZip(AndroidCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphLocation