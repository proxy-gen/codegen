/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <com_facebook_widget_WorkQueue_WorkItem.hpp>

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

class com_facebook_widget_WorkQueue_WorkNode : public FacebookCXX::com_facebook_widget_WorkQueue_WorkItem
{
public:

	// Public Constructor
	com_facebook_widget_WorkQueue_WorkNode(const com_facebook_widget_WorkQueue_WorkNode& cc);
	com_facebook_widget_WorkQueue_WorkNode(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_WorkQueue_WorkNode();
	// Functions
	virtual bool  cancel() ;
	virtual bool  isRunning() ;
	virtual void  moveToFront() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WorkQueue_WorkNode