/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 









// Generated Code 

#ifndef _android_content_ComponentCallbacks
#define _android_content_ComponentCallbacks
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

class android_content_res_Configuration;

class android_content_ComponentCallbacks : public AndroidCXX::java_lang_Object
{
public:

	android_content_ComponentCallbacks(const android_content_ComponentCallbacks& cc);
	android_content_ComponentCallbacks(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_ComponentCallbacks();
	// Functions
	virtual void  onConfigurationChanged(AndroidCXX::android_content_res_Configuration const& arg0) ;
	virtual void  onLowMemory() ;

protected:
	android_content_ComponentCallbacks();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ComponentCallbacks