/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
	
 	
 		 
 		 
 		 


 		 
 		 









// Generated Code 

#ifndef _android_util_Pair
#define _android_util_Pair
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



class android_util_Pair : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_util_Pair(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1,Proxy * aProxy = new Proxy());
	android_util_Pair(const android_util_Pair& cc);
	android_util_Pair(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_util_Pair();
	// Functions
	static AndroidCXX::android_util_Pair * create(AndroidCXX::java_lang_Object const& arg0,AndroidCXX::java_lang_Object const& arg1) ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual int  hashCode() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_util_Pair