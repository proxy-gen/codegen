/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



	
	
 		 
 		 
 		 
	
	
 	

// Generated Code 

#ifndef _android_content_res_ColorStateList
#define _android_content_res_ColorStateList
//
// Scroll Down 
//












#include <java_lang_String.hpp>


#include <android_os_Parcel.hpp>

#include <android_content_res_Resources.hpp>

#include <org_xmlpull_v1_XmlPullParser.hpp>

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

class android_content_res_ColorStateList;

class android_os_Parcel;

class android_content_res_Resources;

class org_xmlpull_v1_XmlPullParser;

class android_content_res_ColorStateList
{
public:
	android_content_res_ColorStateList(const android_content_res_ColorStateList& cc);
	android_content_res_ColorStateList(void * proxy);
	virtual ~android_content_res_ColorStateList();
	 java_lang_String *  toString();
	static android_content_res_ColorStateList *  valueOf(int& arg0);
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 bool isStateful();
	static android_content_res_ColorStateList *  createFromXml(android_content_res_Resources& arg0,org_xmlpull_v1_XmlPullParser& arg1);
	 android_content_res_ColorStateList *  withAlpha(int& arg0);
	 int getColorForState(std::vector<int>& arg0,int& arg1);
	 int getDefaultColor();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_ColorStateList