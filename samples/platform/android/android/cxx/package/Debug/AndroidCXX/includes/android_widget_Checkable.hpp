/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//













// Generated Code 

#ifndef _android_widget_Checkable
#define _android_widget_Checkable
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

class android_widget_Checkable : public AndroidCXX::java_lang_Object
{
public:

	android_widget_Checkable(const android_widget_Checkable& cc);
	android_widget_Checkable(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_Checkable();
	// Functions
	virtual bool  isChecked() ;
	virtual void  setChecked(bool const& arg0) ;
	virtual void  toggle() ;

protected:
	android_widget_Checkable();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Checkable