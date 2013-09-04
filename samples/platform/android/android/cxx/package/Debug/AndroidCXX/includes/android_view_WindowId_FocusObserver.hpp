/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 










// Generated Code 

#ifndef _android_view_WindowId_FocusObserver
#define _android_view_WindowId_FocusObserver
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

class android_view_WindowId;

class android_view_WindowId_FocusObserver : public AndroidCXX::java_lang_Object
{
public:

	android_view_WindowId_FocusObserver(const android_view_WindowId_FocusObserver& cc);
	android_view_WindowId_FocusObserver(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_WindowId_FocusObserver();
	// Functions
	virtual void  onFocusGained(AndroidCXX::android_view_WindowId const& arg0) ;
	virtual void  onFocusLost(AndroidCXX::android_view_WindowId const& arg0) ;

protected:
	android_view_WindowId_FocusObserver();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_WindowId_FocusObserver