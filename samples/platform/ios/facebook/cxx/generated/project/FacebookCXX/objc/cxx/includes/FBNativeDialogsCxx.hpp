/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBNativeDialogsCxx
#define _FBNativeDialogsCxx

#include "FBSessionCxx.hpp"
#include "FBNativeDialogResultCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBSessionCxx;

class FBNativeDialogsCxx
{
public:
	//Public Constructors
	FBNativeDialogsCxx(const FBNativeDialogsCxx* cc);
	FBNativeDialogsCxx(const void * proxy);

	// Default Destructor
	~FBNativeDialogsCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	static signed char presentShareDialogModallyFrom_initialText_image_url_handler(void *& arg0,std::string& arg1,void *& arg2,void *& arg3,void(*arg4)(FacebookCXX::FBNativeDialogResultCxx &, std::string &));

	static signed char presentShareDialogModallyFrom_initialText_images_urls_handler(void *& arg0,std::string& arg1,std::vector<void *>& arg2,std::vector<void *>& arg3,void(*arg4)(FacebookCXX::FBNativeDialogResultCxx &, std::string &));

	static signed char presentShareDialogModallyFrom_session_initialText_images_urls_handler(void *& arg0,FacebookCXX::FBSessionCxx * arg1,std::string& arg2,std::vector<void *>& arg3,std::vector<void *>& arg4,void(*arg5)(FacebookCXX::FBNativeDialogResultCxx &, std::string &));

	static signed char canPresentShareDialogWithSession(FacebookCXX::FBSessionCxx * arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBNativeDialogsCxx
