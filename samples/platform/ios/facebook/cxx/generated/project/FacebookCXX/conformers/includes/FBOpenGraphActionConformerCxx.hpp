/*
 * Header (Abstract Protocol Callback Class)
 * Author: cxx-bindings-generator
 */


#ifndef _FBOpenGraphActionConformerCxx
#define _FBOpenGraphActionConformerCxx

#include "FBGraphPlaceProtocolCxx.hpp"
#include "FBGraphPlaceConformerCxx.hpp"
#include "FBGraphUserProtocolCxx.hpp"
#include "FBGraphUserConformerCxx.hpp"
#include "FBGraphObjectProtocolCxx.hpp"
#include "FBGraphObjectConformerCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

class FBGraphPlaceProtocolCxx;
class FBGraphPlaceConformerCxx;
class FBGraphUserProtocolCxx;
class FBGraphUserConformerCxx;
class FBGraphObjectProtocolCxx;
class FBGraphObjectConformerCxx;

class FBOpenGraphActionConformerCxx
{
public:
	//Public Constructor
	FBOpenGraphActionConformerCxx();

	// Default Destructor
	~FBOpenGraphActionConformerCxx();

	// Retrieve proxy
	void * getProxy() const;

	// Functions

	virtual  std::string _id() = 0;

	virtual  void setId(std::string&) = 0;

	virtual  std::string start_time() = 0;

	virtual  void setStart_time(std::string&) = 0;

	virtual  std::string end_time() = 0;

	virtual  void setEnd_time(std::string&) = 0;

	virtual  std::string publish_time() = 0;

	virtual  void setPublish_time(std::string&) = 0;

	virtual  std::string created_time() = 0;

	virtual  void setCreated_time(std::string&) = 0;

	virtual  std::string expires_time() = 0;

	virtual  void setExpires_time(std::string&) = 0;

	virtual  std::string ref() = 0;

	virtual  void setRef(std::string&) = 0;

	virtual  std::string message() = 0;

	virtual  void setMessage(std::string&) = 0;

	virtual  FacebookCXX::FBGraphPlaceConformerCxx * place() = 0;

	virtual  void setPlace(FacebookCXX::FBGraphPlaceConformerCxx *) = 0;

	virtual  std::vector<void *> tags() = 0;

	virtual  void setTags(std::vector<void *>&) = 0;

	virtual  void * image() = 0;

	virtual  void setImage(void *&) = 0;

	virtual  FacebookCXX::FBGraphUserConformerCxx * from() = 0;

	virtual  void setFrom(FacebookCXX::FBGraphUserConformerCxx *) = 0;

	virtual  std::vector<void *> likes() = 0;

	virtual  void setLikes(std::vector<void *>&) = 0;

	virtual  FacebookCXX::FBGraphObjectConformerCxx * application() = 0;

	virtual  void setApplication(FacebookCXX::FBGraphObjectConformerCxx *) = 0;

	virtual  std::vector<void *> comments() = 0;

	virtual  void setComments(std::vector<void *>&) = 0;

	virtual  unsigned int count() = 0;

	virtual  void * objectForKey(void *&) = 0;

	virtual  void * keyEnumerator() = 0;

	virtual  void removeObjectForKey(void *&) = 0;

	virtual  void setObject_forKey(void *&,void *&) = 0;

	virtual  signed char provisionedForPost() = 0;

	virtual  void setProvisionedForPost(signed char&) = 0;
private:
	void* _proxy;
};

} // namespace
#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBOpenGraphActionConformerCxx
