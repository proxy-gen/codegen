/*
 * Implementation (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//


#include <org_xmlpull_v1_XmlPullParser.hpp>
#include <jni.h>

namespace AndroidCXX {

JNIEXPORT void Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_setProperty(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getProperty(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getName(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_next(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getLineNumber(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jboolean Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_isWhitespace(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_nextToken(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_setInput(JNIEnv *jni_env, jobject java_object,jobject& arg0,jobject& arg1,jobject& arg2);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getPrefix(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getAttributeValue(JNIEnv *jni_env, jobject java_object,jobject& arg0,jint& arg1);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getText(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getPositionDescription(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getAttributeCount(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getAttributeName(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT void Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_setFeature(JNIEnv *jni_env, jobject java_object,jobject& arg0,jboolean& arg1);
JNIEXPORT jboolean Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getFeature(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getInputEncoding(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_defineEntityReplacementText(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getNamespaceCount(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getNamespacePrefix(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getNamespaceUri(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getNamespace(JNIEnv *jni_env, jobject java_object,jobject& arg0);
JNIEXPORT jint Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getDepth(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getColumnNumber(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jcharArray Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getTextCharacters(JNIEnv *jni_env, jobject java_object,jintArray& arg0);
JNIEXPORT jboolean Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_isEmptyElementTag(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getAttributeNamespace(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getAttributePrefix(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getAttributeType(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jboolean Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_isAttributeDefault(JNIEnv *jni_env, jobject java_object,jint& arg0);
JNIEXPORT jint Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_getEventType(JNIEnv *jni_env, jobject java_object);
JNIEXPORT void Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_require(JNIEnv *jni_env, jobject java_object,jint& arg0,jobject& arg1);
JNIEXPORT jobject Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_nextText(JNIEnv *jni_env, jobject java_object);
JNIEXPORT jint Java_AndroidCXX_org_xmlpull_v1_XmlPullParser_nextTag(JNIEnv *jni_env, jobject java_object);
    
}