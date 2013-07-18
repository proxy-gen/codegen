/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
		
		
 			
 			
		
 			
 			
		
		
 			
		
 			
 			
 			
		


#ifndef _android_view_LayoutInflater
#define _android_view_LayoutInflater













#include <org_xmlpull_v1_XmlPullParser.hpp>
#include <android_view_LayoutInflater_Filter.hpp>
#include <android_content_Context.hpp>
#include <android_util_AttributeSet.hpp>
#include <android_view_ViewGroup.hpp>
#include <android_view_View.hpp>
#include <android_view_LayoutInflater_Factory.hpp>
#include <android_view_LayoutInflater_Factory2.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_view_LayoutInflater
{
public:
static android_view_LayoutInflater from(android_content_Context& arg0);
 android_view_LayoutInflater_Factory getFactory();
 android_content_Context getContext();
 android_view_View inflate(org_xmlpull_v1_XmlPullParser& arg0,android_view_ViewGroup& arg1,bool& arg2,int& arg3);
 void setFactory(android_view_LayoutInflater_Factory& arg0);
 android_view_LayoutInflater cloneInContext(android_content_Context& arg0);
 android_view_LayoutInflater_Factory2 getFactory2();
 void setFactory2(android_view_LayoutInflater_Factory2& arg0);
 android_view_LayoutInflater_Filter getFilter();
 void setFilter(android_view_LayoutInflater_Filter& arg0);
 android_view_View createView(java_lang_String& arg0,android_util_AttributeSet& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_LayoutInflater