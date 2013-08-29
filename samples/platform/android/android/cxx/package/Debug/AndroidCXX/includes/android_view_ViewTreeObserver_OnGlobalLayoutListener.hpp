/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_view_ViewTreeObserver_OnGlobalLayoutListener
#define _android_view_ViewTreeObserver_OnGlobalLayoutListener
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

class android_view_ViewTreeObserver_OnGlobalLayoutListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_ViewTreeObserver_OnGlobalLayoutListener(const android_view_ViewTreeObserver_OnGlobalLayoutListener& cc);
	android_view_ViewTreeObserver_OnGlobalLayoutListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewTreeObserver_OnGlobalLayoutListener();
	// Functions
	virtual void  onGlobalLayout() ;

protected:
	android_view_ViewTreeObserver_OnGlobalLayoutListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewTreeObserver_OnGlobalLayoutListener