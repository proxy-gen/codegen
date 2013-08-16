/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



 		 
	
 		 
 		 
	
	
 		 


 		 
 		 
 		 


















// Generated Code 

#ifndef _android_content_SyncAdapterType
#define _android_content_SyncAdapterType
//
// Scroll Down 
//


#include <java_lang_Object.hpp>

#include <java_lang_String.hpp>

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

class java_lang_Object;

class java_lang_String;


class android_os_Parcel;

class android_content_SyncAdapterType : public android_os_Parcelable
{
public:

	// Public ConstrucXXX
	android_content_SyncAdapterType(AndroidCXX::android_os_Parcel const& arg0);
	android_content_SyncAdapterType(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1,bool const& arg2,bool const& arg3);
	android_content_SyncAdapterType(const android_content_SyncAdapterType& cc);
	android_content_SyncAdapterType(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_SyncAdapterType();
	// Functions
	virtual bool  allowParallelSyncs() ;
	virtual int  describeContents() ;
	virtual bool  equals(AndroidCXX::java_lang_Object const& arg0) ;
	virtual AndroidCXX::java_lang_String * getSettingsActivity() ;
	virtual int  hashCode() ;
	virtual bool  isAlwaysSyncable() ;
	virtual bool  isUserVisible() ;
	static AndroidCXX::android_content_SyncAdapterType * newKey(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual bool  supportsUploading() ;
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_SyncAdapterType