/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_webkit_WebChromeClient_CustomViewCallback
#define _android_webkit_WebChromeClient_CustomViewCallback
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

class android_webkit_WebChromeClient_CustomViewCallback : public AndroidCXX::java_lang_Object
{
public:

	android_webkit_WebChromeClient_CustomViewCallback(const android_webkit_WebChromeClient_CustomViewCallback& cc);
	android_webkit_WebChromeClient_CustomViewCallback(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebChromeClient_CustomViewCallback();
	// Functions
	virtual void  onCustomViewHidden() ;

protected:
	android_webkit_WebChromeClient_CustomViewCallback();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebChromeClient_CustomViewCallback