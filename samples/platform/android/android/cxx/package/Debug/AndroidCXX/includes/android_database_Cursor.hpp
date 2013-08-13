/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
 		 
 		 
 		 
 		 
 		 
 		 
	
 	
 		 
 	
 		 
 		 
 		 
 		 
	














































// Generated Code 

#ifndef _android_database_Cursor
#define _android_database_Cursor
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

class java_lang_String;

class android_os_Bundle;

class android_database_DataSetObserver;

class android_database_ContentObserver;

class android_database_CharArrayBuffer;

class android_content_ContentResolver;

class android_net_Uri;

class android_database_Cursor : public java_io_Closeable
{
public:

	android_database_Cursor(const android_database_Cursor& cc);
	android_database_Cursor(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_database_Cursor();
	// Functions
	virtual short  getShort(int const& arg0) ;
	virtual int  getInt(int const& arg0) ;
	virtual long  getLong(int const& arg0) ;
	virtual float  getFloat(int const& arg0) ;
	virtual double  getDouble(int const& arg0) ;
	virtual void  close() ;
	virtual int  getType(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getString(int const& arg0) ;
	virtual bool  isFirst() ;
	virtual bool  isClosed() ;
	virtual int  getPosition() ;
	virtual bool  isNull(int const& arg0) ;
	virtual AndroidCXX::android_os_Bundle * getExtras() ;
	virtual int  getCount() ;
	virtual void  registerDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0) ;
	virtual void  unregisterDataSetObserver(AndroidCXX::android_database_DataSetObserver const& arg0) ;
	virtual int  getColumnCount() ;
	virtual void  registerContentObserver(AndroidCXX::android_database_ContentObserver const& arg0) ;
	virtual void  unregisterContentObserver(AndroidCXX::android_database_ContentObserver const& arg0) ;
	virtual bool  move(int const& arg0) ;
	virtual bool  moveToPosition(int const& arg0) ;
	virtual bool  moveToFirst() ;
	virtual bool  moveToLast() ;
	virtual bool  moveToNext() ;
	virtual bool  moveToPrevious() ;
	virtual bool  isLast() ;
	virtual bool  isBeforeFirst() ;
	virtual bool  isAfterLast() ;
	virtual int  getColumnIndex(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  getColumnIndexOrThrow(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getColumnName(int const& arg0) ;
	virtual std::vector<java_lang_String>  getColumnNames() ;
	virtual std::vector<byte>  getBlob(int const& arg0) ;
	virtual void  copyStringToBuffer(int const& arg0,AndroidCXX::android_database_CharArrayBuffer const& arg1) ;
	virtual void  deactivate() ;
	virtual bool  requery() ;
	virtual void  setNotificationUri(AndroidCXX::android_content_ContentResolver const& arg0,AndroidCXX::android_net_Uri const& arg1) ;
	virtual bool  getWantsAllOnMoveCalls() ;
	virtual AndroidCXX::android_os_Bundle * respond(AndroidCXX::android_os_Bundle const& arg0) ;

protected:
	android_database_Cursor();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_Cursor