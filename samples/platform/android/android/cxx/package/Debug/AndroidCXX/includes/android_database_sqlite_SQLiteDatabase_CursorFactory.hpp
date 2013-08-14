/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 		 
 		 
	








// Generated Code 

#ifndef _android_database_sqlite_SQLiteDatabase_CursorFactory
#define _android_database_sqlite_SQLiteDatabase_CursorFactory
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

class android_database_sqlite_SQLiteDatabase;

class android_database_sqlite_SQLiteCursorDriver;

class java_lang_String;

class android_database_sqlite_SQLiteQuery;

class android_database_Cursor;

class android_database_sqlite_SQLiteDatabase_CursorFactory : public java_lang_Object
{
public:

	android_database_sqlite_SQLiteDatabase_CursorFactory(const android_database_sqlite_SQLiteDatabase_CursorFactory& cc);
	android_database_sqlite_SQLiteDatabase_CursorFactory(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_database_sqlite_SQLiteDatabase_CursorFactory();
	// Functions
	virtual AndroidCXX::android_database_Cursor * newCursor(AndroidCXX::android_database_sqlite_SQLiteDatabase const& arg0,AndroidCXX::android_database_sqlite_SQLiteCursorDriver const& arg1,AndroidCXX::java_lang_String const& arg2,AndroidCXX::android_database_sqlite_SQLiteQuery const& arg3) ;

protected:
	android_database_sqlite_SQLiteDatabase_CursorFactory();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteDatabase_CursorFactory