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





















#include <java_lang_CharSequence.hpp>

#include <android_view_MenuItem.hpp>

#include <android_view_SubMenu.hpp>

#include <android_content_ComponentName.hpp>

#include <android_content_Intent.hpp>

#include <android_view_KeyEvent.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_CharSequence;

class android_view_MenuItem;

class android_view_SubMenu;

class android_content_ComponentName;

class android_content_Intent;

class android_view_KeyEvent;

class android_view_Menu
{
public:
	 android_view_MenuItem *  add(int& arg0,java_lang_CharSequence& arg1);
	 void clear();
	 int size();
	 void close();
	 bool hasVisibleItems();
	 android_view_SubMenu *  addSubMenu(int& arg0,java_lang_CharSequence& arg1);
	 int addIntentOptions(int& arg0,android_content_ComponentName& arg1,std::vector<long>& arg2,android_content_Intent& arg3,std::vector<long>& arg4);
	 void removeItem(int& arg0);
	 void removeGroup(int& arg0);
	 void setGroupCheckable(int& arg0,bool& arg1);
	 void setGroupVisible(int& arg0,bool& arg1);
	 void setGroupEnabled(int& arg0,bool& arg1);
	 android_view_MenuItem *  findItem(int& arg0);
	 android_view_MenuItem *  getItem(int& arg0);
	 bool performShortcut(int& arg0,android_view_KeyEvent& arg1);
	 bool isShortcutKey(int& arg0,android_view_KeyEvent& arg1);
	 bool performIdentifierAction(int& arg0);
	 void setQwertyMode(bool& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_Menu