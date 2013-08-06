/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBGraphObjectProtocolCxx
#define _FBGraphObjectProtocolCxx


#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations

class FBGraphObjectProtocolCxx
{
public:
	//Public Constructors
	FBGraphObjectProtocolCxx(const FBGraphObjectProtocolCxx* cc);
	FBGraphObjectProtocolCxx(const void * proxy);

	// Default Destructor
	~FBGraphObjectProtocolCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

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

#endif // _FBGraphObjectProtocolCxx
