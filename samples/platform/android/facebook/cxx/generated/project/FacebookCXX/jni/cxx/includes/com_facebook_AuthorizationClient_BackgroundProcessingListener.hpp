/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//












// Generated Code 

#ifndef _com_facebook_AuthorizationClient_BackgroundProcessingListener
#define _com_facebook_AuthorizationClient_BackgroundProcessingListener
//
// Scroll Down 
//


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

class com_facebook_AuthorizationClient_BackgroundProcessingListener
{
public:

	com_facebook_AuthorizationClient_BackgroundProcessingListener(const com_facebook_AuthorizationClient_BackgroundProcessingListener& cc);
	com_facebook_AuthorizationClient_BackgroundProcessingListener(void * proxy);
	// Public Constructors
	com_facebook_AuthorizationClient_BackgroundProcessingListener();
	// Default Destructor
	virtual ~com_facebook_AuthorizationClient_BackgroundProcessingListener();
	// Functions
	 void onBackgroundProcessingStarted();
	 void onBackgroundProcessingStopped();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_AuthorizationClient_BackgroundProcessingListener