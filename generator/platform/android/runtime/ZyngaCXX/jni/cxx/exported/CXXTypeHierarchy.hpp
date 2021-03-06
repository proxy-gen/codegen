/*
 * CXXTypeHierarchy.hpp
 * ZyngaCXX
 *
 * Created on: Jan 30, 2013
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

#ifndef _CXXTYPEHIERARCHY_H
#define _CXXTYPEHIERARCHY_H

#include <string>
#include <vector>

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

typedef struct CXXTypeHierarchy {

	std::string type_name;
	std::vector<CXXTypeHierarchy> child_types;

} CXXTypeHierarchy;


#ifdef __cplusplus
}
#endif //__cplusplus

#endif // _CXXTYPEHIERARCHY_H
