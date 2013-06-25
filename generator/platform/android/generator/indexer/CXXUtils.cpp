/*
 * CXXUtils.cpp
 *
 *  Created on: Jun 23, 2013
 *  Author: rvergis
 */

#include "CXXUtils.h"

void replace_all(char *chars, int length, char old_value, char new_value)
{
	for (int i = 0; i < length; i++)
	{
		if (chars[i] == '\0')
		{
			break;
		}
		if (chars[i] == old_value)
		{
			chars[i] = new_value;
		}
	}
}
