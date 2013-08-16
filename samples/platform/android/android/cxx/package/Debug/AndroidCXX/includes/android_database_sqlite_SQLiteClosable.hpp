/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//















// Generated Code 

#ifndef _android_database_sqlite_SQLiteClosable
#define _android_database_sqlite_SQLiteClosable
//
// Scroll Down 
//



#include <java_io_Closeable.hpp>

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

class android_database_sqlite_SQLiteClosable : public java_io_Closeable
{
public:

	android_database_sqlite_SQLiteClosable(const android_database_sqlite_SQLiteClosable& cc);
	android_database_sqlite_SQLiteClosable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_database_sqlite_SQLiteClosable();
	// Functions
	virtual void  acquireReference() ;
	virtual void  close() ;
	virtual void  releaseReference() ;
	virtual void  releaseReferenceFromContainer() ;

protected:
	android_database_sqlite_SQLiteClosable();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteClosable