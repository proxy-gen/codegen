/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	








// Generated Code 

#ifndef _android_widget_FilterQueryProvider
#define _android_widget_FilterQueryProvider
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

class java_lang_CharSequence;

class android_database_Cursor;

class android_widget_FilterQueryProvider : public AndroidCXX::java_lang_Object
{
public:

	android_widget_FilterQueryProvider(const android_widget_FilterQueryProvider& cc);
	android_widget_FilterQueryProvider(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_FilterQueryProvider();
	// Functions
	virtual AndroidCXX::android_database_Cursor * runQuery(AndroidCXX::java_lang_CharSequence const& arg0) ;

protected:
	android_widget_FilterQueryProvider();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_FilterQueryProvider