/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_webkit_WebStorage_QuotaUpdater
#define _android_webkit_WebStorage_QuotaUpdater
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

class android_webkit_WebStorage_QuotaUpdater : public AndroidCXX::java_lang_Object
{
public:

	android_webkit_WebStorage_QuotaUpdater(const android_webkit_WebStorage_QuotaUpdater& cc);
	android_webkit_WebStorage_QuotaUpdater(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_webkit_WebStorage_QuotaUpdater();
	// Functions
	virtual void  updateQuota(long const& arg0) ;

protected:
	android_webkit_WebStorage_QuotaUpdater();

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_webkit_WebStorage_QuotaUpdater