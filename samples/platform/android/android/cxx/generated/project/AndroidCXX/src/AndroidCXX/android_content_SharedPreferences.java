/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_content_SharedPreferences implements android.content.SharedPreferences
{
	public native boolean getBoolean(java.lang.String arg0,boolean arg1);
	public native int getInt(java.lang.String arg0,int arg1);
	public native long getLong(java.lang.String arg0,long arg1);
	public native float getFloat(java.lang.String arg0,float arg1);
	public native boolean contains(java.lang.String arg0);
	public native java.lang.String getString(java.lang.String arg0);
	public native java.util.Map getAll();
	public native java.util.Set getStringSet(java.lang.String arg0,java.util.Set arg1);
	public native android.content.SharedPreferences$Editor edit();
	public native void registerOnSharedPreferenceChangeListener(android.content.SharedPreferences$OnSharedPreferenceChangeListener arg0);
	public native void unregisterOnSharedPreferenceChangeListener(android.content.SharedPreferences$OnSharedPreferenceChangeListener arg0);
}
