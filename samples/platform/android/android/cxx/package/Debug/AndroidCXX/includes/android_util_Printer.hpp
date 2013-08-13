/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_util_Printer
#define _android_util_Printer
//
// Scroll Down 
//



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

class android_util_Printer 
{
public:

	android_util_Printer(const android_util_Printer& cc);
	android_util_Printer(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_util_Printer();
	// Functions
	virtual void  println(AndroidCXX::java_lang_String const& arg0) ;

protected:
	android_util_Printer();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_Printer