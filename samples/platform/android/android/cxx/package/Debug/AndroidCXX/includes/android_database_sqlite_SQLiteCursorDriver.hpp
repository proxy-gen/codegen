/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_database_sqlite_SQLiteDatabase_CursorFactory;

class java_lang_String;

class android_database_sqlite_SQLiteCursorDriver : public java_lang_Object
{
public:

	android_database_sqlite_SQLiteCursorDriver(const android_database_sqlite_SQLiteCursorDriver& cc);
	android_database_sqlite_SQLiteCursorDriver(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_database_sqlite_SQLiteCursorDriver();
	// Functions
	virtual void  cursorClosed() ;
	virtual void  cursorDeactivated() ;
	virtual void  cursorRequeried(AndroidCXX::android_database_Cursor const& arg0) ;
	virtual AndroidCXX::android_database_Cursor * query(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg0,std::vector<java_lang_String> const& arg1) ;
	virtual void  setBindArguments(std::vector<java_lang_String> const& arg0) ;

protected:
	android_database_sqlite_SQLiteCursorDriver();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteCursorDriver