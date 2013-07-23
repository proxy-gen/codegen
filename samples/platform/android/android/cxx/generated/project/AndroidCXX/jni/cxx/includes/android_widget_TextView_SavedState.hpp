/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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

class android_widget_TextView_SavedState
{
public:

	android_widget_TextView_SavedState(const android_widget_TextView_SavedState& cc);
	android_widget_TextView_SavedState(void * proxy);
	// Public Constructors
	android_widget_TextView_SavedState();
	// Default Destructor
	virtual ~android_widget_TextView_SavedState();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TextView_SavedState