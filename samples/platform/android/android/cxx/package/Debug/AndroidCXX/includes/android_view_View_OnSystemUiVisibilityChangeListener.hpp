/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_view_View_OnSystemUiVisibilityChangeListener
#define _android_view_View_OnSystemUiVisibilityChangeListener
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

class android_view_View_OnSystemUiVisibilityChangeListener : public AndroidCXX::java_lang_Object
{
public:

	android_view_View_OnSystemUiVisibilityChangeListener(const android_view_View_OnSystemUiVisibilityChangeListener& cc);
	android_view_View_OnSystemUiVisibilityChangeListener(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_View_OnSystemUiVisibilityChangeListener();
	// Functions
	virtual void  onSystemUiVisibilityChange(int const& arg0) ;

protected:
	android_view_View_OnSystemUiVisibilityChangeListener();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_View_OnSystemUiVisibilityChangeListener