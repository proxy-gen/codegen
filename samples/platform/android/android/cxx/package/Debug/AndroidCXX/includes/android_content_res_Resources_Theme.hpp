/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
 		 
 	
	
 		 
 	
	
 	
	
 		 
 		 














// Generated Code 

#ifndef _android_content_res_Resources_Theme
#define _android_content_res_Resources_Theme
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_content_res_TypedArray.hpp>

#include <android_util_AttributeSet.hpp>

#include <android_util_TypedValue.hpp>


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

class android_content_res_TypedArray;

class android_util_AttributeSet;

class android_util_TypedValue;


class android_content_res_Resources_Theme 
{
public:

	// Public Constructor
	android_content_res_Resources_Theme(const android_content_res_Resources_Theme& cc);
	android_content_res_Resources_Theme(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_content_res_Resources_Theme();
	// Functions
	virtual void  applyStyle(int const& arg0,bool const& arg1) ;
	virtual void  dump(int const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_lang_String const& arg2) ;
	virtual AndroidCXX::android_content_res_TypedArray * obtainStyledAttributes(std::vector<int> const& arg0) ;
	virtual AndroidCXX::android_content_res_TypedArray * obtainStyledAttributes(AndroidCXX::android_util_AttributeSet const& arg0,std::vector<int> const& arg1,int const& arg2,int const& arg3) ;
	virtual AndroidCXX::android_content_res_TypedArray * obtainStyledAttributes(int const& arg0,std::vector<int> const& arg1) ;
	virtual bool  resolveAttribute(int const& arg0,AndroidCXX::android_util_TypedValue const& arg1,bool const& arg2) ;
	virtual void  setTo(AndroidCXX::android_content_res_Resources_Theme const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_Resources_Theme