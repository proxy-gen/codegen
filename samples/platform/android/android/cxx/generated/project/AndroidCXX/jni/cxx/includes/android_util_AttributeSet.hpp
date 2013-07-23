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
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class android_util_AttributeSet
{
public:

	android_util_AttributeSet(const android_util_AttributeSet& cc);
	android_util_AttributeSet(void * proxy);
	// Public Constructors
	android_util_AttributeSet();
	// Default Destructor
	virtual ~android_util_AttributeSet();
	// Functions
	 AndroidCXX::java_lang_String getAttributeValue(int& arg0);
	 AndroidCXX::java_lang_String getAttributeValue(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::java_lang_String getPositionDescription();
	 int getAttributeCount();
	 AndroidCXX::java_lang_String getAttributeName(int& arg0);
	 int getAttributeNameResource(int& arg0);
	 int getAttributeListValue(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,std::vector<AndroidCXX::java_lang_String >& arg2,int& arg3);
	 int getAttributeListValue(int& arg0,std::vector<AndroidCXX::java_lang_String >& arg1,int& arg2);
	 bool getAttributeBooleanValue(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,bool& arg2);
	 bool getAttributeBooleanValue(int& arg0,bool& arg1);
	 int getAttributeResourceValue(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,int& arg2);
	 int getAttributeResourceValue(int& arg0,int& arg1);
	 int getAttributeIntValue(int& arg0,int& arg1);
	 int getAttributeIntValue(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,int& arg2);
	 int getAttributeUnsignedIntValue(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,int& arg2);
	 int getAttributeUnsignedIntValue(int& arg0,int& arg1);
	 float getAttributeFloatValue(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,float& arg2);
	 float getAttributeFloatValue(int& arg0,float& arg1);
	 AndroidCXX::java_lang_String getIdAttribute();
	 AndroidCXX::java_lang_String getClassAttribute();
	 int getIdAttributeResourceValue(int& arg0);
	 int getStyleAttribute();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_AttributeSet