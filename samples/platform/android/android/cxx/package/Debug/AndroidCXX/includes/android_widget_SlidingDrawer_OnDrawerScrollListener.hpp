/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//












// Generated Code 

#ifndef _android_widget_SlidingDrawer_OnDrawerScrollListener
#define _android_widget_SlidingDrawer_OnDrawerScrollListener
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

class android_widget_SlidingDrawer_OnDrawerScrollListener : public java_lang_Object
{
public:

	android_widget_SlidingDrawer_OnDrawerScrollListener(const android_widget_SlidingDrawer_OnDrawerScrollListener& cc);
	android_widget_SlidingDrawer_OnDrawerScrollListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SlidingDrawer_OnDrawerScrollListener();
	// Functions
	virtual void  onScrollEnded() ;
	virtual void  onScrollStarted() ;

protected:
	android_widget_SlidingDrawer_OnDrawerScrollListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SlidingDrawer_OnDrawerScrollListener