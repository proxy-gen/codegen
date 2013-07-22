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

class java_lang_Object;

class java_lang_String;

class java_lang_Class;

class java_lang_annotation_Annotation;

class java_lang_reflect_Type;

class java_lang_reflect_Field
{
public:

	java_lang_reflect_Field(const java_lang_reflect_Field& cc);
	java_lang_reflect_Field(void * proxy);
	// Public Constructors
	java_lang_reflect_Field();
	// Default Destructor
	virtual ~java_lang_reflect_Field();
	// Functions
	 java_lang_Object get(java_lang_Object& arg0);
	 bool equals(java_lang_Object& arg0);
	 java_lang_String toString();
	 int hashCode();
	 int getModifiers();
	 bool getBoolean(java_lang_Object& arg0);
	 byte getByte(java_lang_Object& arg0);
	 short getShort(java_lang_Object& arg0);
	 char getChar(java_lang_Object& arg0);
	 int getInt(java_lang_Object& arg0);
	 long getLong(java_lang_Object& arg0);
	 float getFloat(java_lang_Object& arg0);
	 double getDouble(java_lang_Object& arg0);
	 java_lang_String getName();
	 bool isSynthetic();
	 java_lang_Class getDeclaringClass();
	 java_lang_annotation_Annotation getAnnotation(java_lang_Class& arg0);
	 std::vector<java_lang_annotation_Annotation > getDeclaredAnnotations();
	 bool isEnumConstant();
	 java_lang_Class getType();
	 java_lang_reflect_Type getGenericType();
	 java_lang_String toGenericString();
	 void set(java_lang_Object& arg0,java_lang_Object& arg1);
	 void setBoolean(java_lang_Object& arg0,bool& arg1);
	 void setByte(java_lang_Object& arg0,byte& arg1);
	 void setChar(java_lang_Object& arg0,char& arg1);
	 void setShort(java_lang_Object& arg0,short& arg1);
	 void setInt(java_lang_Object& arg0,int& arg1);
	 void setLong(java_lang_Object& arg0,long& arg1);
	 void setFloat(java_lang_Object& arg0,float& arg1);
	 void setDouble(java_lang_Object& arg0,double& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_Field