/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	









// Generated Code 

#ifndef _android_webkit_WebView_HitTestResult
#define _android_webkit_WebView_HitTestResult
//
// Scroll Down 
//


#include <java_lang_String.hpp>


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

class java_lang_String;

class android_webkit_WebView_HitTestResult : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_webkit_WebView_HitTestResult(const android_webkit_WebView_HitTestResult& cc);
	android_webkit_WebView_HitTestResult(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebView_HitTestResult();
	// Functions
	virtual AndroidCXX::java_lang_String * getExtra() ;
	virtual int  getType() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebView_HitTestResult