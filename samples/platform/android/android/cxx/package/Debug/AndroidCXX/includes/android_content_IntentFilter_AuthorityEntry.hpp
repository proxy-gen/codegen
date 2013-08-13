/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 


 		 
 		 









// Generated Code 

#ifndef _android_content_IntentFilter_AuthorityEntry
#define _android_content_IntentFilter_AuthorityEntry
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_net_Uri.hpp>


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

class android_net_Uri;

class android_content_IntentFilter_AuthorityEntry 
{
public:

	// Public ConstrucXXX
	android_content_IntentFilter_AuthorityEntry(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	android_content_IntentFilter_AuthorityEntry(const android_content_IntentFilter_AuthorityEntry& cc);
	android_content_IntentFilter_AuthorityEntry(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_IntentFilter_AuthorityEntry();
	// Functions
	virtual int  getPort() ;
	virtual AndroidCXX::java_lang_String * getHost() ;
	virtual int  match(AndroidCXX::android_net_Uri const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_IntentFilter_AuthorityEntry