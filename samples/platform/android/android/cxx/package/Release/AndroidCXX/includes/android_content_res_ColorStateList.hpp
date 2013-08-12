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
#include <CXXTypes.hpp>


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
	android_content_res_ColorStateList(Proxy proxy);
	// Public Constructors
	android_content_res_ColorStateList(std::vector<std::vector<int> > const& arg0,std::vector<int> const& arg1);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_res_ColorStateList();
	// Functions
	 AndroidCXX::java_lang_String toString();
	static AndroidCXX::android_content_res_ColorStateList valueOf(int const& arg0);
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1);
	 bool isStateful();
	static AndroidCXX::android_content_res_ColorStateList createFromXml(AndroidCXX::android_content_res_Resources const& arg0,AndroidCXX::org_xmlpull_v1_XmlPullParser const& arg1);
	 AndroidCXX::android_content_res_ColorStateList withAlpha(int const& arg0);
	 int getColorForState(std::vector<int> const& arg0,int const& arg1);
	 int getDefaultColor();
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_res_ColorStateList