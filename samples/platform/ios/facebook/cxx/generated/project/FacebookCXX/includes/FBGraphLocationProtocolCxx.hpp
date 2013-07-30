/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBGraphLocationProtocolCxx
#define _FBGraphLocationProtocolCxx


#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations

class FBGraphLocationProtocolCxx
{
public:
	//Public Constructors
	FBGraphLocationProtocolCxx(const FBGraphLocationProtocolCxx* cc);
	FBGraphLocationProtocolCxx(const void * proxy);

	// Default Destructor
	~FBGraphLocationProtocolCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 std::string street();

	 void setStreet(std::string& arg0);

	 std::string city();

	 void setCity(std::string& arg0);

	 std::string state();

	 void setState(std::string& arg0);

	 std::string country();

	 void setCountry(std::string& arg0);

	 std::string zip();

	 void setZip(std::string& arg0);

	 void * latitude();

	 void setLatitude(void *& arg0);

	 void * longitude();

	 void setLongitude(void *& arg0);

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

#endif // _FBGraphLocationProtocolCxx
