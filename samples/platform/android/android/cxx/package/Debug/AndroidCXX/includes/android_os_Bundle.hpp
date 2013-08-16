/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <android_os_IBinder.hpp>

#include <java_lang_Byte.hpp>

#include <java_lang_CharSequence.hpp>

#include <java_util_ArrayList.hpp>

#include <java_lang_ClassLoader.hpp>

#include <java_lang_Integer.hpp>

#include <android_os_Parcelable.hpp>

#include <java_io_Serializable.hpp>

#include <android_util_SparseArray.hpp>

#include <java_util_Set.hpp>

#include <android_os_Parcel.hpp>


#include <java_lang_Cloneable.hpp>

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

class java_lang_Object;

class java_lang_String;

class android_os_IBinder;


class java_lang_Byte;

class java_lang_CharSequence;

class java_util_ArrayList;

class java_lang_ClassLoader;

class java_lang_Integer;


class java_io_Serializable;

class android_util_SparseArray;

class java_util_Set;

class android_os_Parcel;

class android_os_Bundle : public android_os_Parcelable,public java_lang_Cloneable
{
public:

	// Public ConstrucXXX
	android_os_Bundle();
	android_os_Bundle(AndroidCXX::android_os_Bundle const& arg0);
	android_os_Bundle(int const& arg0);
	android_os_Bundle(AndroidCXX::java_lang_ClassLoader const& arg0);
	android_os_Bundle(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_os_Bundle();
	// Functions
	virtual void  clear() ;
	virtual AndroidCXX::java_lang_Object * clone() ;
	virtual bool  containsKey(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  describeContents() ;
	virtual AndroidCXX::java_lang_Object * get(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_os_IBinder * getBinder(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  getBoolean(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual bool  getBoolean(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<bool>  getBooleanArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_os_Bundle * getBundle(AndroidCXX::java_lang_String const& arg0) ;
	virtual byte  getByte(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_Byte * getByte(AndroidCXX::java_lang_String const& arg0,byte const& arg1) ;
	virtual std::vector<byte>  getByteArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual char  getChar(AndroidCXX::java_lang_String const& arg0,char const& arg1) ;
	virtual char  getChar(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<char>  getCharArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * getCharSequence(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_CharSequence const& arg1) ;
	virtual AndroidCXX::java_lang_CharSequence * getCharSequence(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<java_lang_CharSequence>  getCharSequenceArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_ArrayList * getCharSequenceArrayList(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_ClassLoader * getClassLoader() ;
	virtual double  getDouble(AndroidCXX::java_lang_String const& arg0,double const& arg1) ;
	virtual double  getDouble(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<double>  getDoubleArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual float  getFloat(AndroidCXX::java_lang_String const& arg0) ;
	virtual float  getFloat(AndroidCXX::java_lang_String const& arg0,float const& arg1) ;
	virtual std::vector<float>  getFloatArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual int  getInt(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual int  getInt(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<int>  getIntArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_ArrayList * getIntegerArrayList(AndroidCXX::java_lang_String const& arg0) ;
	virtual long  getLong(AndroidCXX::java_lang_String const& arg0,long const& arg1) ;
	virtual long  getLong(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<long>  getLongArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_os_Parcelable * getParcelable(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<android_os_Parcelable>  getParcelableArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_ArrayList * getParcelableArrayList(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_io_Serializable * getSerializable(AndroidCXX::java_lang_String const& arg0) ;
	virtual short  getShort(AndroidCXX::java_lang_String const& arg0,short const& arg1) ;
	virtual short  getShort(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<short>  getShortArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_util_SparseArray * getSparseParcelableArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getString(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_String * getString(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<java_lang_String>  getStringArray(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_ArrayList * getStringArrayList(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  hasFileDescriptors() ;
	virtual bool  isEmpty() ;
	virtual AndroidCXX::java_util_Set * keySet() ;
	virtual void  putAll(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual void  putBinder(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_IBinder const& arg1) ;
	virtual void  putBoolean(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual void  putBooleanArray(AndroidCXX::java_lang_String const& arg0,std::vector<bool> const& arg1) ;
	virtual void  putBundle(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual void  putByte(AndroidCXX::java_lang_String const& arg0,byte const& arg1) ;
	virtual void  putByteArray(AndroidCXX::java_lang_String const& arg0,std::vector<byte> const& arg1) ;
	virtual void  putChar(AndroidCXX::java_lang_String const& arg0,char const& arg1) ;
	virtual void  putCharArray(AndroidCXX::java_lang_String const& arg0,std::vector<char> const& arg1) ;
	virtual void  putCharSequence(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_CharSequence const& arg1) ;
	virtual void  putCharSequenceArray(AndroidCXX::java_lang_String const& arg0,std::vector<java_lang_CharSequence> const& arg1) ;
	virtual void  putCharSequenceArrayList(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_ArrayList const& arg1) ;
	virtual void  putDouble(AndroidCXX::java_lang_String const& arg0,double const& arg1) ;
	virtual void  putDoubleArray(AndroidCXX::java_lang_String const& arg0,std::vector<double> const& arg1) ;
	virtual void  putFloat(AndroidCXX::java_lang_String const& arg0,float const& arg1) ;
	virtual void  putFloatArray(AndroidCXX::java_lang_String const& arg0,std::vector<float> const& arg1) ;
	virtual void  putInt(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual void  putIntArray(AndroidCXX::java_lang_String const& arg0,std::vector<int> const& arg1) ;
	virtual void  putIntegerArrayList(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_ArrayList const& arg1) ;
	virtual void  putLong(AndroidCXX::java_lang_String const& arg0,long const& arg1) ;
	virtual void  putLongArray(AndroidCXX::java_lang_String const& arg0,std::vector<long> const& arg1) ;
	virtual void  putParcelable(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Parcelable const& arg1) ;
	virtual void  putParcelableArray(AndroidCXX::java_lang_String const& arg0,std::vector<android_os_Parcelable> const& arg1) ;
	virtual void  putParcelableArrayList(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_ArrayList const& arg1) ;
	virtual void  putSerializable(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_Serializable const& arg1) ;
	virtual void  putShort(AndroidCXX::java_lang_String const& arg0,short const& arg1) ;
	virtual void  putShortArray(AndroidCXX::java_lang_String const& arg0,std::vector<short> const& arg1) ;
	virtual void  putSparseParcelableArray(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_util_SparseArray const& arg1) ;
	virtual void  putString(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  putStringArray(AndroidCXX::java_lang_String const& arg0,std::vector<java_lang_String> const& arg1) ;
	virtual void  putStringArrayList(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_ArrayList const& arg1) ;
	virtual void  readFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;
	virtual void  remove(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setClassLoader(AndroidCXX::java_lang_ClassLoader const& arg0) ;
	virtual int  size() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Bundle