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
	 java_lang_String *  toString();
	 java_lang_Object *  clone();
	 java_lang_String *  getPackage();
	 java_lang_String *  getType();
	 java_lang_String *  toURI();
	 java_lang_String *  getScheme();
	 android_net_Uri *  getData();
	 android_content_ComponentName *  getComponent();
	 android_os_Bundle *  getExtras();
	 int describeContents();
	 void writeToParcel(android_os_Parcel& arg0,int& arg1);
	 bool hasFileDescriptors();
	 void readFromParcel(android_os_Parcel& arg0);
	 android_content_Intent *  setData(android_net_Uri& arg0);
	static android_content_Intent *  getIntent(java_lang_String& arg0);
	static android_content_Intent *  createChooser(android_content_Intent& arg0,java_lang_CharSequence& arg1);
	 android_content_Intent *  cloneFilter();
	static android_content_Intent *  makeMainActivity(android_content_ComponentName& arg0);
	static android_content_Intent *  makeMainSelectorActivity(java_lang_String& arg0);
	static android_content_Intent *  makeRestartActivityTask(android_content_ComponentName& arg0);
	static android_content_Intent *  parseUri(java_lang_String& arg0,int& arg1);
	static android_content_Intent *  getIntentOld(java_lang_String& arg0);
	 java_lang_String *  getAction();
	 java_lang_String *  getDataString();
	 java_lang_String *  resolveType(android_content_Context& arg0,android_content_ContentResolver& arg1);
	 java_lang_String *  resolveTypeIfNeeded(android_content_ContentResolver& arg0);
	 bool hasCategory(java_lang_String& arg0);
	 java_util_Set *  getCategories();
	 android_content_Intent *  getSelector();
	 android_content_ClipData *  getClipData();
	 void setExtrasClassLoader(java_lang_ClassLoader& arg0);
	 bool hasExtra(java_lang_String& arg0);
	 bool getBooleanExtra(java_lang_String& arg0,bool& arg1);
	 unsigned char getByteExtra(java_lang_String& arg0,unsigned char& arg1);
	 short getShortExtra(java_lang_String& arg0,short& arg1);
	 char getCharExtra(java_lang_String& arg0,char& arg1);
	 int getIntExtra(java_lang_String& arg0,int& arg1);
	 long getLongExtra(java_lang_String& arg0,long& arg1);
	 float getFloatExtra(java_lang_String& arg0,float& arg1);
	 double getDoubleExtra(java_lang_String& arg0,double& arg1);
	 java_lang_String *  getStringExtra(java_lang_String& arg0);
	 java_lang_CharSequence *  getCharSequenceExtra(java_lang_String& arg0);
	 android_os_Parcelable *  getParcelableExtra(java_lang_String& arg0);
	 std::vector<long> getParcelableArrayExtra(java_lang_String& arg0);
	 java_util_ArrayList *  getParcelableArrayListExtra(java_lang_String& arg0);
	 java_io_Serializable *  getSerializableExtra(java_lang_String& arg0);
	 java_util_ArrayList *  getIntegerArrayListExtra(java_lang_String& arg0);
	 java_util_ArrayList *  getStringArrayListExtra(java_lang_String& arg0);
	 java_util_ArrayList *  getCharSequenceArrayListExtra(java_lang_String& arg0);
	 std::vector<bool> getBooleanArrayExtra(java_lang_String& arg0);
	 std::vector<char> getByteArrayExtra(java_lang_String& arg0);
	 std::vector<short> getShortArrayExtra(java_lang_String& arg0);
	 std::vector<char> getCharArrayExtra(java_lang_String& arg0);
	 std::vector<int> getIntArrayExtra(java_lang_String& arg0);
	 std::vector<long> getLongArrayExtra(java_lang_String& arg0);
	 std::vector<float> getFloatArrayExtra(java_lang_String& arg0);
	 std::vector<double> getDoubleArrayExtra(java_lang_String& arg0);
	 std::vector<long> getStringArrayExtra(java_lang_String& arg0);
	 std::vector<long> getCharSequenceArrayExtra(java_lang_String& arg0);
	 android_os_Bundle *  getBundleExtra(java_lang_String& arg0);
	 int getFlags();
	 android_graphics_Rect *  getSourceBounds();
	 android_content_ComponentName *  resolveActivity(android_content_pm_PackageManager& arg0);
	 android_content_pm_ActivityInfo *  resolveActivityInfo(android_content_pm_PackageManager& arg0,int& arg1);
	 android_content_Intent *  setAction(java_lang_String& arg0);
	 android_content_Intent *  setDataAndNormalize(android_net_Uri& arg0);
	 android_content_Intent *  setType(java_lang_String& arg0);
	 android_content_Intent *  setTypeAndNormalize(java_lang_String& arg0);
	 android_content_Intent *  setDataAndType(android_net_Uri& arg0,java_lang_String& arg1);
	 android_content_Intent *  setDataAndTypeAndNormalize(android_net_Uri& arg0,java_lang_String& arg1);
	 android_content_Intent *  addCategory(java_lang_String& arg0);
	 void removeCategory(java_lang_String& arg0);
	 void setSelector(android_content_Intent& arg0);
	 void setClipData(android_content_ClipData& arg0);
	 android_content_Intent *  putExtra(java_lang_String& arg0,java_lang_CharSequence& arg1,android_os_Parcelable& arg2,std::vector<long>& arg3,java_io_Serializable& arg4,std::vector<char>& arg5,std::vector<short>& arg6,std::vector<char>& arg7,std::vector<int>& arg8,std::vector<long>& arg9,std::vector<float>& arg10,std::vector<double>& arg11,std::vector<long>& arg12,std::vector<long>& arg13,android_os_Bundle& arg14,std::vector<bool>& arg15,bool& arg16,unsigned char& arg17,char& arg18,short& arg19,int& arg20,long& arg21,float& arg22,double& arg23);
	 android_content_Intent *  putParcelableArrayListExtra(java_lang_String& arg0,java_util_ArrayList& arg1);
	 android_content_Intent *  putIntegerArrayListExtra(java_lang_String& arg0,java_util_ArrayList& arg1);
	 android_content_Intent *  putStringArrayListExtra(java_lang_String& arg0,java_util_ArrayList& arg1);
	 android_content_Intent *  putCharSequenceArrayListExtra(java_lang_String& arg0,java_util_ArrayList& arg1);
	 android_content_Intent *  putExtras(android_content_Intent& arg0,android_os_Bundle& arg1);
	 android_content_Intent *  replaceExtras(android_content_Intent& arg0,android_os_Bundle& arg1);
	 void removeExtra(java_lang_String& arg0);
	 android_content_Intent *  setFlags(int& arg0);
	 android_content_Intent *  addFlags(int& arg0);
	 android_content_Intent *  setPackage(java_lang_String& arg0);
	 android_content_Intent *  setComponent(android_content_ComponentName& arg0);
	 android_content_Intent *  setClassName(android_content_Context& arg0,java_lang_String& arg1);
	 android_content_Intent *  setClass(android_content_Context& arg0,java_lang_Class& arg1);
	 void setSourceBounds(android_graphics_Rect& arg0);
	 int fillIn(android_content_Intent& arg0,int& arg1);
	 bool filterEquals(android_content_Intent& arg0);
	 int filterHashCode();
	 java_lang_String *  toUri(int& arg0);
	static android_content_Intent *  parseIntent(android_content_res_Resources& arg0,org_xmlpull_v1_XmlPullParser& arg1,android_util_AttributeSet& arg2);
	static java_lang_String *  normalizeMimeType(java_lang_String& arg0);
};	

} // namespace

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _android_content_Intent