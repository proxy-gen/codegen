/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 		 
 	
 		 















// Generated Code 

#ifndef _android_database_sqlite_SQLiteProgram
#define _android_database_sqlite_SQLiteProgram
//
// Scroll Down 
//



#include <android_database_sqlite_SQLiteClosable.hpp>

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

class android_database_sqlite_SQLiteProgram : public AndroidCXX::android_database_sqlite_SQLiteClosable
{
public:

	android_database_sqlite_SQLiteProgram(const android_database_sqlite_SQLiteProgram& cc);
	android_database_sqlite_SQLiteProgram(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_database_sqlite_SQLiteProgram();
	// Functions
	virtual void  bindAllArgsAsStrings(std::vector<AndroidCXX::java_lang_String> const& arg0) ;
	virtual void  bindBlob(int const& arg0,std::vector<byte> const& arg1) ;
	virtual void  bindDouble(int const& arg0,double const& arg1) ;
	virtual void  bindLong(int const& arg0,long const& arg1) ;
	virtual void  bindNull(int const& arg0) ;
	virtual void  bindString(int const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  clearBindings() ;
	virtual int  getUniqueId() ;

protected:
	android_database_sqlite_SQLiteProgram();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_sqlite_SQLiteProgram