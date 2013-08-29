/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	








// Generated Code 

#ifndef _java_net_FileNameMap
#define _java_net_FileNameMap
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

class java_lang_String;

class java_net_FileNameMap : public AndroidCXX::java_lang_Object
{
public:

	java_net_FileNameMap(const java_net_FileNameMap& cc);
	java_net_FileNameMap(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_net_FileNameMap();
	// Functions
	virtual AndroidCXX::java_lang_String * getContentTypeFor(AndroidCXX::java_lang_String const& arg0) ;

protected:
	java_net_FileNameMap();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_net_FileNameMap