/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBSettingsCxx
#define _FBSettingsCxx


#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations

class FBSettingsCxx
{
public:
	//Public Constructors
	FBSettingsCxx(const FBSettingsCxx* cc);
	FBSettingsCxx(const void * proxy);

	// Default Destructor
	~FBSettingsCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	static void * loggingBehavior();

	static void setLoggingBehavior(void *& arg0);

	static signed char shouldAutoPublishInstall();

	static void setShouldAutoPublishInstall(signed char& arg0);

	static void publishInstall(std::string& arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBSettingsCxx
