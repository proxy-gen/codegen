/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	









// Generated Code 

#ifndef _java_util_Enumeration
#define _java_util_Enumeration
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


class java_util_Enumeration : public AndroidCXX::java_lang_Object
{
public:

	java_util_Enumeration(const java_util_Enumeration& cc);
	java_util_Enumeration(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_Enumeration();
	// Functions
	virtual bool  hasMoreElements() ;
	virtual AndroidCXX::java_lang_Object * nextElement() ;

protected:
	java_util_Enumeration();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Enumeration