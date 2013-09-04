/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 









// Generated Code 

#ifndef _com_facebook_LegacyHelper
#define _com_facebook_LegacyHelper
//
// Scroll Down 
//


#include <com_facebook_Session.hpp>

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

class com_facebook_Session;


class com_facebook_LegacyHelper : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_LegacyHelper(Proxy * aProxy = new Proxy());
	com_facebook_LegacyHelper(const com_facebook_LegacyHelper& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_LegacyHelper();
	// Functions
	static void  extendTokenCompleted(FacebookCXX::com_facebook_Session const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_LegacyHelper