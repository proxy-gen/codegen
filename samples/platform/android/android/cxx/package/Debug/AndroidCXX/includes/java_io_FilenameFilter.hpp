/*
 * Header (Instance CXX)
 * Author: codegen
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



#include <java_lang_Object.hpp>

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

class java_io_FilenameFilter : public AndroidCXX::java_lang_Object
{
public:

	java_io_FilenameFilter(const java_io_FilenameFilter& cc);
	java_io_FilenameFilter(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~java_io_FilenameFilter();
	// Functions
	virtual bool  accept(AndroidCXX::java_io_File const& arg0,AndroidCXX::java_lang_String const& arg1) ;

protected:
	java_io_FilenameFilter();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_FilenameFilter