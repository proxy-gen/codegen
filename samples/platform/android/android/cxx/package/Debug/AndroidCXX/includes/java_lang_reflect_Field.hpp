/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_reflect_Member.hpp>

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

class java_lang_reflect_Field : public java_lang_reflect_Member
{
public:

	// Public ConstrucXXX
	java_lang_reflect_Field(const java_lang_reflect_Field& cc);
	java_lang_reflect_Field(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_lang_reflect_Field();
	// Functions
	virtual AndroidCXX::java_lang_Object * get(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual int  getModifiers() ;
	virtual bool  getBoolean(AndroidCXX::java_lang_Object const& arg0) ;
	virtual byte  getByte(AndroidCXX::java_lang_Object const& arg0) ;
	virtual short  getShort(AndroidCXX::java_lang_Object const& arg0) ;
	virtual char  getChar(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  getInt(AndroidCXX::java_lang_Object const& arg0) ;
	virtual long  getLong(AndroidCXX::java_lang_Object const& arg0) ;
	virtual float  getFloat(AndroidCXX::java_lang_Object const& arg0) ;
	virtual double  getDouble(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual bool  isSynthetic() ;
	virtual AndroidCXX::java_lang_Class * getDeclaringClass() ;
	virtual AndroidCXX::java_lang_annotation_Annotation * getAnnotation(AndroidCXX::java_lang_Class const& arg0) ;
	virtual std::vector<java_lang_annotation_Annotation>  getDeclaredAnnotations() ;
	virtual bool  isEnumConstant() ;
	virtual AndroidCXX::java_lang_Class * getType() ;
	virtual AndroidCXX::java_lang_reflect_Type * getGenericType() ;
	virtual AndroidCXX::java_lang_String * toGenericString() ;
	virtual void  set(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual void  setBoolean(AndroidCXX::java_lang_Object const& arg0,bool const& arg1) ;
	virtual void  setByte(AndroidCXX::java_lang_Object const& arg0,byte const& arg1) ;
	virtual void  setChar(AndroidCXX::java_lang_Object const& arg0,char const& arg1) ;
	virtual void  setShort(AndroidCXX::java_lang_Object const& arg0,short const& arg1) ;
	virtual void  setInt(AndroidCXX::java_lang_Object const& arg0,int const& arg1) ;
	virtual void  setLong(AndroidCXX::java_lang_Object const& arg0,long const& arg1) ;
	virtual void  setFloat(AndroidCXX::java_lang_Object const& arg0,float const& arg1) ;
	virtual void  setDouble(AndroidCXX::java_lang_Object const& arg0,double const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_Field