/*
 * Header (Abstract Protocol Callback Class)
 * Author: cxx-bindings-generator
 */


#ifndef _FBGraphPlaceConformerCxx
#define _FBGraphPlaceConformerCxx

#include "FBGraphLocationProtocolCxx.hpp"
#include "FBGraphLocationConformerCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

class FBGraphLocationProtocolCxx;
class FBGraphLocationConformerCxx;

class FBGraphPlaceConformerCxx
{
public:
	//Public Constructor
	FBGraphPlaceConformerCxx();

	// Default Destructor
	~FBGraphPlaceConformerCxx();

	// Retrieve proxy
	void * getProxy() const;

	// Functions

	virtual  std::string _id() = 0;

	virtual  void setId(std::string&) = 0;

	virtual  std::string name() = 0;

	virtual  void setName(std::string&) = 0;

	virtual  std::string category() = 0;

	virtual  void setCategory(std::string&) = 0;

	virtual  FacebookCXX::FBGraphLocationConformerCxx * location() = 0;

	virtual  void setLocation(FacebookCXX::FBGraphLocationConformerCxx *) = 0;

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

#endif // _FBGraphPlaceConformerCxx
