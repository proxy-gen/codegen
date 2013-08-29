/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 










// Generated Code 

#ifndef _com_facebook_android_Facebook_SetterTokenCachingStrategy
#define _com_facebook_android_Facebook_SetterTokenCachingStrategy
//
// Scroll Down 
//


#include <android_os_Bundle.hpp>


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


class com_facebook_android_Facebook_SetterTokenCachingStrategy : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_android_Facebook_SetterTokenCachingStrategy(const com_facebook_android_Facebook_SetterTokenCachingStrategy& cc);
	com_facebook_android_Facebook_SetterTokenCachingStrategy(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_android_Facebook_SetterTokenCachingStrategy();
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

#endif // _com_facebook_android_Facebook_SetterTokenCachingStrategy