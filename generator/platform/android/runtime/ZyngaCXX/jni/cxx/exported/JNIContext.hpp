/*
 * JNIContext.h
 *
 * Created on: Jan 29, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
 */

#ifndef JNIMAIN_H_
#define JNIMAIN_H_

#include <jni.h>
#include <pthread.h>
#include <stdarg.h>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

#define CXX_JNI_VERSION JNI_VERSION_1_6
#define JNI_FRAME_SIZE 256

typedef struct
{
	bool hasException;
	int code;
	std::string message;

} JNIStatus;

class JNIContext
{

public:

	int retainObjectRef(jobject &object);
	int releaseObjectRef(jobject &object);

	void pushLocalFrame(int frameSize=0);
	jobject popLocalFrame(jobject localRef=0);

	bool canCastClass1ToClass2(const char *clazz1_name, const char *clazz2_name);
	jclass getClassRef(const char *clazName);
	jobject getStaticObjectRef(bool isField, const char *clazName, const char *name, const char *signature, ...);
	jobject createNewObjectRef(const char *clazName);
	jclass getObjectClass(jobject object);
	jstring getClassName(jobject object);
	jmethodID getMethodID(jclass clazz, const char *methodName, const char *methodSignature);
	jfieldID getFieldID(jclass clazz, const char *fieldName, const char *fieldSignature);
	jfieldID getStaticFieldID(jclass clazz, const char *fieldName, const char *fieldSignature);
	jmethodID getStaticMethodID(jclass clazz, const char *methodName, const char *methodSignature);
	jobject createNewObject(jclass clazz, jmethodID methodID, jvalue *args);
	jobject createNewObject(jclass clazz, jmethodID methodID, ...);
	jobject localToGlobalRef(jobject localRef);
	jobject globalToLocalRef(jobject globalRef);
	void deleteLocalRef(jobject localRef);
	void deleteGlobalRef(jobject globalRef);
	jobject newLocalRef(jobject localRef);
	jobject newGlobalRef(jobject globalRef);

	jboolean isBooleanObject(jobject obj);
	jboolean isByteObject(jobject obj);
	jboolean isCharObject(jobject obj);
	jboolean isShortObject(jobject obj);
	jboolean isIntObject(jobject obj);
	jboolean isLongObject(jobject obj);
	jboolean isFloatObject(jobject obj);
	jboolean isDoubleObject(jobject obj);
	jboolean isSameInstance(jobject obj1, jobject obj2);
	jboolean isInstanceOf(jobject obj, jclass claz);
	jboolean isInstanceOf(jobject obj, const char * className);

	jobject toBooleanObject(jboolean value);
	jobject toByteObject(jbyte value);
	jobject toCharObject(jchar value);
	jobject toShortObject(jshort value);
	jobject toIntObject(jint value);
	jobject toLongObject(jlong value);
	jobject toFloatObject(jfloat value);
	jobject toDoubleObject(jdouble value);

	jboolean booleanValue(jobject obj);
	jbyte byteValue(jobject obj);
	jchar charValue(jobject obj);
	jshort shortValue(jobject obj);
	jint intValue(jobject obj);
	jlong longValue(jobject obj);
	jfloat floatValue(jobject obj);
	jdouble doubleValue(jobject obj);

	jboolean invokeBooleanMethod(jobject object, const char *clazName, const char *name, const char *signature, ...);
	jbyte invokeByteMethod(jobject object, const char *clazName, const char *name, const char *signature, ...);
	jchar invokeCharMethod(jobject object, const char *clazName, const char *name, const char *signature, ...);
	jshort invokeShortMethod(jobject object, const char *clazName, const char *name, const char *signature, ...);
	jint invokeIntMethod(jobject object, const char *clazName, const char *name, const char *signature, ...);
	jlong invokeLongMethod(jobject object, const char *clazName, const char *name, const char *signature, ...);
	jfloat invokeFloatMethod(jobject object, const char *clazName, const char *name, const char *signature, ...);
	jdouble invokeDoubleMethod(jobject object, const char *clazName, const char *name, const char *signature, ...);
	jstring invokeStringMethod(jobject object, const char *clazName, const char *name, const char *signature, ...);
	jobject invokeObjectMethod(jobject object, const char *clazName, const char *name, const char *signature, ...);
	void invokeVoidMethod(jobject object, const char *clazName, const char *name, const char *signature, ...);

	jboolean invokeStaticBooleanMethod(const char *clazName, const char *name, const char *signature, ...);
	jbyte invokeStaticByteMethod(const char *clazName, const char *name, const char *signature, ...);
	jchar invokeStaticCharMethod(const char *clazName, const char *name, const char *signature, ...);
	jshort invokeStaticShortMethod(const char *clazName, const char *name, const char *signature, ...);
	jint invokeStaticIntMethod(const char *clazName, const char *name, const char *signature, ...);
	jlong invokeStaticLongMethod(const char *clazName, const char *name, const char *signature, ...);
	jfloat invokeStaticFloatMethod(const char *clazName, const char *name, const char *signature, ...);
	jdouble invokeStaticDoubleMethod(const char *clazName, const char *name, const char *signature, ...);
	jstring invokeStaticStringMethod(const char *clazName, const char *name, const char *signature, ...);
	jobject invokeStaticObjectMethod(const char *clazName, const char *name, const char *signature, ...);
	void invokeStaticVoidMethod(const char *clazName, const char *name, const char *signature, ...);

	jboolean readBooleanField(jobject object, const char *clazName, const char *name, const char *signature);
	jbyte readByteField(jobject object, const char *clazName, const char *name, const char *signature);
	jchar readCharField(jobject object, const char *clazName, const char *name, const char *signature);
	jshort readShortField(jobject object, const char *clazName, const char *name, const char *signature);
	jint readIntField(jobject object, const char *clazName, const char *name, const char *signature);
	jlong readLongField(jobject object, const char *clazName, const char *name, const char *signature);
	jfloat readFloatField(jobject object, const char *clazName, const char *name, const char *signature);
	jdouble readDoubleField(jobject object, const char *clazName, const char *name, const char *signature);
	jstring readStringField(jobject object, const char *clazName, const char *name, const char *signature);
	jobject readObjectField(jobject object, const char *clazName, const char *name, const char *signature);

	jboolean readStaticBooleanField(const char *clazName, const char *name, const char *signature);
	jbyte readStaticByteField(const char *clazName, const char *name, const char *signature);
	jchar readStaticCharField(const char *clazName, const char *name, const char *signature);
	jshort readStaticShortField(const char *clazName, const char *name, const char *signature);
	jint readStaticIntField(const char *clazName, const char *name, const char *signature);
	jlong readStaticLongField(const char *clazName, const char *name, const char *signature);
	jfloat readStaticFloatField(const char *clazName, const char *name, const char *signature);
	jdouble readStaticDoubleField(const char *clazName, const char *name, const char *signature);
	jstring readStaticStringField(const char *clazName, const char *name, const char *signature);
	jobject readStaticObjectField(const char *clazName, const char *name, const char *signature);

	jboolean callBooleanMethod(jobject object, jmethodID methodID, ...);
	jbyte callByteMethod(jobject object, jmethodID methodID, ...);
	jchar callCharMethod(jobject object, jmethodID methodID, ...);
	jshort callShortMethod(jobject object, jmethodID methodID, ...);
	jint callIntMethod(jobject object, jmethodID methodID, ...);
	jlong callLongMethod(jobject object, jmethodID methodID, ...);
	jfloat callFloatMethod(jobject object, jmethodID methodID, ...);
	jdouble callDoubleMethod(jobject object, jmethodID methodID, ...);
	jstring callStringMethod(jobject object, jmethodID methodID, ...);
	jobject callObjectMethod(jobject object, jmethodID methodID, ...);
	void callVoidMethod(jobject object, jmethodID methodID, ...);

	jboolean callBooleanMethodV(jobject object, jmethodID methodID, va_list args);
	jbyte callByteMethodV(jobject object, jmethodID methodID, va_list args);
	jchar callCharMethodV(jobject object, jmethodID methodID, va_list args);
	jshort callShortMethodV(jobject object, jmethodID methodID, va_list args);
	jint callIntMethodV(jobject object, jmethodID methodID, va_list args);
	jlong callLongMethodV(jobject object, jmethodID methodID, va_list args);
	jfloat callFloatMethodV(jobject object, jmethodID methodID, va_list args);
	jdouble callDoubleMethodV(jobject object, jmethodID methodID, va_list args);
	jstring callStringMethodV(jobject object, jmethodID methodID, va_list args);
	jobject callObjectMethodV(jobject object, jmethodID methodID, va_list args);
	void callVoidMethodV(jobject object, jmethodID methodID, va_list args);

	jboolean callStaticBooleanMethod(jclass clazz, jmethodID methodID, ...);
	jbyte callStaticByteMethod(jclass clazz, jmethodID methodID, ...);
	jchar callStaticCharMethod(jclass clazz, jmethodID methodID, ...);
	jshort callStaticShortMethod(jclass clazz, jmethodID methodID, ...);
	jint callStaticIntMethod(jclass clazz, jmethodID methodID, ...);
	jlong callStaticLongMethod(jclass clazz, jmethodID methodID, ...);
	jfloat callStaticFloatMethod(jclass clazz, jmethodID methodID, ...);
	jdouble callStaticDoubleMethod(jclass clazz, jmethodID methodID, ...);
	jstring callStaticStringMethod(jclass clazz, jmethodID methodID, ...);
	jobject callStaticObjectMethod(jclass clazz, jmethodID methodID, ...);
	void callStaticVoidMethod(jclass clazz, jmethodID methodID, ...);

	jboolean callStaticBooleanMethodV(jclass clazz, jmethodID methodID, va_list args);
	jbyte callStaticByteMethodV(jclass clazz, jmethodID methodID, va_list args);
	jchar callStaticCharMethodV(jclass clazz, jmethodID methodID, va_list args);
	jshort callStaticShortMethodV(jclass clazz, jmethodID methodID, va_list args);
	jint callStaticIntMethodV(jclass clazz, jmethodID methodID, va_list args);
	jlong callStaticLongMethodV(jclass clazz, jmethodID methodID, va_list args);
	jfloat callStaticFloatMethodV(jclass clazz, jmethodID methodID, va_list args);
	jdouble callStaticDoubleMethodV(jclass clazz, jmethodID methodID, va_list args);
	jstring callStaticStringMethodV(jclass clazz, jmethodID methodID, va_list args);
	jobject callStaticObjectMethodV(jclass clazz, jmethodID methodID, va_list args);
	void callStaticVoidMethodV(jclass clazz, jmethodID methodID, va_list args);

	jboolean getBooleanField(jobject object, jfieldID fieldID);
	jbyte getByteField(jobject object, jfieldID fieldID);
	jchar getCharField(jobject object, jfieldID fieldID);
	jshort getShortField(jobject object, jfieldID fieldID);
	jint getIntField(jobject object, jfieldID fieldID);
	jlong getLongField(jobject object, jfieldID fieldID);
	jfloat getFloatField(jobject object, jfieldID fieldID);
	jdouble getDoubleField(jobject object, jfieldID fieldID);
	jstring getStringField(jobject object, jfieldID fieldID);
	jobject getObjectField(jobject object, jfieldID fieldID);

