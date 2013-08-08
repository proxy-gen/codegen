/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//




 		 
 		 
 		 
 		 









// Generated Code 

#ifndef _java_lang_Exception
#define _java_lang_Exception
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Throwable.hpp>

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

class java_lang_Throwable;

class java_lang_Exception
{
public:

	java_lang_Exception(const java_lang_Exception& cc);
	java_lang_Exception(Proxy proxy);
	// Public Constructors
	java_lang_Exception();
	java_lang_Exception(AndroidCXX::java_lang_String const& arg0);
	java_lang_Exception(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Throwable const& arg1);
	java_lang_Exception(AndroidCXX::java_lang_Throwable const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Exception();
	// Functions
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Exception