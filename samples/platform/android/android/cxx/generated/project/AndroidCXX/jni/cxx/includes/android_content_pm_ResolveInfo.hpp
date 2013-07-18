/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
 			
 			
 			
		
 			
		


#ifndef _android_content_pm_ResolveInfo
#define _android_content_pm_ResolveInfo









#include <java_lang_CharSequence.hpp>
#include <android_content_pm_PackageManager.hpp>
#include <android_util_Printer.hpp>
#include <android_os_Parcel.hpp>
#include <android_graphics_drawable_Drawable.hpp>
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

class android_content_pm_ResolveInfo
{
public:
 java_lang_String toString();
 void dump(android_util_Printer& arg0,java_lang_String& arg1);
 int describeContents();
 void writeToParcel(android_os_Parcel& arg0,int& arg1);
 java_lang_CharSequence loadLabel(android_content_pm_PackageManager& arg0);
 android_graphics_drawable_Drawable loadIcon(android_content_pm_PackageManager& arg0);
 int getIconResource();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_pm_ResolveInfo