	jboolean getStaticBooleanField(jclass clazz, jfieldID fieldID);
	jbyte getStaticByteField(jclass clazz, jfieldID fieldID);
	jchar getStaticCharField(jclass clazz, jfieldID fieldID);
	jshort getStaticShortField(jclass clazz, jfieldID fieldID);
	jint getStaticIntField(jclass clazz, jfieldID fieldID);
	jlong getStaticLongField(jclass clazz, jfieldID fieldID);
	jfloat getStaticFloatField(jclass clazz, jfieldID fieldID);
	jdouble getStaticDoubleField(jclass clazz, jfieldID fieldID);
	jstring getStaticStringField(jclass clazz, jfieldID fieldID);
	jobject getStaticObjectField(jclass clazz, jfieldID fieldID);

	jsize getArrayLength(jarray array);
	jbooleanArray createBooleanArray(bool& array, int count);
	jbyteArray createByteArray(jbyte& array, int count);
	jbyteArray createByteArray(char& array, int count);
	jcharArray createCharArray(char& array, int count);
	jshortArray createShortArray(short& array, int count);
	jintArray createIntArray(int& array, int count);
	jlongArray createLongArray(long& array, int count);
	jfloatArray createFloatArray(float& array, int count);
	jdoubleArray createDoubleArray(double& array, int count);
	jobjectArray createStringArray(std::string& array, int count);
	jobjectArray createObjectArray(int count, jclass clazz);


	jobject getObjectArrayElement(jobjectArray array, int index);
	void setObjectArrayElement(jobjectArray array, int index, jobject value);
	jboolean readBooleanObjectArrayElement(jobjectArray array, int index);
	jbyte readByteObjectArrayElement(jobjectArray array, int index);
	jchar readCharObjectArrayElement(jobjectArray array, int index);
	jshort readShortObjectArrayElement(jobjectArray array, int index);
	jint readIntObjectArrayElement(jobjectArray array, int index);
	jlong readLongObjectArrayElement(jobjectArray array, int index);
	jfloat readFloatObjectArrayElement(jobjectArray array, int index);
	jdouble readDoubleObjectArrayElement(jobjectArray array, int index);
	jstring readStringObjectArrayElement(jobjectArray array, int index);
	jobject readObjectObjectArrayElement(jobjectArray array, int index);

	bool * getBooleanArray(jbooleanArray array);
	char * getByteArray(jbyteArray array);
	char * getCharArray(jcharArray array);
	short * getShortArray(jshortArray array);
	int * getIntArray(jintArray array);
	long * getLongArray(jlongArray array);
	float * getFloatArray(jfloatArray array);
	double * getDoubleArray(jdoubleArray array);

	jsize getMapSize(jobject java_map); // java_map should implement java.util.Map
	jobject getMapKeyIterator(jobject java_map); // java_map should implement java.util.Map
	void putMapKeyValue(jobject java_map, jobject java_map_key, jobject java_map_value); // java_map should implement java.util.Map
	jobject readMapValue(jobject java_map, jobject java_map_key); // java_map should implement java.util.Map

	jobject nextIteratorElement(jobject java_iterator); // java_iterator should implement java.util.Iterator

	std::string getUTFString(jstring string);
	jstring toJString(const std::string& utfString);
	std::string getJNIName(std::string name);

	jobject toJEnum(jclass clazz, const char *enumString);
	jstring toCXXEnumString(jobject obj);

	JNIEnv* currentJNIEnv();

	static JNIContext* sharedInstance();
	static void createContext(JavaVM *ajava_vm);
	static void destroyContext();

	JNIStatus status;

protected:

	JNIContext();
	virtual ~JNIContext();

	bool checkException(JNIEnv *env);

	static bool getEnv(JNIEnv **env);

	static JavaVM* sm_pJavaVM;
	static JNIContext* sm_pSharedInstance;

private:

	JNIContext(const JNIContext&);
};

#ifdef __cplusplus
}
#endif //__cplusplus

#endif /* JNIMAIN_H_ */
