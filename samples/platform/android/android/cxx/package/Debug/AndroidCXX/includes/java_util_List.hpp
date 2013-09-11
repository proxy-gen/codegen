/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#ifndef _java_util_List
#define _java_util_List
//
// Scroll Down 
//



#include <java_util_Collection.hpp>

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

class java_util_List : public AndroidCXX::java_util_Collection
{
public:

	java_util_List(const java_util_List& cc);
	java_util_List(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_List();
	// Functions
	virtual bool  add(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  size() ;

protected:
	java_util_List();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_List