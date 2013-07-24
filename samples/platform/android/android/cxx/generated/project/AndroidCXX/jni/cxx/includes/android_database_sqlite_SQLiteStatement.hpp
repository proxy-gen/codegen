/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


	
	
	














// Generated Code 

#ifndef _android_database_sqlite_SQLiteStatement
#define _android_database_sqlite_SQLiteStatement
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_ParcelFileDescriptor.hpp>

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

class android_os_ParcelFileDescriptor;

class android_database_sqlite_SQLiteStatement
{
public:

	android_database_sqlite_SQLiteStatement(const android_database_sqlite_SQLiteStatement& cc);
	android_database_sqlite_SQLiteStatement(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_database_sqlite_SQLiteStatement();
	// 
	// Default Destructor
	virtual ~android_database_sqlite_SQLiteStatement();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 void execute();
	 int executeUpdateDelete();
	 long executeInsert();
	 long simpleQueryForLong();
	 AndroidCXX::java_lang_String simpleQueryForString();
	 AndroidCXX::android_os_ParcelFileDescriptor simpleQueryForBlobFileDescriptor();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteStatement