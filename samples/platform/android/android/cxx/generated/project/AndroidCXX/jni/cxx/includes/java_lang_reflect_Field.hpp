/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 
	
 		 
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
	
 	
 		 
 		 
 	
	
 		 
 	
 		 
	
 	
 		 
	
	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 






































// Generated Code 

#ifndef _java_lang_reflect_Field
#define _java_lang_reflect_Field
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

#include <java_lang_Class.hpp>

#include <java_lang_annotation_Annotation.hpp>

#include <java_lang_reflect_Type.hpp>

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

class java_lang_Class;

class java_lang_annotation_Annotation;

class java_lang_reflect_Type;

class java_lang_reflect_Field
{
public:

	java_lang_reflect_Field(const java_lang_reflect_Field& cc);
	java_lang_reflect_Field(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_reflect_Field();
	// Functions
	 AndroidCXX::java_lang_Object get(AndroidCXX::java_lang_Object const& arg0);
	 bool equals(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int getModifiers();
	 bool getBoolean(AndroidCXX::java_lang_Object const& arg0);
	 byte getByte(AndroidCXX::java_lang_Object const& arg0);
	 short getShort(AndroidCXX::java_lang_Object const& arg0);
	 char getChar(AndroidCXX::java_lang_Object const& arg0);
	 int getInt(AndroidCXX::java_lang_Object const& arg0);
	 long getLong(AndroidCXX::java_lang_Object const& arg0);
	 float getFloat(AndroidCXX::java_lang_Object const& arg0);
	 double getDouble(AndroidCXX::java_lang_Object const& arg0);
	 AndroidCXX::java_lang_String getName();
	 bool isSynthetic();
	 AndroidCXX::java_lang_Class getDeclaringClass();
	 AndroidCXX::java_lang_annotation_Annotation getAnnotation(AndroidCXX::java_lang_Class const& arg0);
	 std::vector<AndroidCXX::java_lang_annotation_Annotation > getDeclaredAnnotations();
	 bool isEnumConstant();
	 AndroidCXX::java_lang_Class getType();
	 AndroidCXX::java_lang_reflect_Type getGenericType();
	 AndroidCXX::java_lang_String toGenericString();
	 void set(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1);
	 void setBoolean(AndroidCXX::java_lang_Object const& arg0,bool const& arg1);
	 void setByte(AndroidCXX::java_lang_Object const& arg0,byte const& arg1);
	 void setChar(AndroidCXX::java_lang_Object const& arg0,char const& arg1);
	 void setShort(AndroidCXX::java_lang_Object const& arg0,short const& arg1);
	 void setInt(AndroidCXX::java_lang_Object const& arg0,int const& arg1);
	 void setLong(AndroidCXX::java_lang_Object const& arg0,long const& arg1);
	 void setFloat(AndroidCXX::java_lang_Object const& arg0,float const& arg1);
	 void setDouble(AndroidCXX::java_lang_Object const& arg0,double const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_Field