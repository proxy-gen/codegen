/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



















// Generated Code 

#ifndef _android_view_InputDevice_MotionRange
#define _android_view_InputDevice_MotionRange
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

class android_view_InputDevice_MotionRange : public AndroidCXX::java_lang_Object
{
public:

	// Public Constructor
	android_view_InputDevice_MotionRange(const android_view_InputDevice_MotionRange& cc);
	android_view_InputDevice_MotionRange(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_view_InputDevice_MotionRange();
	// Functions
	virtual int  getAxis() ;
	virtual float  getFlat() ;
	virtual float  getFuzz() ;
	virtual float  getMax() ;
	virtual float  getMin() ;
	virtual float  getRange() ;
	virtual float  getResolution() ;
	virtual int  getSource() ;
	virtual bool  isFromSource(int const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_InputDevice_MotionRange