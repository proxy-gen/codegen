/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
	
 		 
 		 
 		 
 		 















// Generated Code 

#ifndef _com_facebook_model_GraphPlace
#define _com_facebook_model_GraphPlace
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


class com_facebook_model_GraphLocation;

class com_facebook_model_GraphPlace : public FacebookCXX::com_facebook_model_GraphObject
{
public:

	com_facebook_model_GraphPlace(const com_facebook_model_GraphPlace& cc);
	com_facebook_model_GraphPlace(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_GraphPlace();
	// Functions
	virtual AndroidCXX::java_lang_String * getCategory() ;
	virtual AndroidCXX::java_lang_String * getId() ;
	virtual FacebookCXX::com_facebook_model_GraphLocation * getLocation() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual void  setCategory(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setId(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setLocation(FacebookCXX::com_facebook_model_GraphLocation const& arg0) ;
	virtual void  setName(AndroidCXX::java_lang_String const& arg0) ;

protected:
	com_facebook_model_GraphPlace();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphPlace