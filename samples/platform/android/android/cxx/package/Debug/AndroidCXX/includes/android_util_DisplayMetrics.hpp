/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
 		 














// Generated Code 

#ifndef _android_util_DisplayMetrics
#define _android_util_DisplayMetrics
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

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

class java_lang_Object;


class java_lang_String;

class android_util_DisplayMetrics 
{
public:

	// Public ConstrucXXX
	android_util_DisplayMetrics();
	android_util_DisplayMetrics(const android_util_DisplayMetrics& cc);
	android_util_DisplayMetrics(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_util_DisplayMetrics();
	// Functions
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  equals(AndroidCXX::android_util_DisplayMetrics const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual int  hashCode() ;
	virtual void  setTo(AndroidCXX::android_util_DisplayMetrics const& arg0) ;
	virtual void  setToDefaults() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_DisplayMetrics