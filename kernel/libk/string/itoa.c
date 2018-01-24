/**
 *
 * Copyright 2018 David Aylaian
 * https://github.com/davidaylaian/OSMIUM/
 * Licensed under the Apache License 2.0
 *
 * Based off of code that can be found at
 * http://www.geeksforgeeks.org/implement-itoa/
 *
 * TODO: Switch to using an itoa based off of this one: http://www.strudel.org.uk/itoa/
 *
 */

#include <string.h>

// converts an interger to a string
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
