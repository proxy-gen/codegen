/*
 * Header (Instance CXX)
 * Author: cxx-bindings-generator
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


#include <java_lang_CharSequence.hpp>

#include <android_content_Context.hpp>

#include <android_content_ContentResolver.hpp>

#include <java_util_Set.hpp>

#include <android_content_ClipData.hpp>

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

class android_content_Intent;

class java_lang_CharSequence;

class android_content_Context;

class android_content_ContentResolver;

class java_util_Set;

class android_content_ClipData;

class java_lang_ClassLoader;

class android_os_Parcelable;

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

class android_content_Intent
{
public:

	android_content_Intent(const android_content_Intent& cc);
	android_content_Intent(void * proxy);
	// Public Constructors
	android_content_Intent();
	android_content_Intent(AndroidCXX::android_content_Intent& arg0);
	android_content_Intent(AndroidCXX::java_lang_String& arg0);
	android_content_Intent(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_net_Uri& arg1);
	android_content_Intent(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_Class& arg1);
	android_content_Intent(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_net_Uri& arg1,AndroidCXX::android_content_Context& arg2,AndroidCXX::java_lang_Class& arg3);
	// TODO: remove
	// 
	// Default Destructor
	virtual ~android_content_Intent();
	// Functions
	 AndroidCXX::java_lang_String toString();
	 AndroidCXX::java_lang_Object clone();
	 AndroidCXX::java_lang_String getPackage();
	 AndroidCXX::java_lang_String getType();
	 AndroidCXX::java_lang_String toURI();
	 AndroidCXX::java_lang_String getScheme();
	 AndroidCXX::android_net_Uri getData();
	 AndroidCXX::android_content_ComponentName getComponent();
	 AndroidCXX::android_os_Bundle getExtras();
	 int describeContents();
	 void writeToParcel(AndroidCXX::android_os_Parcel& arg0,int& arg1);
	 bool hasFileDescriptors();
	 void readFromParcel(AndroidCXX::android_os_Parcel& arg0);
	 AndroidCXX::android_content_Intent setData(AndroidCXX::android_net_Uri& arg0);
	static AndroidCXX::android_content_Intent getIntent(AndroidCXX::java_lang_String& arg0);
	static AndroidCXX::android_content_Intent createChooser(AndroidCXX::android_content_Intent& arg0,AndroidCXX::java_lang_CharSequence& arg1);
	 AndroidCXX::android_content_Intent cloneFilter();
	static AndroidCXX::android_content_Intent makeMainActivity(AndroidCXX::android_content_ComponentName& arg0);
	static AndroidCXX::android_content_Intent makeMainSelectorActivity(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	static AndroidCXX::android_content_Intent makeRestartActivityTask(AndroidCXX::android_content_ComponentName& arg0);
	static AndroidCXX::android_content_Intent parseUri(AndroidCXX::java_lang_String& arg0,int& arg1);
	static AndroidCXX::android_content_Intent getIntentOld(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_String getAction();
	 AndroidCXX::java_lang_String getDataString();
	 AndroidCXX::java_lang_String resolveType(AndroidCXX::android_content_Context& arg0);
	 AndroidCXX::java_lang_String resolveType(AndroidCXX::android_content_ContentResolver& arg0);
	 AndroidCXX::java_lang_String resolveTypeIfNeeded(AndroidCXX::android_content_ContentResolver& arg0);
	 bool hasCategory(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_util_Set getCategories();
	 AndroidCXX::android_content_Intent getSelector();
	 AndroidCXX::android_content_ClipData getClipData();
	 void setExtrasClassLoader(AndroidCXX::java_lang_ClassLoader& arg0);
	 bool hasExtra(AndroidCXX::java_lang_String& arg0);
	 bool getBooleanExtra(AndroidCXX::java_lang_String& arg0,bool& arg1);
	 byte getByteExtra(AndroidCXX::java_lang_String& arg0,byte& arg1);
	 short getShortExtra(AndroidCXX::java_lang_String& arg0,short& arg1);
	 char getCharExtra(AndroidCXX::java_lang_String& arg0,char& arg1);
	 int getIntExtra(AndroidCXX::java_lang_String& arg0,int& arg1);
	 long getLongExtra(AndroidCXX::java_lang_String& arg0,long& arg1);
	 float getFloatExtra(AndroidCXX::java_lang_String& arg0,float& arg1);
	 double getDoubleExtra(AndroidCXX::java_lang_String& arg0,double& arg1);
	 AndroidCXX::java_lang_String getStringExtra(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_lang_CharSequence getCharSequenceExtra(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::android_os_Parcelable getParcelableExtra(AndroidCXX::java_lang_String& arg0);
	 std::vector<AndroidCXX::android_os_Parcelable > getParcelableArrayExtra(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_util_ArrayList getParcelableArrayListExtra(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_io_Serializable getSerializableExtra(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_util_ArrayList getIntegerArrayListExtra(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_util_ArrayList getStringArrayListExtra(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::java_util_ArrayList getCharSequenceArrayListExtra(AndroidCXX::java_lang_String& arg0);
	 std::vector<bool> getBooleanArrayExtra(AndroidCXX::java_lang_String& arg0);
	 std::vector<byte> getByteArrayExtra(AndroidCXX::java_lang_String& arg0);
	 std::vector<short> getShortArrayExtra(AndroidCXX::java_lang_String& arg0);
	 std::vector<char> getCharArrayExtra(AndroidCXX::java_lang_String& arg0);
	 std::vector<int> getIntArrayExtra(AndroidCXX::java_lang_String& arg0);
	 std::vector<long> getLongArrayExtra(AndroidCXX::java_lang_String& arg0);
	 std::vector<float> getFloatArrayExtra(AndroidCXX::java_lang_String& arg0);
	 std::vector<double> getDoubleArrayExtra(AndroidCXX::java_lang_String& arg0);
	 std::vector<AndroidCXX::java_lang_String > getStringArrayExtra(AndroidCXX::java_lang_String& arg0);
	 std::vector<AndroidCXX::java_lang_CharSequence > getCharSequenceArrayExtra(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::android_os_Bundle getBundleExtra(AndroidCXX::java_lang_String& arg0);
	 int getFlags();
	 AndroidCXX::android_graphics_Rect getSourceBounds();
	 AndroidCXX::android_content_ComponentName resolveActivity(AndroidCXX::android_content_pm_PackageManager& arg0);
	 AndroidCXX::android_content_pm_ActivityInfo resolveActivityInfo(AndroidCXX::android_content_pm_PackageManager& arg0,int& arg1);
	 AndroidCXX::android_content_Intent setAction(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::android_content_Intent setDataAndNormalize(AndroidCXX::android_net_Uri& arg0);
	 AndroidCXX::android_content_Intent setType(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::android_content_Intent setTypeAndNormalize(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::android_content_Intent setDataAndType(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_content_Intent setDataAndTypeAndNormalize(AndroidCXX::android_net_Uri& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_content_Intent addCategory(AndroidCXX::java_lang_String& arg0);
	 void removeCategory(AndroidCXX::java_lang_String& arg0);
	 void setSelector(AndroidCXX::android_content_Intent& arg0);
	 void setClipData(AndroidCXX::android_content_ClipData& arg0);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_CharSequence& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_os_Parcelable& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,std::vector<AndroidCXX::android_os_Parcelable >& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_io_Serializable& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,std::vector<byte>& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,std::vector<short>& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,std::vector<char>& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,std::vector<int>& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,std::vector<long>& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,std::vector<float>& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,std::vector<double>& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,std::vector<AndroidCXX::java_lang_String >& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,std::vector<AndroidCXX::java_lang_CharSequence >& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,AndroidCXX::android_os_Bundle& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,std::vector<bool>& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,bool& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,byte& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,char& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,short& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,int& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,long& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,float& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,double& arg1);
	 AndroidCXX::android_content_Intent putExtra(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_content_Intent putParcelableArrayListExtra(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_util_ArrayList& arg1);
	 AndroidCXX::android_content_Intent putIntegerArrayListExtra(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_util_ArrayList& arg1);
	 AndroidCXX::android_content_Intent putStringArrayListExtra(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_util_ArrayList& arg1);
	 AndroidCXX::android_content_Intent putCharSequenceArrayListExtra(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_util_ArrayList& arg1);
	 AndroidCXX::android_content_Intent putExtras(AndroidCXX::android_content_Intent& arg0);
	 AndroidCXX::android_content_Intent putExtras(AndroidCXX::android_os_Bundle& arg0);
	 AndroidCXX::android_content_Intent replaceExtras(AndroidCXX::android_content_Intent& arg0);
	 AndroidCXX::android_content_Intent replaceExtras(AndroidCXX::android_os_Bundle& arg0);
	 void removeExtra(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::android_content_Intent setFlags(int& arg0);
	 AndroidCXX::android_content_Intent addFlags(int& arg0);
	 AndroidCXX::android_content_Intent setPackage(AndroidCXX::java_lang_String& arg0);
	 AndroidCXX::android_content_Intent setComponent(AndroidCXX::android_content_ComponentName& arg0);
	 AndroidCXX::android_content_Intent setClassName(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_content_Intent setClassName(AndroidCXX::java_lang_String& arg0,AndroidCXX::java_lang_String& arg1);
	 AndroidCXX::android_content_Intent setClass(AndroidCXX::android_content_Context& arg0,AndroidCXX::java_lang_Class& arg1);
	 void setSourceBounds(AndroidCXX::android_graphics_Rect& arg0);
	 int fillIn(AndroidCXX::android_content_Intent& arg0,int& arg1);
	 bool filterEquals(AndroidCXX::android_content_Intent& arg0);
	 int filterHashCode();
	 AndroidCXX::java_lang_String toUri(int& arg0);
	static AndroidCXX::android_content_Intent parseIntent(AndroidCXX::android_content_res_Resources& arg0,AndroidCXX::org_xmlpull_v1_XmlPullParser& arg1,AndroidCXX::android_util_AttributeSet& arg2);
	static AndroidCXX::java_lang_String normalizeMimeType(AndroidCXX::java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_Intent