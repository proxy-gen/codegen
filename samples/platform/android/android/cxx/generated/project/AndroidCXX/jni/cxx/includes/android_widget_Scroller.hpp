/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//




// Generated Code 

#ifndef _android_widget_Scroller
#define _android_widget_Scroller
//
// Scroll Down 
//






















#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_widget_Scroller
{
public:
 int getDuration();
 void setFriction(float& arg0);
 bool isFinished();
 void forceFinished(bool& arg0);
 int getCurrX();
 int getCurrY();
 float getCurrVelocity();
 int getStartX();
 int getStartY();
 int getFinalX();
 int getFinalY();
 bool computeScrollOffset();
 void startScroll(int& arg0);
 void fling(int& arg0);
 void abortAnimation();
 void extendDuration(int& arg0);
 int timePassed();
 void setFinalX(int& arg0);
 void setFinalY(int& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_widget_Scroller