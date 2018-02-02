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

char* strcpy(char* dest, const char* src)
{
	uint_fast8_t* dp = dest;
	while ((*dp++ = *src++));
	return dest;
}

char* strcat(char* dest, const char* src)
{
	strcpy(dest + strlen(dest), src);
	return dest;
}

char* strrev(char* str)
{
	size_t start = 0;
	size_t end = strlen(str) - 1;
	char swap;

	while (start < end)
	{
		swap = str[start];
		str[start] = str[end];
		str[end] = swap;

		start++;
		end--;
	}

	return str;
}

void* memset(void* dest, int src, size_t len)
{
	uint_fast8_t* dp = dest;

	while (len--)
	{
		*dp++ = src;
	}

	return dest;
}

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

// TODO: This definitely isn't the fastest way to implement memmove
void* memmove(void* dest, const void* src, size_t len)
{
	uint_fast8_t tmp[len];
	memcpy(tmp, src, len);
	memcpy(dest, tmp, len);
	return dest;
}

// TODO: Switch to using an itoa based off of this one: http://www.strudel.org.uk/itoa/
char* itoa(int n, char* str, int base)
{
	if (!n)
	{
		return (char*) "0";
	}

	int i = 0;
	bool negative = false;

	// handle negative numbers
	if (n < 0 && base == 10)
	{
		negative = true;
		n = -n;
	}

	// string to int conversion
	while (n)
	{
		int32_t rem = n % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		n = n / base;
	}

	if (negative)
	{
		str[i] = '-';
	}

	str = strrev(str);
	return str;
}
