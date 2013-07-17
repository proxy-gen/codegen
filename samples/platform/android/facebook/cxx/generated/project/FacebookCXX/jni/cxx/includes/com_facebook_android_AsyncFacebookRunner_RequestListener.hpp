/*
 * Header (CXX)
 * Author: cxx-bindings-generator
 */

#ifndef _com_facebook_android_AsyncFacebookRunner_RequestListener
#define _com_facebook_android_AsyncFacebookRunner_RequestListener

//includes go here

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

class com_facebook_android_AsyncFacebookRunner_RequestListener
{
public:

	void onComplete(java_lang_String& arg0,java_lang_Object& arg1);
	void onFacebookError(com_facebook_android_FacebookError& arg0,java_lang_Object& arg1);
	void onFileNotFoundException(java_io_FileNotFoundException& arg0,java_lang_Object& arg1);
	void onMalformedURLException(java_net_MalformedURLException& arg0,java_lang_Object& arg1);
	void onIOException(java_io_IOException& arg0,java_lang_Object& arg1);


};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _com_facebook_android_AsyncFacebookRunner_RequestListener