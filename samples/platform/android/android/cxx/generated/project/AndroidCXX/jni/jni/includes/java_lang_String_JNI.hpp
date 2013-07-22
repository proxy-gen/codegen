/*
 * Callback JNI (Callback CXX)
 * Author: cxx-bindings-generator
 */

//
// Scroll Down 
//




// Generated Code 

#ifndef _java_lang_String_JNI
#define _java_lang_String_JNI
//
// Scroll Down 
//

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

// JNI callbacks
JNIEXPORT jboolean equals(JNIEnv *env, jobject objectRef,jobject& jarg0);
JNIEXPORT jstring toString(JNIEnv *env, jobject objectRef);
JNIEXPORT jint hashCode(JNIEnv *env, jobject objectRef);
JNIEXPORT jint compareTo(JNIEnv *env, jobject objectRef,jstring& jarg0);
JNIEXPORT jint indexOf(JNIEnv *env, jobject objectRef,jint& jarg0);
JNIEXPORT jint indexOf(JNIEnv *env, jobject objectRef,jstring& jarg0);
JNIEXPORT jint indexOf(JNIEnv *env, jobject objectRef,jstring& jarg0,jint& jarg1);
JNIEXPORT jint indexOf(JNIEnv *env, jobject objectRef,jint& jarg0,jint& jarg1);
JNIEXPORT jstring valueOf(JNIEnv *env, jobject objectRef,jobject& jarg0);
JNIEXPORT jstring valueOf(JNIEnv *env, jobject objectRef,jdouble& jarg0);
JNIEXPORT jstring valueOf(JNIEnv *env, jobject objectRef,jfloat& jarg0);
JNIEXPORT jstring valueOf(JNIEnv *env, jobject objectRef,jlong& jarg0);
JNIEXPORT jstring valueOf(JNIEnv *env, jobject objectRef,jint& jarg0);
JNIEXPORT jstring valueOf(JNIEnv *env, jobject objectRef,jchar& jarg0);
JNIEXPORT jstring valueOf(JNIEnv *env, jobject objectRef,jboolean& jarg0);
JNIEXPORT jstring valueOf(JNIEnv *env, jobject objectRef,jcharArray& jarg0,jint& jarg1,jint& jarg2);
JNIEXPORT jstring valueOf(JNIEnv *env, jobject objectRef,jcharArray& jarg0);
JNIEXPORT jint length(JNIEnv *env, jobject objectRef);
JNIEXPORT jboolean isEmpty(JNIEnv *env, jobject objectRef);
JNIEXPORT jchar charAt(JNIEnv *env, jobject objectRef,jint& jarg0);
JNIEXPORT jint codePointAt(JNIEnv *env, jobject objectRef,jint& jarg0);
JNIEXPORT jint codePointBefore(JNIEnv *env, jobject objectRef,jint& jarg0);
JNIEXPORT jint codePointCount(JNIEnv *env, jobject objectRef,jint& jarg0,jint& jarg1);
JNIEXPORT jint offsetByCodePoints(JNIEnv *env, jobject objectRef,jint& jarg0,jint& jarg1);
JNIEXPORT void getChars(JNIEnv *env, jobject objectRef,jint& jarg0,jint& jarg1,jcharArray& jarg2,jint& jarg3);
JNIEXPORT jbyteArray getBytes(JNIEnv *env, jobject objectRef,jstring& jarg0);
JNIEXPORT void getBytes(JNIEnv *env, jobject objectRef,jint& jarg0,jint& jarg1,jbyteArray& jarg2,jint& jarg3);
JNIEXPORT jbyteArray getBytes(JNIEnv *env, jobject objectRef,jobject& jarg0);
JNIEXPORT jbyteArray getBytes(JNIEnv *env, jobject objectRef);
JNIEXPORT jboolean contentEquals(JNIEnv *env, jobject objectRef,jobject& jarg0);
JNIEXPORT jboolean contentEquals(JNIEnv *env, jobject objectRef,jobject& jarg0);
JNIEXPORT jboolean equalsIgnoreCase(JNIEnv *env, jobject objectRef,jstring& jarg0);
JNIEXPORT jint compareToIgnoreCase(JNIEnv *env, jobject objectRef,jstring& jarg0);
JNIEXPORT jboolean regionMatches(JNIEnv *env, jobject objectRef,jint& jarg0,jstring& jarg1,jint& jarg2,jint& jarg3);
JNIEXPORT jboolean regionMatches(JNIEnv *env, jobject objectRef,jboolean& jarg0,jint& jarg1,jstring& jarg2,jint& jarg3,jint& jarg4);
JNIEXPORT jboolean startsWith(JNIEnv *env, jobject objectRef,jstring& jarg0,jint& jarg1);
JNIEXPORT jboolean startsWith(JNIEnv *env, jobject objectRef,jstring& jarg0);
JNIEXPORT jboolean endsWith(JNIEnv *env, jobject objectRef,jstring& jarg0);
JNIEXPORT jint lastIndexOf(JNIEnv *env, jobject objectRef,jstring& jarg0,jint& jarg1);
JNIEXPORT jint lastIndexOf(JNIEnv *env, jobject objectRef,jint& jarg0);
JNIEXPORT jint lastIndexOf(JNIEnv *env, jobject objectRef,jint& jarg0,jint& jarg1);
JNIEXPORT jint lastIndexOf(JNIEnv *env, jobject objectRef,jstring& jarg0);
JNIEXPORT jstring substring(JNIEnv *env, jobject objectRef,jint& jarg0,jint& jarg1);
JNIEXPORT jstring substring(JNIEnv *env, jobject objectRef,jint& jarg0);
JNIEXPORT jobject subSequence(JNIEnv *env, jobject objectRef,jint& jarg0,jint& jarg1);
JNIEXPORT jstring concat(JNIEnv *env, jobject objectRef,jstring& jarg0);
JNIEXPORT jstring replace(JNIEnv *env, jobject objectRef,jobject& jarg0,jobject& jarg1);
JNIEXPORT jstring replace(JNIEnv *env, jobject objectRef,jchar& jarg0,jchar& jarg1);
JNIEXPORT jboolean matches(JNIEnv *env, jobject objectRef,jstring& jarg0);
JNIEXPORT jboolean contains(JNIEnv *env, jobject objectRef,jobject& jarg0);
JNIEXPORT jstring replaceFirst(JNIEnv *env, jobject objectRef,jstring& jarg0,jstring& jarg1);
JNIEXPORT jstring replaceAll(JNIEnv *env, jobject objectRef,jstring& jarg0,jstring& jarg1);
JNIEXPORT jobjectArray split(JNIEnv *env, jobject objectRef,jstring& jarg0);
JNIEXPORT jobjectArray split(JNIEnv *env, jobject objectRef,jstring& jarg0,jint& jarg1);
JNIEXPORT jstring toLowerCase(JNIEnv *env, jobject objectRef);
JNIEXPORT jstring toLowerCase(JNIEnv *env, jobject objectRef,jobject& jarg0);
JNIEXPORT jstring toUpperCase(JNIEnv *env, jobject objectRef,jobject& jarg0);
JNIEXPORT jstring toUpperCase(JNIEnv *env, jobject objectRef);
JNIEXPORT jstring trim(JNIEnv *env, jobject objectRef);
JNIEXPORT jcharArray toCharArray(JNIEnv *env, jobject objectRef);
JNIEXPORT jstring format(JNIEnv *env, jobject objectRef,jstring& jarg0,jobjectArray& jarg1);
JNIEXPORT jstring format(JNIEnv *env, jobject objectRef,jobject& jarg0,jstring& jarg1,jobjectArray& jarg2);
JNIEXPORT jstring copyValueOf(JNIEnv *env, jobject objectRef,jcharArray& jarg0);
JNIEXPORT jstring copyValueOf(JNIEnv *env, jobject objectRef,jcharArray& jarg0,jint& jarg1,jint& jarg2);
JNIEXPORT jstring intern(JNIEnv *env, jobject objectRef);

#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _java_lang_String_JNI