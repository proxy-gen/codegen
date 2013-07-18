/*
 * Header (Abstract CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
 			
 			
 			
		
 			
 			
 			
		
 			
 			
 			
 			
 			
 			
 			
 			
		
 			
 			
 			
 			
		
 			
 			
		
 			
 			
		
		


#ifndef _android_content_ContentProviderClient
#define _android_content_ContentProviderClient
















#include <java_util_ArrayList.hpp>
#include <android_content_ContentProvider.hpp>
#include <android_database_Cursor.hpp>
#include <android_os_Bundle.hpp>
#include <android_content_ContentValues.hpp>
#include <android_content_res_AssetFileDescriptor.hpp>
#include <android_os_CancellationSignal.hpp>
#include <android_os_ParcelFileDescriptor.hpp>
#include <android_net_Uri.hpp>
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

class android_content_ContentProviderClient
{
public:
 java_lang_String getType(android_net_Uri& arg0);
 int delete(android_net_Uri& arg0,java_lang_String& arg1,std::vector<long>& arg2);
 android_net_Uri insert(android_net_Uri& arg0,android_content_ContentValues& arg1);
 bool release();
 android_database_Cursor query(android_net_Uri& arg0,std::vector<long>& arg1,java_lang_String& arg2,android_os_CancellationSignal& arg3);
 int update(android_net_Uri& arg0,android_content_ContentValues& arg1,java_lang_String& arg2,std::vector<long>& arg3);
 std::vector<long> getStreamTypes(android_net_Uri& arg0,java_lang_String& arg1);
 android_content_res_AssetFileDescriptor openTypedAssetFileDescriptor(android_net_Uri& arg0,java_lang_String& arg1,android_os_Bundle& arg2);
 std::vector<long> applyBatch(java_util_ArrayList& arg0);
 int bulkInsert(android_net_Uri& arg0,std::vector<long>& arg1);
 android_os_Bundle call(java_lang_String& arg0,android_os_Bundle& arg1);
 android_os_ParcelFileDescriptor openFile(android_net_Uri& arg0,java_lang_String& arg1);
 android_content_res_AssetFileDescriptor openAssetFile(android_net_Uri& arg0,java_lang_String& arg1);
 android_content_ContentProvider getLocalContentProvider();


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_ContentProviderClient