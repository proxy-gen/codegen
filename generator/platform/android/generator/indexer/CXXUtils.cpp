/*
 * CXXUtils.cpp
 *
 *  Created on: Jun 23, 2013
 *  Author: rvergis
 */

#include "CXXUtils.h"
#include <stdio.h>
#include <string.h>

bool in_packages(char package[64], char packages[64][64], int package_count)
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

bool in_classes(char clazz[64], char clazzes[1024][64], int class_count)
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