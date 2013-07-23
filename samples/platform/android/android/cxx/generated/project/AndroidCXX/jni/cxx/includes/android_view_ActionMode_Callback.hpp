/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 











// Generated Code 

#ifndef _android_view_ActionMode_Callback
#define _android_view_ActionMode_Callback
//
// Scroll Down 
//


#include <android_view_ActionMode.hpp>

#include <android_view_Menu.hpp>

#include <android_view_MenuItem.hpp>

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

class android_view_ActionMode;

class android_view_Menu;

class android_view_MenuItem;

class android_view_ActionMode_Callback
{
public:

	android_view_ActionMode_Callback(const android_view_ActionMode_Callback& cc);
	android_view_ActionMode_Callback(void * proxy);
	// Public Constructors
	android_view_ActionMode_Callback();
	// Default Destructor
	virtual ~android_view_ActionMode_Callback();
	// Functions
	 bool onCreateActionMode(AndroidCXX::android_view_ActionMode& arg0,AndroidCXX::android_view_Menu& arg1);
	 bool onPrepareActionMode(AndroidCXX::android_view_ActionMode& arg0,AndroidCXX::android_view_Menu& arg1);
	 bool onActionItemClicked(AndroidCXX::android_view_ActionMode& arg0,AndroidCXX::android_view_MenuItem& arg1);
	 void onDestroyActionMode(AndroidCXX::android_view_ActionMode& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ActionMode_Callback