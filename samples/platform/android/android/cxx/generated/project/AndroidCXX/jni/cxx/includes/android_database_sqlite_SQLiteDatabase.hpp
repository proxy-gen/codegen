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

#include <android_database_Cursor.hpp>

#include <android_os_CancellationSignal.hpp>

#include <android_database_sqlite_SQLiteDatabase_CursorFactory.hpp>


#include <java_util_Locale.hpp>

#include <java_io_File.hpp>

#include <android_database_DatabaseErrorHandler.hpp>

#include <android_database_sqlite_SQLiteTransactionListener.hpp>

#include <java_util_Map.hpp>

#include <android_database_sqlite_SQLiteStatement.hpp>

#include <java_lang_Object.hpp>

#include <java_util_List.hpp>

#include <android_util_Pair.hpp>

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

class java_lang_String;

class android_content_ContentValues;

class android_database_Cursor;

class android_os_CancellationSignal;

class android_database_sqlite_SQLiteDatabase_CursorFactory;

class android_database_sqlite_SQLiteDatabase;

class java_util_Locale;

class java_io_File;

class android_database_DatabaseErrorHandler;

class android_database_sqlite_SQLiteTransactionListener;

class java_util_Map;

class android_database_sqlite_SQLiteStatement;

class java_lang_Object;

class java_util_List;

class android_util_Pair;

class android_database_sqlite_SQLiteDatabase
{
public:

