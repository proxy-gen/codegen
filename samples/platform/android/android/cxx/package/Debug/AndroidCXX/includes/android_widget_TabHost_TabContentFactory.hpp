/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	








// Generated Code 

#ifndef _android_widget_TabHost_TabContentFactory
#define _android_widget_TabHost_TabContentFactory
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

class java_lang_String;

class android_view_View;

class android_widget_TabHost_TabContentFactory : public AndroidCXX::java_lang_Object
{
public:

	android_widget_TabHost_TabContentFactory(const android_widget_TabHost_TabContentFactory& cc);
	android_widget_TabHost_TabContentFactory(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_TabHost_TabContentFactory();
	// Functions
	virtual AndroidCXX::android_view_View * createTabContent(AndroidCXX::java_lang_String const& arg0) ;

protected:
	android_widget_TabHost_TabContentFactory();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_TabHost_TabContentFactory