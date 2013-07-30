/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBErrorUtilityCxx
#define _FBErrorUtilityCxx


#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations

class FBErrorUtilityCxx
{
public:
	//Public Constructors
	FBErrorUtilityCxx(const FBErrorUtilityCxx* cc);
	FBErrorUtilityCxx(const void * proxy);

	// Default Destructor
	~FBErrorUtilityCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	static void * errorCategoryForError(void *& arg0);

	static void * shouldNotifyUserForError(void *& arg0);

	static void * userMessageForError(void *& arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBErrorUtilityCxx
