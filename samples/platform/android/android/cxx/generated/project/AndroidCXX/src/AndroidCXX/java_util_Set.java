/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
package AndroidCXX
public class java_util_Set implements java.util.Set
{
	public native boolean add(java.lang.Object arg0);
	public native boolean equals(java.lang.Object arg0);
	public native int hashCode();
	public native void clear();
	public native boolean isEmpty();
	public native boolean contains(java.lang.Object arg0);
	public native boolean addAll(java.util.Collection arg0);
	public native int size();
	public native _object_array_type toArray(_object_array_type arg0);
	public native _object_array_type toArray();
	public native java.util.Iterator iterator();
	public native boolean remove(java.lang.Object arg0);
	public native boolean removeAll(java.util.Collection arg0);
	public native boolean containsAll(java.util.Collection arg0);
	public native boolean retainAll(java.util.Collection arg0);
}
