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

	android_content_ContentValues(Proxy proxy);
	// Public Constructors
	android_content_ContentValues();
	android_content_ContentValues(int const& arg0);
	android_content_ContentValues(AndroidCXX::android_content_ContentValues const& arg0);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_ContentValues();
	// Functions
	 AndroidCXX::java_lang_Object get(AndroidCXX::java_lang_String const& arg0);
	 void put(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 void put(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Byte const& arg1);
	 void put(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Short const& arg1);
	 void put(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Integer const& arg1);
	 void put(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Long const& arg1);
	 void put(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Float const& arg1);
	 void put(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Double const& arg1);
	 void put(AndroidCXX::java_lang_String const& arg0,std::vector<byte> const& arg1);
	 void put(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_Boolean const& arg1);
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 void clear();
	 int size();
	 void putAll(AndroidCXX::android_content_ContentValues const& arg0);
	 void remove(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_Set keySet();
	 bool containsKey(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_String getAsString(AndroidCXX::java_lang_String const& arg0);
	 void putNull(AndroidCXX::java_lang_String const& arg0);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 AndroidCXX::java_lang_Long getAsLong(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_Integer getAsInteger(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_Short getAsShort(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_Byte getAsByte(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_Double getAsDouble(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_Float getAsFloat(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_lang_Boolean getAsBoolean(AndroidCXX::java_lang_String const& arg0);
	 std::vector<byte> getAsByteArray(AndroidCXX::java_lang_String const& arg0);
	 AndroidCXX::java_util_Set valueSet();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentValues