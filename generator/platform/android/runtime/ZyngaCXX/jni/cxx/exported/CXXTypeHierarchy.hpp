/*
 * CXXTypeHierarchy.hpp
 * ZyngaCXX
 *
 * Created on: Jan 30, 2013
 * Author: rvergis
 *
 * Copyright (c) 2013 Zynga. All rights reserved.
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
