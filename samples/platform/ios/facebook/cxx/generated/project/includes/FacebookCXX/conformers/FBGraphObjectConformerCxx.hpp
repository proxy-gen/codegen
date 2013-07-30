/*
 * Header (Abstract Protocol Callback Class)
 * Author: cxx-bindings-generator
 */


#ifndef _FBGraphObjectConformerCxx
#define _FBGraphObjectConformerCxx


#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {


class FBGraphObjectConformerCxx
{
public:
	//Public Constructor
	FBGraphObjectConformerCxx();

	// Default Destructor
	~FBGraphObjectConformerCxx();

	// Retrieve proxy
	void * getProxy() const;

	// Functions

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

#endif // _FBGraphObjectConformerCxx
