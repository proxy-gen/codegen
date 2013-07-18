/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//





#ifndef _android_database_sqlite_SQLiteTransactionListener
#define _android_database_sqlite_SQLiteTransactionListener





#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_database_sqlite_SQLiteTransactionListener
{
public:
	void onBegin();
	void onCommit();
	void onRollback();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteTransactionListener