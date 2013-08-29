/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 









// Generated Code 

#ifndef _android_view_InputQueue_Callback
#define _android_view_InputQueue_Callback
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

namespace AndroidCXX {

// Forward Declarations

class android_view_InputQueue;

class android_view_InputQueue_Callback : public AndroidCXX::java_lang_Object
{
public:

	android_view_InputQueue_Callback(const android_view_InputQueue_Callback& cc);
	android_view_InputQueue_Callback(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_InputQueue_Callback();
	// Functions
	virtual void  onInputQueueCreated(AndroidCXX::android_view_InputQueue const& arg0) ;
	virtual void  onInputQueueDestroyed(AndroidCXX::android_view_InputQueue const& arg0) ;

protected:
	android_view_InputQueue_Callback();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_InputQueue_Callback