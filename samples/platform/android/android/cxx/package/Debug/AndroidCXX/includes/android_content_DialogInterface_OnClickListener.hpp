/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_content_DialogInterface_OnClickListener
#define _android_content_DialogInterface_OnClickListener
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

class android_content_DialogInterface;

class android_content_DialogInterface_OnClickListener : public java_lang_Object
{
public:

	android_content_DialogInterface_OnClickListener(const android_content_DialogInterface_OnClickListener& cc);
	android_content_DialogInterface_OnClickListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_DialogInterface_OnClickListener();
	// Functions
	virtual void  onClick(AndroidCXX::android_content_DialogInterface const& arg0,int const& arg1) ;

protected:
	android_content_DialogInterface_OnClickListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_DialogInterface_OnClickListener