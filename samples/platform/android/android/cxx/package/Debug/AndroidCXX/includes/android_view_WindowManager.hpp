/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 









// Generated Code 

#ifndef _android_view_WindowManager
#define _android_view_WindowManager
//
// Scroll Down 
//



#include <android_view_ViewManager.hpp>

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

class android_view_Display;

class android_view_View;

class android_view_WindowManager : public android_view_ViewManager
{
public:

	android_view_WindowManager(const android_view_WindowManager& cc);
	android_view_WindowManager(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_WindowManager();
	// Functions
	virtual AndroidCXX::android_view_Display * getDefaultDisplay() ;
	virtual void  removeViewImmediate(AndroidCXX::android_view_View const& arg0) ;

protected:
	android_view_WindowManager();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_WindowManager