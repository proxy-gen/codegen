/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//


 	
	
 	
 		 
 		 








// Generated Code 

#ifndef _java_util_Arrays
#define _java_util_Arrays
//
// Scroll Down 
//


#include <java_util_List.hpp>

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

class java_util_List;


class java_util_Arrays : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	java_util_Arrays(const java_util_Arrays& cc);
	java_util_Arrays(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_Arrays();
	// Functions
	static AndroidCXX::java_util_List * asList(std::vector<AndroidCXX::java_lang_Object*> const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Arrays