/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
// Default Package
public class java_util_SortedMap implements java.util.SortedMap
{
	public native java.util.Collection values();
	public native java.util.Set entrySet();
	public native java.util.Set keySet();
	public native java.util.Comparator comparator();
	public native java.util.SortedMap subMap(java.lang.Object arg0,java.lang.Object arg1);
	public native java.util.SortedMap headMap(java.lang.Object arg0);
	public native java.util.SortedMap tailMap(java.lang.Object arg0);
	public native java.lang.Object firstKey();
	public native java.lang.Object lastKey();
}
