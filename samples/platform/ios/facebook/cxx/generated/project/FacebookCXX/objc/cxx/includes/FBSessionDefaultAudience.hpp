/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */

#ifndef _FBSessionDefaultAudience.hpp
#define _FBSessionDefaultAudience.hpp

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

typedef enum
{
	FBSessionDefaultAudienceNone = 0,
	FBSessionDefaultAudienceOnlyMe = 10,
	FBSessionDefaultAudienceFriends = 20,
	FBSessionDefaultAudienceEveryone = 30,
} FBSessionDefaultAudience;

} //namespace FacebookCXX

#ifdef __cplusplus
}
#endif //__cplusplus
#endif // _FBSessionDefaultAudience.hpp
