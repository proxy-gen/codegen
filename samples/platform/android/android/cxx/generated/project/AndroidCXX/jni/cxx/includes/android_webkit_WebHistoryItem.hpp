/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
	
	











// Generated Code 

#ifndef _android_webkit_WebHistoryItem
#define _android_webkit_WebHistoryItem
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_graphics_Bitmap.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_String;

class android_graphics_Bitmap;

class android_webkit_WebHistoryItem
{
public:

	android_webkit_WebHistoryItem(const android_webkit_WebHistoryItem& cc);
	android_webkit_WebHistoryItem(void * proxy);
	// Public Constructors
	android_webkit_WebHistoryItem();
	// Default Destructor
	virtual ~android_webkit_WebHistoryItem();
	// Functions
	 AndroidCXX::java_lang_String getUrl();
	 AndroidCXX::java_lang_String getTitle();
	 AndroidCXX::java_lang_String getOriginalUrl();
	 AndroidCXX::android_graphics_Bitmap getFavicon();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebHistoryItem