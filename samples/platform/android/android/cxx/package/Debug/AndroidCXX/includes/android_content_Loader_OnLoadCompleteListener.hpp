/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 
 		 








// Generated Code 

#ifndef _android_content_Loader_OnLoadCompleteListener
#define _android_content_Loader_OnLoadCompleteListener
//
// Scroll Down 
//



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

class android_content_Loader;

class java_lang_Object;

class android_content_Loader_OnLoadCompleteListener 
{
public:

	android_content_Loader_OnLoadCompleteListener(const android_content_Loader_OnLoadCompleteListener& cc);
	android_content_Loader_OnLoadCompleteListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_Loader_OnLoadCompleteListener();
	// Functions
	virtual void  onLoadComplete(AndroidCXX::android_content_Loader const& arg0,AndroidCXX::java_lang_Object const& arg1) ;

protected:
	android_content_Loader_OnLoadCompleteListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_Loader_OnLoadCompleteListener