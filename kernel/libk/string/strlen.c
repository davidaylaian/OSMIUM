/**
 *
 * Copyright 2018 David Aylaian
 * https://github.com/davidaylaian/OSMIUM/
 * Licensed under the Apache License 2.0
 *
 */

#include <string.h>

pure size_t strlen(const char* str)
{
	size_t length = 0;
	for (; str[length] != '\0'; length++);
	return length;
}
