/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _android_widget_ShareActionProvider_OnShareTargetSelectedListener
#define _android_widget_ShareActionProvider_OnShareTargetSelectedListener
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

class android_widget_ShareActionProvider;

class android_content_Intent;

class android_widget_ShareActionProvider_OnShareTargetSelectedListener 
{
public:

	android_widget_ShareActionProvider_OnShareTargetSelectedListener(const android_widget_ShareActionProvider_OnShareTargetSelectedListener& cc);
	android_widget_ShareActionProvider_OnShareTargetSelectedListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ShareActionProvider_OnShareTargetSelectedListener();
	// Functions
	virtual bool  onShareTargetSelected(AndroidCXX::android_widget_ShareActionProvider const& arg0,AndroidCXX::android_content_Intent const& arg1) ;

protected:
	android_widget_ShareActionProvider_OnShareTargetSelectedListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ShareActionProvider_OnShareTargetSelectedListener