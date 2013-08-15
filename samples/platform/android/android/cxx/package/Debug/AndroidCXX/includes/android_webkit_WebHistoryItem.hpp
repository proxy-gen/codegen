/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_Cloneable.hpp>

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

class android_graphics_Bitmap;

class android_webkit_WebHistoryItem : public java_lang_Cloneable
{
public:

	// Public ConstrucXXX
	android_webkit_WebHistoryItem(const android_webkit_WebHistoryItem& cc);
	android_webkit_WebHistoryItem(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebHistoryItem();
	// Functions
	virtual AndroidCXX::java_lang_String * getTitle() ;
	virtual AndroidCXX::java_lang_String * getUrl() ;
	virtual AndroidCXX::java_lang_String * getOriginalUrl() ;
	virtual AndroidCXX::android_graphics_Bitmap * getFavicon() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebHistoryItem