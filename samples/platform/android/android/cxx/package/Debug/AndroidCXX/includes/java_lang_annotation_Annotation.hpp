/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 	
 		 
 		 
	











// Generated Code 

#ifndef _java_lang_annotation_Annotation
#define _java_lang_annotation_Annotation
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

class java_lang_Class;



class java_lang_String;

class java_lang_annotation_Annotation : public AndroidCXX::java_lang_Object
{
public:

	java_lang_annotation_Annotation(const java_lang_annotation_Annotation& cc);
	java_lang_annotation_Annotation(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_lang_annotation_Annotation();
	// Functions
	virtual AndroidCXX::java_lang_Class * annotationType() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  hashCode() ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:
	java_lang_annotation_Annotation();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_annotation_Annotation