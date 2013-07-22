/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 	
 		 
 		 
	











// Generated Code 

#ifndef _com_facebook_SessionState
#define _com_facebook_SessionState
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

class com_facebook_SessionState;

class java_lang_String;

class com_facebook_SessionState
{
public:

	com_facebook_SessionState(const com_facebook_SessionState& cc);
	com_facebook_SessionState(void * proxy);
	// Public Constructors
	com_facebook_SessionState();
	// Default Destructor
	virtual ~com_facebook_SessionState();
	// Functions
	static std::vector<com_facebook_SessionState > values();
	static FacebookCXX::com_facebook_SessionState valueOf(FacebookCXX::java_lang_String& arg0);
	 bool isClosed();
	 bool isOpened();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_SessionState