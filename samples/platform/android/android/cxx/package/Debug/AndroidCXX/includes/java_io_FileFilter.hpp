/*
 * Header (Instance CXX)
 * Author: codegen
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

class java_io_FileFilter : public AndroidCXX::java_lang_Object
{
public:

	java_io_FileFilter(const java_io_FileFilter& cc);
	java_io_FileFilter(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~java_io_FileFilter();
	// Functions
	virtual bool  accept(AndroidCXX::java_io_File const& arg0) ;

protected:
	java_io_FileFilter();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_io_FileFilter