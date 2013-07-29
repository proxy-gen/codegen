/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBGraphObjectCxx
#define _FBGraphObjectCxx

#include "FBGraphObjectProtocolCxx.hpp"
#include "FBGraphObjectConformerCxx.hpp"

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

	static signed char isGraphObjectID_sameAs(FacebookCXX::FBGraphObjectConformerCxx * arg0,FacebookCXX::FBGraphObjectConformerCxx * arg1);

	 unsigned int count();

	 void * objectForKey(void *& arg0);

	 void * keyEnumerator();

	 void removeObjectForKey(void *& arg0);

	 void setObject_forKey(void *& arg0,void *& arg1);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBGraphObjectCxx
