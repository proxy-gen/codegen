/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		
 			
 			
 			
 			
 			
		
		
		
 			
 			
		
 			
		

// Generated Code 

#ifndef _android_widget_ArrayAdapter
#define _android_widget_ArrayAdapter
//
// Scroll Down 
//





















#include <java_lang_Object.hpp>

#include <java_util_Collection.hpp>

#include <android_content_Context.hpp>

#include <java_util_Comparator.hpp>

#include <android_view_View.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_widget_Filter.hpp>


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

class java_util_Collection;

class android_content_Context;

class java_util_Comparator;

class android_view_View;

class android_view_ViewGroup;

class android_widget_Filter;


class android_widget_ArrayAdapter
{
public:
 void add(java_lang_Object& arg0);
 void clear();
 void addAll(java_util_Collection& arg0,std::vector<long>& arg1);
 void remove(java_lang_Object& arg0);
 android_content_Context getContext();
 void insert(java_lang_Object& arg0,int& arg1);
 void sort(java_util_Comparator& arg0);
 int getPosition(java_lang_Object& arg0);
 android_view_View getView(int& arg0,android_view_View& arg1,android_view_ViewGroup& arg2);
 android_widget_Filter getFilter();
 java_lang_Object getItem(int& arg0);
 long getItemId(int& arg0);
 int getCount();
 android_view_View getDropDownView(int& arg0,android_view_View& arg1,android_view_ViewGroup& arg2);
 void notifyDataSetChanged();
 void setNotifyOnChange(bool& arg0);
 void setDropDownViewResource(int& arg0);
static android_widget_ArrayAdapter createFromResource(android_content_Context& arg0,int& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ArrayAdapter