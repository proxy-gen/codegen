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
 java_lang_String toString();
 void execute();
 int executeUpdateDelete();
 long executeInsert();
 long simpleQueryForLong();
 java_lang_String simpleQueryForString();
 android_os_ParcelFileDescriptor simpleQueryForBlobFileDescriptor();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteStatement