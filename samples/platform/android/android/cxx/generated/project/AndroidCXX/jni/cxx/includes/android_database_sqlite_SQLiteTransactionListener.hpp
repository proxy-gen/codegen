/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//













// Generated Code 

#ifndef _android_database_sqlite_SQLiteTransactionListener
#define _android_database_sqlite_SQLiteTransactionListener
//
// Scroll Down 
//


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

class android_database_sqlite_SQLiteTransactionListener
{
public:

	android_database_sqlite_SQLiteTransactionListener(const android_database_sqlite_SQLiteTransactionListener& cc);
	android_database_sqlite_SQLiteTransactionListener(void * proxy);
	// Public Constructors
	android_database_sqlite_SQLiteTransactionListener();
	// Default Destructor
	virtual ~android_database_sqlite_SQLiteTransactionListener();
	// Functions
	 void onBegin();
	 void onCommit();
	 void onRollback();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteTransactionListener