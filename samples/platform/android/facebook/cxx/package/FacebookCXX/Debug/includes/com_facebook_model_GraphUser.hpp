/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 

























// Generated Code 

#ifndef _com_facebook_model_GraphUser
#define _com_facebook_model_GraphUser
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

class com_facebook_model_GraphUser
{
public:

	com_facebook_model_GraphUser(const com_facebook_model_GraphUser& cc);
	com_facebook_model_GraphUser(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_GraphUser();
	// Functions
	 AndroidCXX::java_lang_String getName();
	 FacebookCXX::com_facebook_model_GraphLocation getLocation();
	 void setName(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getId();
	 void setId(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getFirstName();
	 void setFirstName(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getMiddleName();
	 void setMiddleName(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getLastName();
	 void setLastName(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getLink();
	 void setLink(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getUsername();
	 void setUsername(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getBirthday();
	 void setBirthday(AndroidCXX::java_lang_String const& arg0);
	 void setLocation(FacebookCXX::com_facebook_model_GraphLocation const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphUser