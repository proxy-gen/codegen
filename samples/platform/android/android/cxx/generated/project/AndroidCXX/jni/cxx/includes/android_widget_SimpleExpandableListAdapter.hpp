/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
	


 		 
 		 
 	
 	
 	
 		 
 	
 	
 	
 		 
 		 
 	
 		 
 	
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 	
 	
 	
 		 
 	
 	
 	
 		 
 		 
 	
 		 
 	
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 	
 	
 	
 		 
 	
 	
 	
 		 
 		 
 	
 		 
 	
 		 
 		 
 		 
 		 
 	
 		 
 		 




















// Generated Code 

#ifndef _android_widget_SimpleExpandableListAdapter
#define _android_widget_SimpleExpandableListAdapter
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <android_view_View.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_content_Context.hpp>

#include <java_util_List.hpp>

#include <java_lang_String.hpp>

#include <java_util_Map.hpp>

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

class java_lang_Object;

class android_view_View;

class android_view_ViewGroup;

class android_content_Context;

class java_util_List;

class java_lang_String;

class java_util_Map;

class android_widget_SimpleExpandableListAdapter
{
public:

	android_widget_SimpleExpandableListAdapter(const android_widget_SimpleExpandableListAdapter& cc);
	android_widget_SimpleExpandableListAdapter(void * proxy);
	// Public Constructors
	android_widget_SimpleExpandableListAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_util_List& arg1,int& arg2,int& arg3,std::vector<AndroidCXX::java_lang_String >& arg4,std::vector<int>& arg5,AndroidCXX::java_util_List& arg6,int& arg7,std::vector<AndroidCXX::java_lang_String >& arg8,std::vector<int>& arg9);
	android_widget_SimpleExpandableListAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_util_List& arg1,int& arg2,int& arg3,std::vector<AndroidCXX::java_lang_String >& arg4,std::vector<int>& arg5,AndroidCXX::java_util_List& arg6,int& arg7,int& arg8,std::vector<AndroidCXX::java_lang_String >& arg9,std::vector<int>& arg10);
	android_widget_SimpleExpandableListAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_util_List& arg1,int& arg2,std::vector<AndroidCXX::java_lang_String >& arg3,std::vector<int>& arg4,AndroidCXX::java_util_List& arg5,int& arg6,std::vector<AndroidCXX::java_lang_String >& arg7,std::vector<int>& arg8);
	android_widget_SimpleExpandableListAdapter();
	// Default Destructor
	virtual ~android_widget_SimpleExpandableListAdapter();
	// Functions
	 long getGroupId(int& arg0);
	 AndroidCXX::java_lang_Object getChild(int& arg0,int& arg1);
	 bool hasStableIds();
	 int getGroupCount();
	 int getChildrenCount(int& arg0);
	 AndroidCXX::java_lang_Object getGroup(int& arg0);
	 long getChildId(int& arg0,int& arg1);
	 AndroidCXX::android_view_View getGroupView(int& arg0,bool& arg1,AndroidCXX::android_view_View& arg2,AndroidCXX::android_view_ViewGroup& arg3);
	 AndroidCXX::android_view_View getChildView(int& arg0,int& arg1,bool& arg2,AndroidCXX::android_view_View& arg3,AndroidCXX::android_view_ViewGroup& arg4);
	 bool isChildSelectable(int& arg0,int& arg1);
	 AndroidCXX::android_view_View newGroupView(bool& arg0,AndroidCXX::android_view_ViewGroup& arg1);
	 AndroidCXX::android_view_View newChildView(bool& arg0,AndroidCXX::android_view_ViewGroup& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleExpandableListAdapter