/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


class com_facebook_LegacyHelper
{
public:

	com_facebook_LegacyHelper(const com_facebook_LegacyHelper& cc);
	com_facebook_LegacyHelper(void * proxy);
	// Public Constructors
	com_facebook_LegacyHelper();
	// TODO: remove
	// 
	// Default Destructor
	virtual ~com_facebook_LegacyHelper();
	// Functions
	static void extendTokenCompleted(FacebookCXX::com_facebook_Session& arg0,AndroidCXX::android_os_Bundle& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_LegacyHelper