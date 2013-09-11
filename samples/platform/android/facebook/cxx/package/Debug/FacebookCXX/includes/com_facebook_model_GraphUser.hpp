/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_Object.hpp>

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


class com_facebook_model_GraphUser : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_model_GraphUser(const com_facebook_model_GraphUser& cc);
	com_facebook_model_GraphUser(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_GraphUser();
	// Functions
	virtual AndroidCXX::java_lang_String * getBirthday() ;

protected:
	com_facebook_model_GraphUser();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_GraphUser