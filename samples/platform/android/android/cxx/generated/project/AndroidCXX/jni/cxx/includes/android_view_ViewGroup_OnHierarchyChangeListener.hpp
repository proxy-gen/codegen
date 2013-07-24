/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 
 		 
 		 









// Generated Code 

#ifndef _android_view_ViewGroup_OnHierarchyChangeListener
#define _android_view_ViewGroup_OnHierarchyChangeListener
//
// Scroll Down 
//


#include <android_view_View.hpp>

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

class android_view_ViewGroup_OnHierarchyChangeListener
{
public:

	android_view_ViewGroup_OnHierarchyChangeListener(const android_view_ViewGroup_OnHierarchyChangeListener& cc);
	android_view_ViewGroup_OnHierarchyChangeListener(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_view_ViewGroup_OnHierarchyChangeListener();
	// 
	// Default Destructor
	virtual ~android_view_ViewGroup_OnHierarchyChangeListener();
	// Functions
	 void onChildViewAdded(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_View& arg1);
	 void onChildViewRemoved(AndroidCXX::android_view_View& arg0,AndroidCXX::android_view_View& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewGroup_OnHierarchyChangeListener