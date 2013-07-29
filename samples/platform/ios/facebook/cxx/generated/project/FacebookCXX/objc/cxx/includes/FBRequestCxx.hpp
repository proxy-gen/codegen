/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBRequestCxx
#define _FBRequestCxx

#include "FBSessionCxx.hpp"
#include "FBGraphObjectConformerCxx.hpp"
#include "FBRequestConnectionCxx.hpp"
#include "FBGraphObjectProtocolCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBSessionCxx;
class FBGraphObjectConformerCxx;
class FBRequestConnectionCxx;
class FBRequestCxx;
class FBGraphObjectProtocolCxx;

class FBRequestCxx
{
public:
	//Public Constructors
	FBRequestCxx(const FBRequestCxx* cc);
	FBRequestCxx(const void * proxy);

	// Default Destructor
	~FBRequestCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void * init();

	 void * initWithSession_graphPath(FacebookCXX::FBSessionCxx * arg0,std::string& arg1);

	 void * initWithSession_graphPath_parameters_HTTPMethod(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::map<void *, void *>& arg2,std::string& arg3);

	 void * initForPostWithSession_graphPath_graphObject(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,FacebookCXX::FBGraphObjectConformerCxx * arg2);

	 void * initWithSession_restMethod_parameters_HTTPMethod(FacebookCXX::FBSessionCxx * arg0,std::string& arg1,std::map<void *, void *>& arg2,std::string& arg3);

	 FacebookCXX::FBRequestConnectionCxx * startWithCompletionHandler(void(*arg0)(FacebookCXX::FBRequestConnectionCxx *, void * &, std::string &));

	static FacebookCXX::FBRequestCxx * requestForMe();

	static FacebookCXX::FBRequestCxx * requestForMyFriends();

	static FacebookCXX::FBRequestCxx * requestForUploadPhoto(void *& arg0);

	static FacebookCXX::FBRequestCxx * requestForPostStatusUpdate(std::string& arg0);

	static FacebookCXX::FBRequestCxx * requestForPostStatusUpdate_place_tags(std::string& arg0,void *& arg1,void *& arg2);

	static FacebookCXX::FBRequestCxx * requestForGraphPath(std::string& arg0);

	static FacebookCXX::FBRequestCxx * requestForPostWithGraphPath_graphObject(std::string& arg0,FacebookCXX::FBGraphObjectConformerCxx * arg1);

	static FacebookCXX::FBRequestCxx * requestWithGraphPath_parameters_HTTPMethod(std::string& arg0,std::map<void *, void *>& arg1,std::string& arg2);

	 void * parameters();

	 FacebookCXX::FBSessionCxx * session();

	 void setSession(FacebookCXX::FBSessionCxx * arg0);

	 std::string graphPath();

	 void setGraphPath(std::string& arg0);

	 std::string restMethod();

	 void setRestMethod(std::string& arg0);

	 std::string HTTPMethod();

	 void setHTTPMethod(std::string& arg0);

	 FacebookCXX::FBGraphObjectProtocolCxx * graphObject();

	 void setGraphObject(FacebookCXX::FBGraphObjectConformerCxx * arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBRequestCxx
