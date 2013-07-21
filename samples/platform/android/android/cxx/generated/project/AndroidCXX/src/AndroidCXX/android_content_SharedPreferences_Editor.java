/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class android_content_SharedPreferences_Editor implements android.content.SharedPreferences.Editor
{
	public native android.content.SharedPreferences$Editor putBoolean(java.lang.String arg0,boolean arg1);
	public native android.content.SharedPreferences$Editor putInt(java.lang.String arg0,int arg1);
	public native android.content.SharedPreferences$Editor putLong(java.lang.String arg0,long arg1);
	public native android.content.SharedPreferences$Editor putFloat(java.lang.String arg0,float arg1);
	public native android.content.SharedPreferences$Editor clear();
	public native android.content.SharedPreferences$Editor remove(java.lang.String arg0);
	public native android.content.SharedPreferences$Editor putString(java.lang.String arg0,java.lang.String arg1);
	public native void apply();
	public native android.content.SharedPreferences$Editor putStringSet(java.lang.String arg0,java.util.Set arg1);
	public native boolean commit();
}
