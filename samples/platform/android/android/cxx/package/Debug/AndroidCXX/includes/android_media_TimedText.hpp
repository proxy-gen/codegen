/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	









// Generated Code 

#ifndef _android_media_TimedText
#define _android_media_TimedText
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_graphics_Rect.hpp>


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

class java_lang_String;

class android_graphics_Rect;

class android_media_TimedText 
{
public:

	// Public ConstrucXXX
	android_media_TimedText(const android_media_TimedText& cc);
	android_media_TimedText(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_media_TimedText();
	// Functions
	virtual AndroidCXX::java_lang_String * getText() ;
	virtual AndroidCXX::android_graphics_Rect * getBounds() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_TimedText