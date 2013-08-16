/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 	
 		 
 	
 		 
 		 
	
 		 
	
	
 		 
	
	
 		 
	
	
 		 
	
	
	
 		 
 		 































// Generated Code 

#ifndef _android_view_Menu
#define _android_view_Menu
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

class android_content_ComponentName;

class android_content_Intent;

class android_view_MenuItem;

class java_lang_CharSequence;

class android_view_SubMenu;

class android_view_KeyEvent;

class android_view_Menu : public java_lang_Object
{
public:

	android_view_Menu(const android_view_Menu& cc);
	android_view_Menu(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_Menu();
	// Functions
	virtual int  addIntentOptions(int const& arg0,int const& arg1,int const& arg2,AndroidCXX::android_content_ComponentName const& arg3,std::vector<android_content_Intent> const& arg4,AndroidCXX::android_content_Intent const& arg5,int const& arg6,std::vector<android_view_MenuItem> const& arg7) ;
	virtual AndroidCXX::android_view_MenuItem * add(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual AndroidCXX::android_view_MenuItem * add(int const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_lang_CharSequence const& arg3) ;
	virtual AndroidCXX::android_view_MenuItem * add(int const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * add(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual AndroidCXX::android_view_SubMenu * addSubMenu(int const& arg0,int const& arg1,int const& arg2,int const& arg3) ;
	virtual AndroidCXX::android_view_SubMenu * addSubMenu(int const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_lang_CharSequence const& arg3) ;
	virtual AndroidCXX::android_view_SubMenu * addSubMenu(int const& arg0) ;
	virtual AndroidCXX::android_view_SubMenu * addSubMenu(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  clear() ;
	virtual void  close() ;
	virtual AndroidCXX::android_view_MenuItem * findItem(int const& arg0) ;
	virtual AndroidCXX::android_view_MenuItem * getItem(int const& arg0) ;
	virtual bool  hasVisibleItems() ;
	virtual bool  isShortcutKey(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1) ;
	virtual bool  performIdentifierAction(int const& arg0,int const& arg1) ;
	virtual bool  performShortcut(int const& arg0,AndroidCXX::android_view_KeyEvent const& arg1,int const& arg2) ;
	virtual void  removeGroup(int const& arg0) ;
	virtual void  removeItem(int const& arg0) ;
	virtual void  setGroupCheckable(int const& arg0,bool const& arg1,bool const& arg2) ;
	virtual void  setGroupEnabled(int const& arg0,bool const& arg1) ;
	virtual void  setGroupVisible(int const& arg0,bool const& arg1) ;
	virtual void  setQwertyMode(bool const& arg0) ;
	virtual int  size() ;

protected:
	android_view_Menu();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Menu