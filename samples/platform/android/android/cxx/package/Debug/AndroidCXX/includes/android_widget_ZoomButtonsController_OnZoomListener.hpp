/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//












// Generated Code 

#ifndef _android_widget_ZoomButtonsController_OnZoomListener
#define _android_widget_ZoomButtonsController_OnZoomListener
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

class android_widget_ZoomButtonsController_OnZoomListener : public AndroidCXX::java_lang_Object
{
public:

	android_widget_ZoomButtonsController_OnZoomListener(const android_widget_ZoomButtonsController_OnZoomListener& cc);
	android_widget_ZoomButtonsController_OnZoomListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ZoomButtonsController_OnZoomListener();
	// Functions
	virtual void  onVisibilityChanged(bool const& arg0) ;
	virtual void  onZoom(bool const& arg0) ;

protected:
	android_widget_ZoomButtonsController_OnZoomListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ZoomButtonsController_OnZoomListener