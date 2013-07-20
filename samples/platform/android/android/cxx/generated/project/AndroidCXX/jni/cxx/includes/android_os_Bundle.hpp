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

class android_os_Bundle
{
public:
	 java_lang_Object *  get(java_lang_String& arg0);
	 java_lang_String *  toString();
	 java_lang_Object *  clone();
	 bool getBoolean(java_lang_String& arg0,bool& arg1);
	 void putBoolean(java_lang_String& arg0,bool& arg1);
	 java_lang_Byte *  getByte(java_lang_String& arg0,unsigned char& arg1);
	 void putByte(java_lang_String& arg0,unsigned char& arg1);
	 short getShort(java_lang_String& arg0,short& arg1);
	 void putShort(java_lang_String& arg0,short& arg1);
	 char getChar(java_lang_String& arg0,char& arg1);
	 void putChar(java_lang_String& arg0,char& arg1);
	 int getInt(java_lang_String& arg0,int& arg1);
	 void putInt(java_lang_String& arg0,int& arg1);
	 long getLong(java_lang_String& arg0,long& arg1);
	 void putLong(java_lang_String& arg0,long& arg1);
	 float getFloat(java_lang_String& arg0,float& arg1);
	 void putFloat(java_lang_String& arg0,float& arg1);
	 double getDouble(java_lang_String& arg0,double& arg1);
	 void putDouble(java_lang_String& arg0,double& arg1);
	 void clear();
	 bool isEmpty();
	 java_lang_ClassLoader *  getClassLoader();
	 int size();
	 void putAll(android_os_Bundle& arg0);
	 void remove(java_lang_String& arg0);
	 java_util_Set *  keySet();
	 bool containsKey(java_lang_String& arg0);
	 android_os_Bundle *  getBundle(java_lang_String& arg0);
	 java_lang_String *  getString(java_lang_String& arg0);
	 std::vector<long> getStringArray(java_lang_String& arg0);
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 void setClassLoader(java_lang_ClassLoader& arg0);
	 bool hasFileDescriptors();
	 void putString(java_lang_String& arg0);
	 void putCharSequence(java_lang_String& arg0,java_lang_CharSequence& arg1);
	 void putParcelable(java_lang_String& arg0,android_os_Parcelable& arg1);
	 void putParcelableArray(java_lang_String& arg0,std::vector<long>& arg1);
	 void putParcelableArrayList(java_lang_String& arg0,java_util_ArrayList& arg1);
	 void putSparseParcelableArray(java_lang_String& arg0,android_util_SparseArray& arg1);
	 void putIntegerArrayList(java_lang_String& arg0,java_util_ArrayList& arg1);
	 void putStringArrayList(java_lang_String& arg0,java_util_ArrayList& arg1);
	 void putCharSequenceArrayList(java_lang_String& arg0,java_util_ArrayList& arg1);
	 void putSerializable(java_lang_String& arg0,java_io_Serializable& arg1);
	 void putBooleanArray(java_lang_String& arg0,std::vector<bool>& arg1);
	 void putByteArray(java_lang_String& arg0,std::vector<char>& arg1);
	 void putShortArray(java_lang_String& arg0,std::vector<short>& arg1);
	 void putCharArray(java_lang_String& arg0,std::vector<char>& arg1);
	 void putIntArray(java_lang_String& arg0,std::vector<int>& arg1);
	 void putLongArray(java_lang_String& arg0,std::vector<long>& arg1);
	 void putFloatArray(java_lang_String& arg0,std::vector<float>& arg1);
	 void putDoubleArray(java_lang_String& arg0,std::vector<double>& arg1);
	 void putStringArray(java_lang_String& arg0,std::vector<long>& arg1);
	 void putCharSequenceArray(java_lang_String& arg0,std::vector<long>& arg1);
	 void putBundle(java_lang_String& arg0,android_os_Bundle& arg1);
	 java_lang_CharSequence *  getCharSequence(java_lang_String& arg0,java_lang_CharSequence& arg1);
	 android_os_Parcelable *  getParcelable(java_lang_String& arg0);
	 std::vector<long> getParcelableArray(java_lang_String& arg0);
	 java_util_ArrayList *  getParcelableArrayList(java_lang_String& arg0);
	 android_util_SparseArray *  getSparseParcelableArray(java_lang_String& arg0);
	 java_io_Serializable *  getSerializable(java_lang_String& arg0);
	 java_util_ArrayList *  getIntegerArrayList(java_lang_String& arg0);
	 java_util_ArrayList *  getStringArrayList(java_lang_String& arg0);
	 java_util_ArrayList *  getCharSequenceArrayList(java_lang_String& arg0);
	 std::vector<bool> getBooleanArray(java_lang_String& arg0);
	 std::vector<char> getByteArray(java_lang_String& arg0);
	 std::vector<short> getShortArray(java_lang_String& arg0);
	 std::vector<char> getCharArray(java_lang_String& arg0);
	 std::vector<int> getIntArray(java_lang_String& arg0);
	 std::vector<long> getLongArray(java_lang_String& arg0);
	 std::vector<float> getFloatArray(java_lang_String& arg0);
	 std::vector<double> getDoubleArray(java_lang_String& arg0);
	 std::vector<long> getCharSequenceArray(java_lang_String& arg0);
	 void readFromParcel(android_os_Parcel& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Bundle