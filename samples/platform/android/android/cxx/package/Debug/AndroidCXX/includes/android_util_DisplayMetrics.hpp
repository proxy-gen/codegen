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



class java_lang_String;

class android_util_DisplayMetrics : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_util_DisplayMetrics(Proxy * aProxy = new Proxy());
	android_util_DisplayMetrics(const android_util_DisplayMetrics& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_util_DisplayMetrics();
	// Functions
	virtual bool  equals(AndroidCXX::android_util_DisplayMetrics const& arg0) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  hashCode() ;
	virtual void  setToDefaults() ;
	virtual void  setTo(AndroidCXX::android_util_DisplayMetrics const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_DisplayMetrics