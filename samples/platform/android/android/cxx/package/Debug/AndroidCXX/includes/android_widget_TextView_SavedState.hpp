/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
 		 









// Generated Code 

#ifndef _android_widget_TextView_SavedState
#define _android_widget_TextView_SavedState
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <android_os_Parcel.hpp>


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

class android_os_Parcel;

class android_widget_TextView_SavedState : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_widget_TextView_SavedState(const android_widget_TextView_SavedState& cc);
	android_widget_TextView_SavedState(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_TextView_SavedState();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextView_SavedState