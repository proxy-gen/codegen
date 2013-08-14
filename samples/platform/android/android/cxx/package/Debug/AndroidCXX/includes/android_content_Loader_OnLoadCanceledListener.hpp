/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 








// Generated Code 

#ifndef _android_content_Loader_OnLoadCanceledListener
#define _android_content_Loader_OnLoadCanceledListener
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

class android_content_Loader;


class android_content_Loader_OnLoadCanceledListener : public java_lang_Object
{
public:

	android_content_Loader_OnLoadCanceledListener(const android_content_Loader_OnLoadCanceledListener& cc);
	android_content_Loader_OnLoadCanceledListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_Loader_OnLoadCanceledListener();
	// Functions
	virtual void  onLoadCanceled(AndroidCXX::android_content_Loader const& arg0) ;

protected:
	android_content_Loader_OnLoadCanceledListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_Loader_OnLoadCanceledListener