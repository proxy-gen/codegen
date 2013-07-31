/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBGraphObjectCxx
#define _FBGraphObjectCxx

#include <FacebookCXX/proxies/FBGraphObjectProtocolCxx.hpp>
#include <FacebookCXX/proxies/FBOpenGraphActionProtocolCxx.hpp>
#include <FacebookCXX/proxies/FBOpenGraphObjectProtocolCxx.hpp>
#include <FacebookCXX/conformers/FBGraphObjectConformerCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBGraphObjectProtocolCxx;
class FBOpenGraphActionProtocolCxx;
class FBOpenGraphObjectProtocolCxx;
class FBGraphObjectConformerCxx;

class FBGraphObjectCxx
{
public:
	//Public Constructors
	FBGraphObjectCxx(const FBGraphObjectCxx* cc);
	FBGraphObjectCxx(const void * proxy);

	// Default Destructor
	~FBGraphObjectCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	static FacebookCXX::FBGraphObjectProtocolCxx * graphObject();

	static FacebookCXX::FBGraphObjectProtocolCxx * graphObjectWrappingDictionary(std::map<void *, void *>& arg0);

	static FacebookCXX::FBOpenGraphActionProtocolCxx * openGraphActionForPost();

	static FacebookCXX::FBOpenGraphObjectProtocolCxx * openGraphObjectForPost();

	static FacebookCXX::FBOpenGraphObjectProtocolCxx * openGraphObjectForPostWithType_title_image_url_description(std::string& arg0,std::string& arg1,void *& arg2,void *& arg3,std::string& arg4);

	static signed char isGraphObjectID_sameAs(FacebookCXX::FBGraphObjectConformerCxx * arg0,FacebookCXX::FBGraphObjectConformerCxx * arg1);

	 unsigned int count();

	 void * objectForKey(void *& arg0);

	 void * keyEnumerator();

	 void removeObjectForKey(void *& arg0);

	 void setObject_forKey(void *& arg0,void *& arg1);

	 signed char provisionedForPost();

	 void setProvisionedForPost(signed char& arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBGraphObjectCxx
