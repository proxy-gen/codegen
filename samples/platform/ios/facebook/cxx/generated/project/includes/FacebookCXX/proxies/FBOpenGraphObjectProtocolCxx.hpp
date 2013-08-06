/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBOpenGraphObjectProtocolCxx
#define _FBOpenGraphObjectProtocolCxx

#include <FacebookCXX/proxies/FBGraphObjectProtocolCxx.hpp>
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
class FBGraphObjectConformerCxx;

class FBOpenGraphObjectProtocolCxx
{
public:
	//Public Constructors
	FBOpenGraphObjectProtocolCxx(const FBOpenGraphObjectProtocolCxx* cc);
	FBOpenGraphObjectProtocolCxx(const void * proxy);

	// Default Destructor
	~FBOpenGraphObjectProtocolCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 std::string _id();

	 void setId(std::string& arg0);

	 std::string type();

	 void setType(std::string& arg0);

	 std::string title();

	 void setTitle(std::string& arg0);

	 void * image();

	 void setImage(void *& arg0);

	 void * url();

	 void setUrl(void *& arg0);

	 void * description();

	 void setDescription(void *& arg0);

	 FacebookCXX::FBGraphObjectProtocolCxx * data();

	 void setData(FacebookCXX::FBGraphObjectConformerCxx * arg0);

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

#endif // _FBOpenGraphObjectProtocolCxx
