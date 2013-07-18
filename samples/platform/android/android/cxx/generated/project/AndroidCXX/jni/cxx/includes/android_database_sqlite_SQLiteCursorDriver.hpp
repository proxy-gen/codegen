/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			


#ifndef _android_database_sqlite_SQLiteCursorDriver
#define _android_database_sqlite_SQLiteCursorDriver







#include <android_database_sqlite_SQLiteDatabase_CursorFactory.hpp>
#include <android_database_Cursor.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_database_sqlite_SQLiteCursorDriver
{
public:
	android_database_Cursor query(android_database_sqlite_SQLiteDatabase_CursorFactory& arg0,std::vector<long>& arg1);
	void cursorDeactivated();
	void cursorRequeried(android_database_Cursor& arg0);
	void cursorClosed();
	void setBindArguments(std::vector<long>& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteCursorDriver