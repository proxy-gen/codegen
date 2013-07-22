/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 
 		 








// Generated Code 

#ifndef _java_io_FilenameFilter
#define _java_io_FilenameFilter
//
// Scroll Down 
//


#include <java_io_File.hpp>

#include <java_lang_String.hpp>

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

class java_io_File;

class java_lang_String;

class java_io_FilenameFilter
{
public:

	java_io_FilenameFilter(const java_io_FilenameFilter& cc);
	java_io_FilenameFilter(void * proxy);
	// Public Constructors
	java_io_FilenameFilter();
	// Default Destructor
	virtual ~java_io_FilenameFilter();
	// Functions
	 bool accept(AndroidCXX::java_io_File& arg0,AndroidCXX::java_lang_String& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_FilenameFilter