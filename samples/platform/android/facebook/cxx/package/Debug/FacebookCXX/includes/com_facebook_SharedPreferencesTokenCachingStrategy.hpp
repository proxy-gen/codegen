/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//




 		 
 		 
 		 







// Generated Code 

#ifndef _com_facebook_SharedPreferencesTokenCachingStrategy
#define _com_facebook_SharedPreferencesTokenCachingStrategy
//
// Scroll Down 
//


#include <android_content_Context.hpp>

#include <java_lang_String.hpp>


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



class com_facebook_SharedPreferencesTokenCachingStrategy : public FacebookCXX::com_facebook_TokenCachingStrategy
{
public:

	// Public Constructor
	com_facebook_SharedPreferencesTokenCachingStrategy(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	com_facebook_SharedPreferencesTokenCachingStrategy(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1,Proxy * aProxy = new Proxy());
	com_facebook_SharedPreferencesTokenCachingStrategy(const com_facebook_SharedPreferencesTokenCachingStrategy& cc);
	com_facebook_SharedPreferencesTokenCachingStrategy(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_SharedPreferencesTokenCachingStrategy();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_SharedPreferencesTokenCachingStrategy