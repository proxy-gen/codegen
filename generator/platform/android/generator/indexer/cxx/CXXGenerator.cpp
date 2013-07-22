/*
 * CXXGenerator.cpp
 *
 *  Created on: Feb 14, 2013
 *      Author: rvergis
 */

#include <CXXGenerator.h>
#include <JNIContext.hpp>
#include <sys/resource.h>

#define LOG_ENABLED 0
#define log(...) if (LOG_ENABLED) fprintf(stderr, __VA_ARGS__)

#define CURSOR_CLASS_DECL 4
#define CURSOR_CONSTRUCTOR_DECL 7
#define CURSOR_FUNCTION_DECL 8
#define CURSOR_FIELD_DECL 74 
#define CURSOR_FIELD_TYPE_DECL 75
#define CURSOR_RETURN_DECL 9
#define CURSOR_PARM_DECL 10

#define TYPE_UNKNOWN 0
#define TYPE_JAVA_INSTANCE 200
#define TYPE_JAVA_SINGLETON_FIELD 201
#define TYPE_JAVA_SINGLETON_ENUM_FIELD 215
#define TYPE_JAVA_NOT_INSTANTIATABLE 216
#define TYPE_JAVA_SINGLETON_INSTANCE 211
#define TYPE_JAVA_ENUM 202
#define TYPE_JAVA_ABSTRACT 203
#define TYPE_JAVA_STATIC_METHODS 204
#define TYPE_JAVA_PUBLIC_INSTANCE_METHOD 205
#define TYPE_JAVA_PUBLIC_STATIC_METHOD 206
#define TYPE_JAVA_PUBLIC_INSTANCE_FIELD 218
#define TYPE_JAVA_PUBLIC_STATIC_FIELD 217
#define TYPE_JAVA_PUBLIC_CONSTRUCTOR 207
#define TYPE_JAVA_PRIMITIVE 208
#define TYPE_JAVA_ARRAY 209
#define TYPE_JAVA_INTERFACE 210
#define TYPE_JAVA_TYPE_VARIABLE 212
#define TYPE_JAVA_GENERIC_ARRAY_TYPE 213
#define TYPE_WILDCARD_TYPE 214

#define TYPE_DUMMY 999

#define MODIFIER_JAVA_PUBLIC 1
#define MODIFIER_JAVA_STATIC 8
#define MODIFIER_JAVA_INTERFACE 512
#define MODIFIER_JAVA_ABSTRACT 1024

#define CXX_TYPE_CLASS_JNI_NAME "com/zynga/sdk/cxx/CXXType"
#define CXX_TYPE_CLASS_GET_CHILD_TYPE_JNI_SIG "(I)Lcom/zynga/sdk/cxx/CXXType;"
#define CXX_TYPE_CLASS_GET_CHILD_TYPES_JNI_SIG "()Ljava/util/List;"
#define CXX_TYPE_ARRAY_CLASS_NAME "com.zynga.sdk.cxx.CXXType$Array"

JNIContext *jni = 0;
JavaVM *m_jvm = 0;

std::string CLASS = std::string("java.lang.Class");
std::string TYPE_VARIABLE = std::string("java.lang.reflect.TypeVariable");
std::string PARAMETERIZED_TYPE = std::string("java.lang.reflect.ParameterizedType");
std::string GENERIC_ARRAY_TYPE = std::string("java.lang.reflect.GenericArrayType");
std::string WILDCARD_TYPE = std::string("java.lang.reflect.WildcardType");

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

void visitTranslationUnitClasses(char packages[MAX_PACKAGE_COUNT][STR_ATTR_SIZE], int package_count, char classes[MAX_CLASS_COUNT][STR_ATTR_SIZE], int class_count, TranslationUnitVisitClassesCallback callback, void * host_object)
{
	log("visitTranslationUnitClasses enter\n");
	jni->pushLocalFrame();
	ProcessorContext *ctx = new ProcessorContext;
	memcpy(ctx->packages, packages, sizeof(char) * MAX_PACKAGE_COUNT * STR_ATTR_SIZE);
	ctx->package_count = package_count;
	memcpy(ctx->classes, classes, sizeof(char) * MAX_CLASS_COUNT * STR_ATTR_SIZE);
	ctx->class_count = class_count;
	ctx->callback = callback;
	ctx->host_object = host_object;
	for (int idx = 0; idx < class_count; idx++)
	{
		std::string class_name = std::string(classes[idx]);
		std::string jni_name = jni->getJNIName(class_name);
		jclass clazz = (jclass) jni->getClassRef(jni_name.c_str());
		process_class(class_name, clazz, *ctx);		
	}
	delete ctx;
	jni->popLocalFrame();
	log("visitTranslationUnitClasses exit\n");
}

CXXTypeHierarchy createTypeHierarchy(long type_id)
{
	log("createTypeHierarchy enter\n");
	
	jni->pushLocalFrame();

	CXXTypeHierarchy typeHierarchy;
	typeHierarchy._type_id = type_id;

	jobject cxx_type = (jobject) typeHierarchy._type_id;
	int child_count = (int) jni->invokeIntMethod(cxx_type, CXX_TYPE_CLASS_JNI_NAME, "getNumChildTypes", "()I");
	typeHierarchy._child_count = child_count;

	std::string cxx_type_name = find_type_name(cxx_type);
	strcpy(typeHierarchy._type_name, cxx_type_name.c_str());

	std::string cxx_package_name = find_type_package_name(cxx_type);
	strcpy(typeHierarchy._package_name, cxx_package_name.c_str());

	std::string cxx_class_name = find_type_class_name(cxx_type);
	strcpy(typeHierarchy._class_name, cxx_class_name.c_str());

	jni->popLocalFrame();

	log("createTypeHierarchy exit\n");

	return typeHierarchy;
}

int visitTypeHierarchyChildren(CXXTypeHierarchy parentTypeHierarchy, TypeHierarchyVisitCallback callback, void * host_object)
{
	log("visitTypeHierarchyChildren enter\n");
	jni->pushLocalFrame();
	jobject cxx_type = (jobject) parentTypeHierarchy._type_id;
	if (cxx_type != 0)
	{
		jobject jchild_cxx_types = jni->invokeObjectMethod(cxx_type, CXX_TYPE_CLASS_JNI_NAME, "getChildTypes", CXX_TYPE_CLASS_GET_CHILD_TYPES_JNI_SIG);
		int size = jni->invokeIntMethod(jchild_cxx_types, "java/util/List", "size", "()I");
		for (int idx = 0; idx < size; idx++)
		{
			jobject jchild_cxx_type = jni->invokeObjectMethod(jchild_cxx_types, "java/util/List", "get", "(I)Ljava/lang/Object;", idx);
			CXXTypeHierarchy childTypeHierarchy = createTypeHierarchy((long) jchild_cxx_type);
			callback(childTypeHierarchy, parentTypeHierarchy, host_object);
		}
	}	
	jni->popLocalFrame();
	log("visitTypeHierarchyChildren exit\n");
	return 1;
}

bool canCastClass1ToClass2(char clazz1_name[STR_ATTR_SIZE], char clazz2_name[STR_ATTR_SIZE])
{
	std::string clazz1_str = std::string(clazz1_name);
	std::string clazz1_jni_str = jni->getJNIName(clazz1_str);
	std::string clazz2_str = std::string(clazz2_name);
	std::string clazz2_jni_str = jni->getJNIName(clazz2_str);
	return (bool) jni->canCastClass1ToClass2(clazz1_jni_str.c_str(), clazz2_jni_str.c_str());
}

void process_class(std::string class_name, jclass clazz, ProcessorContext& ctx)
{
	log("process_class enter\n");
	log("process_class class %s\n", class_name.c_str());
	if (ctx.processed_classes.count(class_name) > 0)
	{
		log("class already processed, skipping %s\n", class_name.c_str());	
		return;
	}
	ctx.processed_classes.insert(std::pair<std::string, long>(class_name, (long) clazz));
	jni->pushLocalFrame();
	int modifiers = (int) jni->invokeIntMethod(clazz, "java/lang/Class", "getModifiers", "()I");
	int type = find_class_type(clazz);
	{
		char name[STR_ATTR_SIZE];
		strcpy(name, class_name.c_str());
		ctx.callback(CALLBACK_TYPE_ENTER, CURSOR_CLASS_DECL, type, modifiers, name, 0, 0 /* type id */, ctx.host_object);

	}
	jobjectArray jconstructors = (jobjectArray) jni->invokeObjectMethod(clazz, "java/lang/Class", "getDeclaredConstructors", "()[Ljava/lang/reflect/Constructor;");
	int constructorCount = (int) jni->getArrayLength(jconstructors);
	for (int idx = 0; idx < constructorCount; idx++)
	{
		jni->pushLocalFrame();
		jobject jconstructor = jni->getObjectArrayElement(jconstructors, idx);
		std::string constructor_name = jni->getUTFString(jni->invokeStringMethod(jconstructor, "java/lang/reflect/Constructor", "getName", "()Ljava/lang/String;"));
		bool isSynthetic = (bool) jni->invokeBooleanMethod(jconstructor, "java/lang/reflect/Constructor", "isSynthetic", "()Z");
		if (!isSynthetic)
		{			
			process_constructor(class_name, clazz, constructor_name, jconstructor, idx, ctx);				
		}
		jni->popLocalFrame();
	}
	jobjectArray jmethods = (jobjectArray) jni->invokeObjectMethod(clazz, "java/lang/Class", "getDeclaredMethods", "()[Ljava/lang/reflect/Method;");
	int methodCount = (int) jni->getArrayLength(jmethods);
	for (int idx = 0; idx < methodCount; idx++)
	{
		jni->pushLocalFrame();
		jobject jmethod = jni->getObjectArrayElement(jmethods, idx);
		std::string method_name = jni->getUTFString(jni->invokeStringMethod(jmethod, "java/lang/reflect/Method", "getName", "()Ljava/lang/String;"));
		bool isBridge = (bool) jni->invokeBooleanMethod(jmethod, "java/lang/reflect/Method", "isBridge", "()Z");
		if (!isBridge) 
		{
			bool isSynthetic = (bool) jni->invokeBooleanMethod(jmethod, "java/lang/reflect/Method", "isSynthetic", "()Z");
			if (!isSynthetic)
			{
				process_method(class_name, clazz, method_name, jmethod, idx, ctx);
			}
		}
		jni->popLocalFrame();
	}
	jobjectArray jfields = (jobjectArray) jni->invokeObjectMethod(clazz, "java/lang/Class", "getDeclaredFields", "()[Ljava/lang/reflect/Field;");
	int fieldCount = (int) jni->getArrayLength(jfields);
	for (int idx = 0; idx < fieldCount; idx++)
	{
		jni->pushLocalFrame();
		jobject jfield = jni->getObjectArrayElement(jfields, idx);
		std::string field_name = jni->getUTFString(jni->invokeStringMethod(jfield, "java/lang/reflect/Field", "getName", "()Ljava/lang/String;"));
		int fieldModifiers = jni->invokeIntMethod(jfield, "java/lang/reflect/Field", "getModifiers", "()I");
		bool isFieldPublic = (fieldModifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC;
		if (isFieldPublic)
		{
			process_field(class_name, clazz, field_name, jfield, idx, ctx);
		}		
		jni->popLocalFrame();
	}
	{
		char str_attrs[ATTR_COUNT][STR_ATTR_SIZE];
		int int_attrs[ATTR_COUNT];
		char name[STR_ATTR_SIZE];
		strcpy(name, class_name.c_str());
		ctx.callback(CALLBACK_TYPE_PROCESS, CURSOR_CLASS_DECL, type, modifiers, name, 0 /* index */, 0 /*type class */, ctx.host_object);	
	}	
	{
		char name[STR_ATTR_SIZE];
		strcpy(name, class_name.c_str());
		ctx.callback(CALLBACK_TYPE_EXIT, CURSOR_CLASS_DECL, type, modifiers, name, 0, 0 /* type id */, ctx.host_object);

	}

	jni->popLocalFrame();
	log("process_class exit\n");
}

void process_field(std::string class_name, jclass clazz, std::string field_name, jobject field, int idx, ProcessorContext& ctx)
{
	log("process_field enter\n");
	log("process_field field %s\n", field_name.c_str());
	jni->pushLocalFrame();
	int modifiers = jni->invokeIntMethod(field, "java/lang/reflect/Field", "getModifiers", "()I");
	if ((modifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC)
	{
		int field_type = find_field_type(field);
		{
			char name[STR_ATTR_SIZE];
			strcpy(name, field_name.c_str());
			ctx.callback(CALLBACK_TYPE_ENTER, CURSOR_FIELD_DECL, field_type, modifiers, name, idx, 0 /* type id */, ctx.host_object);
		}
		{
			jobject type = (jobject) jni->invokeObjectMethod(field, "java/lang/reflect/Field", "getGenericType", "()Ljava/lang/reflect/Type;");
			if (type != 0)
			{
				jni->pushLocalFrame();
				jobject cxx_type = to_cxx_type(type);
				process_type(field_name, field, cxx_type, 0, ctx, CURSOR_FIELD_TYPE_DECL);
				jni->popLocalFrame();
			}
			if (type != 0)
			{
				jni->pushLocalFrame();
				jobject cxx_type = to_cxx_type(type);
				process_type_hierarchy(cxx_type, ctx);
				jni->popLocalFrame();
			}				
		}
		{
			char name[STR_ATTR_SIZE];
			strcpy(name, field_name.c_str());
			ctx.callback(CALLBACK_TYPE_PROCESS, CURSOR_FIELD_DECL, field_type, modifiers, name, idx, 0 /* type id */, ctx.host_object);
		}
		{
			char name[STR_ATTR_SIZE];
			strcpy(name, field_name.c_str());
			ctx.callback(CALLBACK_TYPE_EXIT, CURSOR_FIELD_DECL, field_type, modifiers, name, idx, 0 /* type id */, ctx.host_object);
		}					
	}
	jni->popLocalFrame();
	log("process_method exit\n");
}

void process_method(std::string class_name, jclass clazz, std::string method_name, jobject method, int idx, ProcessorContext& ctx)
{
	log("process_method enter\n");
	log("process_method method %s\n", method_name.c_str());
	jni->pushLocalFrame();
	int modifiers = jni->invokeIntMethod(method, "java/lang/reflect/Method", "getModifiers", "()I");
	if ((modifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC)
	{
		int type = find_method_type(method);
		{
			char name[STR_ATTR_SIZE];
			strcpy(name, method_name.c_str());
			ctx.callback(CALLBACK_TYPE_ENTER, CURSOR_FUNCTION_DECL, type, modifiers, name, idx, 0 /* type id */, ctx.host_object);
		}
		jobjectArray params = (jobjectArray) jni->invokeObjectMethod(method, "java/lang/reflect/Method", "getGenericParameterTypes", "()[Ljava/lang/reflect/Type;");
		if (params != 0)
		{
			int parameterCount = (int) jni->getArrayLength(params);
			for (int idx = 0; idx < parameterCount; idx++)
			{
				jni->pushLocalFrame();
				jobject param = jni->getObjectArrayElement(params, idx);
				jobject cxx_param = to_cxx_type(param);
				process_type(method_name, method, cxx_param, idx, ctx, CURSOR_PARM_DECL);
				jni->popLocalFrame();
			}
			for (int idx = 0; idx < parameterCount; idx++)
			{
				jni->pushLocalFrame();
				jobject param = jni->getObjectArrayElement(params, idx);
				jobject cxx_param = to_cxx_type(param);
				process_type_hierarchy(cxx_param, ctx);
				jni->popLocalFrame();
			}	
		}
		jobject retrn = (jobject) jni->invokeObjectMethod(method, "java/lang/reflect/Method", "getGenericReturnType", "()Ljava/lang/reflect/Type;");
		if (retrn != 0)
		{
			jni->pushLocalFrame();
			jobject cxx_retrn = to_cxx_type(retrn);
			process_type(method_name, method, cxx_retrn, 0, ctx, CURSOR_RETURN_DECL);
			jni->popLocalFrame();
		}
		if (retrn != 0)
		{
			jni->pushLocalFrame();
			jobject cxx_retrn = to_cxx_type(retrn);
			process_type_hierarchy(cxx_retrn, ctx);
			jni->popLocalFrame();
		}
		{
			char name[STR_ATTR_SIZE];
			strcpy(name, method_name.c_str());
			ctx.callback(CALLBACK_TYPE_PROCESS, CURSOR_FUNCTION_DECL, type, modifiers, name, idx, 0 /* type id */, ctx.host_object);
		}
		{
			char name[STR_ATTR_SIZE];
			strcpy(name, method_name.c_str());
			ctx.callback(CALLBACK_TYPE_EXIT, CURSOR_FUNCTION_DECL, type, modifiers, name, idx, 0 /* type id */, ctx.host_object);

		}
	}
	jni->popLocalFrame();
	log("process_method exit\n");
}

void process_constructor(std::string class_name, jclass clazz, std::string constructor_name, jobject constructor, int idx, ProcessorContext& ctx)
{
	log("process_constructor enter\n");
	jni->pushLocalFrame();
	int modifiers = jni->invokeIntMethod(constructor, "java/lang/reflect/Constructor", "getModifiers", "()I");
	if ((modifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC)
	{
		int type = find_constructor_type(constructor);
		{
			char name[STR_ATTR_SIZE];
			strcpy(name, constructor_name.c_str());
			ctx.callback(CALLBACK_TYPE_ENTER, CURSOR_CONSTRUCTOR_DECL, type, modifiers, name, idx, 0 /* type id */, ctx.host_object);
		}
		jobjectArray params = (jobjectArray) jni->invokeObjectMethod(constructor, "java/lang/reflect/Constructor", "getGenericParameterTypes", "()[Ljava/lang/reflect/Type;");
		if (params != 0)
		{
			int parameterCount = (int) jni->getArrayLength(params);
			for (int idx = 0; idx < parameterCount; idx++)
			{
				jni->pushLocalFrame();
				jobject param = jni->getObjectArrayElement(params, idx);
				jobject cxx_param = to_cxx_type(param);
				process_type(constructor_name, constructor, cxx_param, idx, ctx, CURSOR_PARM_DECL);
				jni->popLocalFrame();
			}
			for (int idx = 0; idx < parameterCount; idx++)
			{
				jni->pushLocalFrame();
				jobject param = jni->getObjectArrayElement(params, idx);
				jobject cxx_param = to_cxx_type(param);
				process_type_hierarchy(cxx_param, ctx);
				jni->popLocalFrame();
			}		
		}
		{
			char name[STR_ATTR_SIZE];
			strcpy(name, constructor_name.c_str());
			ctx.callback(CALLBACK_TYPE_PROCESS, CURSOR_CONSTRUCTOR_DECL, type, modifiers, name, idx, 0 /* type id */, ctx.host_object);		
		}
		{
			char name[STR_ATTR_SIZE];
			strcpy(name, constructor_name.c_str());
			ctx.callback(CALLBACK_TYPE_EXIT, CURSOR_CONSTRUCTOR_DECL, type, modifiers, name, idx, 0 /* type id */, ctx.host_object);

		}
	}
	jni->popLocalFrame();
	log("process_constructor exit\n");
}

void process_type(std::string parent_name, jobject parent, jobject type, int idx, ProcessorContext& ctx, int cursor_type)
{
	log("process_type enter\n");
	jni->pushLocalFrame();
	int modifiers = 0;
	std::string type_name = find_type_class_name(type);
	int arg_type = find_arg_type(type);
	{
		char name[STR_ATTR_SIZE];
		strcpy(name, type_name.c_str());
		ctx.callback(CALLBACK_TYPE_ENTER, cursor_type, arg_type, modifiers, name, idx, (long) type /* type id */, ctx.host_object);
	}
	{
		char name[STR_ATTR_SIZE];
		strcpy(name, type_name.c_str());
		ctx.callback(CALLBACK_TYPE_EXIT, cursor_type, arg_type, modifiers, name, idx, (long) type /* type id */, ctx.host_object);

	}
	jni->popLocalFrame();
	log("process_type exit\n");
}

void process_type_hierarchy(jobject& cxx_type, ProcessorContext& ctx)
{
	log("process_type_hierarchy enter\n");
	jni->pushLocalFrame();
	std::string type_package_name = find_type_package_name(cxx_type);
	char package[STR_ATTR_SIZE];
	strcpy(package, type_package_name.c_str());
	if (in_packages(package, ctx.packages, ctx.package_count))
	{
		std::string type_class_name = find_type_class_name(cxx_type);
		std::string type_class_jni_name = jni->getJNIName(type_class_name);
		jclass type_class = jni->getClassRef(type_class_jni_name.c_str());
		process_class(type_class_name, type_class, ctx);
	}
	jobject jchild_cxx_types = jni->invokeObjectMethod(cxx_type, CXX_TYPE_CLASS_JNI_NAME, "getChildTypes", CXX_TYPE_CLASS_GET_CHILD_TYPES_JNI_SIG);
	int size = jni->invokeIntMethod(jchild_cxx_types, "java/util/List", "size", "()I");
	for (int idx = 0; idx < size; idx++)
	{
		jobject jchild_cxx_type = jni->invokeObjectMethod(jchild_cxx_types, "java/util/List", "get", "(I)Ljava/lang/Object;", idx);
		process_type_hierarchy(jchild_cxx_type, ctx);
	}	
	jni->popLocalFrame();
	log("process_type_hierarchy exit\n");
}

int find_class_type(jclass clazz)
{
	log("find_class_type enter\n");
	jni->pushLocalFrame();
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
	else
	{
		jstring jclassName = jni->invokeStringMethod(clazz, "java/lang/Class", "getName", "()Ljava/lang/String;");
		const char * className = jni->getUTFString(jclassName).c_str();
		jobjectArray jmethods = (jobjectArray) jni->invokeObjectMethod(clazz, "java/lang/Class", "getDeclaredMethods", "()[Ljava/lang/reflect/Method;");
		jsize jmethodCount = jni->getArrayLength(jmethods);
		int methodCount = (int) jmethodCount;
		bool onlyStaticPublicMethods = constructorCount == 0 && methodCount > 0;
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
			if (isEnum)
			{
				type = TYPE_JAVA_ENUM;
			}
			else
			{
				type = TYPE_JAVA_STATIC_METHODS;
			}
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
				jobjectArray jparameterTypes = (jobjectArray) jni->invokeObjectMethod(jmethodObj, "java/lang/reflect/Method", "getParameterTypes", "()[Ljava/lang/Class;");
				jsize parameterCount = jni->getArrayLength(jparameterTypes);
				if (parameterCount > 0) continue;
				jclass jreturnClazz = (jclass) jni->invokeObjectMethod(jmethodObj, "java/lang/reflect/Method", "getReturnType", "()Ljava/lang/Class;");
				isSingletonInstance = (bool) jni->isSameInstance(clazz,jreturnClazz);
			}
			// search for a public static field that returns this type
			bool isSingletonField = false;
			jobjectArray jfields = (jobjectArray) jni->invokeObjectMethod(clazz, "java/lang/Class", "getDeclaredFields", "()[Ljava/lang/reflect/Field;");
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
				jclass jtypeClazz = (jclass) jni->invokeObjectMethod(jfieldObj, "java/lang/reflect/Field", "getType", "()Ljava/lang/Class;");
				isSingletonField = (bool) jni->isSameInstance(clazz,jtypeClazz);
			}
			if (isSingletonInstance)
			{
				type = TYPE_JAVA_SINGLETON_INSTANCE;
			}
			else if (isSingletonField)
			{
				if (isEnum)
				{
					type = TYPE_JAVA_SINGLETON_ENUM_FIELD;
				}
				else
				{
					type = TYPE_JAVA_SINGLETON_FIELD;
				}
			}
			else if (isEnum)
			{
				type = TYPE_JAVA_ENUM;					
			} 
			else
			{
				//Type is not instantiatable
				type = TYPE_JAVA_NOT_INSTANTIATABLE;
			}
		}
		else
		{
			type = TYPE_JAVA_INSTANCE;
		}
	}
	jni->popLocalFrame();
	log("find_class_type exit\n");
	return type;
}

int find_field_type(jobject field)
{
	log("find_field_type enter\n");
	jni->pushLocalFrame();
	int type = TYPE_UNKNOWN;
	jint jmodifiers = (jint) jni->invokeIntMethod(field, "java/lang/reflect/Field", "getModifiers", "()I");
	int modifiers = (int) jmodifiers;
	if ((modifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC)
	{
		if ((modifiers & MODIFIER_JAVA_STATIC) == MODIFIER_JAVA_STATIC)
		{
			type = TYPE_JAVA_PUBLIC_STATIC_FIELD;
		}
		else
		{
			type = TYPE_JAVA_PUBLIC_INSTANCE_FIELD;	
		}
	}
	jni->popLocalFrame();
	log("find_field_type exit\n");
	return type;
}

int find_method_type(jobject method)
{
	log("find_method_type enter\n");
	jni->pushLocalFrame();
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
	jni->popLocalFrame();
	log("find_method_type exit\n");
	return type;
}

int find_constructor_type(jobject constructor)
{
	log("find_constructor_type enter\n");
	jni->pushLocalFrame();
	int type = TYPE_UNKNOWN;
	jint jmodifiers = (jint) jni->invokeIntMethod(constructor, "java/lang/reflect/Constructor", "getModifiers", "()I");
	int modifiers = (int) jmodifiers;
	if ((modifiers & MODIFIER_JAVA_PUBLIC) == MODIFIER_JAVA_PUBLIC)
	{
		type = TYPE_JAVA_PUBLIC_CONSTRUCTOR;
	}
	jni->popLocalFrame();
	log("find_constructor_type exit\n");
	return type;
}

int find_arg_type(jobject arg)
{
	log("find_arg_type enter\n");
	int type = TYPE_UNKNOWN;
	if (arg != 0)
	{
		jni->pushLocalFrame();

		std::string type = find_type_name(arg);

		bool isClass = type == CLASS;
		log("isClass returned %s\n", (isClass ? "true" : "false"));

		bool isTypeVariable = type == TYPE_VARIABLE;
		log("isTypeVariable returned %s\n", (isTypeVariable ? "true" : "false"));

		bool isGenericArrayType = type == GENERIC_ARRAY_TYPE;
		log("isGenericArrayType returned %s\n", (isGenericArrayType ? "true" : "false"));

		bool isWildcardType = type == WILDCARD_TYPE;

		if (isClass)
		{
			jobject jtype_class = jni->invokeObjectMethod(arg, CXX_TYPE_CLASS_JNI_NAME, "getTypeClass", "()Ljava/lang/Class;");
			if (jtype_class != 0)
			{
				jboolean jisEnum = jni->invokeBooleanMethod(jtype_class, "java/lang/Class", "isEnum", "()Z");
				log("jisEnum returned %s\n", (jisEnum == true ? "true" : "false"));

				jboolean jisPrimitive = jni->invokeBooleanMethod(jtype_class, "java/lang/Class", "isPrimitive", "()Z");
				log("jisPrimitive returned %s\n", (jisPrimitive == true ? "true" : "false"));

				jboolean jisArray = jni->invokeBooleanMethod(jtype_class, "java/lang/Class", "isArray", "()Z");
				log("jisArray returned %s\n", (jisArray == true ? "true" : "false"));

				jboolean jisInterface = jni->invokeBooleanMethod(jtype_class, "java/lang/Class", "isInterface", "()Z");
				log("jisInterface returned %s\n", (jisInterface == true ? "true" : "false"));

				if (jisEnum)
				{
					type = TYPE_JAVA_ENUM;
				}
				else if (jisPrimitive)
				{
					type = TYPE_JAVA_PRIMITIVE;
				}
				else if (jisArray)
				{
					type = TYPE_JAVA_ARRAY;
				}
				else
				{
					type = TYPE_JAVA_INSTANCE;
				}
			}
			
		}
		else if (isTypeVariable) 
		{
			type = TYPE_JAVA_TYPE_VARIABLE;
		}
		else if (isGenericArrayType)
		{
			type = TYPE_JAVA_GENERIC_ARRAY_TYPE;
		}
		else if (isWildcardType)
		{
			type = TYPE_WILDCARD_TYPE;
		}
		jni->popLocalFrame();		
	}
	log("find_arg_type exit\n");
	return type;
}

std::string find_type_name(jobject arg)
{
	log("find_type_name enter\n");
	jni->pushLocalFrame();
	std::string name;
	jobject jtype_class = jni->invokeObjectMethod(arg, CXX_TYPE_CLASS_JNI_NAME, "getTypeType", "()Ljava/lang/Class;");
	if (jtype_class != 0)
	{
		jstring jtype_class_name = jni->invokeStringMethod(jtype_class, "java/lang/Class", "getName", "()Ljava/lang/String;");
		name = jni->getUTFString(jtype_class_name);	
	}
	jni->popLocalFrame();
	log("find_type_name exit\n");
	return name;
}

std::string find_field_name(jobject type)
{
	log("find_field_name enter\n");
	std::string name = find_type_class_name(type);
	log("find_field_name exit\n");
	return name;
}

std::string find_type_class_name(jobject arg)
{
	log("find_type_class_name enter\n");
	jni->pushLocalFrame();
	std::string name;
	jobject jtype_class = jni->invokeObjectMethod(arg, CXX_TYPE_CLASS_JNI_NAME, "getTypeClass", "()Ljava/lang/Class;");
	if (jtype_class != 0)
	{
		jstring jtype_class_name = jni->invokeStringMethod(jtype_class, "java/lang/Class", "getName", "()Ljava/lang/String;");
		name = jni->getUTFString(jtype_class_name);
	}
	jni->popLocalFrame();
	log("find_type_class_name exit\n");
	return name;
}

std::string find_type_package_name(jobject arg)
{
	log("find_type_package_name enter\n");
	jni->pushLocalFrame();
	std::string package_name;
	jobject jpackage = jni->invokeObjectMethod(arg, CXX_TYPE_CLASS_JNI_NAME, "getTypePackage", "()Ljava/lang/Package;");
	if (jpackage != 0)
	{
		jstring jpackage_name = jni->invokeStringMethod(jpackage, "java/lang/Package", "getName", "()Ljava/lang/String;");
		package_name = jni->getUTFString(jpackage_name);
	}
	jni->popLocalFrame();
	log("find_type_package_name exit\n");
	return package_name;
}

jobject to_cxx_type(jobject arg)
{
	log("to_cxx_type enter\n");
	jni->pushLocalFrame();
	jclass clazz = jni->getClassRef("com/zynga/sdk/cxx/CXXType");
	jmethodID methodID = jni->getMethodID(clazz, "<init>", "(Ljava/lang/reflect/Type;)V");
	jobject cxx_param = jni->createNewObject(clazz, methodID, arg);
	cxx_param = jni->popLocalFrame(cxx_param);
	log("to_cxx_type exit \n");
	return cxx_param;
}

std::vector<std::string> find_generic_array_name(jobject param)
{
	log("find_generic_array_name enter\n");
	jni->pushLocalFrame();
	std::vector<std::string> param_generics;
	bool isParameterizedType = jni->isInstanceOf(param, "java/lang/reflect/ParameterizedType");
	if (isParameterizedType)
	{
		jobjectArray jargArr = (jobjectArray) jni->invokeObjectMethod(param, "java/lang/reflect/ParameterizedType", "getActualTypeArguments", "()[Ljava/lang/reflect/Type;");
		jsize jArgTypeCount = jni->getArrayLength(jargArr);
		int argTypeCount = (int) jArgTypeCount;
		for (int idx = 0; idx < argTypeCount; idx++)
		{
			jni->pushLocalFrame();
			jobject jargType = jni->getObjectArrayElement(jargArr, idx);
			bool isClass = jni->isInstanceOf(param, "java/lang/Class");
			if (isClass)
			{
				jstring jargTypeName = (jstring) jni->invokeStringMethod(jargType, "java/lang/Class", "getName", "()Ljava/lang/String;");
				std::string argTypeName = jni->getUTFString(jargTypeName);
				param_generics.push_back(argTypeName);				
			}
			else
			{
				log("generics not a class\n");
			}
			jni->popLocalFrame();
		}
	}
	jni->popLocalFrame();
	log("find_generic_array_name exit\n");
	return param_generics;
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
					jobjectArray jparameterTypes = (jobjectArray) jni->invokeObjectMethod(jmethodObj, "java/lang/reflect/Method", "getParameterTypes", "()[Ljava/lang/Class;");
					jsize parameterCount = jni->getArrayLength(jparameterTypes);
					if (parameterCount > 0) continue;
					jobject jreturnType = (jobject) jni->invokeObjectMethod(jmethodObj, "java/lang/reflect/Method", "getReturnType", "()Ljava/lang/Class;");
					isSingletonInstance = (bool) jni->isInstanceOf(jreturnType, (jclass) tu->refObj);
				}
				// search for a public static field that returns this type
				bool isSingletonField = false;
				jobjectArray jfields = (jobjectArray) jni->invokeObjectMethod(tu->refObj, "java/lang/Class", "getDeclaredFields", "()[Ljava/lang/reflect/Field;");
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
					jobject jreturnType = (jobject) jni->invokeObjectMethod(jfieldObj, "java/lang/reflect/Field", "getReturnType", "()Ljava/lang/Class;");
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

