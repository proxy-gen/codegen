/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBOpenGraphActionProtocolCxx
#define _FBOpenGraphActionProtocolCxx

#include <FacebookCXX/proxies/FBGraphPlaceProtocolCxx.hpp>
#include <FacebookCXX/proxies/FBGraphUserProtocolCxx.hpp>
#include <FacebookCXX/proxies/FBGraphObjectProtocolCxx.hpp>
#include <FacebookCXX/conformers/FBGraphPlaceConformerCxx.hpp>
#include <FacebookCXX/conformers/FBGraphUserConformerCxx.hpp>
#include <FacebookCXX/conformers/FBGraphObjectConformerCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBGraphPlaceProtocolCxx;
class FBGraphUserProtocolCxx;
class FBGraphObjectProtocolCxx;
class FBGraphPlaceConformerCxx;
class FBGraphUserConformerCxx;
class FBGraphObjectConformerCxx;

class FBOpenGraphActionProtocolCxx
{
public:
	//Public Constructors
	FBOpenGraphActionProtocolCxx(const FBOpenGraphActionProtocolCxx* cc);
	FBOpenGraphActionProtocolCxx(const void * proxy);

	// Default Destructor
	~FBOpenGraphActionProtocolCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 std::string _id();

	 void setId(std::string& arg0);

	 std::string start_time();

	 void setStart_time(std::string& arg0);

	 std::string end_time();

	 void setEnd_time(std::string& arg0);

	 std::string publish_time();

	 void setPublish_time(std::string& arg0);

	 std::string created_time();

	 void setCreated_time(std::string& arg0);

	 std::string expires_time();

	 void setExpires_time(std::string& arg0);

	 std::string ref();

	 void setRef(std::string& arg0);

	 std::string message();

	 void setMessage(std::string& arg0);

	 FacebookCXX::FBGraphPlaceProtocolCxx * place();

	 void setPlace(FacebookCXX::FBGraphPlaceConformerCxx * arg0);

	 std::vector<void *> tags();

	 void setTags(std::vector<void *>& arg0);

	 void * image();

	 void setImage(void *& arg0);

	 FacebookCXX::FBGraphUserProtocolCxx * from();

	 void setFrom(FacebookCXX::FBGraphUserConformerCxx * arg0);

	 std::vector<void *> likes();

	 void setLikes(std::vector<void *>& arg0);

	 FacebookCXX::FBGraphObjectProtocolCxx * application();

	 void setApplication(FacebookCXX::FBGraphObjectConformerCxx * arg0);

	 std::vector<void *> comments();

	 void setComments(std::vector<void *>& arg0);

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

#endif // _FBOpenGraphActionProtocolCxx
