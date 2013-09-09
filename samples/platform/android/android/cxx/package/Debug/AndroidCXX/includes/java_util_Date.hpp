/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//




 		 











// Generated Code 

#ifndef _java_util_Date
#define _java_util_Date
//
// Scroll Down 
//


#include <java_lang_String.hpp>


#include <java_io_Serializable.hpp>

#include <java_lang_Cloneable.hpp>

#include <java_lang_Comparable.hpp>

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

class java_util_Date : public AndroidCXX::java_io_Serializable,public AndroidCXX::java_lang_Cloneable,public AndroidCXX::java_lang_Comparable
{
public:

	// Public Constructor
	java_util_Date(Proxy * aProxy = new Proxy());
	java_util_Date(int const& arg0,int const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	java_util_Date(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,Proxy * aProxy = new Proxy());
	java_util_Date(int const& arg0,int const& arg1,int const& arg2,int const& arg3,int const& arg4,int const& arg5,Proxy * aProxy = new Proxy());
	java_util_Date(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	java_util_Date(long const& arg0,Proxy * aProxy = new Proxy());
	java_util_Date(const java_util_Date& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_util_Date();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_util_Date