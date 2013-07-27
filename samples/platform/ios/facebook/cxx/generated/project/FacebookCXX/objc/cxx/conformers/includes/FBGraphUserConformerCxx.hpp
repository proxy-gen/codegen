/*
 * Header (Abstract Protocol Callback Class)
 * Author: cxx-bindings-generator
 */


#ifndef _FBGraphUserConformerCxx
#define _FBGraphUserConformerCxx

#include "FBGraphPlaceConformerCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

class FBGraphPlaceConformerCxx;

class FBGraphUserConformerCxx
{
public:
	//Public Constructor
	FBGraphUserConformerCxx();

	// Default Destructor
	~FBGraphUserConformerCxx();

	// Retrieve proxy
	void * getProxy() const;

	// Functions

	virtual  std::string id() = 0;

	virtual  void setId(std::string&) = 0;

	virtual  std::string name() = 0;

	virtual  void setName(std::string&) = 0;

	virtual  std::string first_name() = 0;

	virtual  void setFirst_name(std::string&) = 0;

	virtual  std::string middle_name() = 0;

	virtual  void setMiddle_name(std::string&) = 0;

	virtual  std::string last_name() = 0;

	virtual  void setLast_name(std::string&) = 0;

	virtual  std::string link() = 0;

	virtual  void setLink(std::string&) = 0;

	virtual  std::string username() = 0;

	virtual  void setUsername(std::string&) = 0;

	virtual  std::string birthday() = 0;

	virtual  void setBirthday(std::string&) = 0;

	virtual  FacebookCXX::FBGraphPlaceConformerCxx * location() = 0;

	virtual  void setLocation(FacebookCXX::FBGraphPlaceConformerCxx *) = 0;

	virtual  unsigned int count() = 0;

	virtual  void * objectForKey(void *&) = 0;

	virtual  void * keyEnumerator() = 0;

	virtual  void removeObjectForKey(void *&) = 0;

	virtual  void setObject_forKey(void *&,void *&) = 0;
private:
	void* _proxy;
};

} // namespace
#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBGraphUserConformerCxx
