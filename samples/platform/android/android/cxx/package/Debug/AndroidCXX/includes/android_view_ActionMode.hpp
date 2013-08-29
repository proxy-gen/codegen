/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
	
	
	
 		 
 		 
 		 
 		 

























// Generated Code 

#ifndef _android_view_ActionMode
#define _android_view_ActionMode
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

class android_view_View;

class android_view_MenuInflater;

class android_view_Menu;

class java_lang_CharSequence;

class java_lang_Object;

class android_view_ActionMode 
{
public:

	android_view_ActionMode(const android_view_ActionMode& cc);
	android_view_ActionMode(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_ActionMode();
	// Functions
	virtual void  finish() ;
	virtual AndroidCXX::android_view_View * getCustomView() ;
	virtual AndroidCXX::android_view_MenuInflater * getMenuInflater() ;
	virtual AndroidCXX::android_view_Menu * getMenu() ;
	virtual AndroidCXX::java_lang_CharSequence * getSubtitle() ;
	virtual AndroidCXX::java_lang_Object * getTag() ;
	virtual bool  getTitleOptionalHint() ;
	virtual AndroidCXX::java_lang_CharSequence * getTitle() ;
	virtual void  invalidate() ;
	virtual bool  isTitleOptional() ;
	virtual void  setCustomView(AndroidCXX::android_view_View const& arg0) ;
	virtual void  setSubtitle(int const& arg0) ;
	virtual void  setSubtitle(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setTag(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  setTitleOptionalHint(bool const& arg0) ;
	virtual void  setTitle(int const& arg0) ;
	virtual void  setTitle(AndroidCXX::java_lang_CharSequence const& arg0) ;

protected:
	android_view_ActionMode();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ActionMode