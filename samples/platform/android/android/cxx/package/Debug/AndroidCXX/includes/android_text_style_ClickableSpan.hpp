/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 










// Generated Code 

#ifndef _android_text_style_ClickableSpan
#define _android_text_style_ClickableSpan
//
// Scroll Down 
//



#include <android_text_style_UpdateAppearance.hpp>

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

class android_text_TextPaint;

class android_text_style_ClickableSpan : public AndroidCXX::android_text_style_UpdateAppearance
{
public:

	android_text_style_ClickableSpan(const android_text_style_ClickableSpan& cc);
	android_text_style_ClickableSpan(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_text_style_ClickableSpan();
	// Functions
	virtual void  onClick(AndroidCXX::android_view_View const& arg0) ;
	virtual void  updateDrawState(AndroidCXX::android_text_TextPaint const& arg0) ;

protected:
	android_text_style_ClickableSpan();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_style_ClickableSpan