/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
 		 










// Generated Code 

#ifndef _com_facebook_TestSession_TestTokenCachingStrategy
#define _com_facebook_TestSession_TestTokenCachingStrategy
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>

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


class com_facebook_TestSession_TestTokenCachingStrategy
{
public:

	com_facebook_TestSession_TestTokenCachingStrategy(const com_facebook_TestSession_TestTokenCachingStrategy& cc);
	com_facebook_TestSession_TestTokenCachingStrategy(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_TestSession_TestTokenCachingStrategy();
	// Functions
	 void clear();
	 AndroidCXX::android_os_Bundle load();
	 void save(AndroidCXX::android_os_Bundle const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_TestSession_TestTokenCachingStrategy