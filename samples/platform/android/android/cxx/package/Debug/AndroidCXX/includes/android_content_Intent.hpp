/*
 * Header (Instance CXX)
 * Author: codegen
 */

//
// Scroll Down 
//



	
	
	
	
	
	
	
	
	
 		 
 		 
	
	
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
	
	
 		 
	
 		 
	
 		 
 		 
	
	
 		 
	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
	
 		 
	
 		 
	
 		 
	
 		 
	
 	
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
 		 
	
 		 
	
 		 
	
 		 
 	
 		 
 		 
	
 	
 		 
 		 
	
 		 
	
 	
 		 
 		 
	
 	
 		 
 		 
	
 	
 		 
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 	
 		 
 		 
 	
 		 
 		 
	
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 
	
 		 
 		 
	
 		 
	
 		 
 		 
 		 
 		 
	
 		 
 		 
	
 		 
 	
	
 		 
 		 
 		 
	
 		 
 	
	
 		 
 	
	
 		 
 	
	
 		 
 	
	
 		 
 	
	
 		 
 	
	
 		 
 	
	
 		 
 	
	
 		 
 	
	
 		 
 		 
 	
	
 		 
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 
	
 		 
	
 		 
 		 
 	
	
 		 
 		 
 		 
 	
	
 		 
 		 
 		 
 	
	
 		 
 		 
 		 
 	
	
 		 
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
	
 		 
 		 
 	
	
 		 
 		 
 		 
 		 
	
 		 
 		 
 		 
	
 		 
	


 		 
 		 
 		 
 		 
 		 
 		 
 	
 		 
 		 
 		 
 		 
 		 
 	
 		 





































































































































// Generated Code 

#ifndef _android_content_Intent
#define _android_content_Intent
//
// Scroll Down 
//


#include <java_lang_String.hpp>

#include <java_lang_Object.hpp>

#include <android_net_Uri.hpp>

#include <android_content_ComponentName.hpp>

#include <android_os_Bundle.hpp>

#include <android_os_Parcel.hpp>

#include <android_content_Context.hpp>

#include <android_content_ClipData.hpp>

#include <java_lang_CharSequence.hpp>

#include <android_content_ContentResolver.hpp>

#include <java_util_Set.hpp>

#include <java_lang_ClassLoader.hpp>

#include <android_os_Parcelable.hpp>

#include <java_util_ArrayList.hpp>

#include <java_io_Serializable.hpp>

#include <java_lang_Integer.hpp>

#include <android_graphics_Rect.hpp>

#include <android_content_pm_PackageManager.hpp>

#include <android_content_pm_ActivityInfo.hpp>

#include <java_lang_Class.hpp>

#include <android_content_res_Resources.hpp>

#include <org_xmlpull_v1_XmlPullParser.hpp>

#include <android_util_AttributeSet.hpp>


#include <java_lang_Cloneable.hpp>

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

class java_lang_String;

class java_lang_Object;

class android_net_Uri;

class android_content_ComponentName;

class android_os_Bundle;

class android_os_Parcel;


class android_content_Context;

class android_content_ClipData;

class java_lang_CharSequence;

class android_content_ContentResolver;

class java_util_Set;

class java_lang_ClassLoader;


class java_util_ArrayList;

class java_io_Serializable;

class java_lang_Integer;

class android_graphics_Rect;

class android_content_pm_PackageManager;

class android_content_pm_ActivityInfo;

class java_lang_Class;

class android_content_res_Resources;

class org_xmlpull_v1_XmlPullParser;

class android_util_AttributeSet;

class android_content_Intent : public android_os_Parcelable,public java_lang_Cloneable
{
public:

