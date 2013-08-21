/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 		 










// Generated Code 

#ifndef _com_facebook_TestSession_UserAccount
#define _com_facebook_TestSession_UserAccount
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


class com_facebook_TestSession_UserAccount : public FacebookCXX::com_facebook_model_GraphObject
{
public:

	com_facebook_TestSession_UserAccount(const com_facebook_TestSession_UserAccount& cc);
	com_facebook_TestSession_UserAccount(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_TestSession_UserAccount();
	// Functions
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual AndroidCXX::java_lang_String * getUid() ;
	virtual void  setName(AndroidCXX::java_lang_String const& arg0) ;

protected:
	com_facebook_TestSession_UserAccount();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_TestSession_UserAccount