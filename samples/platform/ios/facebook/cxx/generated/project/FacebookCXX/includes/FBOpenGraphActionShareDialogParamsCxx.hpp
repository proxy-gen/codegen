/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBOpenGraphActionShareDialogParamsCxx
#define _FBOpenGraphActionShareDialogParamsCxx

#include "FBOpenGraphActionProtocolCxx.hpp"
#include "FBOpenGraphActionConformerCxx.hpp"

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBOpenGraphActionProtocolCxx;
class FBOpenGraphActionConformerCxx;

class FBOpenGraphActionShareDialogParamsCxx
{
public:
	//Public Constructors
	FBOpenGraphActionShareDialogParamsCxx(const FBOpenGraphActionShareDialogParamsCxx* cc);
	FBOpenGraphActionShareDialogParamsCxx(const void * proxy);

	// Default Destructor
	~FBOpenGraphActionShareDialogParamsCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 FacebookCXX::FBOpenGraphActionProtocolCxx * action();

	 void setAction(FacebookCXX::FBOpenGraphActionConformerCxx * arg0);

	 std::string previewPropertyName();

	 void setPreviewPropertyName(std::string& arg0);

	 std::string actionType();

	 void setActionType(std::string& arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBOpenGraphActionShareDialogParamsCxx
