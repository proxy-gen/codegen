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

bool in_packages(char package[64], char packages[64][64], int package_count);

bool in_classes(char clazz[64], char clazzes[1024][64], int class_count);

#ifdef __cplusplus
}
#endif

#endif /* CXXUTILS_H_ */
