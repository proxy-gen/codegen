/*
 * Header (Abstract Protocol Callback Class)
 * Author: cxx-bindings-generator
 */


#ifndef _FBGraphLocationConformerCxx
#define _FBGraphLocationConformerCxx


#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {


class FBGraphLocationConformerCxx
{
public:
	//Public Constructor
	FBGraphLocationConformerCxx();

	// Default Destructor
	~FBGraphLocationConformerCxx();

	// Retrieve proxy
	void * getProxy() const;

	// Functions

	virtual  std::string street() = 0;

	virtual  void setStreet(std::string&) = 0;

	virtual  std::string city() = 0;

	virtual  void setCity(std::string&) = 0;

	virtual  std::string state() = 0;

	virtual  void setState(std::string&) = 0;

	virtual  std::string country() = 0;

	virtual  void setCountry(std::string&) = 0;

	virtual  std::string zip() = 0;

	virtual  void setZip(std::string&) = 0;

	virtual  void * latitude() = 0;

	virtual  void setLatitude(void *&) = 0;

	virtual  void * longitude() = 0;

	virtual  void setLongitude(void *&) = 0;

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

#endif // _FBGraphLocationConformerCxx
