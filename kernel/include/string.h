/**
 *
 * Copyright 2018 David Aylaian
 * https://github.com/davidaylaian/OSMIUM/
 * Licensed under the Apache License 2.0
 *
 */

#ifndef _STRING_H
#define _STRING_H

#include <attribute.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

extern void* memcpy(void* dest, const void* src, size_t len);
extern void* memmove(void* dest, const void* src, size_t len);
extern void* memset(void* dest, int src, size_t len);

extern pure size_t strlen(const char* str);
extern pure int strcmp(const char* str1, const char* str2);

extern char* strcpy(char* dest, const char* src);
extern char* strcat(char* dest, const char* src);
extern char* strrev(char* str);

extern char* itoa(int n, char* buffer, int base);

#endif