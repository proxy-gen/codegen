/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	











// Generated Code 

#ifndef _android_os_Vibrator
#define _android_os_Vibrator
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

class android_os_Vibrator : public AndroidCXX::java_lang_Object
{
public:

	android_os_Vibrator(const android_os_Vibrator& cc);
	android_os_Vibrator(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_os_Vibrator();
	// Functions
	virtual void  cancel() ;
	virtual bool  hasVibrator() ;
	virtual void  vibrate(std::vector<long> const& arg0,int const& arg1) ;
	virtual void  vibrate(long const& arg0) ;

protected:
	android_os_Vibrator();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_os_Vibrator