/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
 	
	
 		 
 		 
 	
 		 












// Generated Code 

#ifndef _android_database_sqlite_SQLiteCursorDriver
#define _android_database_sqlite_SQLiteCursorDriver
//
// Scroll Down 
//


#include <android_database_sqlite_SQLiteDatabase_CursorFactory.hpp>

#include <android_database_Cursor.hpp>

#include <java_lang_String.hpp>

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

class android_database_sqlite_SQLiteDatabase_CursorFactory;

class android_database_Cursor;

class java_lang_String;

class android_database_sqlite_SQLiteCursorDriver
{
public:

	android_database_sqlite_SQLiteCursorDriver(const android_database_sqlite_SQLiteCursorDriver& cc);
	android_database_sqlite_SQLiteCursorDriver(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_database_sqlite_SQLiteCursorDriver();
	// Functions
	 AndroidCXX::android_database_Cursor query(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg0,std::vector<AndroidCXX::java_lang_String > const& arg1);
	 void cursorDeactivated();
	 void cursorRequeried(AndroidCXX::android_database_Cursor const& arg0);
	 void cursorClosed();
	 void setBindArguments(std::vector<AndroidCXX::java_lang_String > const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteCursorDriver