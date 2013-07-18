/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
 			


#ifndef _android_widget_ShareActionProvider
#define _android_widget_ShareActionProvider








#include <android_view_View.hpp>
#include <android_view_SubMenu.hpp>
#include <android_content_Intent.hpp>
#include <android_widget_ShareActionProvider_OnShareTargetSelectedListener.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_ShareActionProvider
{
public:
 bool hasSubMenu();
 android_view_View onCreateActionView();
 void onPrepareSubMenu(android_view_SubMenu& arg0);
 void setOnShareTargetSelectedListener(android_widget_ShareActionProvider_OnShareTargetSelectedListener& arg0);
 void setShareHistoryFileName(java_lang_String& arg0);
 void setShareIntent(android_content_Intent& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ShareActionProvider