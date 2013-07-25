/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

#ifndef _FBSessionState.hpp
#define _FBSessionState.hpp

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

typedef enum
{
	FBSessionStateCreated = 0,
	FBSessionStateCreatedTokenLoaded = 1,
	FBSessionStateCreatedOpening = 2,
	FBSessionStateOpen = 513,
	FBSessionStateOpenTokenExtended = 514,
	FBSessionStateClosedLoginFailed = 257,
	FBSessionStateClosed = 258,
} FBSessionState;

} //namespace FacebookCXX

#ifdef __cplusplus
}
#endif //__cplusplus
#endif // _FBSessionState.hpp
