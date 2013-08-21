/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_database_sqlite_SQLiteTransactionListener.hpp>

#include <java_lang_String.hpp>

#include <android_database_sqlite_SQLiteStatement.hpp>

#include <android_database_sqlite_SQLiteDatabase_CursorFactory.hpp>

#include <java_io_File.hpp>

#include <java_lang_Object.hpp>

#include <java_util_List.hpp>

#include <android_util_Pair.hpp>

#include <java_util_Map.hpp>

#include <android_content_ContentValues.hpp>

#include <android_database_DatabaseErrorHandler.hpp>

#include <android_os_CancellationSignal.hpp>

#include <android_database_Cursor.hpp>

#include <java_util_Locale.hpp>


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

class android_database_sqlite_SQLiteTransactionListener;

class java_lang_String;

class android_database_sqlite_SQLiteStatement;

class android_database_sqlite_SQLiteDatabase_CursorFactory;


class java_io_File;


class java_util_List;

class android_util_Pair;

class java_util_Map;

class android_content_ContentValues;

class android_database_DatabaseErrorHandler;

class android_os_CancellationSignal;

class android_database_Cursor;

class java_util_Locale;

class android_database_sqlite_SQLiteDatabase : public AndroidCXX::java_lang_Object
{
public:

	// Public ConstrucXXX
	android_database_sqlite_SQLiteDatabase(const android_database_sqlite_SQLiteDatabase& cc);
	android_database_sqlite_SQLiteDatabase(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_database_sqlite_SQLiteDatabase();
	// Functions
	virtual void  beginTransactionNonExclusive() ;
	virtual void  beginTransaction() ;
	virtual void  beginTransactionWithListenerNonExclusive(AndroidCXX::android_database_sqlite_SQLiteTransactionListener const& arg0) ;
	virtual void  beginTransactionWithListener(AndroidCXX::android_database_sqlite_SQLiteTransactionListener const& arg0) ;
	virtual AndroidCXX::android_database_sqlite_SQLiteStatement * compileStatement(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::android_database_sqlite_SQLiteDatabase * create(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg0) ;
	static bool  deleteDatabase(AndroidCXX::java_io_File const& arg0) ;
	virtual int  _delete(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_String> const& arg2) ;
	virtual void  disableWriteAheadLogging() ;
	virtual bool  enableWriteAheadLogging() ;
	virtual void  endTransaction() ;
	virtual void  execSQL(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_Object> const& arg1) ;
	virtual void  execSQL(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::java_lang_String * findEditTable(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_List * getAttachedDbs() ;
	virtual long  getMaximumSize() ;
	virtual long  getPageSize() ;
	virtual AndroidCXX::java_lang_String * getPath() ;
	virtual AndroidCXX::java_util_Map * getSyncedTables() ;
	virtual int  getVersion() ;
	virtual bool  inTransaction() ;
	virtual long  insertOrThrow(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_ContentValues const& arg2) ;
	virtual long  insert(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_ContentValues const& arg2) ;
	virtual long  insertWithOnConflict(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_ContentValues const& arg2,int const& arg3) ;
	virtual bool  isDatabaseIntegrityOk() ;
	virtual bool  isDbLockedByCurrentThread() ;
	virtual bool  isDbLockedByOtherThreads() ;
	virtual bool  isOpen() ;
	virtual bool  isReadOnly() ;
	virtual bool  isWriteAheadLoggingEnabled() ;
	virtual void  markTableSyncable(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual void  markTableSyncable(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual bool  needUpgrade(int const& arg0) ;
	static AndroidCXX::android_database_sqlite_SQLiteDatabase * openDatabase(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg1,int const& arg2,AndroidCXX::android_database_DatabaseErrorHandler const& arg3) ;
	static AndroidCXX::android_database_sqlite_SQLiteDatabase * openDatabase(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg1,int const& arg2) ;
	static AndroidCXX::android_database_sqlite_SQLiteDatabase * openOrCreateDatabase(AndroidCXX::java_io_File const& arg0,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg1) ;
	static AndroidCXX::android_database_sqlite_SQLiteDatabase * openOrCreateDatabase(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg1,AndroidCXX::android_database_DatabaseErrorHandler const& arg2) ;
	static AndroidCXX::android_database_sqlite_SQLiteDatabase * openOrCreateDatabase(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg1) ;
	virtual AndroidCXX::android_database_Cursor * query(bool const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_String> const& arg2,AndroidCXX::java_lang_String const& arg3,std::vector<AndroidCXX::java_lang_String> const& arg4,AndroidCXX::java_lang_String const& arg5,AndroidCXX::java_lang_String const& arg6,AndroidCXX::java_lang_String const& arg7,AndroidCXX::java_lang_String const& arg8,AndroidCXX::android_os_CancellationSignal const& arg9) ;
	virtual AndroidCXX::android_database_Cursor * query(bool const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_String> const& arg2,AndroidCXX::java_lang_String const& arg3,std::vector<AndroidCXX::java_lang_String> const& arg4,AndroidCXX::java_lang_String const& arg5,AndroidCXX::java_lang_String const& arg6,AndroidCXX::java_lang_String const& arg7,AndroidCXX::java_lang_String const& arg8) ;
	virtual AndroidCXX::android_database_Cursor * query(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3,AndroidCXX::java_lang_String const& arg4,AndroidCXX::java_lang_String const& arg5,AndroidCXX::java_lang_String const& arg6,AndroidCXX::java_lang_String const& arg7) ;
	virtual AndroidCXX::android_database_Cursor * query(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3,AndroidCXX::java_lang_String const& arg4,AndroidCXX::java_lang_String const& arg5,AndroidCXX::java_lang_String const& arg6) ;
	virtual AndroidCXX::android_database_Cursor * queryWithFactory(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg0,bool const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3,AndroidCXX::java_lang_String const& arg4,std::vector<AndroidCXX::java_lang_String> const& arg5,AndroidCXX::java_lang_String const& arg6,AndroidCXX::java_lang_String const& arg7,AndroidCXX::java_lang_String const& arg8,AndroidCXX::java_lang_String const& arg9,AndroidCXX::android_os_CancellationSignal const& arg10) ;
	virtual AndroidCXX::android_database_Cursor * queryWithFactory(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg0,bool const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3,AndroidCXX::java_lang_String const& arg4,std::vector<AndroidCXX::java_lang_String> const& arg5,AndroidCXX::java_lang_String const& arg6,AndroidCXX::java_lang_String const& arg7,AndroidCXX::java_lang_String const& arg8,AndroidCXX::java_lang_String const& arg9) ;
	virtual AndroidCXX::android_database_Cursor * rawQuery(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1,AndroidCXX::android_os_CancellationSignal const& arg2) ;
	virtual AndroidCXX::android_database_Cursor * rawQuery(AndroidCXX::java_lang_String const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1) ;
	virtual AndroidCXX::android_database_Cursor * rawQueryWithFactory(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_String> const& arg2,AndroidCXX::java_lang_String const& arg3,AndroidCXX::android_os_CancellationSignal const& arg4) ;
	virtual AndroidCXX::android_database_Cursor * rawQueryWithFactory(AndroidCXX::android_database_sqlite_SQLiteDatabase_CursorFactory const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_String> const& arg2,AndroidCXX::java_lang_String const& arg3) ;
	static int  releaseMemory() ;
	virtual long  replaceOrThrow(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_ContentValues const& arg2) ;
	virtual long  replace(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::android_content_ContentValues const& arg2) ;
	virtual void  setForeignKeyConstraintsEnabled(bool const& arg0) ;
	virtual void  setLocale(AndroidCXX::java_util_Locale const& arg0) ;
	virtual void  setLockingEnabled(bool const& arg0) ;
	virtual void  setMaxSqlCacheSize(int const& arg0) ;
	virtual long  setMaximumSize(long const& arg0) ;
	virtual void  setPageSize(long const& arg0) ;
	virtual void  setTransactionSuccessful() ;
	virtual void  setVersion(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  update(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_content_ContentValues const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3) ;
	virtual int  updateWithOnConflict(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_content_ContentValues const& arg1,AndroidCXX::java_lang_String const& arg2,std::vector<AndroidCXX::java_lang_String> const& arg3,int const& arg4) ;
	virtual bool  yieldIfContended() ;
	virtual bool  yieldIfContendedSafely(long const& arg0) ;
	virtual bool  yieldIfContendedSafely() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteDatabase