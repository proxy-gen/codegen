/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBSessionTokenCachingStrategy
#define _FBSessionTokenCachingStrategy


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
class FBSessionTokenCachingStrategy;

class FBSessionTokenCachingStrategy
{
public:
	//Public Constructors
	FBSessionTokenCachingStrategy(const FBSessionTokenCachingStrategy& cc);
	FBSessionTokenCachingStrategy(void * proxy);

	// Default Destructor
	virtual ~FBSessionTokenCachingStrategy();

	// Retreive proxy object
	void* getProxy();

	// Functions

	 void * init();

	 void * initWithUserDefaultTokenInformationKeyName(std::string& arg0);

	 void cacheTokenInformation(std::map<void *, void *>& arg0);

	 std::map<void *, void *> fetchTokenInformation();

	 void clearToken();

	static FacebookCXX::FBSessionTokenCachingStrategy * defaultInstance();

	static signed char isValidTokenInformation(std::map<void *, void *>& arg0);
};
private:
	void* _proxy;

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBSessionTokenCachingStrategy
