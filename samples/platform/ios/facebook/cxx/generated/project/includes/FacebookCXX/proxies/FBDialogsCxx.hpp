/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBDialogsCxx
#define _FBDialogsCxx

#include <FacebookCXX/proxies/FBSessionCxx.hpp>
#include <FacebookCXX/proxies/FBShareDialogParamsCxx.hpp>
#include <FacebookCXX/proxies/FBAppCallCxx.hpp>
#include <FacebookCXX/proxies/FBOpenGraphActionShareDialogParamsCxx.hpp>
#include <FacebookCXX/enums/FBOSIntegratedShareDialogResultCxx.hpp>
#include <FacebookCXX/conformers/FBOpenGraphActionConformerCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBSessionCxx;
class FBShareDialogParamsCxx;
class FBAppCallCxx;
class FBOpenGraphActionShareDialogParamsCxx;
class FBOpenGraphActionConformerCxx;

class FBDialogsCxx
{
public:
	//Public Constructors
	FBDialogsCxx(const FBDialogsCxx* cc);
	FBDialogsCxx(const void * proxy);

	// Default Destructor
	~FBDialogsCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	static signed char presentOSIntegratedShareDialogModallyFrom_initialText_image_url_handler(void *& arg0,std::string& arg1,void *& arg2,std::string& arg3,void(*arg4)(FacebookCXX::FBOSIntegratedShareDialogResultCxx &, std::string &));

	static signed char presentOSIntegratedShareDialogModallyFrom_initialText_images_urls_handler(void *& arg0,std::string& arg1,std::vector<void *>& arg2,std::vector<void *>& arg3,void(*arg4)(FacebookCXX::FBOSIntegratedShareDialogResultCxx &, std::string &));

	static signed char presentOSIntegratedShareDialogModallyFrom_session_initialText_images_urls_handler(void *& arg0,FacebookCXX::FBSessionCxx * arg1,std::string& arg2,std::vector<void *>& arg3,std::vector<void *>& arg4,void(*arg5)(FacebookCXX::FBOSIntegratedShareDialogResultCxx &, std::string &));

	static signed char canPresentOSIntegratedShareDialogWithSession(FacebookCXX::FBSessionCxx * arg0);

	static signed char canPresentShareDialogWithParams(FacebookCXX::FBShareDialogParamsCxx * arg0);

	static FacebookCXX::FBAppCallCxx * presentShareDialogWithParams_clientState_handler(FacebookCXX::FBShareDialogParamsCxx * arg0,std::map<void *, void *>& arg1,void(*arg2)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &));

	static FacebookCXX::FBAppCallCxx * presentShareDialogWithLink_handler(std::string& arg0,void(*arg1)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &));

	static FacebookCXX::FBAppCallCxx * presentShareDialogWithLink_name_handler(std::string& arg0,std::string& arg1,void(*arg2)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &));

	static FacebookCXX::FBAppCallCxx * presentShareDialogWithLink_name_caption_description_picture_clientState_handler(std::string& arg0,std::string& arg1,std::string& arg2,std::string& arg3,std::string& arg4,std::map<void *, void *>& arg5,void(*arg6)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &));

	static signed char canPresentShareDialogWithOpenGraphActionParams(FacebookCXX::FBOpenGraphActionShareDialogParamsCxx * arg0);

	static FacebookCXX::FBAppCallCxx * presentShareDialogWithOpenGraphActionParams_clientState_handler(FacebookCXX::FBOpenGraphActionShareDialogParamsCxx * arg0,std::map<void *, void *>& arg1,void(*arg2)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &));

	static FacebookCXX::FBAppCallCxx * presentShareDialogWithOpenGraphAction_actionType_previewPropertyName_handler(FacebookCXX::FBOpenGraphActionConformerCxx * arg0,std::string& arg1,std::string& arg2,void(*arg3)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &));

	static FacebookCXX::FBAppCallCxx * presentShareDialogWithOpenGraphAction_actionType_previewPropertyName_clientState_handler(FacebookCXX::FBOpenGraphActionConformerCxx * arg0,std::string& arg1,std::string& arg2,std::map<void *, void *>& arg3,void(*arg4)(FacebookCXX::FBAppCallCxx *, std::map<void *, void *> &, std::string &));
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBDialogsCxx
