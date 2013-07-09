/*
 * CXXGenerator.h
 *
 * Created on: Feb 14, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
 */

#ifndef CXXGENERATOR_H_
#define CXXGENERATOR_H_

#include <jni.h>
#include <string>
#include <vector>
#include <map>
#include <CXXUtils.h>

#ifdef __cplusplus
extern "C"
{
#endif //__cplusplus


#define OK	(0)
#define	ERR	(-1)
#define BASE_PACKAGE_COUNT 64
#define BASE_PACKAGE_SIZE 64
#define BASE_CLASS_COUNT 1024
#define BASE_CLASS_SIZE 64
#define ATTR_COUNT 64
#define STR_ATTR_SIZE 64
#define CALLBACK_TYPE_ENTER (1)
#define CALLBACK_TYPE_PROCESS (2)
#define CALLBACK_TYPE_EXIT (4)

struct CXXCursor;

struct CXXTypeHierarchy;

typedef int * (*CursorVisitCallback)(CXXCursor child, CXXCursor parent, void * host_object);

typedef int * (*VisitEnumValuesCallback)(char * enum_value, void * host_object);

typedef int * (*CursorVisitAttrsCallback)(int int_attr_value, char * str_attr_value, void * host_object);

typedef int * (*TranslationUnitVisitClassesCallback)(int callback_type, int cursor_type, int type, int modifiers, char * name, int idx, long type_id, void * host_object);

typedef int * (*TypeHierarchyVisitCallback)(CXXTypeHierarchy child, CXXTypeHierarchy parent, void * host_object);

class CXXIndex
{

public:

	CXXIndex(char * optionString);
	virtual ~CXXIndex();

protected:

	CXXIndex(const CXXIndex&);
};

class CXXTranslationUnit
{
public:

	CXXTranslationUnit(jobject arefObj);
	virtual ~CXXTranslationUnit();

	jobject refObj;

private:

};

struct CXXCursor
{
	int _kind_id;
	long _tu_id;
	int _int_attr_0;
	int _int_attr_1;
	int _int_attr_2;
	int _int_attr_3;
	char _str_attr_0[STR_ATTR_SIZE];
	char _str_attr_1[STR_ATTR_SIZE];
	char _str_attr_2[STR_ATTR_SIZE];
	char _str_attr_3[STR_ATTR_SIZE];
};

struct CXXTypeHierarchy
{
	long _type_id;
	int _child_count;
	char _type_name[STR_ATTR_SIZE];
	char _class_name[STR_ATTR_SIZE];
	char _package_name[STR_ATTR_SIZE];
};

struct CXXType
{
	int _kind_id;
};

struct ProcessorContext
{
	char packages[64][STR_ATTR_SIZE];
	int package_count;
	char classes[1024][STR_ATTR_SIZE];
	int class_count;
	TranslationUnitVisitClassesCallback callback;
	void * host_object;
	std::map<std::string, long> processed_classes;
};

CXXIndex * createIndex(char * optionString);

int destroyIndex();

int indexStatus();

char * indexStatusMessage();

CXXTranslationUnit * parseTranslationUnit(CXXIndex * index, const char *resName);

CXXCursor getTranslationUnitCursor(CXXTranslationUnit *tu);

void disposeTranslationUnit(CXXTranslationUnit * tu);

void visitTranslationUnitClasses(char packages[64][STR_ATTR_SIZE], int package_count, char classes[1024][STR_ATTR_SIZE], int class_count, TranslationUnitVisitClassesCallback callback, void * host_object);

CXXTranslationUnit * getCursorTranslationUnit(CXXCursor cursor);

char * getCursorDescription(CXXCursor cursor);

char * getCursorDisplayName(CXXCursor cursor);

char * getCursorParentName(CXXCursor cursor);

CXXType getCursorType(CXXCursor cursor);

int visitCursorChildren(CXXCursor parentCursor, CursorVisitCallback callback, void * host_object);

int visitEnumValues(CXXCursor cursor, CXXType type, VisitEnumValuesCallback callback, void * host_object);

void visitCursorAttrs(CXXCursor cursor, CursorVisitAttrsCallback callback, void * host_object);

void process_class(std::string class_name, jclass clazz, ProcessorContext ctx);

CXXTypeHierarchy createTypeHierarchy(long type_id);

int visitTypeHierarchyChildren(CXXTypeHierarchy parent, TypeHierarchyVisitCallback callback, void * host_object);

void process_method(std::string class_name, jclass clazz, std::string method_name, jobject method, int idx, ProcessorContext ctx);

void process_constructor(std::string class_name, jclass clazz, std::string constructor_name, jobject constructor, int idx, ProcessorContext ctx);

void process_param(std::string method_name, jobject method, jobject param, int idx, ProcessorContext ctx);

void process_method_return(std::string method_name, jobject method, jobject retrn, int idx, ProcessorContext ctx);

int find_class_type(jclass clazz);

int find_method_type(jobject method);

int find_constructor_type(jobject constructor);

int find_param_type(jobject param);

int find_return_type(jobject retrn);

std::string find_param_type_name(jobject param);

std::string find_return_type_name(jobject param);

std::string find_param_name(jobject param);

std::string find_return_name(jobject retrn);

std::string find_param_package_name(jobject param);

std::string find_return_package_name(jobject retrn);

std::vector<std::string> find_generic_array_name(jobject param);

jobject to_cxx_type(jobject param);

#ifdef __cplusplus
}
#endif

#endif /* CXXGENERATOR_H_ */
