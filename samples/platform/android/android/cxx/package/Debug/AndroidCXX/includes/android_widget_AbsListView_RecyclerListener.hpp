/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_widget_AbsListView_RecyclerListener
#define _android_widget_AbsListView_RecyclerListener
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

class android_view_View;

class android_widget_AbsListView_RecyclerListener 
{
public:

	android_widget_AbsListView_RecyclerListener(const android_widget_AbsListView_RecyclerListener& cc);
	android_widget_AbsListView_RecyclerListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_AbsListView_RecyclerListener();
	// Functions
	virtual void  onMovedToScrapHeap(AndroidCXX::android_view_View const& arg0) ;

protected:
	android_widget_AbsListView_RecyclerListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsListView_RecyclerListener