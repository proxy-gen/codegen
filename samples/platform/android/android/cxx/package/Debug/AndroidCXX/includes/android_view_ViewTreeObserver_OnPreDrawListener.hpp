/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_view_ViewTreeObserver_OnPreDrawListener
#define _android_view_ViewTreeObserver_OnPreDrawListener
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

class android_view_ViewTreeObserver_OnPreDrawListener : public java_lang_Object
{
public:

	android_view_ViewTreeObserver_OnPreDrawListener(const android_view_ViewTreeObserver_OnPreDrawListener& cc);
	android_view_ViewTreeObserver_OnPreDrawListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewTreeObserver_OnPreDrawListener();
	// Functions
	virtual bool  onPreDraw() ;

protected:
	android_view_ViewTreeObserver_OnPreDrawListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewTreeObserver_OnPreDrawListener