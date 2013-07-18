/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
 			
		
 			
		
		
 			
		
 			
 			
		
 			
		
		
		


#ifndef _android_content_ContentProviderOperation_Builder
#define _android_content_ContentProviderOperation_Builder











#include <android_content_ContentValues.hpp>
#include <android_content_ContentProviderOperation.hpp>
#include <java_lang_Object.hpp>
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

class android_content_ContentProviderOperation_Builder
{
public:
 android_content_ContentProviderOperation build();
 android_content_ContentProviderOperation_Builder withValueBackReferences(android_content_ContentValues& arg0);
 android_content_ContentProviderOperation_Builder withValueBackReference(java_lang_String& arg0,int& arg1);
 android_content_ContentProviderOperation_Builder withSelectionBackReference(int& arg0);
 android_content_ContentProviderOperation_Builder withValues(android_content_ContentValues& arg0);
 android_content_ContentProviderOperation_Builder withValue(java_lang_String& arg0,java_lang_Object& arg1);
 android_content_ContentProviderOperation_Builder withSelection(java_lang_String& arg0,std::vector<long>& arg1);
 android_content_ContentProviderOperation_Builder withExpectedCount(int& arg0);
 android_content_ContentProviderOperation_Builder withYieldAllowed(bool& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProviderOperation_Builder