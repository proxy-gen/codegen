/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//












// Generated Code 

#ifndef _android_webkit_JsResult
#define _android_webkit_JsResult
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

class android_webkit_JsResult : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_webkit_JsResult(const android_webkit_JsResult& cc);
	android_webkit_JsResult(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_webkit_JsResult();
	// Functions
	virtual void  cancel() ;
	virtual void  confirm() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_JsResult