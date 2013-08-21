/*
 * Header (Instance CXX)
 * Author: codegen
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


class com_facebook_model_GraphLocation : public FacebookCXX::com_facebook_model_GraphObject
{
public:

	com_facebook_model_GraphLocation(const com_facebook_model_GraphLocation& cc);
	com_facebook_model_GraphLocation(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_GraphLocation();
	// Functions
	virtual AndroidCXX::java_lang_String * getCity() ;
	virtual AndroidCXX::java_lang_String * getCountry() ;
	virtual double  getLatitude() ;
	virtual double  getLongitude() ;
	virtual AndroidCXX::java_lang_String * getState() ;
	virtual AndroidCXX::java_lang_String * getStreet() ;
	virtual AndroidCXX::java_lang_String * getZip() ;
	virtual void  setCity(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setCountry(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setLatitude(double const& arg0) ;
	virtual void  setLongitude(double const& arg0) ;
	virtual void  setState(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setStreet(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setZip(AndroidCXX::java_lang_String const& arg0) ;

protected:
	com_facebook_model_GraphLocation();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphLocation