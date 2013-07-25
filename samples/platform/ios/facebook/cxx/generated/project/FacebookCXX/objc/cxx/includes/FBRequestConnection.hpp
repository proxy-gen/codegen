/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBRequestConnection
#define _FBRequestConnection

#include "FBRequest.hpp"

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBRequest;
class FBRequestConnection;

class FBRequestConnection
{
public:
	//Public Constructors
	FBRequestConnection(const FBRequestConnection& cc);
	FBRequestConnection(void * proxy);

	// Default Destructor
	virtual ~FBRequestConnection();

	// Retreive proxy object
	void* getProxy();

	// Functions

	 void * init();

	 void * initWithTimeout(double& arg0);

	 void addRequest_completionHandler(FacebookCXX::FBRequest * arg0,void(*arg1)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2));

	 void addRequest_completionHandler_batchEntryName(FacebookCXX::FBRequest * arg0,void(*arg1)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2),std::string& arg2);

	 void start();

	 void cancel();

	static FacebookCXX::FBRequestConnection * startForMeWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2));

	static FacebookCXX::FBRequestConnection * startForMyFriendsWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2));

	static FacebookCXX::FBRequestConnection * startForUploadPhoto_completionHandler(void *& arg0,void(*arg1)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2));

	static FacebookCXX::FBRequestConnection * startForPostStatusUpdate_completionHandler(std::string& arg0,void(*arg1)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2));

	static FacebookCXX::FBRequestConnection * startForPostStatusUpdate_place_tags_completionHandler(std::string& arg0,void *& arg1,void *& arg2,void(*arg3)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2));

	static FacebookCXX::FBRequestConnection * startWithGraphPath_completionHandler(std::string& arg0,void(*arg1)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2));

	static FacebookCXX::FBRequestConnection * startForPostWithGraphPath_graphObject_completionHandler(std::string& arg0,void *& arg1,void(*arg2)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2));

	static FacebookCXX::FBRequestConnection * startWithGraphPath_parameters_HTTPMethod_completionHandler(std::string& arg0,std::map<void *, void *>& arg1,std::string& arg2,void(*arg3)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2));

	 void * urlRequest();

	 void setUrlRequest(void *& arg0);

	 void * urlResponse();
};
private:
	void* _proxy;

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBRequestConnection
