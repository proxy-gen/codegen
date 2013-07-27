/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_CharSequence.hpp>

#include <android_database_Cursor.hpp>

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

class android_widget_FilterQueryProvider
{
public:

	android_widget_FilterQueryProvider(const android_widget_FilterQueryProvider& cc);
	android_widget_FilterQueryProvider(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_FilterQueryProvider();
	// Functions
	 AndroidCXX::android_database_Cursor runQuery(AndroidCXX::java_lang_CharSequence const& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_FilterQueryProvider