/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBGraphPlaceProtocolCxx
#define _FBGraphPlaceProtocolCxx

#include "FBGraphLocationProtocolCxx.hpp"
#include "FBGraphLocationConformerCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBGraphLocationProtocolCxx;
class FBGraphLocationConformerCxx;

class FBGraphPlaceProtocolCxx
{
public:
	//Public Constructors
	FBGraphPlaceProtocolCxx(const FBGraphPlaceProtocolCxx* cc);
	FBGraphPlaceProtocolCxx(const void * proxy);

	// Default Destructor
	~FBGraphPlaceProtocolCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 std::string _id();

	 void setId(std::string& arg0);

	 std::string name();

	 void setName(std::string& arg0);

	 std::string category();

	 void setCategory(std::string& arg0);

	 FacebookCXX::FBGraphLocationProtocolCxx * location();

	 void setLocation(FacebookCXX::FBGraphLocationConformerCxx * arg0);

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

#endif // _FBGraphPlaceProtocolCxx
