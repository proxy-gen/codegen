/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_view_View.hpp>

#include <android_view_DragEvent.hpp>

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

class android_view_View_OnDragListener
{
public:

	android_view_View_OnDragListener(const android_view_View_OnDragListener& cc);
	android_view_View_OnDragListener(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_view_View_OnDragListener();
	// 
	// Default Destructor
	virtual ~android_view_View_OnDragListener();
	// Functions
	 bool onDrag(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_DragEvent& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_OnDragListener