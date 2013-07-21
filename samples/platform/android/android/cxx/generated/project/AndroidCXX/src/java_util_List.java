/*
 * Implementation (Java)
 * Author: cxx-bindings-generator
 */
// Default Package
public class java_util_List implements java.util.List
{
	public native void add(int arg0,java.lang.Object arg1);
	public native boolean add(java.lang.Object arg0);
	public native java.lang.Object get(int arg0);
	public native boolean equals(java.lang.Object arg0);
	public native int hashCode();
	public native int indexOf(java.lang.Object arg0);
	public native void clear();
	public native boolean isEmpty();
	public native int lastIndexOf(java.lang.Object arg0);
	public native boolean contains(java.lang.Object arg0);
	public native boolean addAll(int arg0,java.util.Collection arg1);
	public native boolean addAll(java.util.Collection arg0);
	public native int size();
	public native _object_array_type toArray(_object_array_type arg0);
	public native _object_array_type toArray();
	public native java.util.Iterator iterator();
	public native java.lang.Object remove(int arg0);
	public native boolean remove(java.lang.Object arg0);
	public native java.lang.Object set(int arg0,java.lang.Object arg1);
	public native java.util.ListIterator listIterator(int arg0);
	public native java.util.ListIterator listIterator();
	public native java.util.List subList(int arg0,int arg1);
	public native boolean removeAll(java.util.Collection arg0);
	public native boolean containsAll(java.util.Collection arg0);
	public native boolean retainAll(java.util.Collection arg0);
}
