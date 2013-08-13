/*
 * Header (Instance CXX)
 * Author: codegen
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
	android_view_ActionMode_Callback(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ActionMode_Callback();
	// Functions
	virtual bool  onCreateActionMode(AndroidCXX::android_view_ActionMode const& arg0,AndroidCXX::android_view_Menu const& arg1) ;
	virtual bool  onPrepareActionMode(AndroidCXX::android_view_ActionMode const& arg0,AndroidCXX::android_view_Menu const& arg1) ;
	virtual bool  onActionItemClicked(AndroidCXX::android_view_ActionMode const& arg0,AndroidCXX::android_view_MenuItem const& arg1) ;
	virtual void  onDestroyActionMode(AndroidCXX::android_view_ActionMode const& arg0) ;

protected:
	android_view_ActionMode_Callback();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ActionMode_Callback