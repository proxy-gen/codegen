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

// Forward Declarations

class com_facebook_Session;


class com_facebook_Session_Builder;

class com_facebook_TokenCachingStrategy;


class com_facebook_Session_Builder
{
public:

	com_facebook_Session_Builder(const com_facebook_Session_Builder& cc);
	com_facebook_Session_Builder(Proxy proxy);
	// Public Constructors
	com_facebook_Session_Builder(AndroidCXX::android_content_Context const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Session_Builder();
	// Functions
	 FacebookCXX::com_facebook_Session build();
	 FacebookCXX::com_facebook_Session_Builder setApplicationId(AndroidCXX::java_lang_String const& arg0);
	 FacebookCXX::com_facebook_Session_Builder setTokenCachingStrategy(FacebookCXX::com_facebook_TokenCachingStrategy const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Session_Builder