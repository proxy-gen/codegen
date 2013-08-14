/*
 * Header (Instance CXX)
 * Author: codegen
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

class android_database_sqlite_SQLiteDatabase;

class android_database_DatabaseErrorHandler : public java_lang_Object
{
public:

	android_database_DatabaseErrorHandler(const android_database_DatabaseErrorHandler& cc);
	android_database_DatabaseErrorHandler(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_database_DatabaseErrorHandler();
	// Functions
	virtual void  onCorruption(AndroidCXX::android_database_sqlite_SQLiteDatabase const& arg0) ;

protected:
	android_database_DatabaseErrorHandler();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_DatabaseErrorHandler