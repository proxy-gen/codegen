/*
 * Header (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
 			
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
		


#ifndef _android_database_Cursor
#define _android_database_Cursor









































#include <android_database_CharArrayBuffer.hpp>
#include <android_os_Bundle.hpp>
#include <android_content_ContentResolver.hpp>
#include <android_database_ContentObserver.hpp>
#include <android_net_Uri.hpp>
#include <android_database_DataSetObserver.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_database_Cursor
{
public:
	short getShort(int& arg0);
	int getInt(int& arg0);
	long getLong(int& arg0);
	float getFloat(int& arg0);
	double getDouble(int& arg0);
	void close();
	int getType(int& arg0);
	java_lang_String getString(int& arg0);
	bool isFirst();
	bool isClosed();
	int getPosition();
	bool isNull(int& arg0);
	android_os_Bundle getExtras();
	void registerContentObserver(android_database_ContentObserver& arg0);
	void unregisterContentObserver(android_database_ContentObserver& arg0);
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
	int getColumnIndex(java_lang_String& arg0);
	int getColumnIndexOrThrow(java_lang_String& arg0);
	java_lang_String getColumnName(int& arg0);
	std::vector<long> getColumnNames();
	int getColumnCount();
	std::vector<char> getBlob(int& arg0);
	void copyStringToBuffer(int& arg0,android_database_CharArrayBuffer& arg1);
	void deactivate();
	bool requery();
	void registerDataSetObserver(android_database_DataSetObserver& arg0);
	void unregisterDataSetObserver(android_database_DataSetObserver& arg0);
	void setNotificationUri(android_content_ContentResolver& arg0,android_net_Uri& arg1);
	bool getWantsAllOnMoveCalls();
	android_os_Bundle respond(android_os_Bundle& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_Cursor