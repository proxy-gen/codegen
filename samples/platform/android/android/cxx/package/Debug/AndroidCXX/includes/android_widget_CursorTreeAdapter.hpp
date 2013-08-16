/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
	
 		 
 		 
	
	
	
	
	
 		 
 		 
	
 		 
	
 		 
 		 
 		 


 		 
 		 
 		 
 		 






























// Generated Code 

#ifndef _android_widget_CursorTreeAdapter
#define _android_widget_CursorTreeAdapter
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

class android_database_Cursor;

class java_lang_String;

class android_view_View;

class android_view_ViewGroup;

class android_widget_Filter;

class android_widget_FilterQueryProvider;

class java_lang_CharSequence;

class android_content_Context;

class android_widget_CursorTreeAdapter : public android_widget_Filterable
{
public:

	android_widget_CursorTreeAdapter(const android_widget_CursorTreeAdapter& cc);
	android_widget_CursorTreeAdapter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_CursorTreeAdapter();
	// Functions
	virtual void  changeCursor(AndroidCXX::android_database_Cursor const& arg0) ;
	virtual AndroidCXX::java_lang_String * convertToString(AndroidCXX::android_database_Cursor const& arg0) ;
	virtual AndroidCXX::android_database_Cursor * getChild(int const& arg0,int const& arg1) ;
	virtual long  getChildId(int const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_view_View * getChildView(int const& arg0,int const& arg1,bool const& arg2,AndroidCXX::android_view_View const& arg3,AndroidCXX::android_view_ViewGroup const& arg4) ;
	virtual int  getChildrenCount(int const& arg0) ;
	virtual AndroidCXX::android_database_Cursor * getCursor() ;
	virtual AndroidCXX::android_widget_Filter * getFilter() ;
	virtual AndroidCXX::android_widget_FilterQueryProvider * getFilterQueryProvider() ;
	virtual AndroidCXX::android_database_Cursor * getGroup(int const& arg0) ;
	virtual int  getGroupCount() ;
	virtual long  getGroupId(int const& arg0) ;
	virtual AndroidCXX::android_view_View * getGroupView(int const& arg0,bool const& arg1,AndroidCXX::android_view_View const& arg2,AndroidCXX::android_view_ViewGroup const& arg3) ;
	virtual bool  hasStableIds() ;
	virtual bool  isChildSelectable(int const& arg0,int const& arg1) ;
	virtual void  notifyDataSetChanged(bool const& arg0) ;
	virtual void  notifyDataSetChanged() ;
	virtual void  notifyDataSetInvalidated() ;
	virtual void  onGroupCollapsed(int const& arg0) ;
	virtual AndroidCXX::android_database_Cursor * runQueryOnBackgroundThread(AndroidCXX::java_lang_CharSequence const& arg0) ;
	virtual void  setChildrenCursor(int const& arg0,AndroidCXX::android_database_Cursor const& arg1) ;
	virtual void  setFilterQueryProvider(AndroidCXX::android_widget_FilterQueryProvider const& arg0) ;
	virtual void  setGroupCursor(AndroidCXX::android_database_Cursor const& arg0) ;

protected:
	android_widget_CursorTreeAdapter();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_CursorTreeAdapter