/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <android_os_ParcelFileDescriptor.hpp>

#include <java_lang_String.hpp>


#include <android_database_sqlite_SQLiteProgram.hpp>

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

class android_os_ParcelFileDescriptor;

class java_lang_String;

class android_database_sqlite_SQLiteStatement : public AndroidCXX::android_database_sqlite_SQLiteProgram
{
public:

	// Public Constructor
	android_database_sqlite_SQLiteStatement(const android_database_sqlite_SQLiteStatement& cc);
	android_database_sqlite_SQLiteStatement(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_database_sqlite_SQLiteStatement();
	// Functions
	virtual long  executeInsert() ;
	virtual void  execute() ;
	virtual int  executeUpdateDelete() ;
	virtual AndroidCXX::android_os_ParcelFileDescriptor * simpleQueryForBlobFileDescriptor() ;
	virtual long  simpleQueryForLong() ;
	virtual AndroidCXX::java_lang_String * simpleQueryForString() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteStatement