/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_view_ViewTreeObserver_OnScrollChangedListener
#define _android_view_ViewTreeObserver_OnScrollChangedListener
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

class android_view_ViewTreeObserver_OnScrollChangedListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_ViewTreeObserver_OnScrollChangedListener(const android_view_ViewTreeObserver_OnScrollChangedListener& cc);
	android_view_ViewTreeObserver_OnScrollChangedListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewTreeObserver_OnScrollChangedListener();
	// Functions
	virtual void  onScrollChanged() ;

protected:
	android_view_ViewTreeObserver_OnScrollChangedListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewTreeObserver_OnScrollChangedListener