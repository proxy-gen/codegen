/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
	
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
	
 		 
 		 
	
	
 		 
	
 		 
 		 
 		 
 		 
	





















// Generated Code 

#ifndef _android_view_LayoutInflater
#define _android_view_LayoutInflater
//
// Scroll Down 
//


#include <android_content_Context.hpp>


#include <android_view_LayoutInflater_Factory.hpp>

#include <org_xmlpull_v1_XmlPullParser.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_view_View.hpp>

#include <android_view_LayoutInflater_Factory2.hpp>

#include <android_view_LayoutInflater_Filter.hpp>

#include <java_lang_String.hpp>

#include <android_util_AttributeSet.hpp>

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

class android_content_Context;

class android_view_LayoutInflater;

class android_view_LayoutInflater_Factory;

class org_xmlpull_v1_XmlPullParser;

class android_view_ViewGroup;

class android_view_View;

class android_view_LayoutInflater_Factory2;

class android_view_LayoutInflater_Filter;

class java_lang_String;

class android_util_AttributeSet;

class android_view_LayoutInflater
{
public:

	android_view_LayoutInflater(const android_view_LayoutInflater& cc);
	android_view_LayoutInflater(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_LayoutInflater();
	// Functions
	static AndroidCXX::android_view_LayoutInflater from(AndroidCXX::android_content_Context const& arg0);
	 AndroidCXX::android_view_LayoutInflater_Factory getFactory();
	 AndroidCXX::android_content_Context getContext();
	 AndroidCXX::android_view_View inflate(AndroidCXX::org_xmlpull_v1_XmlPullParser const& arg0,AndroidCXX::android_view_ViewGroup const& arg1);
	 AndroidCXX::android_view_View inflate(AndroidCXX::org_xmlpull_v1_XmlPullParser const& arg0,AndroidCXX::android_view_ViewGroup const& arg1,bool const& arg2);
	 AndroidCXX::android_view_View inflate(int const& arg0,AndroidCXX::android_view_ViewGroup const& arg1);
	 AndroidCXX::android_view_View inflate(int const& arg0,AndroidCXX::android_view_ViewGroup const& arg1,bool const& arg2);
	 void setFactory(AndroidCXX::android_view_LayoutInflater_Factory const& arg0);
	 AndroidCXX::android_view_LayoutInflater cloneInContext(AndroidCXX::android_content_Context const& arg0);
	 AndroidCXX::android_view_LayoutInflater_Factory2 getFactory2();
	 void setFactory2(AndroidCXX::android_view_LayoutInflater_Factory2 const& arg0);
	 AndroidCXX::android_view_LayoutInflater_Filter getFilter();
	 void setFilter(AndroidCXX::android_view_LayoutInflater_Filter const& arg0);
	 AndroidCXX::android_view_View createView(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_util_AttributeSet const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_LayoutInflater