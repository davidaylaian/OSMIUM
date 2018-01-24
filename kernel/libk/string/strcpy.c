/**
 *
 * Copyright 2018 David Aylaian
 * https://github.com/davidaylaian/OSMIUM/
 * Licensed under the Apache License 2.0
 *
 */

#include <string.h>

char* strcpy(char* dest, const char* src)
{
	char* dp = dest;
	while ((*dp++ = *src++));
	return dest;
}
