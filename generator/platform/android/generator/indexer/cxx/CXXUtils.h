/*
 * CXXUtils.h
 *
 * Created on: Jun 23, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
 */

#ifndef CXXUTILS_H_
#define CXXUTILS_H_

#ifdef __cplusplus
extern "C"
{
#endif //__cplusplus

#define MAX_PACKAGE_COUNT 256
#define MAX_CLASS_COUNT 1024
#define STR_ATTR_SIZE 80

bool in_packages(char package[STR_ATTR_SIZE], char packages[MAX_PACKAGE_COUNT][STR_ATTR_SIZE], int package_count);

bool in_classes(char clazz[STR_ATTR_SIZE], char clazzes[MAX_CLASS_COUNT][STR_ATTR_SIZE], int class_count);

#ifdef __cplusplus
}
#endif

#endif /* CXXUTILS_H_ */
