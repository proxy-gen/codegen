/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

#ifndef _FBSessionLoginBehavior.hpp
#define _FBSessionLoginBehavior.hpp

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
} FBSessionLoginBehavior;

} //namespace FacebookCXX

#ifdef __cplusplus
}
#endif //__cplusplus
#endif // _FBSessionLoginBehavior.hpp
