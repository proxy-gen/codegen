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
	android_widget_SimpleAdapter(Proxy proxy);
	// Public Constructors
	android_widget_SimpleAdapter(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_util_List const& arg1,int const& arg2,std::vector<AndroidCXX::java_lang_String > const& arg3,std::vector<int> const& arg4);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SimpleAdapter();
	// Functions
	 AndroidCXX::android_view_View getView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2);
	 AndroidCXX::android_widget_Filter getFilter();
	 AndroidCXX::java_lang_Object getItem(int const& arg0);
	 long getItemId(int const& arg0);
	 int getCount();
	 AndroidCXX::android_view_View getDropDownView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2);
	 void setDropDownViewResource(int const& arg0);
	 AndroidCXX::android_widget_SimpleAdapter_ViewBinder getViewBinder();
	 void setViewBinder(AndroidCXX::android_widget_SimpleAdapter_ViewBinder const& arg0);
	 void setViewImage(AndroidCXX::android_widget_ImageView const& arg0,int const& arg1);
	 void setViewImage(AndroidCXX::android_widget_ImageView const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void setViewText(AndroidCXX::android_widget_TextView const& arg0,AndroidCXX::java_lang_String const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleAdapter