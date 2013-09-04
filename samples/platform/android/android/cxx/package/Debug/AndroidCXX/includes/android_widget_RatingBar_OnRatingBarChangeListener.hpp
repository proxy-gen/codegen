/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 








// Generated Code 

#ifndef _android_widget_RatingBar_OnRatingBarChangeListener
#define _android_widget_RatingBar_OnRatingBarChangeListener
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

class android_widget_RatingBar;

class android_widget_RatingBar_OnRatingBarChangeListener : public AndroidCXX::java_lang_Object
{
public:

	android_widget_RatingBar_OnRatingBarChangeListener(const android_widget_RatingBar_OnRatingBarChangeListener& cc);
	android_widget_RatingBar_OnRatingBarChangeListener(Proxy * aProxy);
	Proxy * proxy() const;	
	// Default Destructor
	virtual ~android_widget_RatingBar_OnRatingBarChangeListener();
	// Functions
	virtual void  onRatingChanged(AndroidCXX::android_widget_RatingBar const& arg0,float const& arg1,bool const& arg2) ;

protected:
	android_widget_RatingBar_OnRatingBarChangeListener();

private:
	Proxy * _proxy;

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RatingBar_OnRatingBarChangeListener