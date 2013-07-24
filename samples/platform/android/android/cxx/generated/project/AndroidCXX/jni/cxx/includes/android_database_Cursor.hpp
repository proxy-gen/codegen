/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_String.hpp>

#include <android_os_Bundle.hpp>

#include <android_database_ContentObserver.hpp>

#include <android_database_CharArrayBuffer.hpp>

#include <android_database_DataSetObserver.hpp>

#include <android_content_ContentResolver.hpp>

#include <android_net_Uri.hpp>

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

class android_database_ContentObserver;

class android_database_CharArrayBuffer;

class android_database_DataSetObserver;

class android_content_ContentResolver;

class android_net_Uri;

class android_database_Cursor
{
public:

	android_database_Cursor(const android_database_Cursor& cc);
	android_database_Cursor(void * proxy);
	// Public Constructors
	// TODO: remove
	// 
	// android_database_Cursor();
	// 
	// Default Destructor
	virtual ~android_database_Cursor();
	// Functions
	 short getShort(int& arg0);
	 int getInt(int& arg0);
	 long getLong(int& arg0);
	 float getFloat(int& arg0);
	 double getDouble(int& arg0);
	 void close();
	 int getType(int& arg0);
	 AndroidCXX::java_lang_String getString(int& arg0);
	 bool isFirst();
	 bool isClosed();
	 int getPosition();
	 bool isNull(int& arg0);
	 AndroidCXX::android_os_Bundle getExtras();
	 void registerContentObserver(AndroidCXX::android_database_ContentObserver& arg0);
	 void unregisterContentObserver(AndroidCXX::android_database_ContentObserver& arg0);
	 int getCount();
	 bool move(int& arg0);
	 bool moveToPosition(int& arg0);
	 bool moveToFirst();
	 bool moveToLast();
	 bool moveToNext();
	 bool moveToPrevious();
	 bool isLast();
	 bool isBeforeFirst();
	 bool isAfterLast();
	 int getColumnIndex(AndroidCXX::java_lang_String& arg0);
	 int getColumnIndexOrThrow(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getColumnName(int& arg0);
	 std::vector<AndroidCXX::java_lang_String > getColumnNames();
	 int getColumnCount();
	 std::vector<byte> getBlob(int& arg0);
	 void copyStringToBuffer(int& arg0,AndroidCXX::android_database_CharArrayBuffer& arg1);
	 void deactivate();
	 bool requery();
	 void registerDataSetObserver(AndroidCXX::android_database_DataSetObserver& arg0);
	 void unregisterDataSetObserver(AndroidCXX::android_database_DataSetObserver& arg0);
	 void setNotificationUri(AndroidCXX::android_content_ContentResolver& arg0,AndroidCXX::android_net_Uri& arg1);
	 bool getWantsAllOnMoveCalls();
	 AndroidCXX::android_os_Bundle respond(AndroidCXX::android_os_Bundle& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_Cursor