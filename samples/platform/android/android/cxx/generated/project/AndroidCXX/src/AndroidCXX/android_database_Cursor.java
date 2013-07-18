/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_database_Cursor implements android.database.Cursor
{
	public native short getShort(int arg0);
	public native int getInt(int arg0);
	public native long getLong(int arg0);
	public native float getFloat(int arg0);
	public native double getDouble(int arg0);
	public native void close();
	public native int getType(int arg0);
	public native java.lang.String getString(int arg0);
	public native boolean isFirst();
	public native boolean isClosed();
	public native int getPosition();
	public native boolean isNull(int arg0);
	public native android.os.Bundle getExtras();
	public native void registerContentObserver(android.database.ContentObserver arg0);
	public native void unregisterContentObserver(android.database.ContentObserver arg0);
	public native int getCount();
	public native boolean move(int arg0);
	public native boolean moveToPosition(int arg0);
	public native boolean moveToFirst();
	public native boolean moveToLast();
	public native boolean moveToNext();
	public native boolean moveToPrevious();
	public native boolean isLast();
	public native boolean isBeforeFirst();
	public native boolean isAfterLast();
	public native int getColumnIndex(java.lang.String arg0);
	public native int getColumnIndexOrThrow(java.lang.String arg0);
	public native java.lang.String getColumnName(int arg0);
	public native _object_array_type getColumnNames();
	public native int getColumnCount();
	public native _byte_array_type getBlob(int arg0);
	public native void copyStringToBuffer(int arg0,android.database.CharArrayBuffer arg1);
	public native void deactivate();
	public native boolean requery();
	public native void registerDataSetObserver(android.database.DataSetObserver arg0);
	public native void unregisterDataSetObserver(android.database.DataSetObserver arg0);
	public native void setNotificationUri(android.content.ContentResolver arg0,android.net.Uri arg1);
	public native boolean getWantsAllOnMoveCalls();
	public native android.os.Bundle respond(android.os.Bundle arg0);
}
