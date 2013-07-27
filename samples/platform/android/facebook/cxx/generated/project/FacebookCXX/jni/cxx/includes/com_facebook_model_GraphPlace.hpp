/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

#include <com_facebook_model_GraphLocation.hpp>

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

class com_facebook_model_GraphPlace
{
public:

	com_facebook_model_GraphPlace(const com_facebook_model_GraphPlace& cc);
	com_facebook_model_GraphPlace(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_GraphPlace();
	// Functions
	 AndroidCXX::java_lang_String getName();
	 FacebookCXX::com_facebook_model_GraphLocation getLocation();
	 void setName(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getId();
	 AndroidCXX::java_lang_String getCategory();
	 void setId(AndroidCXX::java_lang_String const& arg0);
	 void setLocation(FacebookCXX::com_facebook_model_GraphLocation const& arg0);
	 void setCategory(AndroidCXX::java_lang_String const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphPlace