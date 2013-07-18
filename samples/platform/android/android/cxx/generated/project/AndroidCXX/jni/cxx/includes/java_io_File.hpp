/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
		
 			
		
		
		
 			
		
		
		
		
		
		
		
 			
 			
 			
 			
 			
		


#ifndef _java_io_File
#define _java_io_File












































#include <java_net_URI.hpp>
#include <java_io_FileFilter.hpp>
#include <java_lang_Object.hpp>
#include <java_io_FilenameFilter.hpp>
#include <java_net_URL.hpp>
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

class java_io_File
{
public:
 bool equals(java_lang_Object& arg0);
 java_lang_String toString();
 int hashCode();
 int compareTo(java_io_File& arg0);
 java_lang_String getName();
 long length();
 java_lang_String getParent();
 bool isAbsolute();
 java_lang_String getCanonicalPath();
 bool setReadOnly();
 std::vector<long> list(java_io_FilenameFilter& arg0);
 bool delete();
 bool exists();
 java_io_File getParentFile();
 java_lang_String getPath();
 java_lang_String getAbsolutePath();
 java_io_File getAbsoluteFile();
 java_io_File getCanonicalFile();
 java_net_URL toURL();
 java_net_URI toURI();
 bool canRead();
 bool canWrite();
 bool isDirectory();
 bool isFile();
 bool isHidden();
 long lastModified();
 bool createNewFile();
 void deleteOnExit();
 std::vector<long> listFiles(java_io_FileFilter& arg0,java_io_FilenameFilter& arg1);
 bool mkdir();
 bool mkdirs();
 bool renameTo(java_io_File& arg0);
 bool setLastModified(long& arg0);
 bool setWritable(bool& arg0);
 bool setReadable(bool& arg0);
 bool setExecutable(bool& arg0);
 bool canExecute();
static std::vector<long> listRoots();
 long getTotalSpace();
 long getFreeSpace();
 long getUsableSpace();
static java_io_File createTempFile(java_lang_String& arg0,java_io_File& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_File