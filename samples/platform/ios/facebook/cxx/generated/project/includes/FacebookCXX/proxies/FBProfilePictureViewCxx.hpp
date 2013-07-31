/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBProfilePictureViewCxx
#define _FBProfilePictureViewCxx

#include <FacebookCXX/enums/FBProfilePictureCroppingCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations

class FBProfilePictureViewCxx
{
public:
	//Public Constructors
	FBProfilePictureViewCxx(const FBProfilePictureViewCxx* cc);
	FBProfilePictureViewCxx(const void * proxy);

	// Default Destructor
	~FBProfilePictureViewCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void * init();

	 void * initWithProfileID_pictureCropping(std::string& arg0,FacebookCXX::FBProfilePictureCroppingCxx& arg1);

	 std::string profileID();

	 void setProfileID(std::string& arg0);

	 FacebookCXX::FBProfilePictureCroppingCxx pictureCropping();

	 void setPictureCropping(FacebookCXX::FBProfilePictureCroppingCxx& arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBProfilePictureViewCxx
