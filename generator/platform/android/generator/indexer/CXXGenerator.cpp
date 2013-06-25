/*
 * CXXGenerator.cpp
 *
 *  Created on: Feb 14, 2013
 *      Author: rvergis
 */

#include "CXXGenerator.h"
#include "JNIContext.hpp"

#define CURSOR_CLASS_DECL 4
#define CURSOR_CONSTRUCTOR_DECL 7
#define CURSOR_FUNCTION_DECL 8
#define CURSOR_RETURN_DECL 9
#define CURSOR_PARM_DECL 10

#define TYPE_UNKNOWN 0
#define TYPE_JAVA_INSTANCE 200
#define TYPE_JAVA_SINGLETON_FIELD 201
#define TYPE_JAVA_SINGLETON_INSTANCE 211
#define TYPE_JAVA_ENUM 202
#define TYPE_JAVA_ABSTRACT 203
#define TYPE_JAVA_STATIC_METHODS 204
#define TYPE_JAVA_PUBLIC_INSTANCE_METHOD 205
#define TYPE_JAVA_PUBLIC_STATIC_METHOD 206
#define TYPE_JAVA_PUBLIC_CONSTRUCTOR 207
#define TYPE_JAVA_PRIMITIVE 208
#define TYPE_JAVA_ARRAY 209
#define TYPE_JAVA_INTERFACE 210
#define TYPE_DUMMY 999

#define MODIFIER_JAVA_PUBLIC 1
#define MODIFIER_JAVA_STATIC 8
#define MODIFIER_JAVA_INTERFACE 512
#define MODIFIER_JAVA_ABSTRACT 1024

JNIContext *jni = 0;
JavaVM *m_jvm = 0;

void checkException(CXXIndex * index);
int createJVM(JavaVM **m_jvm, char * optionString);
int destroyJVM(JavaVM *m_jvm);

CXXIndex::CXXIndex(char * optionString)
{
	if (createJVM(&m_jvm, optionString) == JNI_OK)
	{
		JNIContext::createContext(m_jvm);
		jni = JNIContext::sharedInstance();
	}
}

CXXIndex::~CXXIndex()
{

}

CXXTranslationUnit::CXXTranslationUnit(jobject arefObj)
{
	this->refObj = jni->localToGlobalRef(arefObj);
}

CXXTranslationUnit::~CXXTranslationUnit()
{
	jni->deleteGlobalRef(refObj);
	this->refObj = 0;
}

CXXIndex * createIndex(char * optionString)
{
	return new CXXIndex(optionString);
}

int destroyIndex()
{
	if (destroyJVM(m_jvm) == JNI_OK)
		return OK;
	return ERR;
}

int indexStatus()
{
	if (jni->status.hasException == false)
		return OK;
	return ERR;
}

char * indexStatusMessage()
{
	return (char *) jni->status.message.c_str();
}

CXXTranslationUnit * parseTranslationUnit(CXXIndex * index, const char *resName)
{
	jobject refObj = jni->getClassRef(resName);
	return new CXXTranslationUnit(refObj);
}

void disposeTranslationUnit(CXXTranslationUnit * tu)
{
}

CXXCursor getTranslationUnitCursor(CXXTranslationUnit *tu)
{
	CXXCursor cursor;
	cursor._kind_id = CURSOR_CLASS_DECL;
	cursor._tu_id = (long) tu;
	cursor._int_attr_0 = 0;
	cursor._int_attr_1 = 0;
	cursor._int_attr_2 = 0;
	cursor._int_attr_3 = 0;
	strcpy(cursor._str_attr_0, "");
	strcpy(cursor._str_attr_1, "");
	strcpy(cursor._str_attr_2, "");
	strcpy(cursor._str_attr_3, "");
	return cursor;
}

void visitTranslationUnitClasses(char packages[64][64], int package_count, char classes[1024][64], int class_count, TranslationUnitVisitClassesCallback callback, void * host_object)
{
	for (int idx = 0; idx < class_count; idx++)
	{
		std::string class_name = std::string(classes[idx]);
		std::string jni_name = jni->getJNIName(class_name);
		jclass clazz = (jclass) jni->getClassRef(jni_name.c_str());
		process_class(class_name, clazz, callback, host_object);		
	}
}

void process_class(std::string class_name, jclass clazz, TranslationUnitVisitClassesCallback callback, void * host_object)
{
	int modifiers = (int) jni->invokeIntMethod(clazz, "java/lang/Class", "getModifiers", "()I");
	int type = find_class_type(clazz);
	char str_attrs[ATTR_COUNT][STR_ATTR_SIZE];
	int int_attrs[ATTR_COUNT];
	char name[64];
	strcpy(name, class_name.c_str());
	callback(CURSOR_CLASS_DECL, type, modifiers, name, 0 /* index */, str_attrs, int_attrs, host_object);	
	jobjectArray jconstructors = (jobjectArray) jni->invokeObjectMethod(clazz, "java/lang/Class", "getDeclaredConstructors", "()[Ljava/lang/reflect/Constructor;");
	int constructorCount = (int) jni->getArrayLength(jconstructors);
	for (int idx = 0; idx < constructorCount; idx++)
	{
		jobject constructor = jni->getObjectArrayElement(jconstructors, idx);
		std::string constructor_name = jni->getUTFString(jni->invokeStringMethod(constructor, "java/lang/reflect/Constructor", "getName", "()Ljava/lang/String;"));
		process_constructor(class_name, clazz, constructor_name, constructor, idx, callback, host_object);
	}
	jobjectArray methods = (jobjectArray) jni->invokeObjectMethod(clazz, "java/lang/Class", "getDeclaredMethods", "()[Ljava/lang/reflect/Method;");
	int methodCount = (int) jni->getArrayLength(methods);
	for (int idx = 0; idx < methodCount; idx++)
	{
		jobject method = jni->getObjectArrayElement(methods, idx);
		std::string method_name = jni->getUTFString(jni->invokeStringMethod(method, "java/lang/reflect/Method", "getName", "()Ljava/lang/String;"));
		process_method(class_name, clazz, method_name, method, idx, callback, host_object);
	}
}

void process_method(std::string class_name, jclass clazz, std::string method_name, jobject method, int idx, TranslationUnitVisitClassesCallback callback, void * host_object)
{
	int modifiers = jni->invokeIntMethod(method, "java/lang/reflect/Method", "getModifiers", "()I");
	int type = find_method_type(method);
	char str_attrs[ATTR_COUNT][STR_ATTR_SIZE];
	int int_attrs[ATTR_COUNT];
	char name[64];
	strcpy(name, method_name.c_str());
	callback(CURSOR_FUNCTION_DECL, type, modifiers, name, idx, str_attrs, int_attrs, host_object);
}

void process_constructor(std::string class_name, jclass clazz, std::string constructor_name, jobject constructor, int idx, TranslationUnitVisitClassesCallback callback, void * host_object)
{
	int modifiers = jni->invokeIntMethod(constructor, "java/lang/reflect/Constructor", "getModifiers", "()I");
	int type = find_constructor_type(constructor);
	char str_attrs[ATTR_COUNT][STR_ATTR_SIZE];
	int int_attrs[ATTR_COUNT];
	char name[64];
	strcpy(name, constructor_name.c_str());
	callback(CURSOR_CONSTRUCTOR_DECL, type, modifiers, name, idx, str_attrs, int_attrs, host_object);
}

int find_class_type(jclass clazz)
{
	int type = TYPE_JAVA_INSTANCE;
	jarray jconstructors = (jarray) jni->invokeObjectMethod(clazz, "java/lang/Class", "getConstructors", "()[Ljava/lang/reflect/Constructor;");
	jsize constructorCount = jni->getArrayLength(jconstructors);
	jint jmodifiers = (jint) jni->invokeIntMethod(clazz, "java/lang/Class", "getModifiers", "()I");
	int modifiers = (int) jmodifiers;
	bool isInterface = (modifiers & MODIFIER_JAVA_INTERFACE) == MODIFIER_JAVA_INTERFACE;
	bool isAbstract = (modifiers & MODIFIER_JAVA_ABSTRACT) == MODIFIER_JAVA_ABSTRACT;
	jboolean jisEnum = jni->invokeBooleanMethod(clazz, "java/lang/Class", "isEnum", "()Z");
	bool isEnum = (bool) jisEnum;
	if (isInterface)
	{
		type = TYPE_JAVA_INTERFACE;
	}
	else if (isAbstract)
	{
		type = TYPE_JAVA_ABSTRACT;
	}
	else if (isEnum)
	{
		type = TYPE_JAVA_ENUM;
	}
	else
	{
		bool onlyStaticPublicMethods = true;
		jstring jclassName = jni->invokeStringMethod(clazz, "java/lang/Class", "getName", "()Ljava/lang/String;");
		const char * className = jni->getUTFString(jclassName).c_str();
		jobjectArray jmethods = (jobjectArray) jni->invokeObjectMethod(clazz, "java/lang/Class", "getDeclaredMethods", "()[Ljava/lang/reflect/Method;");
		jsize jmethodCount = jni->getArrayLength(jmethods);
		int methodCount = (int) jmethodCount;
		for (int i = 0; i < methodCount; i++)
		{
			jobject jmethodObj = jni->getObjectArrayElement(jmethods, i);
			jboolean jisBridge = jni->invokeBooleanMethod(jmethodObj, "java/lang/reflect/Method", "isBridge", "()Z");
			bool isBridge = (bool) jisBridge;
			if (isBridge) continue;
			jboolean jisSynthetic = jni->invokeBooleanMethod(jmethodObj, "java/lang/reflect/Method", "isSynthetic", "()Z");
			bool isSynthetic = (bool) jisSynthetic;
			if (isSynthetic) continue;
			jint jmethodmodifiers = (jint) jni->invokeIntMethod(jmethodObj, "java/lang/reflect/Method", "getModifiers", "()I");
			int methodModifiers = (int) jmethodmodifiers;
			bool isMethodStatic = (methodModifiers & MODIFIER_JAVA_STATIC) == MODIFIER_JAVA_STATIC;
			bool isMethodPublic = (methodModifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC;
			if (isMethodPublic && !isMethodStatic)
			{
				onlyStaticPublicMethods = false;
				break;
			}
		}
		if (onlyStaticPublicMethods)
		{
			type = TYPE_JAVA_STATIC_METHODS;
		}
		else if (constructorCount == 0)
		{
			// search for a public static method that takes no arg and returns this type
			bool isSingletonInstance = false;
			jobjectArray jmethods = (jobjectArray) jni->invokeObjectMethod(clazz, "java/lang/Class", "getDeclaredMethods", "()[Ljava/lang/reflect/Method;");
			jsize jmethodCount = jni->getArrayLength(jmethods);
			int methodCount = (int) jmethodCount;
			for (int i = 0; i < methodCount; i++)
			{
				jobject jmethodObj = jni->getObjectArrayElement(jmethods, i);
				jboolean jisBridge = jni->invokeBooleanMethod(jmethodObj, "java/lang/reflect/Method", "isBridge", "()Z");
				bool isBridge = (bool) jisBridge;
				if (isBridge) continue;
				jboolean jisSynthetic = jni->invokeBooleanMethod(jmethodObj, "java/lang/reflect/Method", "isSynthetic", "()Z");
				bool isSynthetic = (bool) jisSynthetic;
				if (isSynthetic) continue;
				jint jmethodmodifiers = (jint) jni->invokeIntMethod(jmethodObj, "java/lang/reflect/Method", "getModifiers", "()I");
				int methodModifiers = (int) jmethodmodifiers;
				bool isMethodStatic = (methodModifiers & MODIFIER_JAVA_STATIC) == MODIFIER_JAVA_STATIC;
				bool isMethodPublic = (methodModifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC;
				if (!isMethodPublic) continue;
				if (!isMethodStatic) continue;
				jobjectArray jparameterTypes = (jobjectArray) jni->invokeObjectMethod(clazz, "java/lang/reflect/Method", "getParameterTypes", "()[Ljava/lang/Class;");
				jsize parameterCount = jni->getArrayLength(jparameterTypes);
				if (parameterCount > 0) continue;
				jobject jreturnType = (jobject) jni->invokeObjectMethod(clazz, "java/lang/reflect/Method", "getReturnType", "()Ljava/lang/Class;");
				isSingletonInstance = (bool) jni->isInstanceOf(jreturnType, (jclass) clazz);
			}
			// search for a public static field that returns this type
			bool isSingletonField = false;
			jobjectArray jfields = (jobjectArray) jni->invokeObjectMethod(clazz, "java/lang/Class", "getDeclaredFields", "()[Ljava/lang/Field;");
			jsize jfieldCount = jni->getArrayLength(jfields);
			int fieldCount = (int) jfieldCount;
			for (int i = 0; i < fieldCount; i++)
			{
				jobject jfieldObj = jni->getObjectArrayElement(jfields, i);
				int fieldModifiers = jni->invokeIntMethod(jfieldObj, "java/lang/reflect/Field", "getModifiers", "()I");
				bool isFieldStatic = (fieldModifiers & MODIFIER_JAVA_STATIC) == MODIFIER_JAVA_STATIC;
				bool isFieldPublic = (fieldModifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC;
				if (!isFieldPublic) continue;
				if (!isFieldStatic) continue;
				jobject jreturnType = (jobject) jni->invokeObjectMethod(clazz, "java/lang/reflect/Field", "getReturnType", "()Ljava/lang/Class;");
				isSingletonField = (bool) jni->isInstanceOf(jreturnType, (jclass) clazz);
			}
			if (isSingletonInstance)
			{
				type = TYPE_JAVA_SINGLETON_INSTANCE;
			}
			else if (isSingletonField)
			{
				type = TYPE_JAVA_SINGLETON_FIELD;
			}
			else
			{
				//TODO: what type is this?
				type = TYPE_JAVA_ABSTRACT;
			}
		}
		else
		{
			type = TYPE_JAVA_INSTANCE;
		}
	}
	return type;
}

int find_method_type(jobject method)
{
	int type = TYPE_UNKNOWN;
	jint jmodifiers = (jint) jni->invokeIntMethod(method, "java/lang/reflect/Method", "getModifiers", "()I");
	int modifiers = (int) jmodifiers;
	if ((modifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC)
	{
		if ((modifiers & MODIFIER_JAVA_STATIC) == MODIFIER_JAVA_STATIC)
		{
			type = TYPE_JAVA_PUBLIC_STATIC_METHOD;
		}
		else
		{
			type = TYPE_JAVA_PUBLIC_INSTANCE_METHOD;
		}
	}
	return type;
}

int find_constructor_type(jobject constructor)
{
	int type = TYPE_UNKNOWN;
	jint jmodifiers = (jint) jni->invokeIntMethod(constructor, "java/lang/reflect/Constructor", "getModifiers", "()I");
	int modifiers = (int) jmodifiers;
	if ((modifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC)
	{
		type = TYPE_JAVA_PUBLIC_CONSTRUCTOR;
	}
	return type;
}

CXXTranslationUnit * getCursorTranslationUnit(CXXCursor cursor)
{
	CXXTranslationUnit *tu = (CXXTranslationUnit *) cursor._tu_id;
	return tu;
}

char * getCursorDescription(CXXCursor cur)
{
	CXXTranslationUnit *tu = (CXXTranslationUnit *) cur._tu_id;
	if (cur._kind_id == CURSOR_CLASS_DECL)
	{
		jstring jclassName = jni->invokeStringMethod(tu->refObj, "java/lang/Class", "getName", "()Ljava/lang/String;");
		const char * className = jni->getUTFString(jclassName).c_str();
		return (char *) className;
	}
	else if (cur._kind_id == CURSOR_FUNCTION_DECL)
	{
		jstring jmethodName = jni->invokeStringMethod(tu->refObj, "java/lang/reflect/Method", "toGenericString", "()Ljava/lang/String;");
		const char * className = jni->getUTFString(jmethodName).c_str();
		return (char *) className;
	}
	else if (cur._kind_id == CURSOR_PARM_DECL)
	{
		jstring jclassName = jni->invokeStringMethod(tu->refObj, "java/lang/Class", "getName", "()Ljava/lang/String;");
		const char * className = jni->getUTFString(jclassName).c_str();
		return (char *) className;
	}
	else if (cur._kind_id == CURSOR_RETURN_DECL)
	{
		jstring jclassName = jni->invokeStringMethod(tu->refObj, "java/lang/Class", "getName", "()Ljava/lang/String;");
		const char * className = jni->getUTFString(jclassName).c_str();
		return (char *) className;
	}
	return 0;
}

char * getCursorDisplayName(CXXCursor cur)
{
	CXXTranslationUnit *tu = (CXXTranslationUnit *) cur._tu_id;
	if (cur._kind_id == CURSOR_CLASS_DECL)
	{
		bool isClass = (bool) jni->isInstanceOf(tu->refObj, "java/lang/Class");
		if (isClass)
		{			
			jstring jclassName = jni->invokeStringMethod(tu->refObj, "java/lang/Class", "getName", "()Ljava/lang/String;");
			const char * className = jni->getUTFString(jclassName).c_str();
			return (char *) className;
		}
		bool isParameterizedType = jni->isInstanceOf(tu->refObj, "java/lang/reflect/ParameterizedType");
		if (isParameterizedType)
		{
			jobject jrawTypeObj = jni->invokeStringMethod(tu->refObj, "java/lang/reflect/ParameterizedType", "getRawType", "()Ljava/lang/reflect/Type;");
			bool isClass = (bool) jni->isInstanceOf(jrawTypeObj, "java/lang/Class");
			if (isClass)
			{				
				jstring jclassName = jni->invokeStringMethod(jrawTypeObj, "java/lang/Class", "getName", "()Ljava/lang/String;");
				const char * className = jni->getUTFString(jclassName).c_str();
				return (char *) className;
			}
		}
	}
	else if (cur._kind_id == CURSOR_FUNCTION_DECL)
	{
		jstring jmethodName = jni->invokeStringMethod(tu->refObj, "java/lang/reflect/Method", "getName", "()Ljava/lang/String;");
		const char * className = jni->getUTFString(jmethodName).c_str();
		return (char *) className;
	}
	else if (cur._kind_id == CURSOR_PARM_DECL)
	{
		bool isClass = (bool) jni->isInstanceOf(tu->refObj, "java/lang/Class");
		if (isClass)
		{			
			jstring jclassName = jni->invokeStringMethod(tu->refObj, "java/lang/Class", "getName", "()Ljava/lang/String;");
			const char * className = jni->getUTFString(jclassName).c_str();
			return (char *) className;
		}
		bool isParameterizedType = jni->isInstanceOf(tu->refObj, "java/lang/reflect/ParameterizedType");
		if (isParameterizedType)
		{
			jobject jrawTypeObj = jni->invokeStringMethod(tu->refObj, "java/lang/reflect/ParameterizedType", "getRawType", "()Ljava/lang/reflect/Type;");
			bool isClass = (bool) jni->isInstanceOf(jrawTypeObj, "java/lang/Class");
			if (isClass)
			{				
				jstring jclassName = jni->invokeStringMethod(jrawTypeObj, "java/lang/Class", "getName", "()Ljava/lang/String;");
				const char * className = jni->getUTFString(jclassName).c_str();
				return (char *) className;
			}
		}
	}
	else if (cur._kind_id == CURSOR_RETURN_DECL)
	{
		bool isClass = (bool) jni->isInstanceOf(tu->refObj, "java/lang/Class");
		if (isClass)
		{
			jstring jclassName = jni->invokeStringMethod(tu->refObj, "java/lang/Class", "getName", "()Ljava/lang/String;");
			const char * className = jni->getUTFString(jclassName).c_str();
			return (char *) className;			
		}
		bool isParameterizedType = jni->isInstanceOf(tu->refObj, "java/lang/reflect/ParameterizedType");
		if (isParameterizedType)
		{
			jobject jrawTypeObj = jni->invokeStringMethod(tu->refObj, "java/lang/reflect/ParameterizedType", "getRawType", "()Ljava/lang/reflect/Type;");
			bool isClass = (bool) jni->isInstanceOf(jrawTypeObj, "java/lang/Class");
			if (isClass)
			{				
				jstring jclassName = jni->invokeStringMethod(jrawTypeObj, "java/lang/Class", "getName", "()Ljava/lang/String;");
				const char * className = jni->getUTFString(jclassName).c_str();
				return (char *) className;
			}
		}
	}
	return 0;
}

char * getCursorParentName(CXXCursor cur)
{
	CXXTranslationUnit *tu = (CXXTranslationUnit *) cur._tu_id;
	if (cur._kind_id == CURSOR_CLASS_DECL)
	{
		jobject refObj = jni->invokeObjectMethod(tu->refObj, "java/lang/Class", "getSuperclass", "()Ljava/lang/Class;");
		if (refObj)
		{
			jstring jsuperclassName = jni->invokeStringMethod(refObj, "java/lang/Class", "getName", "()Ljava/lang/String;");
			const char * superclassName = jni->getUTFString(jsuperclassName).c_str();
			return (char *) superclassName;
		}
	}
	return 0;
}

void visitCursorAttrs(CXXCursor cursor, CursorVisitAttrsCallback callback, void * host_object)
{
	cursor._int_attr_0 = 0;
	cursor._int_attr_1 = 0;
	cursor._int_attr_2 = 0;
	cursor._int_attr_3 = 0;

	strcpy(cursor._str_attr_0, "");
	strcpy(cursor._str_attr_1, "");
	strcpy(cursor._str_attr_2, "");
	strcpy(cursor._str_attr_3, "");

	CXXTranslationUnit *tu = (CXXTranslationUnit *) cursor._tu_id;
	if (cursor._kind_id == CURSOR_PARM_DECL)
	{		
		bool isParameterizedType = jni->isInstanceOf(tu->refObj, "java/lang/reflect/ParameterizedType");
		if (isParameterizedType)
		{

			jobjectArray jargArr = (jobjectArray) jni->invokeObjectMethod(tu->refObj, "java/lang/reflect/ParameterizedType", "getActualTypeArguments", "()[Ljava/lang/reflect/Type;");
			jsize jArgTypeCount = jni->getArrayLength(jargArr);
			int argTypeCount = (int) jArgTypeCount;

			cursor._int_attr_0 = argTypeCount;

			if (argTypeCount > 0)
			{
				jobject jargType = jni->getObjectArrayElement(jargArr, 0);
				jstring jargTypeName = (jstring) jni->invokeStringMethod(jargType, "java/lang/Class", "getName", "()Ljava/lang/String;");
				char * argTypeName = (char *) jni->getUTFString(jargTypeName).c_str();
				strcpy(cursor._str_attr_0, argTypeName);
			}
			if (argTypeCount > 1)
			{
				jobject jargType = jni->getObjectArrayElement(jargArr, 1);
				jstring jargTypeName = (jstring) jni->invokeStringMethod(jargType, "java/lang/Class", "getName", "()Ljava/lang/String;");
				char * argTypeName = (char *) jni->getUTFString(jargTypeName).c_str();
				strcpy(cursor._str_attr_1, argTypeName);
			}
			if (argTypeCount > 2)
			{
				jobject jargType = jni->getObjectArrayElement(jargArr, 2);
				jstring jargTypeName = (jstring) jni->invokeStringMethod(jargType, "java/lang/Class", "getName", "()Ljava/lang/String;");
				char * argTypeName = (char *) jni->getUTFString(jargTypeName).c_str();
				strcpy(cursor._str_attr_2, argTypeName);
			}
			if (argTypeCount > 3)
			{
				jobject jargType = jni->getObjectArrayElement(jargArr, 3);
				jstring jargTypeName = (jstring) jni->invokeStringMethod(jargType, "java/lang/Class", "getName", "()Ljava/lang/String;");
				char * argTypeName = (char *) jni->getUTFString(jargTypeName).c_str();
				strcpy(cursor._str_attr_3, argTypeName);
			}
		}
	}

	callback(cursor._int_attr_0, cursor._str_attr_0, host_object);
	callback(cursor._int_attr_1, cursor._str_attr_1, host_object);
	callback(cursor._int_attr_2, cursor._str_attr_2, host_object);
	callback(cursor._int_attr_3, cursor._str_attr_3, host_object);
}

int visitCursorChildren(CXXCursor parentCursor, CursorVisitCallback callback, void * host_object)
{
	CXXTranslationUnit *tu = (CXXTranslationUnit *) parentCursor._tu_id;
	if (parentCursor._kind_id == CURSOR_CLASS_DECL)
	{
		jobjectArray jmethods = (jobjectArray) jni->invokeObjectMethod(tu->refObj, "java/lang/Class", "getDeclaredMethods", "()[Ljava/lang/reflect/Method;");
		jsize methodCount = jni->getArrayLength(jmethods);
		for (int i = 0; i < methodCount; i++)
		{
			jobject jmethodObj = jni->getObjectArrayElement(jmethods, i);
			jboolean jisBridge = jni->invokeBooleanMethod(jmethodObj, "java/lang/reflect/Method", "isBridge", "()Z");
			bool isBridge = (bool) jisBridge;
			if (isBridge) continue;
			jboolean jisSynthetic = jni->invokeBooleanMethod(jmethodObj, "java/lang/reflect/Method", "isSynthetic", "()Z");
			bool isSynthetic = (bool) jisSynthetic;
			if (isSynthetic) continue;
			CXXCursor childCursor;
			childCursor._kind_id = CURSOR_FUNCTION_DECL;
			childCursor._tu_id = (long) (new CXXTranslationUnit(jmethodObj));
			callback(childCursor, parentCursor, host_object);
		}
		jobjectArray jconstructors = (jobjectArray) jni->invokeObjectMethod(tu->refObj, "java/lang/Class", "getDeclaredConstructors", "()[Ljava/lang/reflect/Constructor;");
		jsize constructorCount = jni->getArrayLength(jconstructors);
		for (int i = 0; i < constructorCount; i++)
		{
			jobject refObj = jni->getObjectArrayElement(jconstructors, i);
			CXXCursor childCursor;
			childCursor._kind_id = CURSOR_CONSTRUCTOR_DECL;
			childCursor._tu_id = (long) (new CXXTranslationUnit(refObj));
			callback(childCursor, parentCursor, host_object);
		}
	}
	else if (parentCursor._kind_id == CURSOR_FUNCTION_DECL)
	{
		jobject refObj = jni->invokeObjectMethod(tu->refObj, "java/lang/reflect/Method", "getReturnType", "()Ljava/lang/Class;");
		CXXCursor childCursor;
		childCursor._kind_id = CURSOR_RETURN_DECL;
		childCursor._tu_id = (long) (new CXXTranslationUnit(refObj));
		callback(childCursor, parentCursor, host_object);

		jobjectArray jparameterTypes = (jobjectArray) jni->invokeObjectMethod(tu->refObj, "java/lang/reflect/Method", "getGenericParameterTypes", "()[Ljava/lang/reflect/Type;");
		if (jparameterTypes != 0)
		{
			jsize parameterCount = jni->getArrayLength(jparameterTypes);
			for (int i = 0; i < parameterCount; i++)
			{
				jobject refObj = jni->getObjectArrayElement(jparameterTypes, i);
				CXXCursor childCursor;
				childCursor._kind_id = CURSOR_PARM_DECL;
				childCursor._tu_id = (long) (new CXXTranslationUnit(refObj));
				callback(childCursor, parentCursor, host_object);
			}
		}
	}
	else if (parentCursor._kind_id == CURSOR_CONSTRUCTOR_DECL)
	{
		jobject jParentClass = jni->invokeObjectMethod(tu->refObj,"java/lang/reflect/Constructor","getDeclaringClass","()Ljava/lang/Class;");
		jobject jDeclaringClass = jni->invokeObjectMethod(jParentClass,"java/lang/Class","getDeclaringClass","()Ljava/lang/Class;");
		bool isLocalClass = jDeclaringClass != 0;
		jobjectArray jparameterTypes = (jobjectArray) jni->invokeObjectMethod(tu->refObj, "java/lang/reflect/Constructor", "getGenericParameterTypes", "()[Ljava/lang/reflect/Type;");
		if (jparameterTypes != 0)
		{
			jsize parameterCount = jni->getArrayLength(jparameterTypes);
			//int startIdx = isLocalClass ? 1 : 0;
			int startIdx = 0;
			for (int i = startIdx; i < parameterCount; i++)
			{
				jobject refObj = jni->getObjectArrayElement(jparameterTypes, i);
				CXXCursor childCursor;
				childCursor._kind_id = CURSOR_PARM_DECL;
				childCursor._tu_id = (long) (new CXXTranslationUnit(refObj));
				callback(childCursor, parentCursor, host_object);
			}
		}
	}
	return 1;
}

int visitEnumValues(CXXCursor cursor, CXXType type, VisitEnumValuesCallback callback, void * host_object)
{
	CXXTranslationUnit *tu = (CXXTranslationUnit *) cursor._tu_id;
	if (type._kind_id == TYPE_JAVA_ENUM)
	{
		jobjectArray jenumConstants = (jobjectArray) jni->invokeObjectMethod(tu->refObj, "java/lang/Class", "getEnumConstants", "()[Ljava/lang/Object;");
		if (jenumConstants != 0)
		{
			jsize enumConstantsCount = jni->getArrayLength(jenumConstants);
			for (int i = 0; i < enumConstantsCount; i++)
			{
				jobject refObj = jni->getObjectArrayElement(jenumConstants, i);
				jstring jName = (jstring) jni->invokeStringMethod(refObj, "java/lang/Enum", "name", "()Ljava/lang/String;");
				char * name = (char *) jni->getUTFString(jName).c_str();
				callback(name, host_object);
			}
		}
	}
	return 1;
}

CXXType getCursorType(CXXCursor cursor)
{
	const char * cursor_name = getCursorDisplayName(cursor);
	CXXTranslationUnit *tu = (CXXTranslationUnit *) cursor._tu_id;
	CXXType type;
	type._kind_id = TYPE_UNKNOWN;
	int cur_kind_id = cursor._kind_id;
	if (cur_kind_id == CURSOR_CLASS_DECL)
	{
		type._kind_id = TYPE_JAVA_INSTANCE;
		jarray jconstructors = (jarray) jni->invokeObjectMethod(tu->refObj, "java/lang/Class", "getConstructors", "()[Ljava/lang/reflect/Constructor;");
		jsize constructorCount = jni->getArrayLength(jconstructors);
		jint jmodifiers = (jint) jni->invokeIntMethod(tu->refObj, "java/lang/Class", "getModifiers", "()I");
		int modifiers = (int) jmodifiers;
		bool isInterface = (modifiers & MODIFIER_JAVA_INTERFACE) == MODIFIER_JAVA_INTERFACE;
		bool isAbstract = (modifiers & MODIFIER_JAVA_ABSTRACT) == MODIFIER_JAVA_ABSTRACT;
		jboolean jisEnum = jni->invokeBooleanMethod(tu->refObj, "java/lang/Class", "isEnum", "()Z");
		bool isEnum = (bool) jisEnum;
		if (isInterface)
		{
			type._kind_id = TYPE_JAVA_INTERFACE;
		}
		else if (isAbstract)
		{
			type._kind_id = TYPE_JAVA_ABSTRACT;
		}
		else if (isEnum)
		{
			type._kind_id = TYPE_JAVA_ENUM;
		}
		else
		{
			bool onlyStaticPublicMethods = true;
			jstring jclassName = jni->invokeStringMethod(tu->refObj, "java/lang/Class", "getName", "()Ljava/lang/String;");
			const char * className = jni->getUTFString(jclassName).c_str();
			jobjectArray jmethods = (jobjectArray) jni->invokeObjectMethod(tu->refObj, "java/lang/Class", "getDeclaredMethods", "()[Ljava/lang/reflect/Method;");
			jsize jmethodCount = jni->getArrayLength(jmethods);
			int methodCount = (int) jmethodCount;
			for (int i = 0; i < methodCount; i++)
			{
				jobject jmethodObj = jni->getObjectArrayElement(jmethods, i);
				jboolean jisBridge = jni->invokeBooleanMethod(jmethodObj, "java/lang/reflect/Method", "isBridge", "()Z");
				bool isBridge = (bool) jisBridge;
				if (isBridge) continue;
				jboolean jisSynthetic = jni->invokeBooleanMethod(jmethodObj, "java/lang/reflect/Method", "isSynthetic", "()Z");
				bool isSynthetic = (bool) jisSynthetic;
				if (isSynthetic) continue;
				jint jmethodmodifiers = (jint) jni->invokeIntMethod(jmethodObj, "java/lang/reflect/Method", "getModifiers", "()I");
				int methodModifiers = (int) jmethodmodifiers;
				bool isMethodStatic = (methodModifiers & MODIFIER_JAVA_STATIC) == MODIFIER_JAVA_STATIC;
				bool isMethodPublic = (methodModifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC;
				if (isMethodPublic && !isMethodStatic)
				{
					onlyStaticPublicMethods = false;
					break;
				}
			}
			if (onlyStaticPublicMethods)
			{
				type._kind_id = TYPE_JAVA_STATIC_METHODS;
			}
			else if (constructorCount == 0)
			{
				// search for a public static method that takes no arg and returns this type
				bool isSingletonInstance = false;
				jobjectArray jmethods = (jobjectArray) jni->invokeObjectMethod(tu->refObj, "java/lang/Class", "getDeclaredMethods", "()[Ljava/lang/reflect/Method;");
				jsize jmethodCount = jni->getArrayLength(jmethods);
				int methodCount = (int) jmethodCount;
				for (int i = 0; i < methodCount; i++)
				{
					jobject jmethodObj = jni->getObjectArrayElement(jmethods, i);
					jboolean jisBridge = jni->invokeBooleanMethod(jmethodObj, "java/lang/reflect/Method", "isBridge", "()Z");
					bool isBridge = (bool) jisBridge;
					if (isBridge) continue;
					jboolean jisSynthetic = jni->invokeBooleanMethod(jmethodObj, "java/lang/reflect/Method", "isSynthetic", "()Z");
					bool isSynthetic = (bool) jisSynthetic;
					if (isSynthetic) continue;
					jint jmethodmodifiers = (jint) jni->invokeIntMethod(jmethodObj, "java/lang/reflect/Method", "getModifiers", "()I");
					int methodModifiers = (int) jmethodmodifiers;
					bool isMethodStatic = (methodModifiers & MODIFIER_JAVA_STATIC) == MODIFIER_JAVA_STATIC;
					bool isMethodPublic = (methodModifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC;
					if (!isMethodPublic) continue;
					if (!isMethodStatic) continue;
					jobjectArray jparameterTypes = (jobjectArray) jni->invokeObjectMethod(tu->refObj, "java/lang/reflect/Method", "getParameterTypes", "()[Ljava/lang/Class;");
					jsize parameterCount = jni->getArrayLength(jparameterTypes);
					if (parameterCount > 0) continue;
					jobject jreturnType = (jobject) jni->invokeObjectMethod(tu->refObj, "java/lang/reflect/Method", "getReturnType", "()Ljava/lang/Class;");
					isSingletonInstance = (bool) jni->isInstanceOf(jreturnType, (jclass) tu->refObj);
				}
				// search for a public static field that returns this type
				bool isSingletonField = false;
				jobjectArray jfields = (jobjectArray) jni->invokeObjectMethod(tu->refObj, "java/lang/Class", "getDeclaredFields", "()[Ljava/lang/Field;");
				jsize jfieldCount = jni->getArrayLength(jfields);
				int fieldCount = (int) jfieldCount;
				for (int i = 0; i < fieldCount; i++)
				{
					jobject jfieldObj = jni->getObjectArrayElement(jfields, i);
					int fieldModifiers = jni->invokeIntMethod(jfieldObj, "java/lang/reflect/Field", "getModifiers", "()I");
					bool isFieldStatic = (fieldModifiers & MODIFIER_JAVA_STATIC) == MODIFIER_JAVA_STATIC;
					bool isFieldPublic = (fieldModifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC;
					if (!isFieldPublic) continue;
					if (!isFieldStatic) continue;
					jobject jreturnType = (jobject) jni->invokeObjectMethod(tu->refObj, "java/lang/reflect/Field", "getReturnType", "()Ljava/lang/Class;");
					isSingletonField = (bool) jni->isInstanceOf(jreturnType, (jclass) tu->refObj);
				}
				if (isSingletonInstance)
				{
					type._kind_id = TYPE_JAVA_SINGLETON_INSTANCE;
				}
				else if (isSingletonField)
				{
					type._kind_id = TYPE_JAVA_SINGLETON_FIELD;
				}
				else
				{
					//TODO: what type is this?
					type._kind_id = TYPE_JAVA_ABSTRACT;
				}
			}
			else
			{
				type._kind_id = TYPE_JAVA_INSTANCE;
			}
		}
	}
	else if (cur_kind_id == CURSOR_FUNCTION_DECL)
	{
		jint jmodifiers = (jint) jni->invokeIntMethod(tu->refObj, "java/lang/reflect/Method", "getModifiers", "()I");
		int modifiers = (int) jmodifiers;
		if ((modifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC)
		{
			if ((modifiers & MODIFIER_JAVA_STATIC) == MODIFIER_JAVA_STATIC)
			{
				type._kind_id = TYPE_JAVA_PUBLIC_STATIC_METHOD;
			}
			else
			{
				type._kind_id = TYPE_JAVA_PUBLIC_INSTANCE_METHOD;
			}
		}
	}
	else if (cur_kind_id == CURSOR_CONSTRUCTOR_DECL)
	{
		jint jmodifiers = (jint) jni->invokeIntMethod(tu->refObj, "java/lang/reflect/Method", "getModifiers", "()I");
		int modifiers = (int) jmodifiers;
		if ((modifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC)
		{
			type._kind_id = TYPE_JAVA_PUBLIC_CONSTRUCTOR;
		}
	}
	else if (cur_kind_id == CURSOR_PARM_DECL ||
			cur_kind_id == CURSOR_RETURN_DECL)
	{
		jboolean jisEnum = jni->invokeBooleanMethod(tu->refObj, "java/lang/Class", "isEnum", "()Z");
		jboolean jisPrimitive = jni->invokeBooleanMethod(tu->refObj, "java/lang/Class", "isPrimitive", "()Z");
		jboolean jisArray = jni->invokeBooleanMethod(tu->refObj, "java/lang/Class", "isArray", "()Z");
		jboolean jisInterface = jni->invokeBooleanMethod(tu->refObj, "java/lang/Class", "isInterface", "()Z");

		if (jisEnum)
		{
			type._kind_id = TYPE_JAVA_ENUM;
		}
		else if (jisPrimitive)
		{
			type._kind_id = TYPE_JAVA_PRIMITIVE;
		}
		else if (jisArray)
		{
			type._kind_id = TYPE_JAVA_ARRAY;
		}
		else
		{
			type._kind_id = TYPE_JAVA_INSTANCE;
		}
	}
	return type;
}

int createJVM(JavaVM **a_jvm, char * optionString)
{
	JNIEnv *env = 0;
	JavaVMInitArgs vm_args;

	JavaVMOption* options = new JavaVMOption[1];
	options[0].optionString = optionString;
	vm_args.version = CXX_JNI_VERSION;
	vm_args.nOptions = 1;
	vm_args.options = options;
	vm_args.ignoreUnrecognized = false;

	int status = JNI_CreateJavaVM(a_jvm, (void **) &env, &vm_args);
	delete options;

	return status;
}

int destroyJVM(JavaVM *a_jvm)
{
	a_jvm->DetachCurrentThread();
	int status = a_jvm->DestroyJavaVM();

	return status;
}

