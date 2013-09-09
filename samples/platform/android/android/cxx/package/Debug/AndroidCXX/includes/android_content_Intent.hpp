/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//




 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 











// Generated Code 

#ifndef _android_content_Intent
#define _android_content_Intent
//
// Scroll Down 
//


#include <android_content_Context.hpp>

#include <java_lang_Class.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <android_net_Uri.hpp>


#include <android_os_Parcelable.hpp>

#include <java_lang_Cloneable.hpp>

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

class android_content_Context;

class java_lang_Class;

class java_lang_Object;


class java_lang_String;

class android_net_Uri;

class android_content_Intent : public AndroidCXX::android_os_Parcelable,public AndroidCXX::java_lang_Cloneable
{
public:

	// Public Constructor
	android_content_Intent(Proxy * aProxy = new Proxy());
	android_content_Intent(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_Class const& arg1,Proxy * aProxy = new Proxy());
	android_content_Intent(AndroidCXX::android_content_Intent const& arg0,Proxy * aProxy = new Proxy());
	android_content_Intent(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	android_content_Intent(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_net_Uri const& arg1,Proxy * aProxy = new Proxy());
	android_content_Intent(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_net_Uri const& arg1,AndroidCXX::android_content_Context const& arg2,AndroidCXX::java_lang_Class const& arg3,Proxy * aProxy = new Proxy());
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_Intent();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_Intent