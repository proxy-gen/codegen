/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
 */


// Generated Code 

#ifndef _FBPlacePickerViewControllerCxx
#define _FBPlacePickerViewControllerCxx

#include <FacebookCXX/proxies/FBCacheDescriptorCxx.hpp>
#include <FacebookCXX/proxies/FBSessionCxx.hpp>
#include <FacebookCXX/proxies/FBGraphPlaceProtocolCxx.hpp>

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
class FBGraphPlaceProtocolCxx;

class FBPlacePickerViewControllerCxx
{
public:
	//Public Constructors
	FBPlacePickerViewControllerCxx(const FBPlacePickerViewControllerCxx* cc);
	FBPlacePickerViewControllerCxx(const void * proxy);

	// Default Destructor
	~FBPlacePickerViewControllerCxx();

	// Retrieve proxy object
	void* getProxy() const;

	// Functions

	 void clearSelection();

	 void * init();

	 void * initWithCoder(void *& arg0);

	 void * initWithNibName_bundle(std::string& arg0,void *& arg1);

	 void configureUsingCachedDescriptor(FacebookCXX::FBCacheDescriptorCxx * arg0);

	 void loadData();

	 void updateView();

	 void * spinner();

	 void setSpinner(void *& arg0);

	 void * tableView();

	 void setTableView(void *& arg0);

	 void * fieldsForRequest();

	 void setFieldsForRequest(void *& arg0);

	 signed char itemPicturesEnabled();

	 void setItemPicturesEnabled(signed char& arg0);

	 int radiusInMeters();

	 void setRadiusInMeters(int& arg0);

	 int resultsLimit();

	 void setResultsLimit(int& arg0);

	 std::string searchText();

	 void setSearchText(std::string& arg0);

	 FacebookCXX::FBSessionCxx * session();

	 void setSession(FacebookCXX::FBSessionCxx * arg0);

	 FacebookCXX::FBGraphPlaceProtocolCxx * selection();
private:
	void* _proxy;
};

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _FBPlacePickerViewControllerCxx
