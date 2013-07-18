/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		
 			
 			
 			
		
		


#ifndef _android_content_res_ColorStateList
#define _android_content_res_ColorStateList











#include <android_os_Parcel.hpp>
#include <android_content_res_Resources.hpp>
#include <org_xmlpull_v1_XmlPullParser.hpp>
#include <java_lang_String.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_content_res_ColorStateList
{
public:
 java_lang_String toString();
static android_content_res_ColorStateList valueOf(int& arg0);
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 bool isStateful();
static android_content_res_ColorStateList createFromXml(android_content_res_Resources& arg0,org_xmlpull_v1_XmlPullParser& arg1);
 android_content_res_ColorStateList withAlpha(int& arg0);
 int getColorForState(std::vector<int>& arg0,int& arg1);
 int getDefaultColor();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_ColorStateList