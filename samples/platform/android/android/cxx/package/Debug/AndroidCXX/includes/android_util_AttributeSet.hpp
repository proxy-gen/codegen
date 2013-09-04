/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_lang_Object.hpp>

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

class android_util_AttributeSet : public AndroidCXX::java_lang_Object
{
public:

	android_util_AttributeSet(const android_util_AttributeSet& cc);
	android_util_AttributeSet(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_util_AttributeSet();
	// Functions
	virtual bool  getAttributeBooleanValue(int const& arg0,bool const& arg1) ;
	virtual bool  getAttributeBooleanValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,bool const& arg2) ;
	virtual int  getAttributeCount() ;
	virtual float  getAttributeFloatValue(int const& arg0,float const& arg1) ;
	virtual float  getAttributeFloatValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,float const& arg2) ;
	virtual int  getAttributeIntValue(int const& arg0,int const& arg1) ;
	virtual int  getAttributeIntValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2) ;
	virtual int  getAttributeListValue(int const& arg0,std::vector<AndroidCXX::java_lang_String> const& arg1,int const& arg2) ;
	virtual int  getAttributeListValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,std::vector<AndroidCXX::java_lang_String> const& arg2,int const& arg3) ;
	virtual AndroidCXX::java_lang_String * getAttributeName(int const& arg0) ;
	virtual int  getAttributeNameResource(int const& arg0) ;
	virtual int  getAttributeResourceValue(int const& arg0,int const& arg1) ;
	virtual int  getAttributeResourceValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2) ;
	virtual int  getAttributeUnsignedIntValue(int const& arg0,int const& arg1) ;
	virtual int  getAttributeUnsignedIntValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,int const& arg2) ;
	virtual AndroidCXX::java_lang_String * getAttributeValue(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getAttributeValue(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::java_lang_String * getClassAttribute() ;
	virtual AndroidCXX::java_lang_String * getIdAttribute() ;
	virtual int  getIdAttributeResourceValue(int const& arg0) ;
	virtual AndroidCXX::java_lang_String * getPositionDescription() ;
	virtual int  getStyleAttribute() ;

protected:
	android_util_AttributeSet();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_AttributeSet