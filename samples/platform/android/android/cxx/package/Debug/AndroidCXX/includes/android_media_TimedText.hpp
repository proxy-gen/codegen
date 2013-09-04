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


#include <android_graphics_Rect.hpp>

#include <java_lang_String.hpp>


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

class android_graphics_Rect;

class java_lang_String;

class android_media_TimedText : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_media_TimedText(const android_media_TimedText& cc);
	android_media_TimedText(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_media_TimedText();
	// Functions
	virtual AndroidCXX::android_graphics_Rect * getBounds() ;
	virtual AndroidCXX::java_lang_String * getText() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_media_TimedText