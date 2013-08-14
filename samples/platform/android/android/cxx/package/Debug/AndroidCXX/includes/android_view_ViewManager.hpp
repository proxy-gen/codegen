/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 










// Generated Code 

#ifndef _android_view_ViewManager
#define _android_view_ViewManager
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

class android_view_View;

class android_view_ViewGroup_LayoutParams;

class android_view_ViewManager : public java_lang_Object
{
public:

	android_view_ViewManager(const android_view_ViewManager& cc);
	android_view_ViewManager(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_ViewManager();
	// Functions
	virtual void  addView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1) ;
	virtual void  removeView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  updateViewLayout(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_view_ViewGroup_LayoutParams const& arg1) ;

protected:
	android_view_ViewManager();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ViewManager