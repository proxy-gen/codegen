/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBRequestConnectionCxx
#define _FBRequestConnectionCxx

#include "FBRequestCxx.hpp"
#include "FBGraphObjectConformerCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBRequestCxx;
class FBRequestConnectionCxx;
class FBGraphObjectConformerCxx;

class FBRequestConnectionCxx
{
public:
	//Public Constructors
	FBRequestConnectionCxx(const FBRequestConnectionCxx* cc);
	FBRequestConnectionCxx(const void * proxy);

	// Default Destructor
	~FBRequestConnectionCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void * init();

	 void * initWithTimeout(double& arg0);

	 void addRequest_completionHandler(FacebookCXX::FBRequestCxx * arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &));

	 void addRequest_completionHandler_batchEntryName(FacebookCXX::FBRequestCxx * arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &),std::string& arg2);

	 void start();

	 void cancel();

	static FacebookCXX::FBRequestConnectionCxx * startForMeWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &));

	static FacebookCXX::FBRequestConnectionCxx * startForMyFriendsWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &));

	static FacebookCXX::FBRequestConnectionCxx * startForUploadPhoto_completionHandler(void *& arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &));

	static FacebookCXX::FBRequestConnectionCxx * startForPostStatusUpdate_completionHandler(std::string& arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &));

	static FacebookCXX::FBRequestConnectionCxx * startForPostStatusUpdate_place_tags_completionHandler(std::string& arg0,void *& arg1,void *& arg2,void(*arg3)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &));

	static FacebookCXX::FBRequestConnectionCxx * startWithGraphPath_completionHandler(std::string& arg0,void(*arg1)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &));

	static FacebookCXX::FBRequestConnectionCxx * startForPostWithGraphPath_graphObject_completionHandler(std::string& arg0,FacebookCXX::FBGraphObjectConformerCxx * arg1,void(*arg2)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &));

	static FacebookCXX::FBRequestConnectionCxx * startWithGraphPath_parameters_HTTPMethod_completionHandler(std::string& arg0,std::map<void *, void *>& arg1,std::string& arg2,void(*arg3)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &));

	 void * urlRequest();

	 void setUrlRequest(void *& arg0);

	 void * urlResponse();
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBRequestConnectionCxx
