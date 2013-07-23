/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_database_DatabaseErrorHandler
#define _android_database_DatabaseErrorHandler
//
// Scroll Down 
//


#include <android_database_sqlite_SQLiteDatabase.hpp>

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

class android_database_DatabaseErrorHandler
{
public:

	android_database_DatabaseErrorHandler(const android_database_DatabaseErrorHandler& cc);
	android_database_DatabaseErrorHandler(void * proxy);
	// Public Constructors
	android_database_DatabaseErrorHandler();
	// Default Destructor
	virtual ~android_database_DatabaseErrorHandler();
	// Functions
	 void onCorruption(AndroidCXX::android_database_sqlite_SQLiteDatabase& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_DatabaseErrorHandler