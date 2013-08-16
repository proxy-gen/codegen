/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
 	
 	
 		 
 		 
	
	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	


 		 
 		 
 	
 	
 		 
 		 
 		 
 	
 	
 		 



















// Generated Code 

#ifndef _android_widget_SimpleCursorAdapter
#define _android_widget_SimpleCursorAdapter
//
// Scroll Down 
//


#include <android_view_View.hpp>

#include <android_content_Context.hpp>

#include <android_database_Cursor.hpp>

#include <java_lang_String.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_widget_SimpleCursorAdapter_CursorToStringConverter.hpp>

#include <android_widget_SimpleCursorAdapter_ViewBinder.hpp>

#include <android_widget_ImageView.hpp>

#include <android_widget_TextView.hpp>


#include <java_lang_Object.hpp>

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

class java_lang_String;

class java_lang_CharSequence;

class android_widget_SimpleCursorAdapter_CursorToStringConverter;

class android_widget_SimpleCursorAdapter_ViewBinder;

class android_widget_ImageView;

class android_widget_TextView;

class android_widget_SimpleCursorAdapter : public java_lang_Object
{
public:

	// Public ConstrucXXX
	android_widget_SimpleCursorAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::android_database_Cursor const& arg2,std::vector<java_lang_String> const& arg3,std::vector<int> const& arg4,int const& arg5);
	android_widget_SimpleCursorAdapter(AndroidCXX::android_content_Context const& arg0,int const& arg1,AndroidCXX::android_database_Cursor const& arg2,std::vector<java_lang_String> const& arg3,std::vector<int> const& arg4);
	android_widget_SimpleCursorAdapter(const android_widget_SimpleCursorAdapter& cc);
	android_widget_SimpleCursorAdapter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SimpleCursorAdapter();
	// Functions
	virtual void  bindView(AndroidCXX::android_view_View const& arg0,AndroidCXX::android_content_Context const& arg1,AndroidCXX::android_database_Cursor const& arg2) ;
	virtual void  changeCursorAndColumns(AndroidCXX::android_database_Cursor const& arg0,std::vector<java_lang_String> const& arg1,std::vector<int> const& arg2) ;
	virtual AndroidCXX::java_lang_CharSequence * convertToString(AndroidCXX::android_database_Cursor const& arg0) ;
	virtual AndroidCXX::android_widget_SimpleCursorAdapter_CursorToStringConverter * getCursorToStringConverter() ;
	virtual int  getStringConversionColumn() ;
	virtual AndroidCXX::android_widget_SimpleCursorAdapter_ViewBinder * getViewBinder() ;
	virtual void  setCursorToStringConverter(AndroidCXX::android_widget_SimpleCursorAdapter_CursorToStringConverter const& arg0) ;
	virtual void  setStringConversionColumn(int const& arg0) ;
	virtual void  setViewBinder(AndroidCXX::android_widget_SimpleCursorAdapter_ViewBinder const& arg0) ;
	virtual void  setViewImage(AndroidCXX::android_widget_ImageView const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  setViewText(AndroidCXX::android_widget_TextView const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_database_Cursor * swapCursor(AndroidCXX::android_database_Cursor const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleCursorAdapter