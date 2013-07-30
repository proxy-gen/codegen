/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBShareDialogParamsCxx
#define _FBShareDialogParamsCxx


#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations

class FBShareDialogParamsCxx
{
public:
	//Public Constructors
	FBShareDialogParamsCxx(const FBShareDialogParamsCxx* cc);
	FBShareDialogParamsCxx(const void * proxy);

	// Default Destructor
	~FBShareDialogParamsCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void * link();

	 void setLink(void *& arg0);

	 std::string name();

	 void setName(std::string& arg0);

	 std::string caption();

	 void setCaption(std::string& arg0);

	 std::string description();

	 void setDescription(std::string& arg0);

	 void * picture();

	 void setPicture(void *& arg0);

	 std::vector<void *> friends();

	 void setFriends(std::vector<void *>& arg0);

	 void * place();

	 void setPlace(void *& arg0);

	 std::string ref();

	 void setRef(std::string& arg0);

	 signed char dataFailuresFatal();

	 void setDataFailuresFatal(signed char& arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBShareDialogParamsCxx
