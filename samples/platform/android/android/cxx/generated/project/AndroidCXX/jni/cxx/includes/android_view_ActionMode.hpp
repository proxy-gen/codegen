/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


















#include <java_lang_Object.hpp>

#include <android_view_MenuInflater.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_view_View.hpp>

#include <android_view_Menu.hpp>

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

class java_lang_Object;

class android_view_MenuInflater;

class java_lang_CharSequence;

class android_view_View;

class android_view_Menu;

class android_view_ActionMode
{
public:
	 java_lang_Object *  getTag();
	 void invalidate();
	 void finish();
	 android_view_MenuInflater *  getMenuInflater();
	 void setTag(java_lang_Object& arg0);
	 void setTitle(int& arg0,java_lang_CharSequence& arg1);
	 java_lang_CharSequence *  getTitle();
	 void setSubtitle(int& arg0,java_lang_CharSequence& arg1);
	 void setTitleOptionalHint(bool& arg0);
	 bool getTitleOptionalHint();
	 bool isTitleOptional();
	 void setCustomView(android_view_View& arg0);
	 android_view_Menu *  getMenu();
	 java_lang_CharSequence *  getSubtitle();
	 android_view_View *  getCustomView();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_ActionMode