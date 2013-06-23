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

#ifdef __cplusplus
extern "C"
{
#endif //__cplusplus


#include <jni.h>
#include <string.h>

#define OK	(0)
#define	ERR	(-1)
#define CURSOR_ATTR_STR_SIZE 64

struct CXXCursor;

typedef int * (*CursorVisitCallback)(CXXCursor child, CXXCursor parent, void * host_object);

typedef int * (*VisitEnumValuesCallback)(char * enum_value, void * host_object);

typedef int * (*CursorVisitAttrsCallback)(int int_attr_value, char * str_attr_value, void * host_object);

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
	char _str_attr_0[CURSOR_ATTR_STR_SIZE];
	char _str_attr_1[CURSOR_ATTR_STR_SIZE];
	char _str_attr_2[CURSOR_ATTR_STR_SIZE];
	char _str_attr_3[CURSOR_ATTR_STR_SIZE];
};

struct CXXType
{
	int _kind_id;
};


CXXIndex * createIndex(char * optionString);

int destroyIndex();

int indexStatus();

char * indexStatusMessage();

CXXTranslationUnit * parseTranslationUnit(CXXIndex * index, const char *resName);

CXXCursor getTranslationUnitCursor(CXXTranslationUnit *tu);

void disposeTranslationUnit(CXXTranslationUnit * tu);

CXXTranslationUnit * getCursorTranslationUnit(CXXCursor cursor);

char * getCursorDescription(CXXCursor cursor);

char * getCursorDisplayName(CXXCursor cursor);

char * getCursorParentName(CXXCursor cursor);

CXXType getCursorType(CXXCursor cursor);

int visitCursorChildren(CXXCursor parentCursor, CursorVisitCallback callback, void * host_object);

int visitEnumValues(CXXCursor cursor, CXXType type, VisitEnumValuesCallback callback, void * host_object);

void visitCursorAttrs(CXXCursor cursor, CursorVisitAttrsCallback callback, void * host_object);

#ifdef __cplusplus
}
#endif

#endif /* CXXGENERATOR_H_ */
