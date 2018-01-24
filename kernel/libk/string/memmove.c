/**
 *
 * Copyright 2018 David Aylaian
 * https://github.com/davidaylaian/OSMIUM/
 * Licensed under the Apache License 2.0
 *
 * TODO: This definitely isn't the fastest way to implement memmove
 *
 */

#include <string.h>

void* memmove(void* dest, const void* src, size_t len)
{
	uint_fast8_t tmp[len];
	memcpy(tmp, src, len);
	memcpy(dest, tmp, len);
	return dest;
}
