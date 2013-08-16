/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 
 		 
	











// Generated Code 

#ifndef _android_text_style_CharacterStyle
#define _android_text_style_CharacterStyle
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


class android_text_TextPaint;

class android_text_style_CharacterStyle 
{
public:

	android_text_style_CharacterStyle(const android_text_style_CharacterStyle& cc);
	android_text_style_CharacterStyle(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_style_CharacterStyle();
	// Functions
	virtual AndroidCXX::android_text_style_CharacterStyle * getUnderlying() ;
	virtual void  updateDrawState(AndroidCXX::android_text_TextPaint const& arg0) ;
	static AndroidCXX::android_text_style_CharacterStyle * wrap(AndroidCXX::android_text_style_CharacterStyle const& arg0) ;

protected:
	android_text_style_CharacterStyle();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_style_CharacterStyle