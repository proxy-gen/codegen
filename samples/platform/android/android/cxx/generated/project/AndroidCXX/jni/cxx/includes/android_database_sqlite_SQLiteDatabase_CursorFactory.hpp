/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
 			
		


#ifndef _android_database_sqlite_SQLiteDatabase_CursorFactory
#define _android_database_sqlite_SQLiteDatabase_CursorFactory



#include <android_database_sqlite_SQLiteQuery.hpp>
#include <android_database_Cursor.hpp>
#include <android_database_sqlite_SQLiteCursorDriver.hpp>
#include <android_database_sqlite_SQLiteDatabase.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_database_sqlite_SQLiteDatabase_CursorFactory
{
public:
	android_database_Cursor newCursor(android_database_sqlite_SQLiteDatabase& arg0,android_database_sqlite_SQLiteCursorDriver& arg1,java_lang_String& arg2,android_database_sqlite_SQLiteQuery& arg3);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteDatabase_CursorFactory