/*
 * Header (Instance CXX)
 * Author: codegen
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


class android_view_View;

class android_view_ViewGroup;

class android_content_Context;

class java_util_List;

class java_lang_String;

class java_util_Map;

class android_widget_SimpleExpandableListAdapter : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_widget_SimpleExpandableListAdapter(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_util_List const& arg1,int const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3,std::vector<int> const& arg4,AndroidCXX::java_util_List const& arg5,int const& arg6,std::vector<AndroidCXX::java_lang_String> const& arg7,std::vector<int> const& arg8,Proxy * aProxy = new Proxy());
	android_widget_SimpleExpandableListAdapter(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_util_List const& arg1,int const& arg2,int const& arg3,std::vector<AndroidCXX::java_lang_String> const& arg4,std::vector<int> const& arg5,AndroidCXX::java_util_List const& arg6,int const& arg7,std::vector<AndroidCXX::java_lang_String> const& arg8,std::vector<int> const& arg9,Proxy * aProxy = new Proxy());
	android_widget_SimpleExpandableListAdapter(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_util_List const& arg1,int const& arg2,int const& arg3,std::vector<AndroidCXX::java_lang_String> const& arg4,std::vector<int> const& arg5,AndroidCXX::java_util_List const& arg6,int const& arg7,int const& arg8,std::vector<AndroidCXX::java_lang_String> const& arg9,std::vector<int> const& arg10,Proxy * aProxy = new Proxy());
	android_widget_SimpleExpandableListAdapter(const android_widget_SimpleExpandableListAdapter& cc);
	android_widget_SimpleExpandableListAdapter(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_SimpleExpandableListAdapter();
	// Functions
	virtual long  getChildId(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_Object * getChild(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_view_View * getChildView(int const& arg0,int const& arg1,bool const& arg2,AndroidCXX::android_view_View const& arg3,AndroidCXX::android_view_ViewGroup const& arg4) ;
	virtual int  getChildrenCount(int const& arg0) ;
	virtual int  getGroupCount() ;
	virtual long  getGroupId(int const& arg0) ;
	virtual AndroidCXX::java_lang_Object * getGroup(int const& arg0) ;
	virtual AndroidCXX::android_view_View * getGroupView(int const& arg0,bool const& arg1,AndroidCXX::android_view_View const& arg2,AndroidCXX::android_view_ViewGroup const& arg3) ;
	virtual bool  hasStableIds() ;
	virtual bool  isChildSelectable(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_view_View * newChildView(bool const& arg0,AndroidCXX::android_view_ViewGroup const& arg1) ;
	virtual AndroidCXX::android_view_View * newGroupView(bool const& arg0,AndroidCXX::android_view_ViewGroup const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleExpandableListAdapter