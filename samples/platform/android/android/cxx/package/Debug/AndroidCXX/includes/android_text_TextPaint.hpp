/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 


 		 









// Generated Code 

#ifndef _android_text_TextPaint
#define _android_text_TextPaint
//
// Scroll Down 
//


#include <android_graphics_Paint.hpp>


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


class android_graphics_Paint;

class android_text_TextPaint 
{
public:

	// Public Constructor
	android_text_TextPaint(Proxy * aProxy = new Proxy());
	android_text_TextPaint(AndroidCXX::android_graphics_Paint const& arg0,Proxy * aProxy = new Proxy());
	android_text_TextPaint(int const& arg0,Proxy * aProxy = new Proxy());
	android_text_TextPaint(const android_text_TextPaint& cc);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_text_TextPaint();
	// Functions
	virtual void  set(AndroidCXX::android_text_TextPaint const& arg0) ;

protected:

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_text_TextPaint