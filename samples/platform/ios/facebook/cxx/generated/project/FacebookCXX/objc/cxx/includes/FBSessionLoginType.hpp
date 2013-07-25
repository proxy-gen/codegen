/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

#ifndef _FBSessionLoginType.hpp
#define _FBSessionLoginType.hpp

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

typedef enum
{
	FBSessionLoginTypeNone = 0,
	FBSessionLoginTypeSystemAccount = 1,
	FBSessionLoginTypeFacebookApplication = 2,
	FBSessionLoginTypeFacebookViaSafari = 3,
	FBSessionLoginTypeWebView = 4,
	FBSessionLoginTypeTestUser = 5,
} FBSessionLoginType;

} //namespace FacebookCXX

#ifdef __cplusplus
}
#endif //__cplusplus
#endif // _FBSessionLoginType.hpp
