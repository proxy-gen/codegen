/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <com_facebook_TokenCachingStrategy.hpp>

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


class com_facebook_TestSession_TestTokenCachingStrategy : public FacebookCXX::com_facebook_TokenCachingStrategy
{
public:

	// Public Constructor
	com_facebook_TestSession_TestTokenCachingStrategy(const com_facebook_TestSession_TestTokenCachingStrategy& cc);
	com_facebook_TestSession_TestTokenCachingStrategy(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_TestSession_TestTokenCachingStrategy();
	// Functions
	virtual void  clear() ;
	virtual AndroidCXX::android_os_Bundle * load() ;
	virtual void  save(AndroidCXX::android_os_Bundle const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_TestSession_TestTokenCachingStrategy