/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_database_sqlite_SQLiteTransactionListener : public AndroidCXX::java_lang_Object
{
public:

	android_database_sqlite_SQLiteTransactionListener(const android_database_sqlite_SQLiteTransactionListener& cc);
	android_database_sqlite_SQLiteTransactionListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_database_sqlite_SQLiteTransactionListener();
	// Functions
	virtual void  onBegin() ;
	virtual void  onCommit() ;
	virtual void  onRollback() ;

protected:
	android_database_sqlite_SQLiteTransactionListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteTransactionListener