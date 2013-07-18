/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_database_sqlite_SQLiteCursorDriver implements android.database.sqlite.SQLiteCursorDriver
{
	public native android.database.Cursor query(android.database.sqlite.SQLiteDatabase$CursorFactory arg0,_object_array_type arg1);
	public native void cursorDeactivated();
	public native void cursorRequeried(android.database.Cursor arg0);
	public native void cursorClosed();
	public native void setBindArguments(_object_array_type arg0);
}
