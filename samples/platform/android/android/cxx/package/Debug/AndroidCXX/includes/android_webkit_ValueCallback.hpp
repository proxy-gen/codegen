/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_webkit_ValueCallback
#define _android_webkit_ValueCallback
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

class java_lang_Object;

class android_webkit_ValueCallback 
{
public:

	android_webkit_ValueCallback(const android_webkit_ValueCallback& cc);
	android_webkit_ValueCallback(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_webkit_ValueCallback();
	// Functions
	virtual void  onReceiveValue(AndroidCXX::java_lang_Object const& arg0) ;

protected:
	android_webkit_ValueCallback();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_ValueCallback