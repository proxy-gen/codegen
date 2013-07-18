/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
 			
 			
		
 			
 			
		
 			
		
 			
		


#ifndef _android_widget_SimpleExpandableListAdapter
#define _android_widget_SimpleExpandableListAdapter














#include <android_view_View.hpp>
#include <java_lang_Object.hpp>
#include <android_view_ViewGroup.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_SimpleExpandableListAdapter
{
public:
 long getGroupId(int& arg0);
 java_lang_Object getChild(int& arg0);
 bool hasStableIds();
 int getGroupCount();
 int getChildrenCount(int& arg0);
 java_lang_Object getGroup(int& arg0);
 long getChildId(int& arg0);
 android_view_View getGroupView(int& arg0,bool& arg1,android_view_View& arg2,android_view_ViewGroup& arg3);
 android_view_View getChildView(int& arg0,bool& arg1,android_view_View& arg2,android_view_ViewGroup& arg3);
 bool isChildSelectable(int& arg0);
 android_view_View newGroupView(bool& arg0,android_view_ViewGroup& arg1);
 android_view_View newChildView(bool& arg0,android_view_ViewGroup& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleExpandableListAdapter