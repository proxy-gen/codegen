/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//




 		 
 		 
 		 
 		 
 		 
 		 









// Generated Code 

#ifndef _java_io_File
#define _java_io_File
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_net_URI.hpp>


#include <java_io_Serializable.hpp>

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

class java_net_URI;

class java_io_File : public AndroidCXX::java_io_Serializable,public AndroidCXX::java_lang_Comparable
{
public:

	// Public Constructor
	java_io_File(AndroidCXX::java_io_File const& arg0,AndroidCXX::java_lang_String const& arg1,Proxy * aProxy = new Proxy());
	java_io_File(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	java_io_File(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,Proxy * aProxy = new Proxy());
	java_io_File(AndroidCXX::java_net_URI const& arg0,Proxy * aProxy = new Proxy());
	java_io_File(const java_io_File& cc);
	java_io_File(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_io_File();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_File