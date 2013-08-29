/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_view_View_OnClickListener
#define _android_view_View_OnClickListener
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

class android_view_View;

class android_view_View_OnClickListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_View_OnClickListener(const android_view_View_OnClickListener& cc);
	android_view_View_OnClickListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_View_OnClickListener();
	// Functions
	virtual void  onClick(AndroidCXX::android_view_View const& arg0) ;

protected:
	android_view_View_OnClickListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_OnClickListener