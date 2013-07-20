/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
	
	
 		 
 	
 		 
 		 
 		 
 		 
 		 
 		 
	
	

// Generated Code 

#ifndef _android_util_AttributeSet
#define _android_util_AttributeSet
//
// Scroll Down 
//


















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

// Forward Declarations

class java_lang_String;

class android_util_AttributeSet
{
public:
	 java_lang_String *  getAttributeValue(int& arg0,java_lang_String& arg1);
	 java_lang_String *  getPositionDescription();
	 int getAttributeCount();
	 java_lang_String *  getAttributeName(int& arg0);
	 int getAttributeNameResource(int& arg0);
	 int getAttributeListValue(java_lang_String& arg0,std::vector<long>& arg1,int& arg2);
	 bool getAttributeBooleanValue(java_lang_String& arg0,bool& arg1,int& arg2);
	 int getAttributeResourceValue(java_lang_String& arg0,int& arg1);
	 int getAttributeIntValue(int& arg0,java_lang_String& arg1);
	 int getAttributeUnsignedIntValue(java_lang_String& arg0,int& arg1);
	 float getAttributeFloatValue(java_lang_String& arg0,float& arg1,int& arg2);
	 java_lang_String *  getIdAttribute();
	 java_lang_String *  getClassAttribute();
	 int getIdAttributeResourceValue(int& arg0);
	 int getStyleAttribute();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_AttributeSet