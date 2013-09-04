/*
 * Header (Instance CXX)
 * Author: codegen
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

class com_facebook_AuthorizationClient_BackgroundProcessingListener : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_AuthorizationClient_BackgroundProcessingListener(const com_facebook_AuthorizationClient_BackgroundProcessingListener& cc);
	com_facebook_AuthorizationClient_BackgroundProcessingListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_AuthorizationClient_BackgroundProcessingListener();
	// Functions
	virtual void  onBackgroundProcessingStarted() ;
	virtual void  onBackgroundProcessingStopped() ;

protected:
	com_facebook_AuthorizationClient_BackgroundProcessingListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_AuthorizationClient_BackgroundProcessingListener