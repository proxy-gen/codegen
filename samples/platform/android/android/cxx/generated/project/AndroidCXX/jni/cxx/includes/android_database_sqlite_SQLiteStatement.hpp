/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
		


#ifndef _android_database_sqlite_SQLiteStatement
#define _android_database_sqlite_SQLiteStatement









#include <android_os_ParcelFileDescriptor.hpp>
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