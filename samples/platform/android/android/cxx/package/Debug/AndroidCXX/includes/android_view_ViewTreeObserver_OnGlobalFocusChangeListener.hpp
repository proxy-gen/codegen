/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _android_view_ViewTreeObserver_OnGlobalFocusChangeListener
#define _android_view_ViewTreeObserver_OnGlobalFocusChangeListener
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

class android_view_View;

class android_view_ViewTreeObserver_OnGlobalFocusChangeListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_ViewTreeObserver_OnGlobalFocusChangeListener(const android_view_ViewTreeObserver_OnGlobalFocusChangeListener& cc);
	android_view_ViewTreeObserver_OnGlobalFocusChangeListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewTreeObserver_OnGlobalFocusChangeListener();
	// Functions
	virtual void  onGlobalFocusChanged(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_View const& arg1) ;

protected:
	android_view_ViewTreeObserver_OnGlobalFocusChangeListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewTreeObserver_OnGlobalFocusChangeListener