/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _android_view_View_OnDragListener
#define _android_view_View_OnDragListener
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

class android_view_DragEvent;

class android_view_View_OnDragListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_View_OnDragListener(const android_view_View_OnDragListener& cc);
	android_view_View_OnDragListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_View_OnDragListener();
	// Functions
	virtual bool  onDrag(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_DragEvent const& arg1) ;

protected:
	android_view_View_OnDragListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_OnDragListener