/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
 		 
 		 

// Generated Code 

#ifndef _android_os_PatternMatcher
#define _android_os_PatternMatcher
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

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class java_lang_String;

class android_os_Parcel;

class android_os_PatternMatcher
{
public:
	android_os_PatternMatcher(const android_os_PatternMatcher& cc);
	android_os_PatternMatcher(void * proxy);
	virtual ~android_os_PatternMatcher();
	 java_lang_String *  toString();
	 int getType();
	 java_lang_String *  getPath();
	 bool match(java_lang_String& arg0);
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_PatternMatcher