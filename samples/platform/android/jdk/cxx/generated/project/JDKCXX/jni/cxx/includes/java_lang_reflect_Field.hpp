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

namespace JDKCXX {

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
	// TODO: remove
	// 
	// java_lang_reflect_Field();
	// 
	// Default Destructor
	virtual ~java_lang_reflect_Field();
	// Functions
	 JDKCXX::java_lang_Object get(JDKCXX::java_lang_Object& arg0);
	 bool equals(JDKCXX::java_lang_Object& arg0);
	 JDKCXX::java_lang_String toString();
	 int hashCode();
	 int getModifiers();
	 bool getBoolean(JDKCXX::java_lang_Object& arg0);
	 byte getByte(JDKCXX::java_lang_Object& arg0);
	 short getShort(JDKCXX::java_lang_Object& arg0);
	 char getChar(JDKCXX::java_lang_Object& arg0);
	 int getInt(JDKCXX::java_lang_Object& arg0);
	 long getLong(JDKCXX::java_lang_Object& arg0);
	 float getFloat(JDKCXX::java_lang_Object& arg0);
	 double getDouble(JDKCXX::java_lang_Object& arg0);
	 JDKCXX::java_lang_String getName();
	 bool isSynthetic();
	 JDKCXX::java_lang_Class getDeclaringClass();
	 JDKCXX::java_lang_annotation_Annotation getAnnotation(JDKCXX::java_lang_Class& arg0);
	 std::vector<JDKCXX::java_lang_annotation_Annotation > getDeclaredAnnotations();
	 bool isEnumConstant();
	 JDKCXX::java_lang_Class getType();
	 JDKCXX::java_lang_reflect_Type getGenericType();
	 JDKCXX::java_lang_String toGenericString();
	 void set(JDKCXX::java_lang_Object& arg0,JDKCXX::java_lang_Object& arg1);
	 void setBoolean(JDKCXX::java_lang_Object& arg0,bool& arg1);
	 void setByte(JDKCXX::java_lang_Object& arg0,byte& arg1);
	 void setChar(JDKCXX::java_lang_Object& arg0,char& arg1);
	 void setShort(JDKCXX::java_lang_Object& arg0,short& arg1);
	 void setInt(JDKCXX::java_lang_Object& arg0,int& arg1);
	 void setLong(JDKCXX::java_lang_Object& arg0,long& arg1);
	 void setFloat(JDKCXX::java_lang_Object& arg0,float& arg1);
	 void setDouble(JDKCXX::java_lang_Object& arg0,double& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_Field