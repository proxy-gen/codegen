/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//



 			
 			
 			
		


#ifndef _android_widget_RatingBar
#define _android_widget_RatingBar















#include <android_view_accessibility_AccessibilityNodeInfo.hpp>
#include <android_widget_RatingBar_OnRatingBarChangeListener.hpp>
#include <android_view_accessibility_AccessibilityEvent.hpp>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

class android_widget_RatingBar
{
public:
 void onInitializeAccessibilityEvent(android_view_accessibility_AccessibilityEvent& arg0);
 void onInitializeAccessibilityNodeInfo(android_view_accessibility_AccessibilityNodeInfo& arg0);
 void setOnRatingBarChangeListener(android_widget_RatingBar_OnRatingBarChangeListener& arg0);
 android_widget_RatingBar_OnRatingBarChangeListener getOnRatingBarChangeListener();
 void setIsIndicator(bool& arg0);
 bool isIndicator();
 void setNumStars(int& arg0);
 int getNumStars();
 void setRating(float& arg0);
 float getRating();
 void setStepSize(float& arg0);
 float getStepSize();
 void setMax(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_RatingBar