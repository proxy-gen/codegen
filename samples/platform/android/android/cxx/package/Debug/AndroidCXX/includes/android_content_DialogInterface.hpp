/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//












// Generated Code 

#ifndef _android_content_DialogInterface
#define _android_content_DialogInterface
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

class android_content_DialogInterface : public AndroidCXX::java_lang_Object
{
public:

	android_content_DialogInterface(const android_content_DialogInterface& cc);
	android_content_DialogInterface(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_DialogInterface();
	// Functions
	virtual void  cancel() ;
	virtual void  dismiss() ;

protected:
	android_content_DialogInterface();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_DialogInterface