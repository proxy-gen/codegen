/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 	
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 










// Generated Code 

#ifndef _android_app_LoaderManager_LoaderCallbacks
#define _android_app_LoaderManager_LoaderCallbacks
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

class android_os_Bundle;

class android_content_Loader;


class android_app_LoaderManager_LoaderCallbacks : public AndroidCXX::java_lang_Object
{
public:

	android_app_LoaderManager_LoaderCallbacks(const android_app_LoaderManager_LoaderCallbacks& cc);
	android_app_LoaderManager_LoaderCallbacks(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_app_LoaderManager_LoaderCallbacks();
	// Functions
	virtual AndroidCXX::android_content_Loader * onCreateLoader(int const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  onLoadFinished(AndroidCXX::android_content_Loader const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual void  onLoaderReset(AndroidCXX::android_content_Loader const& arg0) ;

protected:
	android_app_LoaderManager_LoaderCallbacks();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_app_LoaderManager_LoaderCallbacks