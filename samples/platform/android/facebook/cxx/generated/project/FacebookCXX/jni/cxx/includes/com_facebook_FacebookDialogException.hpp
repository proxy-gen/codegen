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

class com_facebook_FacebookDialogException
{
public:

	com_facebook_FacebookDialogException(const com_facebook_FacebookDialogException& cc);
	com_facebook_FacebookDialogException(void * proxy);
	// Public Constructors
	com_facebook_FacebookDialogException(FacebookCXX::java_lang_String& arg0,int& arg1,FacebookCXX::java_lang_String& arg2);
	com_facebook_FacebookDialogException();
	// Default Destructor
	virtual ~com_facebook_FacebookDialogException();
	// Functions
	 int getErrorCode();
	 FacebookCXX::java_lang_String getFailingUrl();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_FacebookDialogException