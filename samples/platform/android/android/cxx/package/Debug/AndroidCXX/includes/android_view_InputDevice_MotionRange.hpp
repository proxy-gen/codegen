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

class android_view_InputDevice_MotionRange 
{
public:

	// Public ConstrucXXX
	android_view_InputDevice_MotionRange(const android_view_InputDevice_MotionRange& cc);
	android_view_InputDevice_MotionRange(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_InputDevice_MotionRange();
	// Functions
	virtual float  getMax() ;
	virtual int  getSource() ;
	virtual bool  isFromSource(int const& arg0) ;
	virtual int  getAxis() ;
	virtual float  getMin() ;
	virtual float  getRange() ;
	virtual float  getFlat() ;
	virtual float  getFuzz() ;
	virtual float  getResolution() ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_InputDevice_MotionRange