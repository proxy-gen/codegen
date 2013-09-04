/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <java_lang_CharSequence.hpp>

#include <android_view_View.hpp>

#include <android_view_ViewGroup.hpp>

#include <android_widget_Filter.hpp>

#include <java_util_Comparator.hpp>

#include <java_util_List.hpp>


#include <android_widget_BaseAdapter.hpp>

#include <android_widget_Filterable.hpp>

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


class java_lang_CharSequence;

class android_view_View;

class android_view_ViewGroup;

class android_widget_Filter;

class java_util_Comparator;

class java_util_List;

class android_widget_ArrayAdapter : public AndroidCXX::android_widget_BaseAdapter,public AndroidCXX::android_widget_Filterable
{
public:

	// Public Constructor
	android_widget_ArrayAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1,Proxy * aProxy = new Proxy());
	android_widget_ArrayAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1,std::vector<AndroidCXX::java_lang_Object> const& arg2,Proxy * aProxy = new Proxy());
	android_widget_ArrayAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1,int const& arg2,Proxy * aProxy = new Proxy());
	android_widget_ArrayAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1,int const& arg2,std::vector<AndroidCXX::java_lang_Object> const& arg3,Proxy * aProxy = new Proxy());
	android_widget_ArrayAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1,int const& arg2,AndroidCXX::java_util_List const& arg3,Proxy * aProxy = new Proxy());
	android_widget_ArrayAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::java_util_List const& arg2,Proxy * aProxy = new Proxy());
	android_widget_ArrayAdapter(const android_widget_ArrayAdapter& cc);
	android_widget_ArrayAdapter(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_ArrayAdapter();
	// Functions
	virtual void  addAll(std::vector<AndroidCXX::java_lang_Object> const& arg0) ;
	virtual void  addAll(AndroidCXX::java_util_Collection const& arg0) ;
	virtual void  add(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  clear() ;
	static AndroidCXX::android_widget_ArrayAdapter * createFromResource(AndroidCXX::android_content_Context const& arg0,int const& arg1,int const& arg2) ;
	virtual AndroidCXX::android_content_Context * getContext() ;
	virtual int  getCount() ;
	virtual AndroidCXX::android_view_View * getDropDownView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2) ;
	virtual AndroidCXX::android_widget_Filter * getFilter() ;
	virtual long  getItemId(int const& arg0) ;
	virtual AndroidCXX::java_lang_Object * getItem(int const& arg0) ;
	virtual int  getPosition(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::android_view_View * getView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2) ;
	virtual void  insert(AndroidCXX::java_lang_Object const& arg0,int const& arg1) ;
	virtual void  notifyDataSetChanged() ;
	virtual void  remove(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  setDropDownViewResource(int const& arg0) ;
	virtual void  setNotifyOnChange(bool const& arg0) ;
	virtual void  sort(AndroidCXX::java_util_Comparator const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_ArrayAdapter