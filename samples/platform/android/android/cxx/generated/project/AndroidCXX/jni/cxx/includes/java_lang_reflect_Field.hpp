/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
		
		
 			
		
		
		
		
 			
 			
 			
 			
 			
 			
 			
 			
 			


#ifndef _java_lang_reflect_Field
#define _java_lang_reflect_Field

































#include <java_lang_annotation_Annotation.hpp>
#include <java_lang_Class.hpp>
#include <java_lang_reflect_Type.hpp>
#include <java_lang_Object.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class java_lang_reflect_Field
{
public:
 java_lang_Object get(java_lang_Object& arg0);
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 int getModifiers();
 bool getBoolean(java_lang_Object& arg0);
 unsigned char getByte(java_lang_Object& arg0);
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
 std::vector<long> getDeclaredAnnotations();
 bool isEnumConstant();
 java_lang_Class getType();
 java_lang_reflect_Type getGenericType();
 java_lang_String toGenericString();
 void set(java_lang_Object& arg0);
 void setBoolean(java_lang_Object& arg0,bool& arg1);
 void setByte(java_lang_Object& arg0,unsigned char& arg1);
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