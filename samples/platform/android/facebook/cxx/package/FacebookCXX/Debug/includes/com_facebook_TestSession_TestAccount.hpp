/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 
	
	











// Generated Code 

#ifndef _com_facebook_TestSession_TestAccount
#define _com_facebook_TestSession_TestAccount
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


class com_facebook_TestSession_TestAccount
{
public:

	com_facebook_TestSession_TestAccount(const com_facebook_TestSession_TestAccount& cc);
	com_facebook_TestSession_TestAccount(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_TestSession_TestAccount();
	// Functions
	 AndroidCXX::java_lang_String getName();
	 void setName(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getId();
	 AndroidCXX::java_lang_String getAccessToken();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_TestSession_TestAccount