/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_app_ActionBar_OnMenuVisibilityListener
#define _android_app_ActionBar_OnMenuVisibilityListener
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

namespace AndroidCXX {

// Forward Declarations

class android_app_ActionBar_OnMenuVisibilityListener : public java_lang_Object
{
public:

	android_app_ActionBar_OnMenuVisibilityListener(const android_app_ActionBar_OnMenuVisibilityListener& cc);
	android_app_ActionBar_OnMenuVisibilityListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_ActionBar_OnMenuVisibilityListener();
	// Functions
	virtual void  onMenuVisibilityChanged(bool const& arg0) ;

protected:
	android_app_ActionBar_OnMenuVisibilityListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_ActionBar_OnMenuVisibilityListener