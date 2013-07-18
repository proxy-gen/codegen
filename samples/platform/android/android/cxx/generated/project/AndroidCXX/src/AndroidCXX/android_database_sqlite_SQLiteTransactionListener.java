/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_database_sqlite_SQLiteTransactionListener implements android.database.sqlite.SQLiteTransactionListener
{
	public native void onBegin();
	public native void onCommit();
	public native void onRollback();
}
