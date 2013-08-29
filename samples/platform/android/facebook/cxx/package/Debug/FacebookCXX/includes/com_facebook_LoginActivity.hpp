/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 












// Generated Code 

#ifndef _com_facebook_LoginActivity
#define _com_facebook_LoginActivity
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


class com_facebook_LoginActivity : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	com_facebook_LoginActivity(Proxy * aProxy = new Proxy());
	com_facebook_LoginActivity(const com_facebook_LoginActivity& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_LoginActivity();
	// Functions
	virtual void  onCreate(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  onPause() ;
	virtual void  onResume() ;
	virtual void  onSaveInstanceState(AndroidCXX::android_os_Bundle const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_LoginActivity