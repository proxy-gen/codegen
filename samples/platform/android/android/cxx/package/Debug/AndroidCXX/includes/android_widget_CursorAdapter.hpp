/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 		 
	
	
 		 
 		 
	
	
	
	
 		 
 		 
	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
	
 		 
 		 
	


 		 
 		 
 		 
 		 
 		 
 		 

























// Generated Code 

#ifndef _android_widget_CursorAdapter
#define _android_widget_CursorAdapter
//
// Scroll Down 
//



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

class android_view_View;

class android_content_Context;

class android_database_Cursor;

class java_lang_CharSequence;

class android_view_ViewGroup;

class android_widget_FilterQueryProvider;

class android_widget_Filter;

class java_lang_Object;

class android_widget_CursorAdapter : public android_widget_Filterable
{
public:

	android_widget_CursorAdapter(const android_widget_CursorAdapter& cc);
	android_widget_CursorAdapter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_CursorAdapter();
	// Functions
	virtual void  bindView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_content_Context const& arg1,AndroidCXX::android_database_Cursor const& arg2) ;
	virtual void  changeCursor(AndroidCXX::android_database_Cursor const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * convertToString(AndroidCXX::android_database_Cursor const& arg0) ;
	virtual int  getCount() ;
	virtual AndroidCXX::android_database_Cursor * getCursor() ;
	virtual AndroidCXX::android_view_View * getDropDownView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2) ;
	virtual AndroidCXX::android_widget_FilterQueryProvider * getFilterQueryProvider() ;
	virtual AndroidCXX::android_widget_Filter * getFilter() ;
	virtual long  getItemId(int const& arg0) ;
	virtual AndroidCXX::java_lang_Object * getItem(int const& arg0) ;
	virtual AndroidCXX::android_view_View * getView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2) ;
	virtual bool  hasStableIds() ;
	virtual AndroidCXX::android_view_View * newDropDownView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1,AndroidCXX::android_view_ViewGroup const& arg2) ;
	virtual AndroidCXX::android_view_View * newView(AndroidCXX::android_content_Context const& arg0,AndroidCXX::android_database_Cursor const& arg1,AndroidCXX::android_view_ViewGroup const& arg2) ;
	virtual AndroidCXX::android_database_Cursor * runQueryOnBackgroundThread(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setFilterQueryProvider(AndroidCXX::android_widget_FilterQueryProvider const& arg0) ;
	virtual AndroidCXX::android_database_Cursor * swapCursor(AndroidCXX::android_database_Cursor const& arg0) ;

protected:
	android_widget_CursorAdapter();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CursorAdapter