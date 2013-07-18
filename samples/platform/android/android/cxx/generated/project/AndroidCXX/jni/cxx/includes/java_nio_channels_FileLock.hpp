/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



		
		

// Generated Code 

#ifndef _java_nio_channels_FileLock
#define _java_nio_channels_FileLock
//
// Scroll Down 
//











#include <java_lang_String.hpp>

#include <java_nio_channels_FileChannel.hpp>

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

class java_nio_channels_FileChannel;

class java_nio_channels_FileLock
{
public:
 java_lang_String toString();
 long size();
 long position();
 void release();
 java_nio_channels_FileChannel channel();
 bool isShared();
 bool isValid();
 bool overlaps(long& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_nio_channels_FileLock