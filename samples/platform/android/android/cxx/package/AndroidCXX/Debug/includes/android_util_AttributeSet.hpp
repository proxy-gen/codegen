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
	android_util_AttributeSet(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_util_AttributeSet();
	// Functions
	 AndroidCXX::java_lang_String getAttributeValue(int const& arg0);
	 AndroidCXX::java_lang_String getAttributeValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1);
	 AndroidCXX::java_lang_String getPositionDescription();
	 int getAttributeCount();
	 AndroidCXX::java_lang_String getAttributeName(int const& arg0);
	 int getAttributeNameResource(int const& arg0);
	 int getAttributeListValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_String > const& arg2,int const& arg3);
	 int getAttributeListValue(int const& arg0,std::vector<AndroidCXX::java_lang_String > const& arg1,int const& arg2);
	 bool getAttributeBooleanValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,bool const& arg2);
	 bool getAttributeBooleanValue(int const& arg0,bool const& arg1);
	 int getAttributeResourceValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2);
	 int getAttributeResourceValue(int const& arg0,int const& arg1);
	 int getAttributeIntValue(int const& arg0,int const& arg1);
	 int getAttributeIntValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2);
	 int getAttributeUnsignedIntValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2);
	 int getAttributeUnsignedIntValue(int const& arg0,int const& arg1);
	 float getAttributeFloatValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,float const& arg2);
	 float getAttributeFloatValue(int const& arg0,float const& arg1);
	 AndroidCXX::java_lang_String getIdAttribute();
	 AndroidCXX::java_lang_String getClassAttribute();
	 int getIdAttributeResourceValue(int const& arg0);
	 int getStyleAttribute();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_AttributeSet