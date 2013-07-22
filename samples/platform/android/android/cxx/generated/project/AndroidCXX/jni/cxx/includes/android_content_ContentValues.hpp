/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
	
 		 
 		 
	
 	
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 	
	
 	
 		 
 	
 		 
 		 


 		 








































// Generated Code 

#ifndef _android_content_ContentValues
#define _android_content_ContentValues
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <java_lang_Byte.hpp>

#include <java_lang_Short.hpp>

#include <java_lang_Integer.hpp>

#include <java_lang_Long.hpp>

#include <java_lang_Float.hpp>

#include <java_lang_Double.hpp>

#include <java_lang_Boolean.hpp>


#include <java_util_Set.hpp>

#include <android_os_Parcel.hpp>

#include <java_util_Map_Entry.hpp>

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

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class java_lang_String;

class java_lang_Object;

class java_lang_Byte;

class java_lang_Short;

class java_lang_Integer;

class java_lang_Long;

class java_lang_Float;

class java_lang_Double;

class java_lang_Boolean;

class android_content_ContentValues;

class java_util_Set;

class android_os_Parcel;

class java_util_Map_Entry;

class android_content_ContentValues
{
public:

	android_content_ContentValues(const android_content_ContentValues& cc);
	android_content_ContentValues(void * proxy);
	// Public Constructors
	android_content_ContentValues();
	android_content_ContentValues(int& arg0);
	android_content_ContentValues(AndroidCXX::android_content_ContentValues& arg0);
	// Default Destructor
	virtual ~android_content_ContentValues();
	// Functions
	 AndroidCXX::java_lang_Object get(AndroidCXX::java_lang_String& arg0);
	 void put(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 void put(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_Byte& arg1);
	 void put(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_Short& arg1);
	 void put(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_Integer& arg1);
	 void put(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_Long& arg1);
	 void put(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_Float& arg1);
	 void put(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_Double& arg1);
	 void put(AndroidCXX::java_lang_String& arg0,std::vector<byte>& arg1);
	 void put(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_Boolean& arg1);
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 void clear();
	 int size();
	 void putAll(AndroidCXX::android_content_ContentValues& arg0);
	 void remove(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_util_Set keySet();
	 bool containsKey(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getAsString(AndroidCXX::java_lang_String& arg0);
	 void putNull(AndroidCXX::java_lang_String& arg0);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 AndroidCXX::java_lang_Long getAsLong(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_Integer getAsInteger(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_Short getAsShort(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_Byte getAsByte(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_Double getAsDouble(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_Float getAsFloat(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_Boolean getAsBoolean(AndroidCXX::java_lang_String& arg0);
	 std::vector<byte> getAsByteArray(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_util_Set valueSet();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentValues