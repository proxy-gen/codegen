/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//


 		 
 		 








// Generated Code 

#ifndef _android_os_Bundle
#define _android_os_Bundle
//
// Scroll Down 
//


#include <java_lang_String.hpp>


#include <java_lang_Cloneable.hpp>

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

class android_os_Bundle : public AndroidCXX::java_lang_Cloneable
{
public:

	// Public Constructor
	android_os_Bundle(Proxy * aProxy = new Proxy());
	android_os_Bundle(const android_os_Bundle& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_os_Bundle();
	// Functions
	virtual void  putString(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Bundle