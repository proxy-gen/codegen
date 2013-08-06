/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBFriendPickerViewControllerCxx
#define _FBFriendPickerViewControllerCxx

#include <FacebookCXX/proxies/FBCacheDescriptorCxx.hpp>
#include <FacebookCXX/proxies/FBSessionCxx.hpp>
#include <FacebookCXX/enums/FBFriendSortOrderingCxx.hpp>
#include <FacebookCXX/enums/FBFriendDisplayOrderingCxx.hpp>

#include <vector>
#include <map>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace FacebookCXX {

// Forward Declarations
class FBCacheDescriptorCxx;
class FBSessionCxx;

class FBFriendPickerViewControllerCxx
{
public:
	//Public Constructors
	FBFriendPickerViewControllerCxx(const FBFriendPickerViewControllerCxx* cc);
	FBFriendPickerViewControllerCxx(const void * proxy);

	// Default Destructor
	~FBFriendPickerViewControllerCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void * init();

	 void * initWithCoder(void *& arg0);

	 void * initWithNibName_bundle(std::string& arg0,void *& arg1);

	 void configureUsingCachedDescriptor(FacebookCXX::FBCacheDescriptorCxx * arg0);

	 void loadData();

	 void updateView();

	 void clearSelection();

	static FacebookCXX::FBCacheDescriptorCxx * cacheDescriptor();

	static FacebookCXX::FBCacheDescriptorCxx * cacheDescriptorWithUserID_fieldsForRequest(std::string& arg0,void *& arg1);

	 void * spinner();

	 void setSpinner(void *& arg0);

	 void * tableView();

	 void setTableView(void *& arg0);

	 signed char allowsMultipleSelection();

	 void setAllowsMultipleSelection(signed char& arg0);

	 signed char itemPicturesEnabled();

	 void setItemPicturesEnabled(signed char& arg0);

	 void * fieldsForRequest();

	 void setFieldsForRequest(void *& arg0);

	 FacebookCXX::FBSessionCxx * session();

	 void setSession(FacebookCXX::FBSessionCxx * arg0);

	 std::string userID();

	 void setUserID(std::string& arg0);

	 std::vector<void *> selection();

	 FacebookCXX::FBFriendSortOrderingCxx sortOrdering();

	 void setSortOrdering(FacebookCXX::FBFriendSortOrderingCxx& arg0);

	 FacebookCXX::FBFriendDisplayOrderingCxx displayOrdering();

	 void setDisplayOrdering(FacebookCXX::FBFriendDisplayOrderingCxx& arg0);
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBFriendPickerViewControllerCxx
