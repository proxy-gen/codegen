/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _java_lang_Comparable
#define _java_lang_Comparable
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


class java_lang_Comparable : public AndroidCXX::java_lang_Object
{
public:

	java_lang_Comparable(const java_lang_Comparable& cc);
	java_lang_Comparable(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_lang_Comparable();
	// Functions
	virtual int  compareTo(AndroidCXX::java_lang_Object const& arg0) ;

protected:
	java_lang_Comparable();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_Comparable