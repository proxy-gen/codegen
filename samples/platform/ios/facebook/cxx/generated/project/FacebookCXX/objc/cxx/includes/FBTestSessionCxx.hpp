/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBTestSessionCxx
#define _FBTestSessionCxx


#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations

class FBTestSessionCxx
{
public:
	//Public Constructors
	FBTestSessionCxx(const FBTestSessionCxx* cc);
	FBTestSessionCxx(const void * proxy);

	// Default Destructor
	~FBTestSessionCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	static void * sessionWithSharedUserWithPermissions(std::vector<void *>& arg0);

	static void * sessionWithSharedUserWithPermissions_uniqueUserTag(std::vector<void *>& arg0,std::string& arg1);

	static void * sessionWithPrivateUserWithPermissions(std::vector<void *>& arg0);

	 std::string appAccessToken();

	 std::string testUserID();

	 std::string testAppID();

	 std::string testAppSecret();
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBTestSessionCxx
