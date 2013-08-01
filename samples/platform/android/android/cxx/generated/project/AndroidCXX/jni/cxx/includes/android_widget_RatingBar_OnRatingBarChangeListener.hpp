/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <android_widget_RatingBar.hpp>

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

class android_widget_RatingBar_OnRatingBarChangeListener
{
public:

	android_widget_RatingBar_OnRatingBarChangeListener(const android_widget_RatingBar_OnRatingBarChangeListener& cc);
	android_widget_RatingBar_OnRatingBarChangeListener(Proxy proxy);
	// Public Constructors
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_widget_RatingBar_OnRatingBarChangeListener();
	// Functions
	 void onRatingChanged(AndroidCXX::android_widget_RatingBar const& arg0,float const& arg1,bool const& arg2);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RatingBar_OnRatingBarChangeListener