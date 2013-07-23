/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//













// Generated Code 

#ifndef _com_facebook_widget_WorkQueue_WorkNode
#define _com_facebook_widget_WorkQueue_WorkNode
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

// Forward Declarations

class com_facebook_widget_WorkQueue_WorkNode
{
public:

	com_facebook_widget_WorkQueue_WorkNode(const com_facebook_widget_WorkQueue_WorkNode& cc);
	com_facebook_widget_WorkQueue_WorkNode(void * proxy);
	// Public Constructors
	com_facebook_widget_WorkQueue_WorkNode();
	// Default Destructor
	virtual ~com_facebook_widget_WorkQueue_WorkNode();
	// Functions
	 bool cancel();
	 bool isRunning();
	 void moveToFront();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WorkQueue_WorkNode