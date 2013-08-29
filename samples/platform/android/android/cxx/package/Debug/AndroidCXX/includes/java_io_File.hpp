/*
 * Header (Instance CXX)
 * Author: codegen
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


#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <java_io_FileFilter.hpp>

#include <java_io_FilenameFilter.hpp>

#include <java_net_URI.hpp>

#include <java_net_URL.hpp>


#include <java_io_Serializable.hpp>

#include <java_lang_Comparable.hpp>

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

class java_lang_Object;

class java_io_FileFilter;

class java_io_FilenameFilter;

class java_net_URI;

class java_net_URL;

class java_io_File : public AndroidCXX::java_io_Serializable,public AndroidCXX::java_lang_Comparable
{
public:

	// Public Constructor
	java_io_File(AndroidCXX::java_io_File const& arg0,AndroidCXX::java_lang_String const& arg1,Proxy * aProxy = new Proxy());
	java_io_File(AndroidCXX::java_lang_String const& arg0,Proxy * aProxy = new Proxy());
	java_io_File(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,Proxy * aProxy = new Proxy());
	java_io_File(AndroidCXX::java_net_URI const& arg0,Proxy * aProxy = new Proxy());
	java_io_File(const java_io_File& cc);
	java_io_File(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_io_File();
	// Functions
	virtual bool  canExecute() ;
	virtual bool  canRead() ;
	virtual bool  canWrite() ;
	virtual int  compareTo(AndroidCXX::java_io_File const& arg0) ;
	virtual bool  createNewFile() ;
	static AndroidCXX::java_io_File * createTempFile(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,AndroidCXX::java_io_File const& arg2) ;
	static AndroidCXX::java_io_File * createTempFile(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  deleteOnExit() ;
	virtual bool  _delete() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual bool  exists() ;
	virtual AndroidCXX::java_io_File * getAbsoluteFile() ;
	virtual AndroidCXX::java_lang_String * getAbsolutePath() ;
	virtual AndroidCXX::java_io_File * getCanonicalFile() ;
	virtual AndroidCXX::java_lang_String * getCanonicalPath() ;
	virtual long  getFreeSpace() ;
	virtual AndroidCXX::java_lang_String * getName() ;
	virtual AndroidCXX::java_io_File * getParentFile() ;
	virtual AndroidCXX::java_lang_String * getParent() ;
	virtual AndroidCXX::java_lang_String * getPath() ;
	virtual long  getTotalSpace() ;
	virtual long  getUsableSpace() ;
	virtual int  hashCode() ;
	virtual bool  isAbsolute() ;
	virtual bool  isDirectory() ;
	virtual bool  isFile() ;
	virtual bool  isHidden() ;
	virtual long  lastModified() ;
	virtual long  length() ;
	virtual std::vector<AndroidCXX::java_io_File>  listFiles(AndroidCXX::java_io_FileFilter const& arg0) ;
	virtual std::vector<AndroidCXX::java_io_File>  listFiles(AndroidCXX::java_io_FilenameFilter const& arg0) ;
	virtual std::vector<AndroidCXX::java_io_File>  listFiles() ;
	virtual std::vector<AndroidCXX::java_lang_String>  list(AndroidCXX::java_io_FilenameFilter const& arg0) ;
	virtual std::vector<AndroidCXX::java_lang_String>  list() ;
	static std::vector<AndroidCXX::java_io_File>  listRoots() ;
	virtual bool  mkdir() ;
	virtual bool  mkdirs() ;
	virtual bool  renameTo(AndroidCXX::java_io_File const& arg0) ;
	virtual bool  setExecutable(bool const& arg0,bool const& arg1) ;
	virtual bool  setExecutable(bool const& arg0) ;
	virtual bool  setLastModified(long const& arg0) ;
	virtual bool  setReadOnly() ;
	virtual bool  setReadable(bool const& arg0,bool const& arg1) ;
	virtual bool  setReadable(bool const& arg0) ;
	virtual bool  setWritable(bool const& arg0,bool const& arg1) ;
	virtual bool  setWritable(bool const& arg0) ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual AndroidCXX::java_net_URI * toURI() ;
	virtual AndroidCXX::java_net_URL * toURL() ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_File