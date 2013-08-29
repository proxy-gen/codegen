/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _com_facebook_Request_KeyValueSerializer
#define _com_facebook_Request_KeyValueSerializer
//
// Scroll Down 
//


#include <java_lang_String.hpp>


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

namespace FacebookCXX {

// Forward Declarations


class com_facebook_Request_KeyValueSerializer : public AndroidCXX::java_lang_Object
{
public:

	com_facebook_Request_KeyValueSerializer(const com_facebook_Request_KeyValueSerializer& cc);
	com_facebook_Request_KeyValueSerializer(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_Request_KeyValueSerializer();
	// Functions
	virtual void  writeString(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;

protected:
	com_facebook_Request_KeyValueSerializer();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_Request_KeyValueSerializer