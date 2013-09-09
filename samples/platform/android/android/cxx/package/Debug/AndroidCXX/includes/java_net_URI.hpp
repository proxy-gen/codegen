/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//




 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 










// Generated Code 

#ifndef _java_net_URI
#define _java_net_URI
//
// Scroll Down 
//


#include <java_lang_String.hpp>


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

class java_net_URI : public AndroidCXX::java_io_Serializable,public AndroidCXX::java_lang_Comparable
{
public:

	// Public Constructor
	java_net_URI(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	java_net_URI(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,Proxy * aProxy = new Proxy());
	java_net_URI(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,int const& arg3,AndroidCXX::java_lang_String const& arg4,AndroidCXX::java_lang_String const& arg5,AndroidCXX::java_lang_String const& arg6,Proxy * aProxy = new Proxy());
	java_net_URI(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3,Proxy * aProxy = new Proxy());
	java_net_URI(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::java_lang_String const& arg3,AndroidCXX::java_lang_String const& arg4,Proxy * aProxy = new Proxy());
	java_net_URI(const java_net_URI& cc);
	java_net_URI(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_net_URI();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_URI