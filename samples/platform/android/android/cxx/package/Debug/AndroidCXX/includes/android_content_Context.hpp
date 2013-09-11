/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//








// Generated Code 

#ifndef _android_content_Context
#define _android_content_Context
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

class android_content_Context : public AndroidCXX::java_lang_Object
{
public:

	android_content_Context(const android_content_Context& cc);
	android_content_Context(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_Context();
	// Functions

protected:
	android_content_Context();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_Context