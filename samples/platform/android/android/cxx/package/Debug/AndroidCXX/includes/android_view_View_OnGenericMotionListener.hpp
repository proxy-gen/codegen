/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _android_view_View_OnGenericMotionListener
#define _android_view_View_OnGenericMotionListener
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

class android_view_MotionEvent;

class android_view_View_OnGenericMotionListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_View_OnGenericMotionListener(const android_view_View_OnGenericMotionListener& cc);
	android_view_View_OnGenericMotionListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_View_OnGenericMotionListener();
	// Functions
	virtual bool  onGenericMotion(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_MotionEvent const& arg1) ;

protected:
	android_view_View_OnGenericMotionListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_OnGenericMotionListener