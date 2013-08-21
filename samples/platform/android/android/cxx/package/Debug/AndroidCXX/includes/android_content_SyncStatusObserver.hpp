/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_content_SyncStatusObserver
#define _android_content_SyncStatusObserver
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

class android_content_SyncStatusObserver : public AndroidCXX::java_lang_Object
{
public:

	android_content_SyncStatusObserver(const android_content_SyncStatusObserver& cc);
	android_content_SyncStatusObserver(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_SyncStatusObserver();
	// Functions
	virtual void  onStatusChanged(int const& arg0) ;

protected:
	android_content_SyncStatusObserver();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_SyncStatusObserver