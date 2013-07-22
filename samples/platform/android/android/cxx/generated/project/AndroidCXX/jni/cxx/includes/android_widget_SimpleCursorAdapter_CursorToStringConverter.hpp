/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	








// Generated Code 

#ifndef _android_widget_SimpleCursorAdapter_CursorToStringConverter
#define _android_widget_SimpleCursorAdapter_CursorToStringConverter
//
// Scroll Down 
//


#include <android_database_Cursor.hpp>

#include <java_lang_CharSequence.hpp>

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

class java_lang_CharSequence;

class android_widget_SimpleCursorAdapter_CursorToStringConverter
{
public:

	android_widget_SimpleCursorAdapter_CursorToStringConverter(const android_widget_SimpleCursorAdapter_CursorToStringConverter& cc);
	android_widget_SimpleCursorAdapter_CursorToStringConverter(void * proxy);
	// Public Constructors
	android_widget_SimpleCursorAdapter_CursorToStringConverter();
	// Default Destructor
	virtual ~android_widget_SimpleCursorAdapter_CursorToStringConverter();
	// Functions
	 AndroidCXX::java_lang_CharSequence convertToString(AndroidCXX::android_database_Cursor& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleCursorAdapter_CursorToStringConverter