/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 










// Generated Code 

#ifndef _android_view_inputmethod_ExtractedText
#define _android_view_inputmethod_ExtractedText
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

// Forward Declarations

class android_os_Parcel;

class android_view_inputmethod_ExtractedText
{
public:

	android_view_inputmethod_ExtractedText(const android_view_inputmethod_ExtractedText& cc);
	android_view_inputmethod_ExtractedText(Proxy proxy);
	// Public Constructors
	android_view_inputmethod_ExtractedText();
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_inputmethod_ExtractedText();
	// Functions
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_inputmethod_ExtractedText