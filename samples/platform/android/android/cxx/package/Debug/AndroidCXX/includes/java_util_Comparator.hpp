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

class java_lang_Object;

class java_util_Comparator 
{
public:

	java_util_Comparator(const java_util_Comparator& cc);
	java_util_Comparator(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_util_Comparator();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  compare(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1) ;

protected:
	java_util_Comparator();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Comparator