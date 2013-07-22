/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
	
 		 
	


 		 









// Generated Code 

#ifndef _com_facebook_Session_Builder
#define _com_facebook_Session_Builder
//
// Scroll Down 
//


#include <com_facebook_Session.hpp>

#include <java_lang_String.hpp>


#include <com_facebook_TokenCachingStrategy.hpp>

#include <android_content_Context.hpp>

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

// Forward Declarations

class com_facebook_Session;

class java_lang_String;

class com_facebook_Session_Builder;

class com_facebook_TokenCachingStrategy;

class android_content_Context;

class com_facebook_Session_Builder
{
public:

	com_facebook_Session_Builder(const com_facebook_Session_Builder& cc);
	com_facebook_Session_Builder(void * proxy);
	// Public Constructors
	com_facebook_Session_Builder(FacebookCXX::android_content_Context& arg0);
	com_facebook_Session_Builder();
	// Default Destructor
	virtual ~com_facebook_Session_Builder();
	// Functions
	 FacebookCXX::com_facebook_Session build();
	 FacebookCXX::com_facebook_Session_Builder setApplicationId(FacebookCXX::java_lang_String& arg0);
	 FacebookCXX::com_facebook_Session_Builder setTokenCachingStrategy(FacebookCXX::com_facebook_TokenCachingStrategy& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_Builder