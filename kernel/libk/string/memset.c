/**
 *
 * Copyright 2018 David Aylaian
 * https://github.com/davidaylaian/OSMIUM/
 * Licensed under the Apache License 2.0
 *
 */

#include <string.h>

void* memset(void* dest, int src, size_t len)
{
	uint_fast8_t* dp = dest;

	while (len--)
	{
		*dp++ = src;
	}

	return dest;
}
