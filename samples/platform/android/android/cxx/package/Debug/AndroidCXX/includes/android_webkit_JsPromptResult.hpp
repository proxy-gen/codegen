/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_webkit_JsPromptResult
#define _android_webkit_JsPromptResult
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

class android_webkit_JsPromptResult 
{
public:

	// Public Constructor
	android_webkit_JsPromptResult(const android_webkit_JsPromptResult& cc);
	android_webkit_JsPromptResult(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_webkit_JsPromptResult();
	// Functions
	virtual void  confirm(AndroidCXX::java_lang_String const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_JsPromptResult