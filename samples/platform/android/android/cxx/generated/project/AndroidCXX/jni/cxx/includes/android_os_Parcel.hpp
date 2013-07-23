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
#include <CXXTypes.hpp>


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

	android_os_Parcel(const android_os_Parcel& cc);
	android_os_Parcel(void * proxy);
	// Public Constructors
	android_os_Parcel();
	// Default Destructor
	virtual ~android_os_Parcel();
	// Functions
	 void writeInt(int& arg0);
	 int readInt();
	 long readLong();
	 byte readByte();
	 void writeLong(long& arg0);
	 void writeByte(byte& arg0);
	 void writeFloat(float& arg0);
	 float readFloat();
	 void writeDouble(double& arg0);
	 void writeString(AndroidCXX::java_lang_String& arg0);
	 void writeArray(std::vector<AndroidCXX::java_lang_Object >& arg0);
	 double readDouble();
	 AndroidCXX::java_lang_String readString();
	 std::vector<AndroidCXX::java_lang_Object > readArray(AndroidCXX::java_lang_ClassLoader& arg0);
	 int dataSize();
	 void writeValue(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::android_os_ParcelFileDescriptor readFileDescriptor();
	 void writeFileDescriptor(AndroidCXX::java_io_FileDescriptor& arg0);
	 bool hasFileDescriptors();
	static AndroidCXX::android_os_Parcel obtain();
	 void recycle();
	 int dataAvail();
	 int dataPosition();
	 int dataCapacity();
	 void setDataSize(int& arg0);
	 void setDataPosition(int& arg0);
	 void setDataCapacity(int& arg0);
	 std::vector<byte> marshall();
	 void unmarshall(std::vector<byte>& arg0,int& arg1,int& arg2);
	 void appendFrom(AndroidCXX::android_os_Parcel& arg0,int& arg1,int& arg2);
	 void writeInterfaceToken(AndroidCXX::java_lang_String& arg0);
	 void enforceInterface(AndroidCXX::java_lang_String& arg0);
	 void writeByteArray(std::vector<byte>& arg0);
	 void writeByteArray(std::vector<byte>& arg0,int& arg1,int& arg2);
	 void writeStrongBinder(AndroidCXX::android_os_IBinder& arg0);
	 void writeStrongInterface(AndroidCXX::android_os_IInterface& arg0);
	 void writeMap(AndroidCXX::java_util_Map& arg0);
	 void writeBundle(AndroidCXX::android_os_Bundle& arg0);
	 void writeList(AndroidCXX::java_util_List& arg0);
	 void writeSparseArray(AndroidCXX::android_util_SparseArray& arg0);
	 void writeSparseBooleanArray(AndroidCXX::android_util_SparseBooleanArray& arg0);
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
	 void writeStringArray(std::vector<AndroidCXX::java_lang_String >& arg0);
	 std::vector<AndroidCXX::java_lang_String > createStringArray();
	 void readStringArray(std::vector<AndroidCXX::java_lang_String >& arg0);
	 void writeBinderArray(std::vector<AndroidCXX::android_os_IBinder >& arg0);
	 std::vector<AndroidCXX::android_os_IBinder > createBinderArray();
	 void readBinderArray(std::vector<AndroidCXX::android_os_IBinder >& arg0);
	 void writeTypedList(AndroidCXX::java_util_List& arg0);
	 void writeStringList(AndroidCXX::java_util_List& arg0);
	 void writeBinderList(AndroidCXX::java_util_List& arg0);
	 void writeTypedArray(std::vector<AndroidCXX::android_os_Parcelable >& arg0,int& arg1);
	 void writeParcelable(AndroidCXX::android_os_Parcelable& arg0,int& arg1);
	 void writeSerializable(AndroidCXX::java_io_Serializable& arg0);
	 void writeException(AndroidCXX::java_lang_Exception& arg0);
	 void writeNoException();
	 void readException();
	 void readException(int& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_os_IBinder readStrongBinder();
	 void readMap(AndroidCXX::java_util_Map& arg0,AndroidCXX::java_lang_ClassLoader& arg1);
	 void readList(AndroidCXX::java_util_List& arg0,AndroidCXX::java_lang_ClassLoader& arg1);
	 AndroidCXX::java_util_HashMap readHashMap(AndroidCXX::java_lang_ClassLoader& arg0);
	 AndroidCXX::android_os_Bundle readBundle();
	 AndroidCXX::android_os_Bundle readBundle(AndroidCXX::java_lang_ClassLoader& arg0);
	 std::vector<byte> createByteArray();
	 void readByteArray(std::vector<byte>& arg0);
	 AndroidCXX::java_util_ArrayList readArrayList(AndroidCXX::java_lang_ClassLoader& arg0);
	 AndroidCXX::android_util_SparseArray readSparseArray(AndroidCXX::java_lang_ClassLoader& arg0);
	 AndroidCXX::android_util_SparseBooleanArray readSparseBooleanArray();
	 AndroidCXX::java_util_ArrayList createTypedArrayList(AndroidCXX::android_os_Parcelable_Creator& arg0);
	 void readTypedList(AndroidCXX::java_util_List& arg0,AndroidCXX::android_os_Parcelable_Creator& arg1);
	 AndroidCXX::java_util_ArrayList createStringArrayList();
	 AndroidCXX::java_util_ArrayList createBinderArrayList();
	 void readStringList(AndroidCXX::java_util_List& arg0);
	 void readBinderList(AndroidCXX::java_util_List& arg0);
	 std::vector<AndroidCXX::java_lang_Object > createTypedArray(AndroidCXX::android_os_Parcelable_Creator& arg0);
	 void readTypedArray(std::vector<AndroidCXX::java_lang_Object >& arg0,AndroidCXX::android_os_Parcelable_Creator& arg1);
	 void writeParcelableArray(std::vector<AndroidCXX::android_os_Parcelable >& arg0,int& arg1);
	 AndroidCXX::java_lang_Object readValue(AndroidCXX::java_lang_ClassLoader& arg0);
	 AndroidCXX::android_os_Parcelable readParcelable(AndroidCXX::java_lang_ClassLoader& arg0);
	 std::vector<AndroidCXX::android_os_Parcelable > readParcelableArray(AndroidCXX::java_lang_ClassLoader& arg0);
	 AndroidCXX::java_io_Serializable readSerializable();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Parcel