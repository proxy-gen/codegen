/*
 * CXXGenerator.h
 *
 * Created on: Feb 14, 2013
 * Author: rvergis
 *
 *  Copyright 2013 Zynga Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
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
#define MAX_PACKAGE_COUNT 256
#define MAX_CLASS_COUNT 1024
#define MAX_ATTR_COUNT 16
#define STR_ATTR_SIZE 80
#define CALLBACK_TYPE_ENTER (1)
#define CALLBACK_TYPE_PROCESS (2)
#define CALLBACK_TYPE_EXIT (4)

struct CXXCursor;

struct CXXTypeHierarchy;

struct CXXStringAttributes;

typedef int * (*CursorVisitCallback)(CXXCursor child, CXXCursor parent, void * host_object);

typedef int * (*VisitEnumValuesCallback)(char * enum_value, void * host_object);

typedef int * (*CursorVisitAttrsCallback)(int int_attr_value, char * str_attr_value, void * host_object);

typedef int * (*TranslationUnitVisitClassesCallback)(int callback_type, int cursor_type, int type, int modifiers, char * name, int idx, long type_id, CXXStringAttributes attrs, void * host_object);

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

struct CXXStringAttributes
{
	int _count;
	char _key_0[STR_ATTR_SIZE];
	char _value_0[STR_ATTR_SIZE];
	char _key_1[STR_ATTR_SIZE];
	char _value_1[STR_ATTR_SIZE];
	char _key_2[STR_ATTR_SIZE];
	char _value_2[STR_ATTR_SIZE];
	char _key_3[STR_ATTR_SIZE];
	char _value_3[STR_ATTR_SIZE];
	char _key_4[STR_ATTR_SIZE];
	char _value_4[STR_ATTR_SIZE];
	char _key_5[STR_ATTR_SIZE];
	char _value_5[STR_ATTR_SIZE];
	char _key_6[STR_ATTR_SIZE];
	char _value_6[STR_ATTR_SIZE];
	char _key_7[STR_ATTR_SIZE];
	char _value_7[STR_ATTR_SIZE];
	char _key_8[STR_ATTR_SIZE];
	char _value_8[STR_ATTR_SIZE];
	char _key_9[STR_ATTR_SIZE];
	char _value_9[STR_ATTR_SIZE];
	char _key_10[STR_ATTR_SIZE];
	char _value_10[STR_ATTR_SIZE];
	char _key_11[STR_ATTR_SIZE];
	char _value_11[STR_ATTR_SIZE];
	char _key_12[STR_ATTR_SIZE];
	char _value_12[STR_ATTR_SIZE];
	char _key_13[STR_ATTR_SIZE];
	char _value_13[STR_ATTR_SIZE];
	char _key_14[STR_ATTR_SIZE];
	char _value_14[STR_ATTR_SIZE];
	char _key_15[STR_ATTR_SIZE];
	char _value_15[STR_ATTR_SIZE];
	char _key_16[STR_ATTR_SIZE];
	char _value_16[STR_ATTR_SIZE];
	char _key_17[STR_ATTR_SIZE];
	char _value_17[STR_ATTR_SIZE];
	char _key_18[STR_ATTR_SIZE];
	char _value_18[STR_ATTR_SIZE];
	char _key_19[STR_ATTR_SIZE];
	char _value_19[STR_ATTR_SIZE];
	char _key_20[STR_ATTR_SIZE];
	char _value_20[STR_ATTR_SIZE];
	char _key_21[STR_ATTR_SIZE];
	char _value_21[STR_ATTR_SIZE];
	char _key_22[STR_ATTR_SIZE];
	char _value_22[STR_ATTR_SIZE];
	char _key_23[STR_ATTR_SIZE];
	char _value_23[STR_ATTR_SIZE];
	char _key_24[STR_ATTR_SIZE];
	char _value_24[STR_ATTR_SIZE];
	char _key_25[STR_ATTR_SIZE];
	char _value_25[STR_ATTR_SIZE];
	char _key_26[STR_ATTR_SIZE];
	char _value_26[STR_ATTR_SIZE];
	char _key_27[STR_ATTR_SIZE];
	char _value_27[STR_ATTR_SIZE];
	char _key_28[STR_ATTR_SIZE];
	char _value_28[STR_ATTR_SIZE];
	char _key_29[STR_ATTR_SIZE];
	char _value_29[STR_ATTR_SIZE];
	char _key_30[STR_ATTR_SIZE];
	char _value_30[STR_ATTR_SIZE];
	char _key_31[STR_ATTR_SIZE];
	char _value_31[STR_ATTR_SIZE];
};

struct ProcessorContext
{
	char packages[MAX_PACKAGE_COUNT][STR_ATTR_SIZE];
	int package_count;
	char classes[MAX_CLASS_COUNT][STR_ATTR_SIZE];
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

void visitTranslationUnitClasses(char packages[MAX_PACKAGE_COUNT][STR_ATTR_SIZE], int package_count, char classes[MAX_CLASS_COUNT][STR_ATTR_SIZE], int class_count, TranslationUnitVisitClassesCallback callback, void * host_object);

CXXTranslationUnit * getCursorTranslationUnit(CXXCursor cursor);

char * getCursorDescription(CXXCursor cursor);

char * getCursorDisplayName(CXXCursor cursor);

char * getCursorParentName(CXXCursor cursor);

CXXType getCursorType(CXXCursor cursor);

int visitCursorChildren(CXXCursor parentCursor, CursorVisitCallback callback, void * host_object);

int visitEnumValues(CXXCursor cursor, CXXType type, VisitEnumValuesCallback callback, void * host_object);

void visitCursorAttrs(CXXCursor cursor, CursorVisitAttrsCallback callback, void * host_object);

CXXTypeHierarchy createTypeHierarchy(long type_id);

int visitTypeHierarchyChildren(CXXTypeHierarchy parent, TypeHierarchyVisitCallback callback, void * host_object);

bool canCastClass1ToClass2(char clazz1_name[STR_ATTR_SIZE], char clazz2_name[STR_ATTR_SIZE]);

void add_to_process_class(std::string class_name, jclass clazz, ProcessorContext& ctx);

void process_class(std::string class_name, jclass clazz, ProcessorContext& ctx);

void process_class_attributes(std::string class_name, jclass clazz, CXXStringAttributes& str_attributes, ProcessorContext& ctx);

void process_method(std::string class_name, jclass clazz, std::string method_name, jobject method, int idx, ProcessorContext& ctx);

void process_constructor(std::string class_name, jclass clazz, std::string constructor_name, jobject constructor, int idx, ProcessorContext& ctx);

void process_field(std::string class_name, jclass clazz, std::string field_name, jobject field, int idx, ProcessorContext& ctx);

void process_type(std::string parent_name, jobject parent, jobject type, int idx, ProcessorContext& ctx, int cursor_type);

void process_type_hierarchy(jobject& cxx_type, ProcessorContext& ctx);

int find_class_type(jclass clazz);

int find_method_type(jobject method);

int find_constructor_type(jobject constructor);

int find_field_type(jobject method);

int find_arg_type(jobject param);

std::string find_type_name(jobject param);

std::string find_type_class_name(jobject param);

std::string find_type_package_name(jobject param);

std::vector<std::string> find_generic_array_name(jobject param);

jobject to_cxx_type(jobject param);

#ifdef __cplusplus
}
#endif

#endif /* CXXGENERATOR_H_ */
