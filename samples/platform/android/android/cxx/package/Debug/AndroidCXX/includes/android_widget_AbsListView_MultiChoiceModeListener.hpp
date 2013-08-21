/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_widget_AbsListView_MultiChoiceModeListener
#define _android_widget_AbsListView_MultiChoiceModeListener
//
// Scroll Down 
//



#include <android_view_ActionMode_Callback.hpp>

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

class android_widget_AbsListView_MultiChoiceModeListener : public AndroidCXX::android_view_ActionMode_Callback
{
public:

	android_widget_AbsListView_MultiChoiceModeListener(const android_widget_AbsListView_MultiChoiceModeListener& cc);
	android_widget_AbsListView_MultiChoiceModeListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AbsListView_MultiChoiceModeListener();
	// Functions
	virtual void  onItemCheckedStateChanged(AndroidCXX::android_view_ActionMode const& arg0,int const& arg1,long const& arg2,bool const& arg3) ;

protected:
	android_widget_AbsListView_MultiChoiceModeListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsListView_MultiChoiceModeListener