/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_database_Cursor;

class java_lang_CharSequence;

class android_widget_SimpleCursorAdapter_CursorToStringConverter : public java_lang_Object
{
public:

	android_widget_SimpleCursorAdapter_CursorToStringConverter(const android_widget_SimpleCursorAdapter_CursorToStringConverter& cc);
	android_widget_SimpleCursorAdapter_CursorToStringConverter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_SimpleCursorAdapter_CursorToStringConverter();
	// Functions
	virtual AndroidCXX::java_lang_CharSequence * convertToString(AndroidCXX::android_database_Cursor const& arg0) ;

protected:
	android_widget_SimpleCursorAdapter_CursorToStringConverter();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_SimpleCursorAdapter_CursorToStringConverter