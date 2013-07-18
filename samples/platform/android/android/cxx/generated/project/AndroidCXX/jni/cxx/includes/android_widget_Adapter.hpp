/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
		
		
 			
 			

// Generated Code 

#ifndef _android_widget_Adapter
#define _android_widget_Adapter
//
// Scroll Down 
//













#include <android_view_View.hpp>

#include <android_view_ViewGroup.hpp>

#include <java_lang_Object.hpp>

#include <android_database_DataSetObserver.hpp>

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

class java_lang_Object;

class android_database_DataSetObserver;

class android_widget_Adapter
{
public:
 bool isEmpty();
 android_view_View getView(int& arg0,android_view_View& arg1,android_view_ViewGroup& arg2);
 java_lang_Object getItem(int& arg0);
 long getItemId(int& arg0);
 int getCount();
 void registerDataSetObserver(android_database_DataSetObserver& arg0);
 void unregisterDataSetObserver(android_database_DataSetObserver& arg0);
 bool hasStableIds();
 int getItemViewType(int& arg0);
 int getViewTypeCount();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Adapter