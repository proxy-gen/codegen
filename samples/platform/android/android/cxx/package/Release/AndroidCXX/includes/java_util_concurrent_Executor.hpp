/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#ifndef _java_util_concurrent_Executor
#define _java_util_concurrent_Executor
//
// Scroll Down 
//


#include <java_lang_Runnable.hpp>

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

class java_lang_Runnable;

class java_util_concurrent_Executor
{
public:

	java_util_concurrent_Executor(const java_util_concurrent_Executor& cc);
	java_util_concurrent_Executor(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_concurrent_Executor();
	// Functions
	 void execute(AndroidCXX::java_lang_Runnable const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_concurrent_Executor