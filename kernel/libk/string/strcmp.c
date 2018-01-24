/**
 *
 * Copyright 2018 David Aylaian
 * https://github.com/davidaylaian/OSMIUM/
 * Licensed under the Apache License 2.0
 *
 */

#include <string.h>

pure int strcmp(const char* str1, const char* str2)
{
	while (*str1 == *str2++)
	{
		if (!*str1++)
		{
			return 0;
		}
	}

	return *(char*) str1 - *(char*) (str2 - 1);
}
