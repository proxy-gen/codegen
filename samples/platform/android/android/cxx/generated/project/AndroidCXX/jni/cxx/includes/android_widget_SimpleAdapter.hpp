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

#include <android_content_Context.hpp>

#include <java_util_List.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_view_View;

class android_view_ViewGroup;

class android_widget_Filter;

class java_lang_Object;

class android_widget_SimpleAdapter_ViewBinder;

class android_widget_ImageView;

class java_lang_String;

class android_widget_TextView;

class android_content_Context;

class java_util_List;

class java_util_Map;

class android_widget_SimpleAdapter
{
public:

	android_widget_SimpleAdapter(const android_widget_SimpleAdapter& cc);
	android_widget_SimpleAdapter(void * proxy);
	// Public Constructors
	android_widget_SimpleAdapter(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_util_List& arg1,int& arg2,std::vector<java_lang_String >& arg3,std::vector<int>& arg4);
	android_widget_SimpleAdapter();
	// Default Destructor
	virtual ~android_widget_SimpleAdapter();
	// Functions
	 AndroidCXX::android_view_View getView(int& arg0,AndroidCXX::android_view_View& arg1,AndroidCXX::android_view_ViewGroup& arg2);
	 AndroidCXX::android_widget_Filter getFilter();
	 AndroidCXX::java_lang_Object getItem(int& arg0);
	 long getItemId(int& arg0);
	 int getCount();
	 AndroidCXX::android_view_View getDropDownView(int& arg0,AndroidCXX::android_view_View& arg1,AndroidCXX::android_view_ViewGroup& arg2);
	 void setDropDownViewResource(int& arg0);
	 AndroidCXX::android_widget_SimpleAdapter_ViewBinder getViewBinder();
	 void setViewBinder(AndroidCXX::android_widget_SimpleAdapter_ViewBinder& arg0);
	 void setViewImage(AndroidCXX::android_widget_ImageView& arg0,int& arg1);
	 void setViewImage(AndroidCXX::android_widget_ImageView& arg0,AndroidCXX::java_lang_String& arg1);
	 void setViewText(AndroidCXX::android_widget_TextView& arg0,AndroidCXX::java_lang_String& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleAdapter