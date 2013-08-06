/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBAppLinkDataCxx
#define _FBAppLinkDataCxx


#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations

class FBAppLinkDataCxx
{
public:
	//Public Constructors
	FBAppLinkDataCxx(const FBAppLinkDataCxx* cc);
	FBAppLinkDataCxx(const void * proxy);

	// Default Destructor
	~FBAppLinkDataCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 std::string targetURL();

	 std::vector<void *> actionTypes();

	 std::vector<void *> actionIDs();

	 std::vector<void *> ref();

	 std::map<void *, void *> originalQueryParameters();

	 std::string originalURL();

	 std::map<void *, void *> arguments();
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBAppLinkDataCxx
