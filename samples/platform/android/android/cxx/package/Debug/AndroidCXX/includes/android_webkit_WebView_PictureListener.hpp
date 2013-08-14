/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _android_webkit_WebView_PictureListener
#define _android_webkit_WebView_PictureListener
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

class android_webkit_WebView;

class android_graphics_Picture;

class android_webkit_WebView_PictureListener : public java_lang_Object
{
public:

	android_webkit_WebView_PictureListener(const android_webkit_WebView_PictureListener& cc);
	android_webkit_WebView_PictureListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebView_PictureListener();
	// Functions
	virtual void  onNewPicture(AndroidCXX::android_webkit_WebView const& arg0,AndroidCXX::android_graphics_Picture const& arg1) ;

protected:
	android_webkit_WebView_PictureListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebView_PictureListener