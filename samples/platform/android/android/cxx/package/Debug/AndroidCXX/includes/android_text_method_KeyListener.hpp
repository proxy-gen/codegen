/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 












// Generated Code 

#ifndef _android_text_method_KeyListener
#define _android_text_method_KeyListener
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

class android_view_View;

class android_text_Editable;

class android_view_KeyEvent;

class android_text_method_KeyListener : public AndroidCXX::java_lang_Object
{
public:

	android_text_method_KeyListener(const android_text_method_KeyListener& cc);
	android_text_method_KeyListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_text_method_KeyListener();
	// Functions
	virtual void  clearMetaKeyState(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_text_Editable const& arg1,int const& arg2) ;
	virtual int  getInputType() ;
	virtual bool  onKeyDown(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_text_Editable const& arg1,int const& arg2,AndroidCXX::android_view_KeyEvent const& arg3) ;
	virtual bool  onKeyOther(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_text_Editable const& arg1,AndroidCXX::android_view_KeyEvent const& arg2) ;
	virtual bool  onKeyUp(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_text_Editable const& arg1,int const& arg2,AndroidCXX::android_view_KeyEvent const& arg3) ;

protected:
	android_text_method_KeyListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_method_KeyListener