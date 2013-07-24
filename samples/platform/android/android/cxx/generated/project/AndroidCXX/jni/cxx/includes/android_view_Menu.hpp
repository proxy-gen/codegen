/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_view_MenuItem.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_view_SubMenu.hpp>

#include <android_content_ComponentName.hpp>

#include <android_content_Intent.hpp>

#include <android_view_KeyEvent.hpp>

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

class android_view_MenuItem;

class java_lang_CharSequence;

class android_view_SubMenu;

class android_content_ComponentName;

class android_content_Intent;

class android_view_KeyEvent;

class android_view_Menu
{
public:

	android_view_Menu(const android_view_Menu& cc);
	android_view_Menu(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_view_Menu();
	// 
	// Default Destructor
	virtual ~android_view_Menu();
	// Functions
	 AndroidCXX::android_view_MenuItem add(int& arg0,int& arg1,int& arg2,int& arg3);
	 AndroidCXX::android_view_MenuItem add(int& arg0);
	 AndroidCXX::android_view_MenuItem add(int& arg0,int& arg1,int& arg2,AndroidCXX::java_lang_CharSequence& arg3);
	 AndroidCXX::android_view_MenuItem add(AndroidCXX::java_lang_CharSequence& arg0);
	 void clear();
	 int size();
	 void close();
	 bool hasVisibleItems();
	 AndroidCXX::android_view_SubMenu addSubMenu(int& arg0,int& arg1,int& arg2,int& arg3);
	 AndroidCXX::android_view_SubMenu addSubMenu(int& arg0,int& arg1,int& arg2,AndroidCXX::java_lang_CharSequence& arg3);
	 AndroidCXX::android_view_SubMenu addSubMenu(int& arg0);
	 AndroidCXX::android_view_SubMenu addSubMenu(AndroidCXX::java_lang_CharSequence& arg0);
	 int addIntentOptions(int& arg0,int& arg1,int& arg2,AndroidCXX::android_content_ComponentName& arg3,std::vector<AndroidCXX::android_content_Intent >& arg4,AndroidCXX::android_content_Intent& arg5,int& arg6,std::vector<AndroidCXX::android_view_MenuItem >& arg7);
	 void removeItem(int& arg0);
	 void removeGroup(int& arg0);
	 void setGroupCheckable(int& arg0,bool& arg1,bool& arg2);
	 void setGroupVisible(int& arg0,bool& arg1);
	 void setGroupEnabled(int& arg0,bool& arg1);
	 AndroidCXX::android_view_MenuItem findItem(int& arg0);
	 AndroidCXX::android_view_MenuItem getItem(int& arg0);
	 bool performShortcut(int& arg0,AndroidCXX::android_view_KeyEvent& arg1,int& arg2);
	 bool isShortcutKey(int& arg0,AndroidCXX::android_view_KeyEvent& arg1);
	 bool performIdentifierAction(int& arg0,int& arg1);
	 void setQwertyMode(bool& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Menu