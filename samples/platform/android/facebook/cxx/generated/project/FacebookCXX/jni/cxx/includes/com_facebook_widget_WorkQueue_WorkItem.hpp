/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//













// Generated Code 

#ifndef _com_facebook_widget_WorkQueue_WorkItem
#define _com_facebook_widget_WorkQueue_WorkItem
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

namespace FacebookCXX {

// 
// 

// Forward Declarations

class com_facebook_widget_WorkQueue_WorkItem
{
public:

	com_facebook_widget_WorkQueue_WorkItem(const com_facebook_widget_WorkQueue_WorkItem& cc);
	com_facebook_widget_WorkQueue_WorkItem(void * proxy);
	// Public Constructors
	com_facebook_widget_WorkQueue_WorkItem();
	// Default Destructor
	virtual ~com_facebook_widget_WorkQueue_WorkItem();
	// Functions
	 bool cancel();
	 bool isRunning();
	 void moveToFront();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WorkQueue_WorkItem