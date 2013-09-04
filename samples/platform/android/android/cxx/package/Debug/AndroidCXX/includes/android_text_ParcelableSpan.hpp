/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//











// Generated Code 

#ifndef _android_text_ParcelableSpan
#define _android_text_ParcelableSpan
//
// Scroll Down 
//



#include <android_os_Parcelable.hpp>

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

class android_text_ParcelableSpan : public AndroidCXX::android_os_Parcelable
{
public:

	android_text_ParcelableSpan(const android_text_ParcelableSpan& cc);
	android_text_ParcelableSpan(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_text_ParcelableSpan();
	// Functions
	virtual int  getSpanTypeId() ;

protected:
	android_text_ParcelableSpan();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_ParcelableSpan