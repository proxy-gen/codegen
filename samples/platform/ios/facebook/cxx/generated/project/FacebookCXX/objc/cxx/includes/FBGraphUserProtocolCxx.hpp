/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBGraphUserProtocolCxx
#define _FBGraphUserProtocolCxx

#include "FBGraphPlaceProtocolCxx.hpp"
#include "FBGraphPlaceConformerCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBGraphPlaceProtocolCxx;
class FBGraphPlaceConformerCxx;

class FBGraphUserProtocolCxx
{
public:
	//Public Constructors
	FBGraphUserProtocolCxx(const FBGraphUserProtocolCxx* cc);
	FBGraphUserProtocolCxx(const void * proxy);

	// Default Destructor
	~FBGraphUserProtocolCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 std::string _id();

	 void setId(std::string& arg0);

	 std::string name();

	 void setName(std::string& arg0);

	 std::string first_name();

	 void setFirst_name(std::string& arg0);

	 std::string middle_name();

	 void setMiddle_name(std::string& arg0);

	 std::string last_name();

	 void setLast_name(std::string& arg0);

	 std::string link();

	 void setLink(std::string& arg0);

	 std::string username();

	 void setUsername(std::string& arg0);

	 std::string birthday();

	 void setBirthday(std::string& arg0);

	 FacebookCXX::FBGraphPlaceProtocolCxx * location();

	 void setLocation(FacebookCXX::FBGraphPlaceConformerCxx * arg0);

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

#endif // _FBGraphUserProtocolCxx
