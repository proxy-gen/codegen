/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _java_lang_Runnable
#define _java_lang_Runnable
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

class java_lang_Runnable : public java_lang_Object
{
public:

	java_lang_Runnable(const java_lang_Runnable& cc);
	java_lang_Runnable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_Runnable();
	// Functions
	virtual void  run() ;

protected:
	java_lang_Runnable();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Runnable