/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
	
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 	
 		 
 		 
 		 
	
 		 
	
 		 
 		 
	
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
 	
 		 
 		 
	
 	
 		 
 		 
	
 	
 		 
 		 
	
 		 
	
 	
 		 
 		 
	
 	
 		 
 		 
	
 	
 		 
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 		 
	
 		 


 		 
 		 































































































// Generated Code 

#ifndef _android_os_Bundle
#define _android_os_Bundle
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_Byte.hpp>

#include <java_lang_ClassLoader.hpp>


#include <java_util_Set.hpp>

#include <android_os_Parcel.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_os_Parcelable.hpp>

#include <java_util_ArrayList.hpp>

#include <android_util_SparseArray.hpp>

#include <java_lang_Integer.hpp>

#include <java_io_Serializable.hpp>

#include <android_os_IBinder.hpp>

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

class java_lang_Byte;

class java_lang_ClassLoader;

class android_os_Bundle;

class java_util_Set;

class android_os_Parcel;

class java_lang_CharSequence;

class android_os_Parcelable;

class java_util_ArrayList;

class android_util_SparseArray;

class java_lang_Integer;

class java_io_Serializable;

class android_os_IBinder;

class android_os_Bundle
{
public:

	android_os_Bundle(Proxy proxy);
	// Public Constructors
	android_os_Bundle();
	android_os_Bundle(AndroidCXX::java_lang_ClassLoader const& arg0);
	android_os_Bundle(int const& arg0);
	android_os_Bundle(AndroidCXX::android_os_Bundle const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_Bundle();
	// Functions
	 AndroidCXX::java_lang_Object get(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_lang_Object clone();
	 bool getBoolean(AndroidCXX::java_lang_String const& arg0,bool const& arg1);
	 bool getBoolean(AndroidCXX::java_lang_String const& arg0);
	 void putBoolean(AndroidCXX::java_lang_String const& arg0,bool const& arg1);
	 AndroidCXX::java_lang_Byte getByte(AndroidCXX::java_lang_String const& arg0,byte const& arg1);
	 byte getByte(AndroidCXX::java_lang_String const& arg0);
	 void putByte(AndroidCXX::java_lang_String const& arg0,byte const& arg1);
	 short getShort(AndroidCXX::java_lang_String const& arg0,short const& arg1);
	 short getShort(AndroidCXX::java_lang_String const& arg0);
	 void putShort(AndroidCXX::java_lang_String const& arg0,short const& arg1);
	 char getChar(AndroidCXX::java_lang_String const& arg0,char const& arg1);
	 char getChar(AndroidCXX::java_lang_String const& arg0);
	 void putChar(AndroidCXX::java_lang_String const& arg0,char const& arg1);
	 int getInt(AndroidCXX::java_lang_String const& arg0);
	 int getInt(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 void putInt(AndroidCXX::java_lang_String const& arg0,int const& arg1);
	 long getLong(AndroidCXX::java_lang_String const& arg0,long const& arg1);
	 long getLong(AndroidCXX::java_lang_String const& arg0);
	 void putLong(AndroidCXX::java_lang_String const& arg0,long const& arg1);
	 float getFloat(AndroidCXX::java_lang_String const& arg0,float const& arg1);
	 float getFloat(AndroidCXX::java_lang_String const& arg0);
	 void putFloat(AndroidCXX::java_lang_String const& arg0,float const& arg1);
	 double getDouble(AndroidCXX::java_lang_String const& arg0,double const& arg1);
	 double getDouble(AndroidCXX::java_lang_String const& arg0);
	 void putDouble(AndroidCXX::java_lang_String const& arg0,double const& arg1);
	 void clear();
	 bool isEmpty();
	 AndroidCXX::java_lang_ClassLoader getClassLoader();
	 int size();
	 void putAll(AndroidCXX::android_os_Bundle const& arg0);
	 void remove(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_Set keySet();
	 bool containsKey(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::android_os_Bundle getBundle(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getString(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getString(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 std::vector<java_lang_String> getStringArray(AndroidCXX::java_lang_String const& arg0);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 void setClassLoader(AndroidCXX::java_lang_ClassLoader const& arg0);
	 bool hasFileDescriptors();
	 void putString(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void putCharSequence(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_CharSequence const& arg1);
	 void putParcelable(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Parcelable const& arg1);
	 void putParcelableArray(AndroidCXX::java_lang_String const& arg0,std::vector<android_os_Parcelable> const& arg1);
	 void putParcelableArrayList(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_ArrayList const& arg1);
	 void putSparseParcelableArray(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_util_SparseArray const& arg1);
	 void putIntegerArrayList(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_ArrayList const& arg1);
	 void putStringArrayList(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_ArrayList const& arg1);
	 void putCharSequenceArrayList(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_ArrayList const& arg1);
	 void putSerializable(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_Serializable const& arg1);
	 void putBooleanArray(AndroidCXX::java_lang_String const& arg0,std::vector<bool> const& arg1);
	 void putByteArray(AndroidCXX::java_lang_String const& arg0,std::vector<byte> const& arg1);
	 void putShortArray(AndroidCXX::java_lang_String const& arg0,std::vector<short> const& arg1);
	 void putCharArray(AndroidCXX::java_lang_String const& arg0,std::vector<char> const& arg1);
	 void putIntArray(AndroidCXX::java_lang_String const& arg0,std::vector<int> const& arg1);
	 void putLongArray(AndroidCXX::java_lang_String const& arg0,std::vector<long> const& arg1);
	 void putFloatArray(AndroidCXX::java_lang_String const& arg0,std::vector<float> const& arg1);
	 void putDoubleArray(AndroidCXX::java_lang_String const& arg0,std::vector<double> const& arg1);
	 void putStringArray(AndroidCXX::java_lang_String const& arg0,std::vector<java_lang_String> const& arg1);
	 void putCharSequenceArray(AndroidCXX::java_lang_String const& arg0,std::vector<java_lang_CharSequence> const& arg1);
	 void putBundle(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1);
	 void putBinder(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_IBinder const& arg1);
	 AndroidCXX::java_lang_CharSequence getCharSequence(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_CharSequence getCharSequence(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_CharSequence const& arg1);
	 AndroidCXX::android_os_Parcelable getParcelable(AndroidCXX::java_lang_String const& arg0);
	 std::vector<android_os_Parcelable> getParcelableArray(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_ArrayList getParcelableArrayList(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::android_util_SparseArray getSparseParcelableArray(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_io_Serializable getSerializable(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_ArrayList getIntegerArrayList(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_ArrayList getStringArrayList(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_ArrayList getCharSequenceArrayList(AndroidCXX::java_lang_String const& arg0);
	 std::vector<bool> getBooleanArray(AndroidCXX::java_lang_String const& arg0);
	 std::vector<byte> getByteArray(AndroidCXX::java_lang_String const& arg0);
	 std::vector<short> getShortArray(AndroidCXX::java_lang_String const& arg0);
	 std::vector<char> getCharArray(AndroidCXX::java_lang_String const& arg0);
	 std::vector<int> getIntArray(AndroidCXX::java_lang_String const& arg0);
	 std::vector<long> getLongArray(AndroidCXX::java_lang_String const& arg0);
	 std::vector<float> getFloatArray(AndroidCXX::java_lang_String const& arg0);
	 std::vector<double> getDoubleArray(AndroidCXX::java_lang_String const& arg0);
	 std::vector<java_lang_CharSequence> getCharSequenceArray(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::android_os_IBinder getBinder(AndroidCXX::java_lang_String const& arg0);
	 void readFromParcel(AndroidCXX::android_os_Parcel const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Bundle