/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_lang_Object.hpp>

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

class com_facebook_widget_WorkQueue_WorkItem : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_widget_WorkQueue_WorkItem(const com_facebook_widget_WorkQueue_WorkItem& cc);
	com_facebook_widget_WorkQueue_WorkItem(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_widget_WorkQueue_WorkItem();
	// Functions
	virtual bool  cancel() ;
	virtual bool  isRunning() ;
	virtual void  moveToFront() ;

protected:
	com_facebook_widget_WorkQueue_WorkItem();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_widget_WorkQueue_WorkItem