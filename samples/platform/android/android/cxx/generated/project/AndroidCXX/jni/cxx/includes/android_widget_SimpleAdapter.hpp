/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
		
		
		
 			
 			
		
		
 			
 			
 			
 			
 			

// Generated Code 

#ifndef _android_widget_SimpleAdapter
#define _android_widget_SimpleAdapter
//
// Scroll Down 
//














#include <android_view_View.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_widget_Filter.hpp>

#include <java_lang_Object.hpp>

#include <android_widget_SimpleAdapter_ViewBinder.hpp>

#include <android_widget_ImageView.hpp>

#include <java_lang_String.hpp>

#include <android_widget_TextView.hpp>

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

class android_view_View;

class android_view_ViewGroup;

class android_widget_Filter;

class java_lang_Object;

class android_widget_SimpleAdapter_ViewBinder;

class android_widget_ImageView;

class java_lang_String;

class android_widget_TextView;

class android_widget_SimpleAdapter
{
public:
 android_view_View getView(int& arg0,android_view_View& arg1,android_view_ViewGroup& arg2);
 android_widget_Filter getFilter();
 java_lang_Object getItem(int& arg0);
 long getItemId(int& arg0);
 int getCount();
 android_view_View getDropDownView(int& arg0,android_view_View& arg1,android_view_ViewGroup& arg2);
 void setDropDownViewResource(int& arg0);
 android_widget_SimpleAdapter_ViewBinder getViewBinder();
 void setViewBinder(android_widget_SimpleAdapter_ViewBinder& arg0);
 void setViewImage(android_widget_ImageView& arg0,int& arg1,java_lang_String& arg2);
 void setViewText(android_widget_TextView& arg0,java_lang_String& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleAdapter