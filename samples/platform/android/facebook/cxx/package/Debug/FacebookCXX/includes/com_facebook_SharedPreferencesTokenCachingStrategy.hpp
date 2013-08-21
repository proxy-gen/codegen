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


#include <android_os_Bundle.hpp>

#include <android_content_Context.hpp>

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




class com_facebook_SharedPreferencesTokenCachingStrategy : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	com_facebook_SharedPreferencesTokenCachingStrategy(AndroidCXX::android_content_Context const& arg0);
	com_facebook_SharedPreferencesTokenCachingStrategy(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1);
	com_facebook_SharedPreferencesTokenCachingStrategy(const com_facebook_SharedPreferencesTokenCachingStrategy& cc);
	com_facebook_SharedPreferencesTokenCachingStrategy(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~com_facebook_SharedPreferencesTokenCachingStrategy();
	// Functions
	virtual void  clear() ;
	virtual AndroidCXX::android_os_Bundle * load() ;
	virtual void  save(AndroidCXX::android_os_Bundle const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_SharedPreferencesTokenCachingStrategy