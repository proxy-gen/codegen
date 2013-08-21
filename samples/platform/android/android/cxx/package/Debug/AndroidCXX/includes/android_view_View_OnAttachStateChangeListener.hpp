/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 









// Generated Code 

#ifndef _android_view_View_OnAttachStateChangeListener
#define _android_view_View_OnAttachStateChangeListener
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

class android_view_View_OnAttachStateChangeListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_View_OnAttachStateChangeListener(const android_view_View_OnAttachStateChangeListener& cc);
	android_view_View_OnAttachStateChangeListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_View_OnAttachStateChangeListener();
	// Functions
	virtual void  onViewAttachedToWindow(AndroidCXX::android_view_View const& arg0) ;
	virtual void  onViewDetachedFromWindow(AndroidCXX::android_view_View const& arg0) ;

protected:
	android_view_View_OnAttachStateChangeListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_OnAttachStateChangeListener