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
#include <CXXTypes.hpp>


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

	android_widget_Adapter(const android_widget_Adapter& cc);
	android_widget_Adapter(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_Adapter();
	// Functions
	 bool isEmpty();
	 AndroidCXX::android_view_View getView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2);
	 AndroidCXX::java_lang_Object getItem(int const& arg0);
	 long getItemId(int const& arg0);
	 int getCount();
	 void registerDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0);
	 void unregisterDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0);
	 bool hasStableIds();
	 int getItemViewType(int const& arg0);
	 int getViewTypeCount();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Adapter