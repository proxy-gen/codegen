/*
 * Header (Abstract Protocol Callback Class)
 * Author: cxx-bindings-generator
 */


#ifndef _FBOpenGraphObjectConformerCxx
#define _FBOpenGraphObjectConformerCxx

#include "FBGraphObjectProtocolCxx.hpp"
#include "FBGraphObjectConformerCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

class FBGraphObjectProtocolCxx;
class FBGraphObjectConformerCxx;

class FBOpenGraphObjectConformerCxx
{
public:
	//Public Constructor
	FBOpenGraphObjectConformerCxx();

	// Default Destructor
	~FBOpenGraphObjectConformerCxx();

	// Retrieve proxy
	void * getProxy() const;

	// Functions

	virtual  std::string _id() = 0;

	virtual  void setId(std::string&) = 0;

	virtual  std::string type() = 0;

	virtual  void setType(std::string&) = 0;

	virtual  std::string title() = 0;

	virtual  void setTitle(std::string&) = 0;

	virtual  void * image() = 0;

	virtual  void setImage(void *&) = 0;

	virtual  void * url() = 0;

	virtual  void setUrl(void *&) = 0;

	virtual  void * description() = 0;

	virtual  void setDescription(void *&) = 0;

	virtual  FacebookCXX::FBGraphObjectConformerCxx * data() = 0;

	virtual  void setData(FacebookCXX::FBGraphObjectConformerCxx *) = 0;

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

#endif // _FBOpenGraphObjectConformerCxx
