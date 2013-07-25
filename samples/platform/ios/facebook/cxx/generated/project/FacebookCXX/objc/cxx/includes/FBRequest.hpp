/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBRequest
#define _FBRequest

#include "FBSession.hpp"
#include "FBRequestConnection.hpp"

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
class FBSession;
class FBRequestConnection;
class FBRequest;

class FBRequest
{
public:
	//Public Constructors
	FBRequest(const FBRequest& cc);
	FBRequest(void * proxy);

	// Default Destructor
	virtual ~FBRequest();

	// Retreive proxy object
	void* getProxy();

	// Functions

	 void * init();

	 void * initWithSession_graphPath(FacebookCXX::FBSession * arg0,std::string& arg1);

	 void * initWithSession_graphPath_parameters_HTTPMethod(FacebookCXX::FBSession * arg0,std::string& arg1,std::map<void *, void *>& arg2,std::string& arg3);

	 void * initForPostWithSession_graphPath_graphObject(FacebookCXX::FBSession * arg0,std::string& arg1,void *& arg2);

	 void * initWithSession_restMethod_parameters_HTTPMethod(FacebookCXX::FBSession * arg0,std::string& arg1,std::map<void *, void *>& arg2,std::string& arg3);

	 FacebookCXX::FBRequestConnection * startWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnection *barg0, void * &barg1, std::string &barg2));

	static FacebookCXX::FBRequest * requestForMe();

	static FacebookCXX::FBRequest * requestForMyFriends();

	static FacebookCXX::FBRequest * requestForUploadPhoto(void *& arg0);

	static FacebookCXX::FBRequest * requestForPostStatusUpdate(std::string& arg0);

	static FacebookCXX::FBRequest * requestForPostStatusUpdate_place_tags(std::string& arg0,void *& arg1,void *& arg2);

	static FacebookCXX::FBRequest * requestForGraphPath(std::string& arg0);

	static FacebookCXX::FBRequest * requestForPostWithGraphPath_graphObject(std::string& arg0,void *& arg1);

	static FacebookCXX::FBRequest * requestWithGraphPath_parameters_HTTPMethod(std::string& arg0,std::map<void *, void *>& arg1,std::string& arg2);

	 void * parameters();

	 FacebookCXX::FBSession * session();

	 void setSession(FacebookCXX::FBSession * arg0);

	 std::string graphPath();

	 void setGraphPath(std::string& arg0);

	 std::string restMethod();

	 void setRestMethod(std::string& arg0);

	 std::string HTTPMethod();

	 void setHTTPMethod(std::string& arg0);

	 void * graphObject();

	 void setGraphObject(void *& arg0);
};
private:
	void* _proxy;

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBRequest
