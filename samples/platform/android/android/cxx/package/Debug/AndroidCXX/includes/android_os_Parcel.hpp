/*
 * Header (Instance CXX)
 * Author: codegen
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

#include <android_os_IBinder.hpp>

#include <android_os_IInterface.hpp>

#include <java_io_FileDescriptor.hpp>

#include <java_util_Map.hpp>

#include <android_os_Bundle.hpp>

#include <java_util_List.hpp>

#include <android_util_SparseArray.hpp>

#include <android_util_SparseBooleanArray.hpp>

#include <android_os_Parcelable.hpp>

#include <java_io_Serializable.hpp>

#include <java_lang_Exception.hpp>

#include <android_os_ParcelFileDescriptor.hpp>

#include <java_lang_ClassLoader.hpp>

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


class android_os_IBinder;

class android_os_IInterface;

class java_io_FileDescriptor;

class java_util_Map;

class android_os_Bundle;

class java_util_List;

class android_util_SparseArray;

class android_util_SparseBooleanArray;

class android_os_Parcelable;

class java_io_Serializable;

class java_lang_Exception;

class android_os_ParcelFileDescriptor;

class java_lang_ClassLoader;

class java_util_HashMap;

class java_util_ArrayList;

class android_os_Parcelable_Creator;

class android_os_Parcel 
{
public:

	// Public ConstrucXXX
	android_os_Parcel(const android_os_Parcel& cc);
	android_os_Parcel(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_Parcel();
	// Functions
	virtual void  writeInt(int const& arg0) ;
	virtual int  readInt() ;
	virtual long  readLong() ;
	virtual byte  readByte() ;
	virtual void  writeLong(long const& arg0) ;
	virtual void  writeByte(byte const& arg0) ;
	virtual void  writeFloat(float const& arg0) ;
	virtual float  readFloat() ;
	virtual double  readDouble() ;
	virtual AndroidCXX::java_lang_String * readString() ;
	virtual int  dataSize() ;
	virtual void  writeValue(AndroidCXX::java_lang_Object const& arg0) ;
	virtual void  writeString(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::android_os_Parcel * obtain() ;
	virtual void  recycle() ;
	virtual int  dataAvail() ;
	virtual int  dataPosition() ;
	virtual int  dataCapacity() ;
	virtual void  setDataSize(int const& arg0) ;
	virtual void  setDataPosition(int const& arg0) ;
	virtual void  setDataCapacity(int const& arg0) ;
	virtual std::vector<byte>  marshall() ;
	virtual void  unmarshall(std::vector<byte> const& arg0,int const& arg1,int const& arg2) ;
	virtual void  appendFrom(AndroidCXX::android_os_Parcel const& arg0,int const& arg1,int const& arg2) ;
	virtual bool  hasFileDescriptors() ;
	virtual void  writeInterfaceToken(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  enforceInterface(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  writeByteArray(std::vector<byte> const& arg0) ;
	virtual void  writeByteArray(std::vector<byte> const& arg0,int const& arg1,int const& arg2) ;
	virtual void  writeDouble(double const& arg0) ;
	virtual void  writeStrongBinder(AndroidCXX::android_os_IBinder const& arg0) ;
	virtual void  writeStrongInterface(AndroidCXX::android_os_IInterface const& arg0) ;
	virtual void  writeFileDescriptor(AndroidCXX::java_io_FileDescriptor const& arg0) ;
	virtual void  writeMap(AndroidCXX::java_util_Map const& arg0) ;
	virtual void  writeBundle(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  writeList(AndroidCXX::java_util_List const& arg0) ;
	virtual void  writeArray(std::vector<java_lang_Object> const& arg0) ;
	virtual void  writeSparseArray(AndroidCXX::android_util_SparseArray const& arg0) ;
	virtual void  writeSparseBooleanArray(AndroidCXX::android_util_SparseBooleanArray const& arg0) ;
	virtual void  writeBooleanArray(std::vector<bool> const& arg0) ;
	virtual std::vector<bool>  createBooleanArray() ;
	virtual void  readBooleanArray(std::vector<bool> const& arg0) ;
	virtual void  writeCharArray(std::vector<char> const& arg0) ;
	virtual std::vector<char>  createCharArray() ;
	virtual void  readCharArray(std::vector<char> const& arg0) ;
	virtual void  writeIntArray(std::vector<int> const& arg0) ;
	virtual std::vector<int>  createIntArray() ;
	virtual void  readIntArray(std::vector<int> const& arg0) ;
	virtual void  writeLongArray(std::vector<long> const& arg0) ;
	virtual std::vector<long>  createLongArray() ;
	virtual void  readLongArray(std::vector<long> const& arg0) ;
	virtual void  writeFloatArray(std::vector<float> const& arg0) ;
	virtual std::vector<float>  createFloatArray() ;
	virtual void  readFloatArray(std::vector<float> const& arg0) ;
	virtual void  writeDoubleArray(std::vector<double> const& arg0) ;
	virtual std::vector<double>  createDoubleArray() ;
	virtual void  readDoubleArray(std::vector<double> const& arg0) ;
	virtual void  writeStringArray(std::vector<java_lang_String> const& arg0) ;
	virtual std::vector<java_lang_String>  createStringArray() ;
	virtual void  readStringArray(std::vector<java_lang_String> const& arg0) ;
	virtual void  writeBinderArray(std::vector<android_os_IBinder> const& arg0) ;
	virtual std::vector<android_os_IBinder>  createBinderArray() ;
	virtual void  readBinderArray(std::vector<android_os_IBinder> const& arg0) ;
	virtual void  writeTypedList(AndroidCXX::java_util_List const& arg0) ;
	virtual void  writeStringList(AndroidCXX::java_util_List const& arg0) ;
	virtual void  writeBinderList(AndroidCXX::java_util_List const& arg0) ;
	virtual void  writeTypedArray(std::vector<android_os_Parcelable> const& arg0,int const& arg1) ;
	virtual void  writeParcelable(AndroidCXX::android_os_Parcelable const& arg0,int const& arg1) ;
	virtual void  writeSerializable(AndroidCXX::java_io_Serializable const& arg0) ;
	virtual void  writeException(AndroidCXX::java_lang_Exception const& arg0) ;
	virtual void  writeNoException() ;
	virtual void  readException() ;
	virtual void  readException(int const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_os_IBinder * readStrongBinder() ;
	virtual AndroidCXX::android_os_ParcelFileDescriptor * readFileDescriptor() ;
	virtual void  readMap(AndroidCXX::java_util_Map const& arg0,AndroidCXX::java_lang_ClassLoader const& arg1) ;
	virtual void  readList(AndroidCXX::java_util_List const& arg0,AndroidCXX::java_lang_ClassLoader const& arg1) ;
	virtual AndroidCXX::java_util_HashMap * readHashMap(AndroidCXX::java_lang_ClassLoader const& arg0) ;
	virtual AndroidCXX::android_os_Bundle * readBundle() ;
	virtual AndroidCXX::android_os_Bundle * readBundle(AndroidCXX::java_lang_ClassLoader const& arg0) ;
	virtual std::vector<byte>  createByteArray() ;
	virtual void  readByteArray(std::vector<byte> const& arg0) ;
	virtual AndroidCXX::java_util_ArrayList * readArrayList(AndroidCXX::java_lang_ClassLoader const& arg0) ;
	virtual std::vector<java_lang_Object>  readArray(AndroidCXX::java_lang_ClassLoader const& arg0) ;
	virtual AndroidCXX::android_util_SparseArray * readSparseArray(AndroidCXX::java_lang_ClassLoader const& arg0) ;
	virtual AndroidCXX::android_util_SparseBooleanArray * readSparseBooleanArray() ;
	virtual AndroidCXX::java_util_ArrayList * createTypedArrayList(AndroidCXX::android_os_Parcelable_Creator const& arg0) ;
	virtual void  readTypedList(AndroidCXX::java_util_List const& arg0,AndroidCXX::android_os_Parcelable_Creator const& arg1) ;
	virtual AndroidCXX::java_util_ArrayList * createStringArrayList() ;
	virtual AndroidCXX::java_util_ArrayList * createBinderArrayList() ;
	virtual void  readStringList(AndroidCXX::java_util_List const& arg0) ;
	virtual void  readBinderList(AndroidCXX::java_util_List const& arg0) ;
	virtual std::vector<java_lang_Object>  createTypedArray(AndroidCXX::android_os_Parcelable_Creator const& arg0) ;
	virtual void  readTypedArray(std::vector<java_lang_Object> const& arg0,AndroidCXX::android_os_Parcelable_Creator const& arg1) ;
	virtual void  writeParcelableArray(std::vector<android_os_Parcelable> const& arg0,int const& arg1) ;
	virtual AndroidCXX::java_lang_Object * readValue(AndroidCXX::java_lang_ClassLoader const& arg0) ;
	virtual AndroidCXX::android_os_Parcelable * readParcelable(AndroidCXX::java_lang_ClassLoader const& arg0) ;
	virtual std::vector<android_os_Parcelable>  readParcelableArray(AndroidCXX::java_lang_ClassLoader const& arg0) ;
	virtual AndroidCXX::java_io_Serializable * readSerializable() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Parcel