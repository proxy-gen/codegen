/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 










// Generated Code 

#ifndef _android_view_inputmethod_ExtractedTextRequest
#define _android_view_inputmethod_ExtractedTextRequest
//
// Scroll Down 
//


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

// 
// 
// 
// 
// 
// 
// 
// 

// Forward Declarations

class android_os_Parcel;

class android_view_inputmethod_ExtractedTextRequest
{
public:

	android_view_inputmethod_ExtractedTextRequest(const android_view_inputmethod_ExtractedTextRequest& cc);
	android_view_inputmethod_ExtractedTextRequest(void * proxy);
	// Public Constructors
	android_view_inputmethod_ExtractedTextRequest();
	// Default Destructor
	virtual ~android_view_inputmethod_ExtractedTextRequest();
	// Functions
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_inputmethod_ExtractedTextRequest