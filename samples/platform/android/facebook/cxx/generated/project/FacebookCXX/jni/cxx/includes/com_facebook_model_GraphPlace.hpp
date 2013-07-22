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

class com_facebook_model_GraphPlace
{
public:

	com_facebook_model_GraphPlace(const com_facebook_model_GraphPlace& cc);
	com_facebook_model_GraphPlace(void * proxy);
	// Public Constructors
	com_facebook_model_GraphPlace();
	// Default Destructor
	virtual ~com_facebook_model_GraphPlace();
	// Functions
	 FacebookCXX::java_lang_String getName();
	 FacebookCXX::com_facebook_model_GraphLocation getLocation();
	 void setName(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::java_lang_String getId();
	 FacebookCXX::java_lang_String getCategory();
	 void setId(FacebookCXX::java_lang_String& arg0);
	 void setLocation(FacebookCXX::com_facebook_model_GraphLocation& arg0);
	 void setCategory(FacebookCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphPlace