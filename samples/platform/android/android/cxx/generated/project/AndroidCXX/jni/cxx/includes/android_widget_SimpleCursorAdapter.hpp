/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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















#include <android_database_Cursor.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_view_View.hpp>

#include <android_content_Context.hpp>

#include <android_widget_SimpleCursorAdapter_ViewBinder.hpp>

#include <android_widget_ImageView.hpp>

#include <java_lang_String.hpp>

#include <android_widget_TextView.hpp>

#include <android_widget_SimpleCursorAdapter_CursorToStringConverter.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_database_Cursor;

class java_lang_CharSequence;

class android_view_View;

class android_content_Context;

class android_widget_SimpleCursorAdapter_ViewBinder;

class android_widget_ImageView;

class java_lang_String;

class android_widget_TextView;

class android_widget_SimpleCursorAdapter_CursorToStringConverter;

class android_widget_SimpleCursorAdapter
{
public:
 java_lang_CharSequence convertToString(android_database_Cursor& arg0);
 void bindView(android_view_View& arg0,android_content_Context& arg1,android_database_Cursor& arg2);
 android_database_Cursor swapCursor(android_database_Cursor& arg0);
 android_widget_SimpleCursorAdapter_ViewBinder getViewBinder();
 void setViewBinder(android_widget_SimpleCursorAdapter_ViewBinder& arg0);
 void setViewImage(android_widget_ImageView& arg0,java_lang_String& arg1);
 void setViewText(android_widget_TextView& arg0,java_lang_String& arg1);
 int getStringConversionColumn();
 void setStringConversionColumn(int& arg0);
 android_widget_SimpleCursorAdapter_CursorToStringConverter getCursorToStringConverter();
 void setCursorToStringConverter(android_widget_SimpleCursorAdapter_CursorToStringConverter& arg0);
 void changeCursorAndColumns(android_database_Cursor& arg0,std::vector<long>& arg1,std::vector<int>& arg2);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleCursorAdapter