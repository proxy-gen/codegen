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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_String;

class com_facebook_model_GraphLocation;

class com_facebook_model_GraphUser
{
public:

	com_facebook_model_GraphUser(const com_facebook_model_GraphUser& cc);
	com_facebook_model_GraphUser(void * proxy);
	// Public Constructors
	com_facebook_model_GraphUser();
	// Default Destructor
	virtual ~com_facebook_model_GraphUser();
	// Functions
	 FacebookCXX::java_lang_String getName();
	 FacebookCXX::com_facebook_model_GraphLocation getLocation();
	 void setName(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::java_lang_String getId();
	 void setId(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::java_lang_String getFirstName();
	 void setFirstName(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::java_lang_String getMiddleName();
	 void setMiddleName(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::java_lang_String getLastName();
	 void setLastName(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::java_lang_String getLink();
	 void setLink(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::java_lang_String getUsername();
	 void setUsername(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::java_lang_String getBirthday();
	 void setBirthday(FacebookCXX::java_lang_String& arg0);
	 void setLocation(FacebookCXX::com_facebook_model_GraphLocation& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphUser