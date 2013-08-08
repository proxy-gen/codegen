/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class android_webkit_WebView_HitTestResult
{
public:

	android_webkit_WebView_HitTestResult(const android_webkit_WebView_HitTestResult& cc);
	android_webkit_WebView_HitTestResult(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebView_HitTestResult();
	// Functions
	 int getType();
	 AndroidCXX::java_lang_String getExtra();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebView_HitTestResult