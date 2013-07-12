/*
 * CXXUtils.cpp
 *
 *  Created on: Jun 23, 2013
 *  Author: rvergis
 */

#include "CXXUtils.h"
#include <stdio.h>
#include <string.h>

bool in_packages(char package[STR_ATTR_SIZE], char packages[MAX_PACKAGE_COUNT][STR_ATTR_SIZE], int package_count)
{
	for (int idx = 0; idx < package_count; idx++)
	{
		if (strcmp(package, packages[idx]) == 0)
		{
			return true;
		}
	}
	return false;
}

bool in_classes(char clazz[STR_ATTR_SIZE], char clazzes[MAX_CLASS_COUNT][STR_ATTR_SIZE], int class_count)
{
	for (int idx = 0; idx < class_count; idx++)
	{
		if (strcmp(clazz, clazzes[idx]) == 0)
		{
			return true;
		}
	}
	return false;
}