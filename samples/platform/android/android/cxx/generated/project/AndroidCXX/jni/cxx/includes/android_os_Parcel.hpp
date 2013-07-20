/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
 		 
 		 
 	
 		 
 		 
 	
 		 
	
 		 
	
 	
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 		 
 	
 		 
 		 
 	
 		 
 		 
 	
 		 
 	
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 	
 	
 		 
	
 		 
	
	
 		 
 	
	
 	
 		 
 		 
 		 
 	
 		 
 	
 		 
 		 
	
 	
 		 
	
 	
 		 
 		 
 	
 		 
 		 
 	
 		 
 		 
 	
 	
 		 
 		 
 	
 		 
 	
 		 
 		 
 	
 		 
 		 
	
 		 
	
 		 
 	
 		 
	

// Generated Code 

#ifndef _android_os_Parcel
#define _android_os_Parcel
//
// Scroll Down 
//



































































































#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_ClassLoader.hpp>

#include <android_os_ParcelFileDescriptor.hpp>

#include <java_io_FileDescriptor.hpp>


#include <android_os_IBinder.hpp>

#include <android_os_IInterface.hpp>

#include <java_util_Map.hpp>

#include <android_os_Bundle.hpp>

#include <java_util_List.hpp>

#include <android_util_SparseArray.hpp>

#include <android_util_SparseBooleanArray.hpp>

#include <android_os_Parcelable.hpp>

#include <java_io_Serializable.hpp>

#include <java_lang_Exception.hpp>

#include <java_util_HashMap.hpp>

#include <java_util_ArrayList.hpp>

#include <android_os_Parcelable_Creator.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class java_lang_Object;

class java_lang_ClassLoader;

class android_os_ParcelFileDescriptor;

class java_io_FileDescriptor;

class android_os_Parcel;

class android_os_IBinder;

class android_os_IInterface;

class java_util_Map;

class android_os_Bundle;

class java_util_List;

class android_util_SparseArray;

class android_util_SparseBooleanArray;

class android_os_Parcelable;

class java_io_Serializable;

class java_lang_Exception;

class java_util_HashMap;

class java_util_ArrayList;

class android_os_Parcelable_Creator;

class android_os_Parcel
{
public:
	 void writeInt(int& arg0);
	 int readInt();
	 long readLong();
	 unsigned char readByte();
	 void writeLong(long& arg0);
	 void writeByte(unsigned char& arg0);
	 void writeFloat(float& arg0);
	 float readFloat();
	 double readDouble();
	 java_lang_String *  readString();
	 int dataSize();
	 void writeValue(java_lang_Object& arg0);
	 void writeString(java_lang_String& arg0);
	 void writeDouble(double& arg0);
	 void writeArray(std::vector<long>& arg0);
	 std::vector<long> readArray(java_lang_ClassLoader& arg0);
	 android_os_ParcelFileDescriptor *  readFileDescriptor();
	 void writeFileDescriptor(java_io_FileDescriptor& arg0);
	 bool hasFileDescriptors();
	static android_os_Parcel *  obtain();
	 void recycle();
	 int dataAvail();
	 int dataPosition();
	 int dataCapacity();
	 void setDataSize(int& arg0);
	 void setDataPosition(int& arg0);
	 void setDataCapacity(int& arg0);
	 std::vector<char> marshall();
	 void unmarshall(std::vector<char>& arg0,int& arg1);
	 void appendFrom(android_os_Parcel& arg0,int& arg1);
	 void writeInterfaceToken(java_lang_String& arg0);
	 void enforceInterface(java_lang_String& arg0);
	 void writeByteArray(std::vector<char>& arg0,int& arg1);
	 void writeStrongBinder(android_os_IBinder& arg0);
	 void writeStrongInterface(android_os_IInterface& arg0);
	 void writeMap(java_util_Map& arg0);
	 void writeBundle(android_os_Bundle& arg0);
	 void writeList(java_util_List& arg0);
	 void writeSparseArray(android_util_SparseArray& arg0);
	 void writeSparseBooleanArray(android_util_SparseBooleanArray& arg0);
	 void writeBooleanArray(std::vector<bool>& arg0);
	 std::vector<bool> createBooleanArray();
	 void readBooleanArray(std::vector<bool>& arg0);
	 void writeCharArray(std::vector<char>& arg0);
	 std::vector<char> createCharArray();
	 void readCharArray(std::vector<char>& arg0);
	 void writeIntArray(std::vector<int>& arg0);
	 std::vector<int> createIntArray();
	 void readIntArray(std::vector<int>& arg0);
	 void writeLongArray(std::vector<long>& arg0);
	 std::vector<long> createLongArray();
	 void readLongArray(std::vector<long>& arg0);
	 void writeFloatArray(std::vector<float>& arg0);
	 std::vector<float> createFloatArray();
	 void readFloatArray(std::vector<float>& arg0);
	 void writeDoubleArray(std::vector<double>& arg0);
	 std::vector<double> createDoubleArray();
	 void readDoubleArray(std::vector<double>& arg0);
	 void writeStringArray(std::vector<long>& arg0);
	 std::vector<long> createStringArray();
	 void readStringArray(std::vector<long>& arg0);
	 void writeBinderArray(std::vector<long>& arg0);
	 std::vector<long> createBinderArray();
	 void readBinderArray(std::vector<long>& arg0);
	 void writeTypedList(java_util_List& arg0);
	 void writeStringList(java_util_List& arg0);
	 void writeBinderList(java_util_List& arg0);
	 void writeTypedArray(std::vector<long>& arg0,int& arg1);
	 void writeParcelable(android_os_Parcelable& arg0,int& arg1);
	 void writeSerializable(java_io_Serializable& arg0);
	 void writeException(java_lang_Exception& arg0);
	 void writeNoException();
	 void readException(int& arg0,java_lang_String& arg1);
	 android_os_IBinder *  readStrongBinder();
	 void readMap(java_util_Map& arg0,java_lang_ClassLoader& arg1);
	 void readList(java_util_List& arg0,java_lang_ClassLoader& arg1);
	 java_util_HashMap *  readHashMap(java_lang_ClassLoader& arg0);
	 android_os_Bundle *  readBundle(java_lang_ClassLoader& arg0);
	 std::vector<char> createByteArray();
	 void readByteArray(std::vector<char>& arg0);
	 java_util_ArrayList *  readArrayList(java_lang_ClassLoader& arg0);
	 android_util_SparseArray *  readSparseArray(java_lang_ClassLoader& arg0);
	 android_util_SparseBooleanArray *  readSparseBooleanArray();
	 java_util_ArrayList *  createTypedArrayList(android_os_Parcelable_Creator& arg0);
	 void readTypedList(java_util_List& arg0,android_os_Parcelable_Creator& arg1);
	 java_util_ArrayList *  createStringArrayList();
	 java_util_ArrayList *  createBinderArrayList();
	 void readStringList(java_util_List& arg0);
	 void readBinderList(java_util_List& arg0);
	 std::vector<long> createTypedArray(android_os_Parcelable_Creator& arg0);
	 void readTypedArray(std::vector<long>& arg0,android_os_Parcelable_Creator& arg1);
	 void writeParcelableArray(std::vector<long>& arg0,int& arg1);
	 java_lang_Object *  readValue(java_lang_ClassLoader& arg0);
	 android_os_Parcelable *  readParcelable(java_lang_ClassLoader& arg0);
	 std::vector<long> readParcelableArray(java_lang_ClassLoader& arg0);
	 java_io_Serializable *  readSerializable();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Parcel