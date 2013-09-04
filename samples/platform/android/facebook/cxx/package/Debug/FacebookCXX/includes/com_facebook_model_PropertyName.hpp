/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	








// Generated Code 

#ifndef _com_facebook_model_PropertyName
#define _com_facebook_model_PropertyName
//
// Scroll Down 
//


#include <java_lang_String.hpp>


#include <java_lang_annotation_Annotation.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations


class com_facebook_model_PropertyName : public AndroidCXX::java_lang_annotation_Annotation
{
public:

	com_facebook_model_PropertyName(const com_facebook_model_PropertyName& cc);
	com_facebook_model_PropertyName(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~com_facebook_model_PropertyName();
	// Functions
	virtual AndroidCXX::java_lang_String * value() ;

protected:
	com_facebook_model_PropertyName();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_model_PropertyName