/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */

#ifndef _com_facebook_android_Facebook_ServiceListener
#define _com_facebook_android_Facebook_ServiceListener

//includes go here

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

class com_facebook_android_Facebook_ServiceListener
{
public:

	void onComplete(android_os_Bundle& arg0);
	void onFacebookError(com_facebook_android_FacebookError& arg0);
	void onError(java_lang_Error& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_Facebook_ServiceListener