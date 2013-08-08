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


#include <java_lang_CharSequence.hpp>

#include <java_util_List.hpp>

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

class java_util_Collection;

class android_content_Context;

class java_util_Comparator;

class android_view_View;

class android_view_ViewGroup;

class android_widget_Filter;

class android_widget_ArrayAdapter;

class java_lang_CharSequence;

class java_util_List;

class android_widget_ArrayAdapter
{
public:

	android_widget_ArrayAdapter(const android_widget_ArrayAdapter& cc);
	android_widget_ArrayAdapter(Proxy proxy);
	// Public Constructors
	android_widget_ArrayAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1);
	android_widget_ArrayAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1,int const& arg2);
	android_widget_ArrayAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1,std::vector<AndroidCXX::java_lang_Object > const& arg2);
	android_widget_ArrayAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1,int const& arg2,std::vector<AndroidCXX::java_lang_Object > const& arg3);
	android_widget_ArrayAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::java_util_List const& arg2);
	android_widget_ArrayAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_util_List const& arg3);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_ArrayAdapter();
	// Functions
	 void add(AndroidCXX::java_lang_Object const& arg0);
	 void clear();
	 void addAll(AndroidCXX::java_util_Collection const& arg0);
	 void addAll(std::vector<AndroidCXX::java_lang_Object > const& arg0);
	 void remove(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::android_content_Context getContext();
	 void insert(AndroidCXX::java_lang_Object const& arg0,int const& arg1);
	 void sort(AndroidCXX::java_util_Comparator const& arg0);
	 int getPosition(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::android_view_View getView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2);
	 AndroidCXX::android_widget_Filter getFilter();
	 AndroidCXX::java_lang_Object getItem(int const& arg0);
	 long getItemId(int const& arg0);
	 int getCount();
	 AndroidCXX::android_view_View getDropDownView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2);
	 void notifyDataSetChanged();
	 void setNotifyOnChange(bool const& arg0);
	 void setDropDownViewResource(int const& arg0);
	static AndroidCXX::android_widget_ArrayAdapter createFromResource(AndroidCXX::android_content_Context const& arg0,int const& arg1,int const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ArrayAdapter