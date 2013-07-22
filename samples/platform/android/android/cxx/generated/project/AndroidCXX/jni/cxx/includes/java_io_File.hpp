/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
	
 		 
	
	
	
 		 
 	
 		 
 	
 		 
	
	
	
	
	
	
	
 		 
 	
 		 
 	
 		 
 		 
 	
 		 
 		 
 	
 		 
 		 
 		 
	
 		 
 		 
 		 
	


 		 
 		 
 		 
 		 
 		 
 		 


























































// Generated Code 

#ifndef _java_io_File
#define _java_io_File
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>


#include <java_io_FilenameFilter.hpp>

#include <java_net_URL.hpp>

#include <java_net_URI.hpp>

#include <java_io_FileFilter.hpp>

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

class java_lang_Object;

class java_lang_String;

class java_io_File;

class java_io_FilenameFilter;

class java_net_URL;

class java_net_URI;

class java_io_FileFilter;

class java_io_File
{
public:

	java_io_File(const java_io_File& cc);
	java_io_File(void * proxy);
	// Public Constructors
	java_io_File(AndroidCXX::java_net_URI& arg0);
	java_io_File(AndroidCXX::java_lang_String& arg0);
	java_io_File(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	java_io_File(AndroidCXX::java_io_File& arg0,AndroidCXX::java_lang_String& arg1);
	java_io_File();
	// Default Destructor
	virtual ~java_io_File();
	// Functions
	 bool equals(AndroidCXX::java_lang_Object& arg0);
	 AndroidCXX::java_lang_String toString();
	 int hashCode();
	 int compareTo(AndroidCXX::java_io_File& arg0);
	 AndroidCXX::java_lang_String getName();
	 long length();
	 AndroidCXX::java_lang_String getParent();
	 bool isAbsolute();
	 AndroidCXX::java_lang_String getCanonicalPath();
	 bool setReadOnly();
	 std::vector<AndroidCXX::java_lang_String > list(AndroidCXX::java_io_FilenameFilter& arg0);
	 std::vector<AndroidCXX::java_lang_String > list();
	 bool _delete();
	 bool exists();
	 AndroidCXX::java_io_File getParentFile();
	 AndroidCXX::java_lang_String getPath();
	 AndroidCXX::java_lang_String getAbsolutePath();
	 AndroidCXX::java_io_File getAbsoluteFile();
	 AndroidCXX::java_io_File getCanonicalFile();
	 AndroidCXX::java_net_URL toURL();
	 AndroidCXX::java_net_URI toURI();
	 bool canRead();
	 bool canWrite();
	 bool isDirectory();
	 bool isFile();
	 bool isHidden();
	 long lastModified();
	 bool createNewFile();
	 void deleteOnExit();
	 std::vector<AndroidCXX::java_io_File > listFiles(AndroidCXX::java_io_FileFilter& arg0);
	 std::vector<AndroidCXX::java_io_File > listFiles();
	 std::vector<AndroidCXX::java_io_File > listFiles(AndroidCXX::java_io_FilenameFilter& arg0);
	 bool mkdir();
	 bool mkdirs();
	 bool renameTo(AndroidCXX::java_io_File& arg0);
	 bool setLastModified(long& arg0);
	 bool setWritable(bool& arg0,bool& arg1);
	 bool setWritable(bool& arg0);
	 bool setReadable(bool& arg0,bool& arg1);
	 bool setReadable(bool& arg0);
	 bool setExecutable(bool& arg0,bool& arg1);
	 bool setExecutable(bool& arg0);
	 bool canExecute();
	static std::vector<AndroidCXX::java_io_File > listRoots();
	 long getTotalSpace();
	 long getFreeSpace();
	 long getUsableSpace();
	static AndroidCXX::java_io_File createTempFile(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	static AndroidCXX::java_io_File createTempFile(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1,AndroidCXX::java_io_File& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_File