/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_webkit_WebView_FindListener
#define _android_webkit_WebView_FindListener
//
// Scroll Down 
//



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

class android_webkit_WebView_FindListener 
{
public:

	android_webkit_WebView_FindListener(const android_webkit_WebView_FindListener& cc);
	android_webkit_WebView_FindListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebView_FindListener();
	// Functions
	virtual void  onFindResultReceived(int const& arg0,int const& arg1,bool const& arg2) ;

protected:
	android_webkit_WebView_FindListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebView_FindListener