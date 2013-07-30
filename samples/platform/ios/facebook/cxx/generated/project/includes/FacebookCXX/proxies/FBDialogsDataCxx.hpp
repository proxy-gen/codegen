/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBDialogsDataCxx
#define _FBDialogsDataCxx


#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations

class FBDialogsDataCxx
{
public:
	//Public Constructors
	FBDialogsDataCxx(const FBDialogsDataCxx* cc);
	FBDialogsDataCxx(const void * proxy);

	// Default Destructor
	~FBDialogsDataCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 std::string method();

	 std::map<void *, void *> arguments();

	 std::map<void *, void *> clientState();

	 std::map<void *, void *> results();
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBDialogsDataCxx
