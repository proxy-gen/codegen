/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 		 









// Generated Code 

#ifndef _android_widget_AbsListView_OnScrollListener
#define _android_widget_AbsListView_OnScrollListener
//
// Scroll Down 
//


#include <android_widget_AbsListView.hpp>

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

class android_widget_AbsListView;

class android_widget_AbsListView_OnScrollListener
{
public:

	android_widget_AbsListView_OnScrollListener(const android_widget_AbsListView_OnScrollListener& cc);
	android_widget_AbsListView_OnScrollListener(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_widget_AbsListView_OnScrollListener();
	// 
	// Default Destructor
	virtual ~android_widget_AbsListView_OnScrollListener();
	// Functions
	 void onScrollStateChanged(AndroidCXX::android_widget_AbsListView& arg0,int& arg1);
	 void onScroll(AndroidCXX::android_widget_AbsListView& arg0,int& arg1,int& arg2,int& arg3);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_AbsListView_OnScrollListener