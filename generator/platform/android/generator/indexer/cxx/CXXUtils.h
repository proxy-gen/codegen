/*
 * CXXUtils.h
 *
 * Created on: Jun 23, 2013
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
