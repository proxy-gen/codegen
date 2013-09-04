/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//





 	







// Generated Code 

#ifndef _android_database_CharArrayBuffer
#define _android_database_CharArrayBuffer
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

class android_database_CharArrayBuffer : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_database_CharArrayBuffer(std::vector<char> const& arg0,Proxy * aProxy = new Proxy());
	android_database_CharArrayBuffer(int const& arg0,Proxy * aProxy = new Proxy());
	android_database_CharArrayBuffer(const android_database_CharArrayBuffer& cc);
	android_database_CharArrayBuffer(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_database_CharArrayBuffer();
	// Functions

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_database_CharArrayBuffer