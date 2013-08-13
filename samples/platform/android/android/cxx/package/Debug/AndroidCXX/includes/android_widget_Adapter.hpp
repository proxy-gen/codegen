/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_database_DataSetObserver;

class java_lang_Object;

class android_widget_Adapter 
{
public:

	android_widget_Adapter(const android_widget_Adapter& cc);
	android_widget_Adapter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_Adapter();
	// Functions
	virtual bool  isEmpty() ;
	virtual AndroidCXX::android_view_View * getView(int const& arg0,AndroidCXX::android_view_View const& arg1,AndroidCXX::android_view_ViewGroup const& arg2) ;
	virtual int  getCount() ;
	virtual void  registerDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0) ;
	virtual void  unregisterDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0) ;
	virtual AndroidCXX::java_lang_Object * getItem(int const& arg0) ;
	virtual long  getItemId(int const& arg0) ;
	virtual bool  hasStableIds() ;
	virtual int  getItemViewType(int const& arg0) ;
	virtual int  getViewTypeCount() ;

protected:
	android_widget_Adapter();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Adapter