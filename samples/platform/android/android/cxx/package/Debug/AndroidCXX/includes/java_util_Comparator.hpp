/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 









// Generated Code 

#ifndef _java_util_Comparator
#define _java_util_Comparator
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


class java_util_Comparator : public AndroidCXX::java_lang_Object
{
public:

	java_util_Comparator(const java_util_Comparator& cc);
	java_util_Comparator(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_Comparator();
	// Functions
	virtual int  compare(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;

protected:
	java_util_Comparator();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Comparator