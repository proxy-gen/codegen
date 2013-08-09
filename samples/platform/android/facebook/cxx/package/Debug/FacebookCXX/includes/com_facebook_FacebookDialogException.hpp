/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	


 		 
 		 








// Generated Code 

#ifndef _com_facebook_FacebookDialogException
#define _com_facebook_FacebookDialogException
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


class com_facebook_FacebookDialogException
{
public:

	com_facebook_FacebookDialogException(const com_facebook_FacebookDialogException& cc);
	com_facebook_FacebookDialogException(Proxy proxy);
	// Public Constructors
	com_facebook_FacebookDialogException(AndroidCXX::java_lang_String const& arg0,int const& arg1,AndroidCXX::java_lang_String const& arg2);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_FacebookDialogException();
	// Functions
	 int getErrorCode();
	 AndroidCXX::java_lang_String getFailingUrl();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_FacebookDialogException