	android_database_sqlite_SQLiteDatabase(const android_database_sqlite_SQLiteDatabase& cc);
	android_database_sqlite_SQLiteDatabase(void * proxy);
	// Public Constructors
	android_database_sqlite_SQLiteDatabase();
	// Default Destructor
	virtual ~android_database_sqlite_SQLiteDatabase();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 long replace(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_content_ContentValues& arg2);
	 int _delete(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,std::vector<AndroidCXX::java_lang_String >& arg2);
	 long insert(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_content_ContentValues& arg2);
	 bool isReadOnly();
	 AndroidCXX::java_lang_String getPath();
	 AndroidCXX::android_database_Cursor query(bool& arg0,AndroidCXX::java_lang_String& arg1,std::vector<AndroidCXX::java_lang_String >& arg2,AndroidCXX::java_lang_String& arg3,std::vector<AndroidCXX::java_lang_String >& arg4,AndroidCXX::java_lang_String& arg5,AndroidCXX::java_lang_String& arg6,AndroidCXX::java_lang_String& arg7,AndroidCXX::java_lang_String& arg8);
	 AndroidCXX::android_database_Cursor query(AndroidCXX::java_lang_String& arg0,std::vector<AndroidCXX::java_lang_String >& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3,AndroidCXX::java_lang_String& arg4,AndroidCXX::java_lang_String& arg5,AndroidCXX::java_lang_String& arg6,AndroidCXX::java_lang_String& arg7);
	 AndroidCXX::android_database_Cursor query(AndroidCXX::java_lang_String& arg0,std::vector<AndroidCXX::java_lang_String >& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3,AndroidCXX::java_lang_String& arg4,AndroidCXX::java_lang_String& arg5,AndroidCXX::java_lang_String& arg6);
	 AndroidCXX::android_database_Cursor query(bool& arg0,AndroidCXX::java_lang_String& arg1,std::vector<AndroidCXX::java_lang_String >& arg2,AndroidCXX::java_lang_String& arg3,std::vector<AndroidCXX::java_lang_String >& arg4,AndroidCXX::java_lang_String& arg5,AndroidCXX::java_lang_String& arg6,AndroidCXX::java_lang_String& arg7,AndroidCXX::java_lang_String& arg8,AndroidCXX::android_os_CancellationSignal& arg9);
	static AndroidCXX::android_database_sqlite_SQLiteDatabase create(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory& arg0);
	 bool isOpen();
	 int update(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_content_ContentValues& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3);
	 int getVersion();
	 void setVersion(int& arg0);
	 void setLocale(AndroidCXX::java_util_Locale& arg0);
	 void beginTransaction();
	static AndroidCXX::android_database_sqlite_SQLiteDatabase openOrCreateDatabase(AndroidCXX::java_io_File& arg0,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory& arg1);
	static AndroidCXX::android_database_sqlite_SQLiteDatabase openOrCreateDatabase(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory& arg1);
	static AndroidCXX::android_database_sqlite_SQLiteDatabase openOrCreateDatabase(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory& arg1,AndroidCXX::android_database_DatabaseErrorHandler& arg2);
	static bool deleteDatabase(AndroidCXX::java_io_File& arg0);
	static int releaseMemory();
	 void setLockingEnabled(bool& arg0);
	 void beginTransactionNonExclusive();
	 void beginTransactionWithListener(AndroidCXX::android_database_sqlite_SQLiteTransactionListener& arg0);
	 void beginTransactionWithListenerNonExclusive(AndroidCXX::android_database_sqlite_SQLiteTransactionListener& arg0);
	 void endTransaction();
	 void setTransactionSuccessful();
	 bool inTransaction();
	 bool isDbLockedByCurrentThread();
	 bool isDbLockedByOtherThreads();
	 bool yieldIfContended();
	 bool yieldIfContendedSafely(long& arg0);
	 bool yieldIfContendedSafely();
	 AndroidCXX::java_util_Map getSyncedTables();
	static AndroidCXX::android_database_sqlite_SQLiteDatabase openDatabase(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory& arg1,int& arg2,AndroidCXX::android_database_DatabaseErrorHandler& arg3);
	static AndroidCXX::android_database_sqlite_SQLiteDatabase openDatabase(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory& arg1,int& arg2);
	 long getMaximumSize();
	 long setMaximumSize(long& arg0);
	 long getPageSize();
	 void setPageSize(long& arg0);
	 void markTableSyncable(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 void markTableSyncable(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_lang_String& arg2);
	static AndroidCXX::java_lang_String findEditTable(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::android_database_sqlite_SQLiteStatement compileStatement(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::android_database_Cursor queryWithFactory(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory& arg0,bool& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3,AndroidCXX::java_lang_String& arg4,std::vector<AndroidCXX::java_lang_String >& arg5,AndroidCXX::java_lang_String& arg6,AndroidCXX::java_lang_String& arg7,AndroidCXX::java_lang_String& arg8,AndroidCXX::java_lang_String& arg9,AndroidCXX::android_os_CancellationSignal& arg10);
	 AndroidCXX::android_database_Cursor queryWithFactory(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory& arg0,bool& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3,AndroidCXX::java_lang_String& arg4,std::vector<AndroidCXX::java_lang_String >& arg5,AndroidCXX::java_lang_String& arg6,AndroidCXX::java_lang_String& arg7,AndroidCXX::java_lang_String& arg8,AndroidCXX::java_lang_String& arg9);
	 AndroidCXX::android_database_Cursor rawQuery(AndroidCXX::java_lang_String& arg0,std::vector<AndroidCXX::java_lang_String >& arg1,AndroidCXX::android_os_CancellationSignal& arg2);
	 AndroidCXX::android_database_Cursor rawQuery(AndroidCXX::java_lang_String& arg0,std::vector<AndroidCXX::java_lang_String >& arg1);
	 AndroidCXX::android_database_Cursor rawQueryWithFactory(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory& arg0,AndroidCXX::java_lang_String& arg1,std::vector<AndroidCXX::java_lang_String >& arg2,AndroidCXX::java_lang_String& arg3);
	 AndroidCXX::android_database_Cursor rawQueryWithFactory(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory& arg0,AndroidCXX::java_lang_String& arg1,std::vector<AndroidCXX::java_lang_String >& arg2,AndroidCXX::java_lang_String& arg3,AndroidCXX::android_os_CancellationSignal& arg4);
	 long insertOrThrow(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_content_ContentValues& arg2);
	 long replaceOrThrow(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_content_ContentValues& arg2);
	 long insertWithOnConflict(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::android_content_ContentValues& arg2,int& arg3);
	 int updateWithOnConflict(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_content_ContentValues& arg1,AndroidCXX::java_lang_String& arg2,std::vector<AndroidCXX::java_lang_String >& arg3,int& arg4);
	 void execSQL(AndroidCXX::java_lang_String& arg0,std::vector<AndroidCXX::java_lang_Object >& arg1);
	 void execSQL(AndroidCXX::java_lang_String& arg0);
	 bool needUpgrade(int& arg0);
	 void setMaxSqlCacheSize(int& arg0);
	 void setForeignKeyConstraintsEnabled(bool& arg0);
	 bool enableWriteAheadLogging();
	 void disableWriteAheadLogging();
	 bool isWriteAheadLoggingEnabled();
	 AndroidCXX::java_util_List getAttachedDbs();
	 bool isDatabaseIntegrityOk();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteDatabase