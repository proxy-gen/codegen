/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//




 		 






// Generated Code 

#ifndef _android_content_ContextWrapper
#define _android_content_ContextWrapper
//
// Scroll Down 
//


#include <android_content_Context.hpp>


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


class android_content_ContextWrapper : public AndroidCXX::android_content_Context
{
public:

	// Public Constructor
	android_content_ContextWrapper(AndroidCXX::android_content_Context const& arg0,Proxy * aProxy = new Proxy());
	android_content_ContextWrapper(const android_content_ContextWrapper& cc);
	android_content_ContextWrapper(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_ContextWrapper();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContextWrapper