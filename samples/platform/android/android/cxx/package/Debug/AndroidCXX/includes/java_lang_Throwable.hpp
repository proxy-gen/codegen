/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//




 		 
 		 
 		 
 		 









// Generated Code 

#ifndef _java_lang_Throwable
#define _java_lang_Throwable
//
// Scroll Down 
//


#include <java_lang_String.hpp>


#include <java_io_Serializable.hpp>

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


class java_lang_Throwable : public AndroidCXX::java_io_Serializable
{
public:

	// Public Constructor
	java_lang_Throwable(Proxy * aProxy = new Proxy());
	java_lang_Throwable(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	java_lang_Throwable(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Throwable const& arg1,Proxy * aProxy = new Proxy());
	java_lang_Throwable(AndroidCXX::java_lang_Throwable const& arg0,Proxy * aProxy = new Proxy());
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_lang_Throwable();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Throwable