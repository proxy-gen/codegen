/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

#ifndef _FBSessionLoginBehaviorCxx
#define _FBSessionLoginBehaviorCxx

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

typedef enum
{
	FBSessionLoginBehaviorWithFallbackToWebView = 0,
	FBSessionLoginBehaviorWithNoFallbackToWebView = 1,
	FBSessionLoginBehaviorForcingWebView = 2,
	FBSessionLoginBehaviorUseSystemAccountIfPresent = 3,
} FBSessionLoginBehaviorCxx;

} //namespace FacebookCXX

#ifdef __cplusplus
}
#endif //__cplusplus
#endif // _FBSessionLoginBehaviorCxx
