/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


 		 








// Generated Code 

#ifndef _java_io_FileFilter
#define _java_io_FileFilter
//
// Scroll Down 
//


#include <java_io_File.hpp>

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

class java_io_FileFilter
{
public:

	java_io_FileFilter(const java_io_FileFilter& cc);
	java_io_FileFilter(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_io_FileFilter();
	// Functions
	 bool accept(AndroidCXX::java_io_File const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_FileFilter