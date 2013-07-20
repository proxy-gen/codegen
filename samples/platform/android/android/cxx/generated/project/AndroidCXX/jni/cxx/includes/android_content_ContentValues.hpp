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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

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
	 java_lang_Object *  get(java_lang_String& arg0);
	 void put(java_lang_String& arg0,java_lang_Byte& arg1,java_lang_Short& arg2,java_lang_Integer& arg3,java_lang_Long& arg4,java_lang_Float& arg5,java_lang_Double& arg6,std::vector<char>& arg7,java_lang_Boolean& arg8);
	 bool equals(java_lang_Object& arg0);
	 java_lang_String *  toString();
	 int hashCode();
	 void clear();
	 int size();
	 void putAll(android_content_ContentValues& arg0);
	 void remove(java_lang_String& arg0);
	 java_util_Set *  keySet();
	 bool containsKey(java_lang_String& arg0);
	 java_lang_String *  getAsString(java_lang_String& arg0);
	 void putNull(java_lang_String& arg0);
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 java_lang_Long *  getAsLong(java_lang_String& arg0);
	 java_lang_Integer *  getAsInteger(java_lang_String& arg0);
	 java_lang_Short *  getAsShort(java_lang_String& arg0);
	 java_lang_Byte *  getAsByte(java_lang_String& arg0);
	 java_lang_Double *  getAsDouble(java_lang_String& arg0);
	 java_lang_Float *  getAsFloat(java_lang_String& arg0);
	 java_lang_Boolean *  getAsBoolean(java_lang_String& arg0);
	 std::vector<char> getAsByteArray(java_lang_String& arg0);
	 java_util_Set *  valueSet();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentValues