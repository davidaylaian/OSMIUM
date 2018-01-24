/**
 *
 * Copyright 2018 David Aylaian
 * https://github.com/davidaylaian/OSMIUM/
 * Licensed under the Apache License 2.0
 *
 */

#include <string.h>

void* memcpy(void* dest, const void* src, size_t len)
{
	uint_fast8_t* dp = dest;
	const uint_fast8_t* sp = src;

	while (len--)
	{
		*dp++ = *sp++;
	}

	return dest;
}
