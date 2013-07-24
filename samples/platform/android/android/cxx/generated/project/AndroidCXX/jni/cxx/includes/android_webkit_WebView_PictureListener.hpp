/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_webkit_WebView.hpp>

#include <android_graphics_Picture.hpp>

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

class android_webkit_WebView_PictureListener
{
public:

	android_webkit_WebView_PictureListener(const android_webkit_WebView_PictureListener& cc);
	android_webkit_WebView_PictureListener(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_webkit_WebView_PictureListener();
	// 
	// Default Destructor
	virtual ~android_webkit_WebView_PictureListener();
	// Functions
	 void onNewPicture(AndroidCXX::android_webkit_WebView& arg0,AndroidCXX::android_graphics_Picture& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebView_PictureListener