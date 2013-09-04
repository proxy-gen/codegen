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

#include <java_lang_Class.hpp>

#include <java_lang_annotation_Annotation.hpp>

#include <java_lang_reflect_Type.hpp>

#include <java_lang_String.hpp>


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

class java_lang_Class;

class java_lang_annotation_Annotation;

class java_lang_reflect_Type;

class java_lang_String;

class java_lang_reflect_Field : public AndroidCXX::java_lang_reflect_Member
{
public:

	// Public Constructor
	java_lang_reflect_Field(const java_lang_reflect_Field& cc);
	java_lang_reflect_Field(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_lang_reflect_Field();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_annotation_Annotation * getAnnotation(AndroidCXX::java_lang_Class const& arg0) ;
	virtual bool  getBoolean(AndroidCXX::java_lang_Object const& arg0) ;
	virtual byte  getByte(AndroidCXX::java_lang_Object const& arg0) ;
	virtual char  getChar(AndroidCXX::java_lang_Object const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_annotation_Annotation>  getDeclaredAnnotations() ;
	virtual AndroidCXX::java_lang_Class * getDeclaringClass() ;
	virtual double  getDouble(AndroidCXX::java_lang_Object const& arg0) ;
	virtual float  getFloat(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_reflect_Type * getGenericType() ;
	virtual int  getInt(AndroidCXX::java_lang_Object const& arg0) ;
	virtual long  getLong(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  getModifiers() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual AndroidCXX::java_lang_Object * get(AndroidCXX::java_lang_Object const& arg0) ;
	virtual short  getShort(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_Class * getType() ;
	virtual int  hashCode() ;
	virtual bool  isEnumConstant() ;
	virtual bool  isSynthetic() ;
	virtual void  setBoolean(AndroidCXX::java_lang_Object const& arg0,bool const& arg1) ;
	virtual void  setByte(AndroidCXX::java_lang_Object const& arg0,byte const& arg1) ;
	virtual void  setChar(AndroidCXX::java_lang_Object const& arg0,char const& arg1) ;
	virtual void  setDouble(AndroidCXX::java_lang_Object const& arg0,double const& arg1) ;
	virtual void  setFloat(AndroidCXX::java_lang_Object const& arg0,float const& arg1) ;
	virtual void  setInt(AndroidCXX::java_lang_Object const& arg0,int const& arg1) ;
	virtual void  setLong(AndroidCXX::java_lang_Object const& arg0,long const& arg1) ;
	virtual void  set(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual void  setShort(AndroidCXX::java_lang_Object const& arg0,short const& arg1) ;
	virtual AndroidCXX::java_lang_String * toGenericString() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_reflect_Field