	// Public ConstrucXXX
	android_content_Intent();
	android_content_Intent(AndroidCXX::android_content_Intent const& arg0);
	android_content_Intent(AndroidCXX::java_lang_String const& arg0);
	android_content_Intent(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_net_Uri const& arg1);
	android_content_Intent(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_Class const& arg1);
	android_content_Intent(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_net_Uri const& arg1,AndroidCXX::android_content_Context const& arg2,AndroidCXX::java_lang_Class const& arg3);
	android_content_Intent(Proxy proxy);
	Proxy proxy() const;	
	// Default Destructor
	virtual ~android_content_Intent();
	// Functions
	virtual AndroidCXX::java_lang_String * toString() ;
	virtual AndroidCXX::java_lang_Object * clone() ;
	virtual AndroidCXX::java_lang_String * getPackage() ;
	virtual AndroidCXX::java_lang_String * getType() ;
	virtual AndroidCXX::java_lang_String * toURI() ;
	virtual AndroidCXX::java_lang_String * getScheme() ;
	virtual AndroidCXX::android_net_Uri * getData() ;
	virtual AndroidCXX::android_content_ComponentName * getComponent() ;
	virtual AndroidCXX::android_os_Bundle * getExtras() ;
	virtual int  describeContents() ;
	virtual void  writeToParcel(AndroidCXX::android_os_Parcel const& arg0,int const& arg1) ;
	virtual bool  hasFileDescriptors() ;
	virtual void  setSelector(AndroidCXX::android_content_Intent const& arg0) ;
	virtual AndroidCXX::android_content_Intent * getSelector() ;
	virtual AndroidCXX::java_lang_String * getAction() ;
	virtual int  getFlags() ;
	virtual AndroidCXX::android_content_Intent * setAction(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_Intent * setClassName(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_content_Intent * setClassName(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual void  readFromParcel(AndroidCXX::android_os_Parcel const& arg0) ;
	virtual AndroidCXX::android_content_Intent * setFlags(int const& arg0) ;
	virtual AndroidCXX::android_content_ClipData * getClipData() ;
	virtual AndroidCXX::android_content_Intent * setData(AndroidCXX::android_net_Uri const& arg0) ;
	static AndroidCXX::android_content_Intent * getIntent(AndroidCXX::java_lang_String const& arg0) ;
	static AndroidCXX::android_content_Intent * createChooser(AndroidCXX::android_content_Intent const& arg0,AndroidCXX::java_lang_CharSequence const& arg1) ;
	virtual AndroidCXX::android_content_Intent * cloneFilter() ;
	static AndroidCXX::android_content_Intent * makeMainActivity(AndroidCXX::android_content_ComponentName const& arg0) ;
	static AndroidCXX::android_content_Intent * makeMainSelectorActivity(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	static AndroidCXX::android_content_Intent * makeRestartActivityTask(AndroidCXX::android_content_ComponentName const& arg0) ;
	static AndroidCXX::android_content_Intent * parseUri(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	static AndroidCXX::android_content_Intent * getIntentOld(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_String * getDataString() ;
	virtual AndroidCXX::java_lang_String * resolveType(AndroidCXX::android_content_Context const& arg0) ;
	virtual AndroidCXX::java_lang_String * resolveType(AndroidCXX::android_content_ContentResolver const& arg0) ;
	virtual AndroidCXX::java_lang_String * resolveTypeIfNeeded(AndroidCXX::android_content_ContentResolver const& arg0) ;
	virtual bool  hasCategory(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_Set * getCategories() ;
	virtual void  setExtrasClassLoader(AndroidCXX::java_lang_ClassLoader const& arg0) ;
	virtual bool  hasExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual bool  getBooleanExtra(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual byte  getByteExtra(AndroidCXX::java_lang_String const& arg0,byte const& arg1) ;
	virtual short  getShortExtra(AndroidCXX::java_lang_String const& arg0,short const& arg1) ;
	virtual char  getCharExtra(AndroidCXX::java_lang_String const& arg0,char const& arg1) ;
	virtual int  getIntExtra(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual long  getLongExtra(AndroidCXX::java_lang_String const& arg0,long const& arg1) ;
	virtual float  getFloatExtra(AndroidCXX::java_lang_String const& arg0,float const& arg1) ;
	virtual double  getDoubleExtra(AndroidCXX::java_lang_String const& arg0,double const& arg1) ;
	virtual AndroidCXX::java_lang_String * getStringExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_lang_CharSequence * getCharSequenceExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_os_Parcelable * getParcelableExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<android_os_Parcelable>  getParcelableArrayExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_ArrayList * getParcelableArrayListExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_io_Serializable * getSerializableExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_ArrayList * getIntegerArrayListExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_ArrayList * getStringArrayListExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::java_util_ArrayList * getCharSequenceArrayListExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<bool>  getBooleanArrayExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<byte>  getByteArrayExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<short>  getShortArrayExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<char>  getCharArrayExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<int>  getIntArrayExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<long>  getLongArrayExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<float>  getFloatArrayExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<double>  getDoubleArrayExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<java_lang_String>  getStringArrayExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual std::vector<java_lang_CharSequence>  getCharSequenceArrayExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_os_Bundle * getBundleExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_graphics_Rect * getSourceBounds() ;
	virtual AndroidCXX::android_content_ComponentName * resolveActivity(AndroidCXX::android_content_pm_PackageManager const& arg0) ;
	virtual AndroidCXX::android_content_pm_ActivityInfo * resolveActivityInfo(AndroidCXX::android_content_pm_PackageManager const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_Intent * setDataAndNormalize(AndroidCXX::android_net_Uri const& arg0) ;
	virtual AndroidCXX::android_content_Intent * setType(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_Intent * setTypeAndNormalize(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_Intent * setDataAndType(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_content_Intent * setDataAndTypeAndNormalize(AndroidCXX::android_net_Uri const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_content_Intent * addCategory(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  removeCategory(AndroidCXX::java_lang_String const& arg0) ;
	virtual void  setClipData(AndroidCXX::android_content_ClipData const& arg0) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_CharSequence const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Parcelable const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,std::vector<android_os_Parcelable> const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_io_Serializable const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,std::vector<bool> const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,std::vector<byte> const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,std::vector<short> const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,std::vector<char> const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,std::vector<int> const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,std::vector<long> const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,std::vector<float> const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,std::vector<double> const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,std::vector<java_lang_String> const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,std::vector<java_lang_CharSequence> const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,AndroidCXX::android_os_Bundle const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,byte const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,char const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,short const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,int const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,long const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,float const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,double const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_lang_String const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtra(AndroidCXX::java_lang_String const& arg0,bool const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putParcelableArrayListExtra(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_ArrayList const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putIntegerArrayListExtra(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_ArrayList const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putStringArrayListExtra(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_ArrayList const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putCharSequenceArrayListExtra(AndroidCXX::java_lang_String const& arg0,AndroidCXX::java_util_ArrayList const& arg1) ;
	virtual AndroidCXX::android_content_Intent * putExtras(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual AndroidCXX::android_content_Intent * putExtras(AndroidCXX::android_content_Intent const& arg0) ;
	virtual AndroidCXX::android_content_Intent * replaceExtras(AndroidCXX::android_os_Bundle const& arg0) ;
	virtual AndroidCXX::android_content_Intent * replaceExtras(AndroidCXX::android_content_Intent const& arg0) ;
	virtual void  removeExtra(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_Intent * addFlags(int const& arg0) ;
	virtual AndroidCXX::android_content_Intent * setPackage(AndroidCXX::java_lang_String const& arg0) ;
	virtual AndroidCXX::android_content_Intent * setComponent(AndroidCXX::android_content_ComponentName const& arg0) ;
	virtual AndroidCXX::android_content_Intent * setClass(AndroidCXX::android_content_Context const& arg0,AndroidCXX::java_lang_Class const& arg1) ;
	virtual void  setSourceBounds(AndroidCXX::android_graphics_Rect const& arg0) ;
	virtual int  fillIn(AndroidCXX::android_content_Intent const& arg0,int const& arg1) ;
	virtual bool  filterEquals(AndroidCXX::android_content_Intent const& arg0) ;
	virtual int  filterHashCode() ;
	virtual AndroidCXX::java_lang_String * toUri(int const& arg0) ;
	static AndroidCXX::android_content_Intent * parseIntent(AndroidCXX::android_content_res_Resources const& arg0,AndroidCXX::org_xmlpull_v1_XmlPullParser const& arg1,AndroidCXX::android_util_AttributeSet const& arg2) ;
	static AndroidCXX::java_lang_String * normalizeMimeType(AndroidCXX::java_lang_String const& arg0) ;

protected:

};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_Intent