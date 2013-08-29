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

	// Public Constructor
	android_content_IntentFilter_AuthorityEntry(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,Proxy * aProxy = new Proxy());
	android_content_IntentFilter_AuthorityEntry(const android_content_IntentFilter_AuthorityEntry& cc);
	android_content_IntentFilter_AuthorityEntry(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_IntentFilter_AuthorityEntry();
	// Functions
	virtual AndroidCXX::java_lang_String * getHost() ;
	virtual int  getPort() ;
	virtual int  match(AndroidCXX::android_net_Uri const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_IntentFilter_AuthorityEntry