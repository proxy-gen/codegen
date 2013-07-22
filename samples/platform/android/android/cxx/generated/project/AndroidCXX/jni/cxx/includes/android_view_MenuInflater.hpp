/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 		 


 		 







// Generated Code 

#ifndef _android_view_MenuInflater
#define _android_view_MenuInflater
//
// Scroll Down 
//


#include <android_view_Menu.hpp>

#include <android_content_Context.hpp>

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

class android_view_Menu;

class android_content_Context;

class android_view_MenuInflater
{
public:

	android_view_MenuInflater(const android_view_MenuInflater& cc);
	android_view_MenuInflater(void * proxy);
	// Public Constructors
	android_view_MenuInflater(AndroidCXX::android_content_Context& arg0);
	android_view_MenuInflater();
	// Default Destructor
	virtual ~android_view_MenuInflater();
	// Functions
	 void inflate(int& arg0,AndroidCXX::android_view_Menu& arg1);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_MenuInflater