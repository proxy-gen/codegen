/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 	
 	
 	
 	
 		 
 		 
 	
 	
	
 		 























// Generated Code 

#ifndef _android_view_KeyCharacterMap
#define _android_view_KeyCharacterMap
//
// Scroll Down 
//


#include <android_view_KeyEvent.hpp>

#include <android_view_KeyCharacterMap_KeyData.hpp>

#include <android_os_Parcel.hpp>


#include <android_os_Parcelable.hpp>

#include <vector>
#include <map>
#include <string>
#include <stack>
#include <list>
#include <CXXTypes.hpp>


#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

namespace AndroidCXX {

// Forward Declarations

class android_view_KeyEvent;

class android_view_KeyCharacterMap_KeyData;


class android_os_Parcel;

class android_view_KeyCharacterMap : public AndroidCXX::android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_view_KeyCharacterMap(const android_view_KeyCharacterMap& cc);
	android_view_KeyCharacterMap(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_view_KeyCharacterMap();
	// Functions
	virtual int  describeContents() ;
	static bool  deviceHasKey(int const& arg0) ;
	static std::vector<bool>  deviceHasKeys(std::vector<int> const& arg0) ;
	static int  getDeadChar(int const& arg0,int const& arg1) ;
	virtual char  getDisplayLabel(int const& arg0) ;
	virtual std::vector<AndroidCXX::android_view_KeyEvent>  getEvents(std::vector<char> const& arg0) ;
	virtual bool  getKeyData(int const& arg0,AndroidCXX::android_view_KeyCharacterMap_KeyData const& arg1) ;
	virtual int  getKeyboardType() ;
	virtual char  getMatch(int const& arg0,std::vector<char> const& arg1,int const& arg2) ;
	virtual char  getMatch(int const& arg0,std::vector<char> const& arg1) ;
	virtual int  getModifierBehavior() ;
	virtual char  getNumber(int const& arg0) ;
	virtual int  get(int const& arg0,int const& arg1) ;
	virtual bool  isPrintingKey(int const& arg0) ;
	static AndroidCXX::android_view_KeyCharacterMap * load(int const& arg0) ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_view_KeyCharacterMap