/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <android_widget_ExpandableListAdapter.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT jboolean Java_AndroidCXX_android_widget_ExpandableListAdapter_isEmpty(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jlong Java_AndroidCXX_android_widget_ExpandableListAdapter_getGroupId(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT void Java_AndroidCXX_android_widget_ExpandableListAdapter_registerDataSetObserver(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT void Java_AndroidCXX_android_widget_ExpandableListAdapter_unregisterDataSetObserver(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_widget_ExpandableListAdapter_getChild(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_android_widget_ExpandableListAdapter_hasStableIds(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_android_widget_ExpandableListAdapter_areAllItemsEnabled(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_widget_ExpandableListAdapter_getGroupCount(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_android_widget_ExpandableListAdapter_getChildrenCount(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_widget_ExpandableListAdapter_getGroup(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jlong Java_AndroidCXX_android_widget_ExpandableListAdapter_getChildId(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_android_widget_ExpandableListAdapter_getGroupView(JNIEnv *jni_env, jobject java_object,jint& arg0,jboolean& arg1,jobject& arg2,jobject& arg3);
JNIEXPORT jobject Java_AndroidCXX_android_widget_ExpandableListAdapter_getChildView(JNIEnv *jni_env, jobject java_object,jint& arg0,jboolean& arg1,jobject& arg2,jobject& arg3);
JNIEXPORT jboolean Java_AndroidCXX_android_widget_ExpandableListAdapter_isChildSelectable(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT void Java_AndroidCXX_android_widget_ExpandableListAdapter_onGroupExpanded(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT void Java_AndroidCXX_android_widget_ExpandableListAdapter_onGroupCollapsed(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jlong Java_AndroidCXX_android_widget_ExpandableListAdapter_getCombinedChildId(JNIEnv *jni_env, jobject java_object,jlong& arg0);
JNIEXPORT jlong Java_AndroidCXX_android_widget_ExpandableListAdapter_getCombinedGroupId(JNIEnv *jni_env, jobject java_object,jlong& arg0);
    
}