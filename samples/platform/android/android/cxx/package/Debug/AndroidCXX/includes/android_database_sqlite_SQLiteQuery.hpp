/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	








// Generated Code 

#ifndef _android_database_sqlite_SQLiteQuery
#define _android_database_sqlite_SQLiteQuery
//
// Scroll Down 
//


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

class java_lang_String;

class android_database_sqlite_SQLiteQuery : public AndroidCXX::android_database_sqlite_SQLiteProgram
{
public:

	// Public Constructor
	android_database_sqlite_SQLiteQuery(const android_database_sqlite_SQLiteQuery& cc);
	android_database_sqlite_SQLiteQuery(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_database_sqlite_SQLiteQuery();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteQuery