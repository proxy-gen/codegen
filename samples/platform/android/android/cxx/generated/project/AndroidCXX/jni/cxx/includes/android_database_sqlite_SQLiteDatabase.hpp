/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
 			
 			
		
 			
 			
		
 			
		
 			
 			
 			
 			
 			
 			
 			
		
 			
 			
 			
		
 			
 			
 			
		
 			
 			
		
 			
		
 			
 			
 			
		
 			
 			
		
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
 			
		

// Generated Code 

#ifndef _android_database_sqlite_SQLiteDatabase
#define _android_database_sqlite_SQLiteDatabase
//
// Scroll Down 
//
























































#include <java_lang_String.hpp>

#include <android_content_ContentValues.hpp>

#include <android_os_CancellationSignal.hpp>

#include <android_database_Cursor.hpp>

#include <android_database_sqlite_SQLiteDatabase_CursorFactory.hpp>


#include <java_util_Locale.hpp>

#include <java_io_File.hpp>

#include <android_database_DatabaseErrorHandler.hpp>

#include <android_database_sqlite_SQLiteTransactionListener.hpp>

#include <java_util_Map.hpp>

#include <android_database_sqlite_SQLiteStatement.hpp>

#include <java_util_List.hpp>

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

class java_lang_String;

class android_content_ContentValues;

class android_os_CancellationSignal;

class android_database_Cursor;

class android_database_sqlite_SQLiteDatabase_CursorFactory;


class java_util_Locale;

class java_io_File;

class android_database_DatabaseErrorHandler;

class android_database_sqlite_SQLiteTransactionListener;

class java_util_Map;

class android_database_sqlite_SQLiteStatement;

class java_util_List;

class android_database_sqlite_SQLiteDatabase
{
public:
 java_lang_String toString();
 long replace(java_lang_String& arg0,android_content_ContentValues& arg1);
 int _delete(java_lang_String& arg0,std::vector<long>& arg1);
 long insert(java_lang_String& arg0,android_content_ContentValues& arg1);
 bool isReadOnly();
 java_lang_String getPath();
 android_database_Cursor query(bool& arg0,java_lang_String& arg1,std::vector<long>& arg2,android_os_CancellationSignal& arg3);
static android_database_sqlite_SQLiteDatabase create(android_database_sqlite_SQLiteDatabase_CursorFactory& arg0);
 bool isOpen();
 int update(java_lang_String& arg0,android_content_ContentValues& arg1,std::vector<long>& arg2);
 int getVersion();
 void setVersion(int& arg0);
 void setLocale(java_util_Locale& arg0);
 void beginTransaction();
static android_database_sqlite_SQLiteDatabase openOrCreateDatabase(java_io_File& arg0,android_database_sqlite_SQLiteDatabase_CursorFactory& arg1,java_lang_String& arg2,android_database_DatabaseErrorHandler& arg3);
static bool deleteDatabase(java_io_File& arg0);
static int releaseMemory();
 void setLockingEnabled(bool& arg0);
 void beginTransactionNonExclusive();
 void beginTransactionWithListener(android_database_sqlite_SQLiteTransactionListener& arg0);
 void beginTransactionWithListenerNonExclusive(android_database_sqlite_SQLiteTransactionListener& arg0);
 void endTransaction();
 void setTransactionSuccessful();
 bool inTransaction();
 bool isDbLockedByCurrentThread();
 bool isDbLockedByOtherThreads();
 bool yieldIfContended();
 bool yieldIfContendedSafely(long& arg0);
 java_util_Map getSyncedTables();
static android_database_sqlite_SQLiteDatabase openDatabase(java_lang_String& arg0,android_database_sqlite_SQLiteDatabase_CursorFactory& arg1,int& arg2,android_database_DatabaseErrorHandler& arg3);
 long getMaximumSize();
 long setMaximumSize(long& arg0);
 long getPageSize();
 void setPageSize(long& arg0);
 void markTableSyncable(java_lang_String& arg0);
static java_lang_String findEditTable(java_lang_String& arg0);
 android_database_sqlite_SQLiteStatement compileStatement(java_lang_String& arg0);
 android_database_Cursor queryWithFactory(android_database_sqlite_SQLiteDatabase_CursorFactory& arg0,bool& arg1,java_lang_String& arg2,std::vector<long>& arg3,android_os_CancellationSignal& arg4);
 android_database_Cursor rawQuery(java_lang_String& arg0,std::vector<long>& arg1,android_os_CancellationSignal& arg2);
 android_database_Cursor rawQueryWithFactory(android_database_sqlite_SQLiteDatabase_CursorFactory& arg0,java_lang_String& arg1,std::vector<long>& arg2,android_os_CancellationSignal& arg3);
 long insertOrThrow(java_lang_String& arg0,android_content_ContentValues& arg1);
 long replaceOrThrow(java_lang_String& arg0,android_content_ContentValues& arg1);
 long insertWithOnConflict(java_lang_String& arg0,android_content_ContentValues& arg1,int& arg2);
 int updateWithOnConflict(java_lang_String& arg0,android_content_ContentValues& arg1,std::vector<long>& arg2,int& arg3);
 void execSQL(java_lang_String& arg0,std::vector<long>& arg1);
 bool needUpgrade(int& arg0);
 void setMaxSqlCacheSize(int& arg0);
 void setForeignKeyConstraintsEnabled(bool& arg0);
 bool enableWriteAheadLogging();
 void disableWriteAheadLogging();
 bool isWriteAheadLoggingEnabled();
 java_util_List getAttachedDbs();
 bool isDatabaseIntegrityOk();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteDatabase