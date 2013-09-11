/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//





#ifndef _com_facebook_SessionState
#define _com_facebook_SessionState


#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace com_facebook_SessionState {

enum com_facebook_SessionState
{
	CLOSED,
	CLOSED_LOGIN_FAILED,
	CREATED,
	CREATED_TOKEN_LOADED,
	OPENED,
	OPENED_TOKEN_UPDATED,
	OPENING,
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_SessionState