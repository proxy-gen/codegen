/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */

#ifndef _com_facebook_android_Facebook_DialogListener
#define _com_facebook_android_Facebook_DialogListener

//includes go here

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

class com_facebook_android_Facebook_DialogListener
{
public:

	void onComplete(android_os_Bundle& arg0);
	void onCancel();
	void onFacebookError(com_facebook_android_FacebookError& arg0);
	void onError(com_facebook_android_DialogError& arg0);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_Facebook_DialogListener